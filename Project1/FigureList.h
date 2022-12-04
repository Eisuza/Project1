#pragma once
#include "Figure.h"
#include <vector>
using namespace std;

class FigureList
{
private:
	vector<string> ListOfFigures;
public:
	void AddFigure(Figure* figure);
	string getFigureType(int);
};

