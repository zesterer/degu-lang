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
			if (this->arguments.size() > 1)
				return 0;
			else
				return 1;
		}
	}
}
