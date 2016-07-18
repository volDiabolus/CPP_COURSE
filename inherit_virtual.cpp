#include <iostream>
#include <math.h>
// the code has errors.

/* Point at -1;-0.57735
Point at -1;-0.57735
Point at 0;1.1547
Point at -1;-1
Point at -1;1
Point at 1;1
Point at 1;-1 */

class IdealShape
{
	protected:
		double dimension;
    public:
		IdealShape(double _dim): dimension(_dim){};
		virtual void draw (double x_center, double y_center) =0;
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
	//IdealShape I(2);
	//I.draw(0,0);
	Triangle(2).draw(0,0);
	Square S(2);
	S.draw(0,0);
	IdealShape * I2 = new Square(2);
	I2->draw(0,0);
	delete I2;
	return 0;
}

