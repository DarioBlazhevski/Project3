#include <iostream>
#include <cmath>

using namespace std;

int main()
{

	float x1, x2, y1, y2, D;

	cout << "Korisnikot da vnese kordinati na x1 i y1 od tockata A" << endl;

	cout << "x1 : " ;
	cin >> x1;
	
	cout << "y2 : " ;
	cin >> y1;


	cout << "Korisnikot da vnese vrednosti na x2 i y2 od tockata B : " << endl;


	cout << "x2 : ";
	cin >> x2;

	cout << "y2 : ";
	cin >> y2;


	D = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	
	cout << "Rastojanieto pomgeju tockite A i B e : " << D << endl;


	
	cin.get(); cin.get();

	return 0;
}