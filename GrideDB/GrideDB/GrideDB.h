#pragma once
#include<iostream>
#include<string>
#include<map>

typedef std::string str;

using std::cout;
using std::endl;
using std::string;

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
	};

	GrideDB(const str& db_name);
	~GrideDB(void);
	void init(void);
	template<class C>
	void add(const C & key, const C &val);
private:
	DB_INFO DB_INFO_OBJ;
	str DB_NAME;
	static int numDb;
	bool initalized;
	std::map<string, string> dbStr;
};


