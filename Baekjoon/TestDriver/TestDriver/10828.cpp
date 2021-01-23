#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	string str;
	cin >> str;
	str += '\n';

	stack <char> s;
	for (char ch : str) {
		if (ch == ' ' || ch == '\n') {
			while (!s.empty()) {
				cout << s.top();
				s.pop();
			}
			cout << ch;
		}
		else {
			if (ch == '<') {
				while (ch != '>')
					continue;
			}
			else {
				s.push(ch);
			}
		}
	}

	return 0;
}