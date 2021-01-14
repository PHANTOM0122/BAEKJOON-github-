#include <iostream>
#include <stdio.h>
using namespace std;

int main() {

	int start_hour, start_min, start_sec;
	int dst_hour, dst_min, dst_sec;
	int left_hour, left_min, left_sec;
	char c1, c2;

	cin >> start_hour >> c1 >> start_min >> c2 >> start_sec;
	cin >> dst_hour >> c1 >> dst_min >> c2 >> dst_sec;

	int starttime_sec = start_hour * 3600 + start_min * 60 + start_sec;
	int dsttime_sec = dst_hour * 3600 + dst_min * 60 + dst_sec;

	if (starttime_sec > dsttime_sec) {
		int gap_sec = dsttime_sec - starttime_sec + (24 * 3600);
		left_hour = gap_sec / 3600;
		left_min = (gap_sec - left_hour * 3600) / 60;
		left_sec = (gap_sec - left_hour * 3600 - left_min * 60);
	}

	else { // starttime_sec < dsttime_sec
		int gap_sec = dsttime_sec - starttime_sec;
		left_hour = gap_sec / 3600;
		left_min = (gap_sec - left_hour * 3600) / 60;
		left_sec = (gap_sec - left_hour * 3600 - left_min * 60);
	}
	printf("%02d",left_hour);
	cout << ":";
	printf("%02d", left_min);
	cout << ":";
	printf("%02d", left_sec);


	return 0;
}

// Solved!!