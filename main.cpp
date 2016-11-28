#include <iostream>
#include <cmath>

using namespace std;

void uppgift1() {
	int antalRader;
	int toPrint;
	cin >> antalRader;
	toPrint = 1;
	for(int Rad = 1; Rad < antalRader+1; Rad++) {
		cout << Rad << " ";
		for(int Kolumn = 1; Kolumn < Rad; Kolumn++) {
			toPrint += Rad;
			cout << toPrint << " ";
		}
		toPrint = Rad+1;
		cout << endl;
	}
}
void uppgift2() {
	double summa = 0;
	double i = 1;
	while((1/i) > 0.00001) {
		summa += (1/i);
		i++;
		summa -= (1/i);
		i++;
	}
	cout << i << " " << summa << endl;
}
void uppgift3() {
	
}

int main() {
	uppgift2();
	
}