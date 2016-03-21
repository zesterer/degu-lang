#ifndef DEGU_DEGU_COMMON_FILE_READER_H
#define DEGU_DEGU_COMMON_FILE_READER_H

// Standard
#include "string"

// Local
#include "text_file.h"

namespace Degu
{
	namespace Common
	{
		class FileReader
		{
		public:
			static TextFile read_plaintext(std::string filename);
		};
	}
}

#endif
