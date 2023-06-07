#pragma once

namespace Figures {
	class Figure {
	public:
		Figure() = default;
		virtual void fig_name() {
			std::cout << "Фигура:\n";
		};

		virtual void print_info() {
			fig_name();
			if (check_correct())
				std::cout << "Правильная\n";
			else
				std::cout << "Неправильная\n";
			std::cout << "Количество сторон: 0\n";
		};

		virtual bool check_correct() {
			return true;
		}
	};



	namespace Triangles {
		class Triangle : public Figure {
		public:
			Triangle(int a, int b, int c, int A, int B, int C)
				: a(a), b(b), c(c), A(A), B(B), C(C) {};

			void fig_name() override {
				std::cout << "Треугольник:\n";
			}

			void print_info() override {
				fig_name();

				if (check_correct())
					std::cout << "Правильная\n";
				else
					std::cout << "Неправильная\n";
				std::cout << "Количество сторон: 3\n";
				std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << "\n";
				std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << "\n\n";
			}

			bool check_correct() override {
				if (A + B + C == 180)
					return true;
				else return false;
			}

		protected:
			int a, b, c;
			int A, B, C;
		};

		class Rect_triangle : public Triangle {
		public:
			void fig_name() override {
				std::cout << "Прямоугольный треугольник:\n";
			}

			bool check_correct() override {
				if (A + B + C == 180 && C == 90) {
					return true;
				}
				else return false;
			}

			Rect_triangle(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, 90) {};
		};

		class Isos_triangle : public Triangle {
		public:
			void fig_name() override {
				std::cout << "Равнобедренный треугольник:\n";
			}

			bool check_correct() override {
				if (a == c && A == C && A + B + C == 180) {
					return true;
				}
				else return false;
			}

			Isos_triangle(int a, int c, int A, int C) : Triangle(a, a, c, A, A, C) {};
		};

		class Equil_triangle : public Triangle {
		public:
			void fig_name() override {
				std::cout << "Равносторонний треугольник:\n";
			}

			bool check_correct() override {
				if (a == b && b == c && A == 60 && B == 60 && C == 60 && A + B + C == 180) {
					return true;
				}
				else return false;
			}

			Equil_triangle(int a) : Triangle(a, a, a, 60, 60, 60) {};
		};

	}



	namespace Quads {
		class Quad : public Figure {
		public:
			void fig_name() override {
				std::cout << "Четырехугольник:\n";
			}

			bool check_correct() override {
				if (A + B + C + D == 360) {
					return true;
				}
				else return false;
			}

			Quad(int a, int b, int c, int d, int A, int B, int C, int D)
				: a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D) {};

			void print_info() override {
				fig_name();

				if (check_correct())
					std::cout << "Правильная\n";
				else
					std::cout << "Неправильная\n";

				std::cout << "Количество сторон: 4\n";
				std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
				std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n\n";
			}

		protected:
			int a, b, c, d;
			int A, B, C, D;
		};

		class Rectangle : public Quad {
		public:
			void fig_name() override {
				std::cout << "Прямоугольник:\n";
			}

			bool check_correct() override {
				if (a == c && b == d && A == 90 && B == 90 && C == 90 && D == 90 && A + B + C + D == 360) {
					return true;
				}
				else return false;
			}

			Rectangle(int ac, int bd) : Quad(ac, bd, ac, bd, 90, 90, 90, 90) {};
		};

		class Square : public Quad {
		public:
			void fig_name() override {
				std::cout << "Квадрат:\n";
			}

			bool check_correct() override {
				if (a == b && b == c && c == d && A == 90 && B == 90 && C == 90 && D == 90 && A + B + C + D == 360) {
					return true;
				}
				else return false;
			}

			Square(int a) : Quad(a, a, a, a, 90, 90, 90, 90) {};
		};

		class Parallelogramm : public Quad {
		public:
			void fig_name() override {
				std::cout << "Параллелограмм:\n";
			}

			bool check_correct() override {
				if (a == c && b == d && A == 90 && B == 90 && C == 90 && D == 90 && A + B + C + D == 360) {
					return true;
				}
				else return false;
			}

			Parallelogramm(int ac, int bd, int AC, int BD) : Quad(ac, bd, ac, bd, AC, BD, AC, BD) {};
		};

		class Rhombus : public Quad {
		public:
			void fig_name() override {
				std::cout << "Ромб:\n";
			}

			bool check_correct() override {
				if (a == b && b == c && c == d && A == C && B == D && A + B + C + D == 360) {
					return true;
				}
				else return false;
			}

			Rhombus(int a, int AC, int BD) : Quad(a, a, a, a, AC, BD, AC, BD) {};
		};

	}
}