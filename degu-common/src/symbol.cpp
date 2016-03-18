// Local
#include "symbol.h"

namespace Degu
{
	namespace Common
	{
		template <typename MetaData>
		Symbol<MetaData>::Symbol(uint32 type, MetaData meta)
		{
			this->type = type;
			this->meta = meta;
		}
	}
}
