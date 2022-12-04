#include "Triangle.h"

void Triangle::setPoint(int x1, int y1, int x2, int y2, int x3, int y3) {
	point1.x = x1;
	point1.y = y1;
	point2.x = x2;
	point2.y = y2;
	point3.x = x3;
	point3.y = y3;
}

Triangle::Triangle() {
	point1.x = 0;
	point1.y = 0;
	point2.x = 0;
	point2.y = 0;
	point3.x = 0;
	point3.y = 0;
	nameOfFigure = "Triangle";
}