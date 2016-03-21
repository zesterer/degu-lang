#ifndef DEGU_DEGU_COMMON_INPUT_FILE_NODE_H
#define DEGU_DEGU_COMMON_INPUT_FILE_NODE_H

// Standard
#include "string"

namespace Degu
{
	namespace Common
	{
		enum
		{
			IN_FILE_UNKNOWN,
			IN_FILE_SOURCE,
			IN_FILE_OBJECT,
		};

		struct InputFileNode
		{
			int type;
			std::string filename;

			InputFileNode(int type, std::string filename)
			{
				this->type = type;
				this->filename = filename;
			}

			static InputFileNode construct(std::string filename);
		};
	}
}

#endif
