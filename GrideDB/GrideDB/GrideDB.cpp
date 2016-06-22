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
void GrideDB::add(str key,  str val)
{
		dbStr.insert(key, val);
}

GrideDB::~GrideDB(void)
{
}