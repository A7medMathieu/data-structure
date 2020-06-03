#pragma once
#include "linkedList.h"
#include<string>
#include<iostream>
class BookStore
{
	string name;
	linkedList books;
public:
	BookStore();
	BookStore(string name);
	void system();
};

