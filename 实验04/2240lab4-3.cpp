#include<iostream>
using namespace std;
int maxl(int a, int b, int c) {
	int tmp = a > b ? a : b;
	int max = tmp > c ? tmp : c;
	return max;
}
double maxl(double a, double b, double c) {
	double tmp = a > b ? a : b;
	double max = tmp > c ? tmp : c;
	return max;

}
int main() {
	double a, b, c,d;
	for (;;) {
		cout << "请输入三个整数或三个小数" << endl;
		cin >> a >> b >> c;
		if ((a - (int)a) != 0) {
			cout << "这是三个小数" << endl;
			cout << "最大值为" << maxl(a, b, c) << endl;
		}
		else {
			cout << "这是三个整数" << endl;
			cout << "最大值为" << maxl((int)a, (int)b, (int)c) << endl;;
		}
		cout << "输0继续，输1退出" << endl;
		cin >> d; 
		if (d) {
			break;

		

		}
		else {
			continue;
		}
	}
	return 0;
}
