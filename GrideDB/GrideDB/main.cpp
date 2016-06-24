#include "GrideDB.h"
#include<string>


int main(void)
{
	GrideDB dbInit("UNIQUECODERS");
	dbInit.init();

	dbInit.add("AnotherOneKey", "AnotherOneVal");

	return 0;
}
