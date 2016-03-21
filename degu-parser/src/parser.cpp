// Standard
#include "stdio.h"

// Local
#include "parser.h"

namespace Degu
{
	namespace Parser
	{
		Parser::Parser()
		{
			printf("Created a parser instance\n");
		}

		void Parser::give_input(std::string input)
		{
			this->input = input;
		}

		Common::SourceErr Parser::do_parse()
		{
			if (!this->has_input)
				return Common::SourceErr::construct(Common::SRC_ERR_NO_INPUT, nullptr);

			return Common::SourceErr::construct(Common::SRC_ERR_UNKNOWN, nullptr);
		}
	}
}
