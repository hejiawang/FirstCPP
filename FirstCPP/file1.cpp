#include <iostream>

#include "coordin.h"

namespace file2{
	extern polar rect_to_polar(rect xypos);
	extern void show_polar(polar dapos);
}

using namespace std;
using namespace file2;

int mainMAIN(){
	
	rect rplace;
	polar pplace;

	cout << "Enter the x and y value: ";
	while (cin >> rplace.x >> rplace.y){
		
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "Next two numbers ( q to quit)";
	}
	cout << "Bye!\n";
	cin.get();
	cin.get();
	return 0;
}
