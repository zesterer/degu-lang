#ifndef DEGU_DEGU_COMMON_SOURCE_ERR_H
#define DEGU_DEGU_COMMON_SOURCE_ERR_H

// Standard

// Local
#include "types.h"
#include "source_ref.h"

namespace Degu
{
	namespace Common
	{
		enum
		{
			SRC_ERR_UNKNOWN,
			SRC_ERR_UNEXPECTED_SYMBOL,
			SRC_ERR_NO_INPUT,
		};

		struct SourceErr
		{
		public:
			int type;
			SourceRef reference;

			SourceErr(int type, SourceRef reference);
			static SourceErr construct(int type, SourceRef* reference);
		};
	}
}

#endif
