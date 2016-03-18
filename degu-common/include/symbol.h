#ifndef DEGU_DEGU_COMMON_SYMBOL_H
#define DEGU_DEGU_COMMON_SYMBOL_H

// Local
#include "types.h"

namespace Degu
{
	namespace Common
	{
		template <typename MetaData>
		struct Symbol
		{
		public:
			uint32 type;
			MetaData meta;

			Symbol(uint32 type, MetaData meta);
		};
	}
}

#endif
