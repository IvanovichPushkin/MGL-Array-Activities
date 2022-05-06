#include <iostream>

using namespace std;

int gnumber(int great[10]) {
	int magnus = great[0];
	for(int counter = 1; counter < 10; counter++) {
		if(great[counter] > magnus) {
			magnus = great[counter];
		}
	}
	return magnus;
}
int snumber(int less[10]) {
	int parvus = less[0];
	for(int counter = 1; counter < 10; counter++) {
		if(less[counter] < parvus) {
			parvus = less[counter];
		}
	}
	return parvus;
}
int main(int argc, char** argv) {
	int list[10] = {45, 4546, 32, 314, 485, 458, 56, 7, 9, 10};
	int smallest, largest, average, sum;
	string ordinal[10] = {"First", "Second", "Third", "Fourth", "Fifth","Sixth", "Seventh", "Eigth", "Ninth", "Tenth"};
	cout << "Enter list of ten numbers\n";
	for(int x = 0; x < 10; ++x) {
		cout << ordinal[x] << " number: " << ": ";
		cin >> list[x];
	}
	largest = gnumber(list);
	smallest = snumber(list);
	for(int x = 0; x < 10; x++) {
		sum += list[x];
	}
	average = (sum - largest - smallest) / 8;
	cout << "The average value is " << average << endl;
	return 0;
}
