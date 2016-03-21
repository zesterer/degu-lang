// Standard
#include "fstream"
#include "sstream"

// Local
#include "file_reader.h"
#include "critical_error.h"

namespace Degu
{
	namespace Common
	{
		TextFile FileReader::read_plaintext(std::string filename)
		{
			std::ifstream file;
			file.open(filename, std::ios::in);

			if (file.is_open())
			{
				std::stringstream buffer;
				buffer << file.rdbuf();

				return TextFile(filename, buffer.str());
			}
			else
			{
				throw CriticalError(CRIT_ERR_CANNOT_OPEN_FILE, {filename});
			}
		}
	}
}
