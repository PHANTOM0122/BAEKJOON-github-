#include <iostream>
#include <string>
using namespace std;

string valid(string s){
	int cnt = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '(')
			cnt++; // ¿©´Â °ýÈ£
		else
			cnt--; // ´Ý´Â °ýÈ£
		if (cnt < 0)
			return "No";
	}
	if (cnt == 0)
		return "Yes"; // ½ºÅÃÀÌ ºñ¾îÀÖÀ½ -> ¿Ã¹Ù¸§
	else
		return "No"; // ´Ý´Â °ýÈ£ ºÎÁ·
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