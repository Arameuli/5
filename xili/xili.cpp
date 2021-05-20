#include <iostream>
#include"Vashli.h"
#include"Msxali.h"
using namespace std;
bool Vashli::sameColor(Msxali t) {
	return color == t.color;
}
int main()
{
	Vashli c("mwvane");
	Msxali t("mwvane");
	if (c.sameColor(t)) {
		cout << "emtxveva " << endl;
	}
	else cout << "ar emtxveva " << endl;
}

