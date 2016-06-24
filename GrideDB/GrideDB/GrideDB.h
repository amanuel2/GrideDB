#pragma once
#pragma warning(disable : 4996)
#include<iostream>
#include<string>
#include<map>
#include<string>
#include<iostream>
#include<algorithm>
#include <fstream>
#include <stdio.h>
#include <time.h>
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
	struct tm  tstruct;

	GrideDB(const str& db_name);
	~GrideDB(void);
	void init(void);

	void add(const str & key, const str &val);
private:
	str DB_NAME;
	std::fstream DB_FILE;
	static int numDb;
	bool initalized = new bool();
	std::map<string, string> dbStr;
	time_t now = time(0);
};


