#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int reversi[10];
	cout << "Enter ten numbers" << endl;
	for (int x = 0; x < 10; x++){
		cout << "Number " << x + 1 << " : ";
		cin >> reversi[x];
	}
	for (int x = 9; x >= 0; x--){
		cout << reversi[x] << endl;
	}
	return 0;
}
