#include "Smart_arr.h"

Smart_arr::Smart_arr(int elements) {
	this->elements = elements;
	arr = new int[this->elements];
}

Smart_arr::~Smart_arr() {
	delete[] arr;
}

void Smart_arr::add_element(int num) {
	if (arrID < elements) {
		arr[arrID] = num;
		++arrID;
	}
	else {
		throw std::runtime_error("out of memory!");
	}
}

int Smart_arr::get_element(int id) {
	if (id >= 0 && id < arrID) {
		return arr[id];
	}
	else {
		throw std::runtime_error("wrong index!");
	}
}