#pragma once
#include<string>
class Msxali;
using namespace std;
class Vashli
{
private: string color;
public:
	Vashli(string color) {
		this->color = color;
	}
	bool sameColor(Msxali t);
};

