#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	cin.ignore(); // n의 값 무시!
	
	string line;
	for (int i = 0; i < n; i++) {
		while (getline(cin, line)) {
			line += '\n';
			stack<char> s;
			for (char ch : line) {
				if (ch == '\n' || ch == ' ') {
					while (!s.empty()) {
						cout << s.top();
						s.pop();
					}
					cout << ch;
				}
				else {
					s.push(ch);
				}
			}
		}
	}
}

// solved!