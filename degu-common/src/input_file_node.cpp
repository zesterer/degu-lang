// Local
#include "input_file_node.h"
#include "parameters.h"

namespace Degu
{
	namespace Common
	{
		InputFileNode InputFileNode::construct(std::string filename)
		{
			std::string extension;

			if (filename.find(".") != std::string::npos)
				extension = filename.substr(filename.rfind(".") + 1, std::string::npos);
			else
				extension = "unknown";
			
			if (extension == FileExtension::source)
				return InputFileNode(IN_FILE_SOURCE, filename);
			else if (extension == FileExtension::object)
				return InputFileNode(IN_FILE_OBJECT, filename);
			else
				return InputFileNode(IN_FILE_UNKNOWN, filename);
		}
	}
}
