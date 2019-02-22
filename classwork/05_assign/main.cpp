#include "rectangle.h"
#include<iostream>
#include<vector>

using std::vector;
using std::cout;
using std::cin;
/*
Create a vector of rectangles
Add 3 Rectangle classes to the vector:
Width	Height		Area
  4		 5			  20
 10		10			 100
100		10			1000

Iterate the vector and display the Area for each Rectangle on one line and the total area for the 
3 rectangles.
*/
int main() 
{
	int total_area =0;

	vector<Rectangle> rects;
	Rectangle rect1(4, 5);
	Rectangle rect2(10, 10);
	Rectangle rect3(100, 10);

	rects.push_back(rect1);
	rects.push_back(rect2);
	rects.push_back(rect3);

	for (auto rect : rects)
	{
		int area1 = rect.return_area();
		cout << area1 << "\n";
		total_area += rect.return_area();
	}

	cout << total_area << "\n";

	
	return 0;
}