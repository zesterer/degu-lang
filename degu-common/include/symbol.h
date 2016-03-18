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
