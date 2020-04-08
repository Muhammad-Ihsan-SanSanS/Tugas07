#include <iostream>
using namespace std;

int main () {
	char jump = 'Z';
	
	cout << "Masukkan huruf y untuk melompat [y] " <<endl;
	cout << "Masukkan huruf n untuk tidak melompat [n] " <<endl;
	cin >> jump;
	
	cout << "\n T \n";
	if ( jump == 'y' ) goto lompat;
	
	cout << "\t U" <<endl;
	lompat:
	cout << "\t\t G" <<endl;
	if ( jump == 'y' ) goto loncat;
	cout << "\t\t\t A" <<endl;
	loncat:
	cout << "\t\t\t\t S" <<endl;
	if ( jump == 'y' ) goto luncat;
	cout << "\t\t\t\t\t 0" <<endl;
	luncat:
	cout << "\t\t\t\t\t\t 7" <<endl;
}
