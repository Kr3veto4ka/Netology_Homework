#pragma once

namespace Counter {
	class Counter {
	public:
		Counter();

		Counter(int counter);

		void add();

		void subtract();

		int get_counter();

	private:
		int counter;

	};

	void start();

	void commands(Counter& counter);
}