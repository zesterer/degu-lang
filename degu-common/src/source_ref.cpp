// Local
#include "source_ref.h"

namespace Degu
{
	namespace Common
	{
		SourceRef::SourceRef()
		{
			this->line = 0;
			this->column = 0;
			this->length = 0;
		}

		SourceRef::SourceRef(int line, int column, int length)
		{
			this->line = line;
			this->column = column;
			this->length = length;
		}
	}
}
