
#include<iostream>
using namespace std;

class shape {
public:
	void propertiesOfshape() {
		cout << "A shape is the form of an object or its external boundary, outline, or external surface, as opposed to other properties such as color, texture or material" << "\n";
	}
};
class TwoDshape : public shape {
public:
	void propertiesof2d() {
		cout << "Two D shape just have Length and Breath" << "\n";
	}
};
class Square : public TwoDshape {
public:
	int calculateArea(int s) {
		return s * s;
	}
};
class Rectangle : public TwoDshape {
public:
	int calculateArea(int a, int b) {
		return a * b;
	}
};
class ThreeDshape: public shape {
public:
	void propertiesof3d() {
		cout << "a 3-d shape has Length ,Breath and height" << "\n";
	}
};
class Sphere : public ThreeDshape {
public:
	int  areaofSpehere(int radius) {
		return 4 / 3 * 3.17 * radius * radius * radius;
	}
};


int main() {
	Sphere Ball;
	cout << Ball.areaofSpehere(5) << "\n";
	Square Something;
	cout << Something.calculateArea(5) << "\n";


}

