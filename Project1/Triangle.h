#pragma once
#include "Line.h"

class Triangle : public Line
{
private:
	PointCoord point3;
	
public:
	void setPoint(int, int, int, int, int, int) override;
	Triangle();
};

