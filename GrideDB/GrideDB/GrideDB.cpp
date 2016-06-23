#include "GrideDB.h"

int GrideDB::numDb = 0;

GrideDB::GrideDB(const str& db_name) :DB_NAME(db_name)
{
	numDb++;
	initalized = false;
}

void GrideDB::init()
{
	if (initalized == true) {
		cout << " ERR : ALREADY INITALIZED DATABASE" << endl;
	}
	else
	{
		initalized = true;
		DB_INFO_OBJ.DB_NAME = DB_NAME;
		//TODO : DB KEY RANDOM GENERATOR
		DB_INFO_OBJ.DB_KEY = 123;
		DB_FILE.open(DB_INFO_OBJ.DB_NAME + lexical_cast<str>(DB_INFO_OBJ.DB_KEY) + "_GRIDEDB" + lexical_cast<str>(EXTENSION));
		DB_FILE << "_______" << DB_INFO_OBJ.DB_NAME << lexical_cast<str>(DB_INFO_OBJ.DB_KEY) << "______" << endl;
	}
}

//{Param} Database add
//Adds to end of database structure.
void GrideDB::add(const str & key, const str &val)
{
	if (initalized == false)
	{
		cout << "DATABASE NOT INITALIZED" << endl;
		exit(1);
	}
	else
	{

	}
};

GrideDB::~GrideDB(void)
{
}