#pragma once
#include<iostream>
#include<string>
#include<map>
#include<fstream>
#include<boost/lexical_cast.hpp>

#define EXTENSION ".gb"

typedef std::string str;

using std::cout;
using std::endl;
using std::string;

using boost::lexical_cast;

#define MAX 32

/*
Name : GRIDE DATABASE SYSTEM
Language : C++
Author : Amanuel Bogale<abogale2@gmail.c>
CLASS DECLARATION
*/


class GrideDB
{
public:
	struct DB_INFO
	{
		str DB_NAME;
		long long DB_KEY;
	}DB_INFO_OBJ;

	GrideDB(const str& db_name);
	~GrideDB(void);
	void init(void);

	void add(const str & key, const str &val);
private:
	str DB_NAME;
	std::ofstream DB_FILE;
	static int numDb;
	bool initalized;
	std::map<string, string> dbStr;
};


