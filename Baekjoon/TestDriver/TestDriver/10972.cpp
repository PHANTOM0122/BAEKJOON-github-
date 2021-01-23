#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int N;
	cin >> N;
	vector<int> list(N);
	vector<int> Input(N);
	
	for (int i = 0; i < N; i++)
		list[i] = i + 1;

	int index = *find(list.begin(),list.end(),N);
	// iterator라서 주소값을 반환할 텨

	if (index == N)
		swap(list[N - 2], list[N - 1]);
	else
		swap

	return 0;
} // unsolved!

/*
* 
* 1 2 3 4
* 1 2 4 3
  1 3 2 4
* 1 3 4 2
* 1 4 2 3
* 1 4 3 2
* 
*/