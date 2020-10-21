

// Inheritance supports the concept of code reusability in the program 
// If we want to create a Class new class, but suppose there is already a class which does the same work then we can Inherit the same class and it saves us a lot of time and promotes code reusability of the code. 

// For example here Dog class will be Inherited what to do from pets... And we don’t have to write it again .. this will save our time and promote code reusability. 

#include<iostream>
using namespace std;

class Pets {
public:
	void Whattodo() {
		cout << "Eat sleep Repeat" << "\n";
	}
};
class Dogs : public Pets {
public:
	void Woff() {
		cout << "Woof! Let's go for a walk Human!!" << "\n";
	}
};
int main() {


	Dogs Edgar;
	Edgar.Woff();
	Edgar.Whattodo();
}

