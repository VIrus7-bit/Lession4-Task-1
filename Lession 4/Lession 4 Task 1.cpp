#include <iostream>
using namespace std;


class figure
{
private: 
	int sides_count{};
	string name;

public: 
	figure() {}
	figure(int setsides_count) : sides_count{ setsides_count } {}

	void get_name() { cout << "Фигура: " << sides_count << endl; }
};

class Triangle : public figure 
{
private: 
	int Trian = 3;

public:	 
	Triangle() {}
	Triangle(int setsides_count, int setsides_count2) : figure { setsides_count },Trian{ setsides_count2 } {}

	void get_name() { cout << "Треугольник: " << Trian << endl; }
};

class Quadrangle : public figure 
{
private:
	int Quadra = 4;

public: 
	Quadrangle() {}
	Quadrangle(int setsides_count, int setsides_count2) : figure{ setsides_count }, Quadra { setsides_count2 } {}

	void get_name() { cout << "Четырёхугольник: " << Quadra << endl; }
};

int main()
{
	setlocale(LC_ALL, "rus");
	system("chcp 1251");

	figure figure;
	figure.get_name();

	Triangle Triangle;
	Triangle.get_name();

	Quadrangle Quadrangle;
	Quadrangle.get_name();

	return 0;
}