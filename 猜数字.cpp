#include <iostream>
using namespace std;
#include <ctime>

int main() {
	srand((unsigned int)time(NULL));
	int num = rand() % 1001;
	int sb = 0;
	int a = 0;
	cout << "����һ��0~1000������ֻ�ܲ�5��" << endl;
	while (a < 5) {
		a++;
		cin >> sb;
		if (sb > num) {
			cout << "sb��´���" << endl;
		} else if (sb < num) {
			cout << "sb���С��" << endl;
		} else if (sb = num) {
			cout << "woc���ɶ���" << endl;
			break;
		}
	}
	cout << "����ⶼ�²�����" << endl;
	system("pause");

	return 0;
}