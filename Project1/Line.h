#pragma once
#include "Figure.h"

class Line : public Figure
{
public:
	struct PointCoord {
		int x;
		int y;
	};

	PointCoord point1, point2;
	void setPoint(int, int, int, int) override;
	Line();
};

