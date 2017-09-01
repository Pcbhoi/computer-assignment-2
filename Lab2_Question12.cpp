#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float p,r,t;
        cout <<"Enter the principal amount\n";
	cin >>p;
	cout <<"Enter the rate\n";
	cin >>r;
	cout <<"Enter the time\n";
	cin >>t;
	cout <<"You will get a compound interest of ";
	cout <<p*(pow(1+r/100,t))-p;

	return 0;
}