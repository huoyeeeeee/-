#include <iostream>
using namespace std;
#include <ctime>

int main() {
	srand((unsigned int)time(NULL));
	int num = rand() % 1001;
	int sb = 0;
	int a = 0;
	cout << "随便猜一个0~1000的数，只能猜5次" << endl;
	while (a < 5) {
		a++;
		cin >> sb;
		if (sb > num) {
			cout << "sb你猜大了" << endl;
		} else if (sb < num) {
			cout << "sb你猜小了" << endl;
		} else if (sb = num) {
			cout << "woc你蒙对了" << endl;
			break;
		}
	}
	cout << "废物，这都猜不出来" << endl;
	system("pause");

	return 0;
}