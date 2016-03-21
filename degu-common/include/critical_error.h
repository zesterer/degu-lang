#ifndef DEGU_DEGU_COMMON_CRITICAL_ERROR_H
#define DEGU_DEGU_COMMON_CRITICAL_ERROR_H

// Standard
#include "string"
#include "vector"

namespace Degu
{
	namespace Common
	{
		enum
		{
			CRIT_ERR_CANNOT_OPEN_FILE,
		};

		struct CriticalError
		{
			int type;
			std::vector<std::string> data;

			CriticalError(int type, std::vector<std::string> data)
			{
				this->type = type;
				this->data = data;
			}
		};
	}
}

#endif
