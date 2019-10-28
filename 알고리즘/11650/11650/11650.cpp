#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class xy
{
public:
	xy(int, int);
	int x;
	int y;
};

xy::xy(int _x, int _y)
{
	x = _x;
	y = _y;
}

vector <xy> xyGroup;

bool compare(xy frontXY, xy behindXY) {
	if (frontXY.x == behindXY.x) {
		return frontXY.y < behindXY.y;
	}
	else {
		return frontXY.x < behindXY.x;
	}
}

int main() {
	int xyCase{ 0 };
	cin >> xyCase;

	for (int inCounter = 0; inCounter < xyCase; inCounter++) {
		int xNumber{ 0 }, yNumber{ 0 };
		cin >> xNumber >> yNumber;

		xyGroup.push_back(xy(xNumber, yNumber));
	}

	sort(xyGroup.begin(), xyGroup.end(), compare);

	for (int outCounter = 0; outCounter < xyCase; outCounter++) {
		cout << xyGroup[outCounter].x << " " << xyGroup[outCounter].y << "\n";
	}
}
