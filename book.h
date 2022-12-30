#pragma once
#include <iostream>
#include <string>
using namespace std;
class book
{
	private: 
		string name;
		string authorname_first;
		string authorname_last;
		string genra;
	public:
		string getname();
		string getafirst();
		string getalast();
		string getgenra();
		book();
		book(string n, string f, string l, string g);




};

