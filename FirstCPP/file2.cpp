#include <iostream>
#include <cmath>

#include "coordin.h"

using namespace std;

namespace file2{	//使用命名空间
	polar rect_to_polar(rect xypos){

		polar answer;
		answer.distance = sqrt(xypos.x*xypos.x + xypos.y*xypos.y);
		answer.angle = atan2(xypos.x, xypos.y);
		return answer;
	}

	void show_polar(polar dapos){

		const double Rad_to_deg = 57.29577951;

		cout << "distance = " << dapos.distance;
		cout << " angle = " << dapos.angle * Rad_to_deg;
		cout << " degress\n";
	}
}