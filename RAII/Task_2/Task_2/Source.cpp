#include "Smart_arr.h"

int main() {
	try {
		Smart_arr arr(5);
		arr.add_element(1);
		arr.add_element(4);
		arr.add_element(155);

		Smart_arr new_array(2);
		new_array.add_element(44);
		new_array.add_element(34);

		arr = new_array;
		Smart_arr copy_arr(arr);
	}
	catch (const std::exception& ex) {
		std::cout << ex.what() << std::endl;
	}
}