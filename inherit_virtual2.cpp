#include <iostream>
#include <math.h>

class IdealShape
{
	protected:
		double dimension;
    public:
		IdealShape(double _dim): dimension(_dim){};
		virtual void draw (double x_center, double y_center){};
		void setPoint(double x, double y)
		{
			std::cout<<"Point at "<<x<<";"<<y<<"\n";
		}
};

class Square : public IdealShape
{
    public:
		Square(double _dim): IdealShape(_dim){};
		void draw (double x_center, double y_center)
		{
			setPoint(x_center-dimension/2,y_center-dimension/2);
			setPoint(x_center-dimension/2,y_center+dimension/2);
			setPoint(x_center+dimension/2,y_center+dimension/2);
			setPoint(x_center+dimension/2,y_center-dimension/2);
		};
};

class Triangle : public IdealShape
{
	public:
		Triangle(double _dim): IdealShape(_dim){};
		void draw (double x_center, double y_center)
		{
			setPoint(x_center-dimension/2.0,y_center-sqrt(3)/6.0*dimension);
			setPoint(x_center-dimension/2.0,y_center-sqrt(3)/6.0*dimension);
			setPoint(0,y_center+2.0*sqrt(3)/6.0*dimension);
		};
};

int main()
{
	IdealShape I(2);
	I.draw(0,0);
	Triangle(2).draw(0,0);
	Square* S=(&Square(2)); // rvalue
	S->draw(0,0);
	return 0;
}
