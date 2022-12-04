#pragma once
#include "Figure.h"
class Rectangle : public Figure
{
public:
	struct PointCoords32 {
		__int32 x;
		__int32 y;
	};
	PointCoords32 point1, point2, point3, point4;
	void setPoint(int, int, int, int, int, int, int ,int) override;
	Rectangle();
};

