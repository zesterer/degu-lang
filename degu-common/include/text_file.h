#ifndef DEGU_DEGU_COMMON_TEXT_FILE_H
#define DEGU_DEGU_COMMON_TEXT_FILE_H

// Standard
#include "string"

namespace Degu
{
	namespace Common
	{
		struct TextFile
		{
			std::string name;
			std::string data;

			TextFile(std::string name, std::string data);
		};
	}
}

#endif
