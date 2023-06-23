#include <iostream>
#include "All_figures.h"


void print_info(Figure* fig) {
	fig->print_info();
};

int main() {
	setlocale(LC_ALL, "RU");
	try {
		Triangle triangle(10, 20, 30, 30, 80, 70);
		Figure* fig_ptr = &triangle;
		print_info(fig_ptr);

		Rect_triangle rect_triangle(10, 20, 30, 50, 40, 90);
		fig_ptr = &rect_triangle;
		print_info(fig_ptr);

		Isos_triangle isos_triangle(30, 40, 30, 80, 20, 80);
		fig_ptr = &isos_triangle;
		print_info(fig_ptr);

		Equil_triangle equil_triangle(30, 30, 30, 60, 60, 60);
		fig_ptr = &equil_triangle;
		print_info(fig_ptr);


		Quad quad(10, 20, 30, 40, 80, 90, 90, 100);
		fig_ptr = &quad;
		print_info(fig_ptr);

		Rectangle rectangle(10, 30, 10, 30, 90, 90, 90, 90);
		fig_ptr = &rectangle;
		print_info(fig_ptr);

		Square square(80, 80, 80, 80, 90, 90, 90, 90);
		fig_ptr = &square;
		print_info(fig_ptr);

		Parallelogramm parallelogramm(30, 40, 30, 40, 70, 110, 70, 110);
		fig_ptr = &parallelogramm;
		print_info(fig_ptr);

		Rhombus rhombus(50, 50, 50, 50, 80, 100, 80, 100);
		fig_ptr = &rhombus;
		print_info(fig_ptr);
	}
	catch(const FigExceptions& exception) {
		std::cout << exception.what();
	}
}