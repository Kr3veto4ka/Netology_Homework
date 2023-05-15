#pragma once

namespace Figures {
	class Figure {
	public:
		Figure() = default;
		virtual void fig_name(Figure* ptr) {};
		virtual void print_info(Figure* ptr) {};
	};



	namespace Triangles {
		class Triangle : public Figure {
		public:
			Triangle(int a, int b, int c, int A, int B, int C)
				: a(a), b(b), c(c), A(A), B(B), C(C) {};

			void fig_name(Figure* ptr) override {
				std::cout << "�����������:\n";
			}

			void print_info(Figure* ptr) override {
				fig_name(ptr);
				std::cout << "�������: a=" << a << " b=" << b << " c=" << c << "\n";
				std::cout << "����: A=" << A << " B=" << B << " C=" << C << "\n\n";
			}

		protected:
			int a, b, c;
			int A, B, C;
		};

		class Rect_triangle : public Triangle {
		public:
			void fig_name(Figure* ptr) override {
				std::cout << "������������� �����������:\n";
			}

			Rect_triangle(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, 90) {};
		};

		class Isos_triangle : public Triangle {
		public:
			void fig_name(Figure* ptr) override {
				std::cout << "�������������� �����������:\n";
			}

			Isos_triangle(int a, int c, int A, int C) : Triangle(a, a, c, A, A, C) {};
		};

		class Equil_triangle : public Triangle {
		public:
			void fig_name(Figure* ptr) override {
				std::cout << "�������������� �����������:\n";
			}

			Equil_triangle(int a) : Triangle(a, a, a, 60, 60, 60) {};
		};

	}



	namespace Quads {
		class Quad : public Figure {
		public:
			void fig_name(Figure* ptr) override {
				std::cout << "���������������:\n";
			}

			Quad(int a, int b, int c, int d, int A, int B, int C, int D)
				: a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D) {};

			void print_info(Figure* ptr) override {
				fig_name(ptr);
				std::cout << "�������: a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
				std::cout << "����: A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n\n";
			}

		protected:
			int a, b, c, d;
			int A, B, C, D;
		};

		class Rectangle : public Quad {
		public:
			void fig_name(Figure* ptr) override {
				std::cout << "�������������:\n";
			}

			Rectangle(int ac, int bd) : Quad(ac, bd, ac, bd, 90, 90, 90, 90) {};
		};

		class Square : public Quad {
		public:
			void fig_name(Figure* ptr) override {
				std::cout << "�������:\n";
			}

			Square(int a) : Quad(a, a, a, a, 90, 90, 90, 90) {};
		};

		class Parallelogramm : public Quad {
		public:
			void fig_name(Figure* ptr) override {
				std::cout << "��������������:\n";
			}

			Parallelogramm(int ac, int bd, int AC, int BD) : Quad(ac, bd, ac, bd, AC, BD, AC, BD) {};
		};

		class Rhombus : public Quad {
		public:
			void fig_name(Figure* ptr) override {
				std::cout << "����:\n";
			}

			Rhombus(int a, int AC, int BD) : Quad(a, a, a, a, AC, BD, AC, BD) {};
		};

	}
}