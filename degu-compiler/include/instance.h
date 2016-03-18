#ifndef DEGU_DEGU_INSTANCE_H
#define DEGU_DEGU_INSTANCE_H

// Standard
#include "vector"
#include "string"

// degu-common
#include "degu-common/include/argument.h"

namespace Degu
{
	namespace Degu
	{
		class Instance
		{
		private:
			std::vector<std::string> arguments;
			Common::ArgumentMap argument_map;
		public:
			Instance(int argc, char* argv[]);
			int get_response();
		};
	}
}

#endif
