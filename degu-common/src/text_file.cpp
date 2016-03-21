// Local
#include "text_file.h"

namespace Degu
{
	namespace Common
	{
		TextFile::TextFile(std::string filename, std::string data)
		{
			this->filename = filename;
			this->data = data;
		}
	}
}
