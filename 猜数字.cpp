#include#include <iostream><iostream>
using使用命名空间 std；namespace std;
#include#include <ctime><ctime>

int main() {main() {
	srand((无符号整数)时间(NULL));srand((unsigned int)time(NULL));
	int num = rand() % 1001;rand() % 1001;
	int sb = 0；0;
	整数a = 0;0;
	cout << "随便猜一个0~1000的数，只能猜10次" << endl;"随便猜一个0~1000的数，只能猜5次" << endl;
	而（a<5）{while (a < 10) {
		一个++；
		cin >> sb;
		if (sb > num) {if (sb > num) {
			cout << "sb你猜大了" << endl;"sb你猜大了" << endl;
		} else if (sb < num) {} else if (sb < num) {
			cout << "sb你猜小了" << endl;"sb你猜小了" << endl;
		} 否则 if (sb = num) {} else if (sb = num) {
			cout << "wochi蒙对了" << endl;"woc你蒙对了" << endl;
			休息;break;
		}}
	}}
	cout << "废物，这都猜不出来" << endl;"废物，这都猜不出来" << endl;
	系统（“暂停”）；system("pause");

	返回0；return 0;
}
