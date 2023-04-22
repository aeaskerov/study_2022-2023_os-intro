#include <iostream>
using namespace std;

int main(int argument, char *arg[]) {
	if (atoi(arg[1]) > 0) {
		exit(1);
	}
	else if (atoi(arg[1]) == 0) {
		exit(2);
	}
	else {
		exit(3);
	}
	
	return 0;
}
