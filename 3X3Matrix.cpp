#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int perfnine[3][3];
	cout << "Enter list of numbers for 3X3 Matrix\n";
	for (int x = 0; x < 3; x++){
		cout << "Row " << x + 1 << endl;
		for (int y = 0; y < 3; y++){
			cout << "Number " << y + 1 << " : ";
			cin >> perfnine[x][y];
		}
		cout << endl;
	}
	for(int x = 0; x < 3; x++) {
		for(int y = 0; y < 3; y++){
			cout << perfnine[x][y] << " ";
		}
		cout << endl;
	}
	return 0;
}
