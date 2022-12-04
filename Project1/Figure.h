#pragma once
#include <string>

using namespace std;

class Figure
{
public:
	struct Color {
		int r;
		int g;
		int b;
	};
	Color color;
	string nameOfFigure;
	void change_color(int r, int g, int b)
	{
		color.r = r;
		color.g = g;
		color.b = b;
	}
	string figure_type()
	{
		return nameOfFigure;
	}

	virtual void setPoint(int, int, int, int) = 0;
	//virtual void setPoint(int, int, int, int, int, int) = 0;
	//virtual void setPoint(int, int, int, int, int, int, int, int) = 0;
};