#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Player {
	string name;
	long long int pay;
public:
	string getName( ) const {
		return this->name;
	}
	long long int getPay() const {
		return this->pay;
	}
	void setName() {
		cin >> this->name;
	}
	void setPay() {
		cin >> this->pay;
	}
};

int main() {
	int n;
	cin >> n;
	vector<string> final_list(n);

	for (int i = 0; i < n; i++) {
		int p;
		cin >> p;
		vector<Player> list(p);
		for (int j = 0; j < p; j++) {
			list[j].setPay();
			list[j].setName();
		}

		int max_index = 0;
		for (int i = 0; i < p; i++) {
			if (list[max_index].getPay() < list[i].getPay()) {
					 max_index = i;
			}
		}

		final_list[i] = list[max_index].getName();
		list.clear();
	}

	for (auto elem : final_list)
		cout << elem << endl;
}

