#pragma once
#include <iostream>

class Smart_arr
{
private:
	int* arr;
	int elements;
	int arrID = 0; //count order number in arr
public:
	Smart_arr(int elements);

	void add_element(int num);
	int get_element(int id);

	~Smart_arr();
};

