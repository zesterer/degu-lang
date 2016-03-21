#ifndef DEGU_DEGU_COMMON_SOURCE_REF_H
#define DEGU_DEGU_COMMON_SOURCE_REF_H

// Standard

// Local
#include "types.h"

namespace Degu
{
	namespace Common
	{
		struct SourceRef
		{
		public:
			int line, column, length;

			SourceRef();
			SourceRef(int line, int column, int length);
		};
	}
}

#endif
