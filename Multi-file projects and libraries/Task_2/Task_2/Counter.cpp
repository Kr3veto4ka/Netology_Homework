#include "Counter.h"
#include <iostream>

Counter::Counter::Counter() {
	counter = 1;
}

Counter::Counter::Counter(int counter) {
	this->counter = counter;
}

void Counter::Counter::add() {
	counter++;
}

void Counter::Counter::subtract() {
	counter--;
}

int Counter::Counter::get_counter() {
	return counter;
}

void Counter::start() {
	std::string answer;
	int startValue = 1;
	std::cout << "Do you want enter start value for counter? yes or no: ";
	std::cin >> answer;

	if (answer == "yes") {
		std::cout << "Enter start value: ";
		std::cin >> startValue;
	}

	Counter counter(startValue);
	commands(counter);
}

void Counter::commands(Counter& counter) {
	char command;

	do {
		std::cout << "Enter a command ('+', '-', '=' or 'x'): ";
		std::cin >> command;
		switch (command) {
		case '+':
			counter.add();
			break;
		case '-':
			counter.subtract();
			break;
		case '=':
			std::cout << counter.get_counter() << std::endl;
			break;
		case 'x':
			std::cout << "Goodbye!\n";
			break;
		default:
			std::cout << "Wrong command!\n";
			break;
		}
	} while (command != 'x');
}