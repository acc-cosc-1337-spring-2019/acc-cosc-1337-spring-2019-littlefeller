//main
#include "shape.h"
#include<vector>
#include "line.h"
#include "circle.h"
#include <iostream>
#include <memory>

int main() 
{

	//Shape s_abs; can't  create instance; pure virtual function makes it an abstract class

	Shape* line = new Line(); // creates dynamic memory (heap)

	line->draw();//without virtual function > output draw shape bcuz we dont use virtual function 
	delete line;

	//vector of Shape pointers 

	std::vector < Shape *> shapes{ new Line(), new Circle() };

	for (auto & shape : shapes)
	{
		shape->draw();
	}
	std::cout << std::endl;

	for (auto * shape : shapes)
	{
		shape->draw();
	}

	std::cout<< "\n";

	// Shape instance using smart pointer

	std::unique_ptr < Shape > l = std::make_unique< Line >();
	l->draw();

	// vector of Shape instances using a smart pointer

	std::vector <std::unique_ptr < Shape >> shaps;
	shaps.push_back(std::make_unique< Line >());
	shaps.push_back(std::make_unique< Circle >());

	for (auto & shape : shaps)
	{
		shape->draw();
	}


	 

	return 0;
}