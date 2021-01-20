#include <iostream>

using namespace std;

int main() {
	int money; cin >> money;
	int left = 1000 - money;
	int count = 0;

	while (left > 0) {
		int yen500 = left / 500;
		left -= 500 * yen500;
		count += yen500;
		if (left <= 0) break;
		
		int yen100 = left / 100;
		left -= 100 * yen100;
		count += yen100;
		if (left <= 0) break;

		int yen50 = left / 50;
		left -= 50 * yen50;
		count += yen50;
		if (left <= 0) break;

		int yen10 = left / 10;
		left -= 10 * yen10;
		count += yen10;
		if (left <= 0) break;

		int yen5 = left / 5;
		left -= 5 * yen5;
		count += yen5;
		if (left <= 0) break;

		count += left;
		left = 0;
		break;
	}
	cout << count;

}