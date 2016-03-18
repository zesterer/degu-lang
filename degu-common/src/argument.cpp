// Local
#include "argument.h"
#include "stdio.h"
namespace Degu
{
	namespace Common
	{
		void pp()
		{
			printf("Hello, world!\n");
		}

		ArgumentMap generate_map(std::vector<std::string> arguments, std::vector<std::string> singular_tags)
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

					if (std::find(singular_tags.begin(), singular_tags.end(), item) != singular_tags.end())
						argument_map.tags.push_back(item);
					else
					{
						attribute = item;
					}
				}
				else
				{
					if (find_attribute && attribute.size() > 0)
					{
						argument_map.attributes[attribute] = arguments[i];
						attribute = "";
					}
					else
						argument_map.arguments.push_back(arguments[i]);
				}
			}

			return argument_map;
		}
	}
}
