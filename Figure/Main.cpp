#include <iostream>

class Figure
{
public:
	virtual double Area() = 0;
	virtual double Perimeter() = 0;
	virtual void Print() = 0;
};

class Point : public Figure
{
public:
	int x;
	int y;

	double Area() override
	{
		std::cout << "The point does not have area\n";
	}

	double Perimeter() override
	{
		std::cout << "The point does not have perimeter\n";
	}

	void Print() override
	{
		std::cout << "Point\n";
	}
};

class StraightLine : public Figure
{
public:
	Point one;
	Point two;

	double Area() override
	{
		std::cout << "The straight line does not have area\n";
	}

	double Perimeter() override
	{
		std::cout << "The straight line does not have perimeter\n";
	}

	void Print() override
	{
		std::cout << "Straight line\n";
	}
};

class Circle : public Figure
{
public:
	double radius1;
	double pi = 3.14;

	double Area() override
	{
		return pi * std::pow(radius1, 2);
	}

	double Perimeter() override
	{
		return pi * 2 * radius1;
	}

	void Print() override
	{
		std::cout << "Circle\n";
	}

};

class Ellipse : public Circle
{
public:
	double radius2;

	double Area() override
	{
		return pi * radius1 + radius2;
	}

	double Perimeter() override
	{
		return 4 * ((pi * radius1 * radius2 + (radius1 - radius2) * (radius1 - radius2)) / (radius1 + radius2));
	}

	void Print() override
	{
		std::cout << "Ellipse\n";
	}
};

class Poligon : public Figure {};

class Triangle : public Poligon
{
public:
	double base;
	double side1;
	double side2;
	double height;

	double Area() override
	{
		return 0.5 * base * height;
	}

	double Perimeter() override
	{
		return base + side1 + side2;
	}

	void Print() override
	{
		std::cout << "Triangle\n";
	}
};

class RegularAcuteTriangle : public Triangle
{
public:

	void Print() override
	{
		std::cout << "Regular acute triangle\n";
	}
};

class IsoscelesAcuteAngledTriangle : public Triangle
{
public:
	void Print() override
	{
		std::cout << "Isosceles acute - angled triangle\n";
	}
};

class EquilateralAcuteTriangle : public Triangle
{
public:

	void Print() override
	{
		std::cout << "Equilateral acute triangle\n";
	}
};

class RegularObtuseTriangle : public Triangle
{
public:

	void Print() override
	{
		std::cout << "Regular obtuse triangle\n";
	}
};

class IsoscelesObtuseTriangle : public Triangle
{
public:

	void Print() override
	{
		std::cout << "Isosceles obtuse triangle\n";
	}
};

class RegularRighTriangle : public Triangle
{
public:

	void Print() override
	{
		std::cout << "Regular right triangle\n";
	}
};

class IsoscelesRightTriangle : public Triangle
{
public:

	void Print() override
	{
		std::cout << "Isosceles right triangle\n";
	}
};

class Quadrilateral : public Poligon
{
public:
	double side1;
	double side2;
	double side3;
	double side4;
	double heightSide1;

	double Perimeter() override
	{
		return side1 + side2 + side3 + side4;
	}
};

class Parallelogram : public Quadrilateral
{
public:
	
	double Area() override
	{
		return side1 + heightSide1;
	}

	void Print() override
	{
		std::cout << "Parallelogram\n";
	}
};

class Trapezoid : public Quadrilateral
{
	double Area() override
	{
		return ((side1 + side3) / 2) * heightSide1;
	}

	void Print() override
	{
		std::cout << "Trapezoid\n";
	}
};

class Deltoid : public Quadrilateral
{
private:
	double diagonal1;
	double diagonal2;

	double Area() override
	{
		return diagonal1 * diagonal2 * 0.5;
	}

	void Print() override
	{
		std::cout << "Deltoid\n";
	}
};

class Rhombus : public Deltoid
{
public:
	void Print() override
	{
	std::cout << "Rhombus\n";
	}
};

class Rectangle : public Parallelogram
{
public:

	double Area() override
	{
		return side1 * side2;
	}

	void Print() override
	{
		std::cout << "Rectangle\n";
	}
};

class Square : public Rectangle
{
public:

	double Area() override
	{
		return std::pow(side1, 2);
	}

	void Print() override
	{
		std::cout << "Square\n";
	}
};

int main()
{

}