// TestJson2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace web;



int main()
{

	json::value obj;
	obj[L"key1"] = json::value::boolean(false);
	obj[L"key2"] = json::value::number(44);
	obj[L"key3"] = json::value::number(43.6);
	obj[L"key4"] = json::value::string(U("str"));

	obj.serialize();
  
	json::value root;

	auto myarray = json::value::array();

	for (int i = 0; i < 10; i++)

	{
		json::value vehicle1;
		vehicle1[L"id"] = json::value::string(L"35092_35092_353");
		vehicle1[L"x"] = json::value::number(6.988270);
		vehicle1[L"y"] = json::value::number(50.872139);

		root[L"MyJsonarray"][i] = vehicle1;
	}


	

	root.serialize();


	
	return 0;
}

