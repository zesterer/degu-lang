// Local
#include "source_err.h"

namespace Degu
{
	namespace Common
	{
		SourceErr::SourceErr(int type, SourceRef reference)
		{
			this->type = type;
			this->reference = reference;
		}

		SourceErr SourceErr::construct(int type, SourceRef* reference)
		{
			switch(type)
			{
			case SRC_ERR_NO_INPUT:
				return SourceErr(type, *reference);
				break;

			default:
				return SourceErr(SRC_ERR_UNKNOWN, SourceRef(0, 0, 0));
				break;
			}
		}
	}
}
