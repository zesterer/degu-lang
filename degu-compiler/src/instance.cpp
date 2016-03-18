// Standard
#include "stdio.h"

// Local
#include "instance.h"

// degu-common
#include "degu-common/include/types.h"

namespace Degu
{
	namespace Degu
	{
		Instance::Instance(int argc, char* argv[])
		{
			for (int i = 0; i < argc; i ++)
				this->arguments.emplace_back(argv[i]);

			printf("Created Degu instance\n");
		}

		int Instance::get_response()
		{
			std::vector<std::string> valid_tags = {"o", "asm", "include"};
			//this->argument_map = Common::Argument::generate_map(this->arguments, valid_tags);
			Common::pp();

			if (this->arguments.size() > 1)
				return 0;
			else
				return 1;
		}
	}
}
