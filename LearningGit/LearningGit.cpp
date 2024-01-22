#include<iostream>

constexpr auto pi = 3.14;

class Shape
{
public:
	virtual double square() = 0;
	virtual double volume() = 0;
	
	void setSide1(double side1) { this->side1 = side1; }
	void setSide2(double side2) { this->side2 = side2; }
	void setRadius(double radius) { this->radius = radius; }
	void setHeight(double height) { this->height = height; }

	double getSide1() const { return side1; }
	double getSide2() const { return side2; }
	double getRadius() const { return radius; }
	double getHeight() const { return height; }

private:
	double side1 = 0.0;
	double side2 = 0.0;
	double radius = 0.0;
	double height = 0.0;
};

class Sphere : public Shape
{
public:
	Sphere() {}
	Sphere(double radius) { setRadius(radius); }

	double square() override
	{
		std::cout << "Square of the sphere is " << 4 * pi * pow(getRadius(), 2) << "cm^2.\n";
		return 0.0;
	}
	double volume() override
	{
		std::cout << "Volume of the sphere is " << 4.0 / 3.0 * pi * pow(getRadius(), 3) << "cm^3.\n";
		return 0.0;
	}
};

class Parallelogram : public Shape
{
public:
	Parallelogram() {}
	Parallelogram(double side1, double side2, double height)
	{
		setSide1(side1);
		setSide2(side2);
		setHeight(height);
	}

	double square() override
	{
		std::cout << "Square of the parallelogram is " << getSide1() * getSide2() * getHeight() << "cm^2.\n";
		return 0.0;
	}
	double volume() override
	{
		std::cout << "Volume of the parallelogram is Good " << "cm^3.\n";
		return 0.0;
	}
};

int main()
{
	Sphere sphere;
	sphere.setRadius(5);
	sphere.setRadius(3.0);
	sphere.square();
	sphere.volume();

}