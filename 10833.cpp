#include <iostream>
#include <vector>

using namespace std;

int main() {
	int sum = 0;
	int schoolnum;
	cin >> schoolnum;
	vector<int> left(schoolnum);

	for (int i = 0; i < schoolnum; i++) {
		int student = 0, apple = 0;
		cin >> student >> apple;
		left[i] = apple % student;
	}

	for (int elem : left)
		sum += elem;

	cout << sum << endl;
	
	return 0;
}
// solved!