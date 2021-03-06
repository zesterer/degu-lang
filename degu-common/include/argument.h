#ifndef DEGU_DEGU_COMMON_ARGUMENT_H
#define DEGU_DEGU_COMMON_ARGUMENT_H

// Standard
#include "vector"
#include "map"
#include "string"
#include "algorithm"

// Local
#include "types.h"

namespace Degu
{
	namespace Common
	{
		struct ArgumentMap
		{
			std::vector<std::string> arguments;
			std::vector<std::string> tags;
			std::map<std::string, std::string> attributes;
		};

		class Argument
		{
		public:
			static ArgumentMap generate_map(std::vector<std::string> arguments, std::vector<std::string> valid_tags, std::vector<std::string> valid_attributes);
		};
	}
}

#endif
