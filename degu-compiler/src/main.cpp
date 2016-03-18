// Local
#include "instance.h"

int main(int argc, char* argv[])
{
	Degu::Degu::Instance degu_instance(argc, argv);

	return degu_instance.get_response();
}
