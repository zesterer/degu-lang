// Standard
#include "stdio.h"

// Local
#include "instance.h"

// degu-common
#include "degu-common/include/config.h"

// degu-parser
#include "degu-parser/include/parser.h"

namespace Degu
{
	namespace Degu
	{
		Instance::Instance(int argc, char* argv[])
		{
			for (int i = 0; i < argc; i ++)
				this->arguments.emplace_back(argv[i]);

			printf("Degu %i.%i.%i\n", DEGU_COMMON_VERSION_MAJOR, DEGU_COMMON_VERSION_MINOR, DEGU_COMMON_VERSION_PATCH);
		}

		int Instance::get_response()
		{
			std::vector<std::string> valid_tags = {"o", "asm"};
			std::vector<std::string> valid_attributes = {"include", "link"};
			this->argument_map = Common::Argument::generate_map(this->arguments, valid_tags, valid_attributes);
			for (std::string str : this->argument_map.tags)
				printf("Tag '%s' enabled!\n", str.c_str());
			for (auto const item : this->argument_map.attributes)
				printf("Attribute '%s' set to '%s'!\n", item.first.c_str(), item.second.c_str());
			for (std::string str : this->argument_map.arguments)
				printf("Argument '%s' found!\n", str.c_str());

			Parser::Parser my_parser;

			if (this->arguments.size() > 0)
				return 0;
			else
				return 1;
		}
	}
}
