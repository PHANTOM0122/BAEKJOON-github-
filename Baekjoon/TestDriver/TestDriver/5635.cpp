#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Student {
public:
	string name;
	int birth_day;
	int birth_month;
	int birth_year;
	
};



int main() {
	int student_num;
	cin >> student_num;
	vector<Student> list(student_num);

	string n, int bd, bm, by;
	for (int i = 0; i < student_num; i++) {
		cin >> n >> bd >> bm >> by;
		list[i].name = n, list[i].birth_day = bd; list[i].birth_month = bm; list[i].birth_year = by;
	}

	int max_index = 0;
	for (int i = 0; i < student_num; i++) {
		if (list[i].birth_year > list[max_index].birth_year) {
			max_index = i;
		}
	}

}

// Unsolved!!