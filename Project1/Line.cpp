#include "Line.h"

void Line::setPoint(int x1, int y1, int x2, int y2)
{
	point1.x = x1;
	point1.y = y1;
	point2.x = x2;
	point2.y = y2;
}
Line::Line() {
	point1.x = 0;
	point1.y = 0;
	point2.x = 0;
	point2.x = 0;
	nameOfFigure = "Line";
}

