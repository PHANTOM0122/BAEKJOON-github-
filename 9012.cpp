#include <iostream>
#include <string>
using namespace std;

string valid(string s){
	int cnt = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '(')
			cnt++; // ���� ��ȣ
		else
			cnt--; // �ݴ� ��ȣ
		if (cnt < 0)
			return "No";
	}
	if (cnt == 0)
		return "Yes"; // ������ ������� -> �ùٸ�
	else
		return "No"; // �ݴ� ��ȣ ����
}

int main() {
	int N;
	cin >> N;
	while (N--) {
		string s;
		cin >> s;
		cout << valid(s) << "\n";
	}
	return 0;
} 
// solved!!