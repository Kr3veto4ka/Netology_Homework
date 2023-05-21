#include <iostream>
#include "Figures.h"

using namespace Figures;

void print_info(Figure* fig) {
	fig->print_info();
};

int main() {
	setlocale(LC_ALL, "RU");

	Triangles::Triangle triangle(10, 20, 30, 30, 50, 70);
	Figure* fig_ptr = &triangle;
	print_info(fig_ptr);

	Triangles::Rect_triangle rect_triangle(10, 20, 30, 40, 50);
	fig_ptr = &rect_triangle;
	print_info(fig_ptr);

	Triangles::Isos_triangle isos_triangle(30, 40, 20, 80);
	fig_ptr = &isos_triangle;
	print_info(fig_ptr);

	Triangles::Equil_triangle equil_triangle(60);
	fig_ptr = &equil_triangle;
	print_info(fig_ptr);


	Quads::Quad quad(10, 20, 30, 40, 90, 90, 90, 90);
	fig_ptr = &quad;
	print_info(fig_ptr);

	Quads::Rectangle rectangle(120, 422);
	fig_ptr = &rectangle;
	print_info(fig_ptr);

	Quads::Square square(80);
	fig_ptr = &square;
	print_info(fig_ptr);

	Quads::Parallelogramm parallelogramm(24, 96, 34, 60);
	fig_ptr = &parallelogramm;
	print_info(fig_ptr);

	Quads::Rhombus rhombus(864, 120, 60);
	fig_ptr = &rhombus;
	print_info(fig_ptr);
}