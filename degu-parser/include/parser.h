#ifndef DEGU_DEGU_PARSER_SYMBOL_H
#define DEGU_DEGU_PARSER_SYMBOL_H

// Standard
#include "string"

// degu-common
#include "degu-common/include/types.h"
#include "degu-common/include/source_err.h"

namespace Degu
{
	namespace Parser
	{
		class Parser
		{
		public:
			bool has_input;
			std::string input;

			Parser();
			void give_input(std::string);
			Common::SourceErr do_parse();
		};
	}
}

#endif
