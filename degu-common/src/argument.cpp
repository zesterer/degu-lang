// Standard
#include "stdio.h"
#include "errno.h"

// Local
#include "argument.h"

namespace Degu
{
	namespace Common
	{
		ArgumentMap Argument::generate_map(std::vector<std::string> arguments, std::vector<std::string> valid_tags, std::vector<std::string> valid_attributes)
		{
			ArgumentMap argument_map;

			bool find_attribute = false;
			std::string attribute = "";

			for (uint i = 0; i < arguments.size(); i ++)
			{
				if (arguments[i][0] == '-')
				{
					std::string item;
					if (arguments[i][1] == '-')
						item = arguments[i].substr(2, arguments[i].size() - 2);
					else
						item = arguments[i].substr(1, arguments[i].size() - 1);

					if (std::find(valid_tags.begin(), valid_tags.end(), item) != valid_tags.end())
					{
						argument_map.tags.push_back(item);
					}
					else if (std::find(valid_attributes.begin(), valid_attributes.end(), item) != valid_attributes.end())
					{
						attribute = item;
						find_attribute = true;
					}
					else
					{
						fprintf(stderr, "Error: Unknown tag '%s'\n", item.c_str());
					}
				}
				else
				{
					if (find_attribute)
					{
						argument_map.attributes[attribute] = arguments[i];
						find_attribute = false;
					}
					else if (i > 0) // Ignore the argument used to execute the program
					{
						argument_map.arguments.push_back(arguments[i]);
					}
				}
			}

			return argument_map;
		}
	}
}
