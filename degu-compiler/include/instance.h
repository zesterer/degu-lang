#ifndef DEGU_DEGU_INSTANCE_H
#define DEGU_DEGU_INSTANCE_H

// Standard
#include "vector"
#include "string"

namespace Degu
{
	namespace Degu
	{
		class Instance
		{
		private:
			std::vector<std::string> arguments;
		public:
			Instance(int argc, char* argv[]);
			int get_response();
		};
	}
}

#endif
