#include "FigureList.h"

void FigureList::AddFigure(Figure* figure)
{
	ListOfFigures.push_back(figure->figure_type());
}
string FigureList::getFigureType(int i)
{
	return ListOfFigures[i];
}