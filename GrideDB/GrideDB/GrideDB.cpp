#include "GrideDB.h"

int GrideDB::numDb = 0;

GrideDB::GrideDB(const str& db_name) :DB_NAME(db_name)
{
	numDb++;
}

void GrideDB::init()
{
	initalized = true;
	DB_INFO_OBJ.DB_NAME = DB_NAME;
	//TODO : DB KEY RANDOM GENERATOR
	DB_INFO_OBJ.DB_KEY = 123;
}

//{Param} Database add
//Adds to end of database structure.
template<class C>
void GrideDB::add(const C & key, const C &val)
{
	//	str keyStr = std::to_string(key);
	//	str valStr = std::to_string(val);
	//	dbStr.insert(keyStr, valStr);
}

GrideDB::~GrideDB(void)
{
}