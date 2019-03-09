#include <iostream>
#include <string>

using namespace std;


void mylog(string command) {

	cout << "[+] " << command << endl;
}

int main(int argc, char** argv) {

	mylog(__FUNCTION__);

	int n =0;

	n = sizeof(char);
	cout << "char\t" << n << "\t" << n*8 << endl;

	n = sizeof(short);
	cout << "short\t" << n << "\t" << n*8 << endl;

	n = sizeof(int);
	cout << "int\t" << n << "\t" << n*8 << "\t\/\/ varies on 32/64bits machine" << endl;

	n = sizeof(float);
	cout << "float\t" << n << "\t" << n*8 << endl;

	n = sizeof(double);
	cout << "double\t" << n << "\t" << n*8 << endl;

	n = sizeof(long);
	cout << "long\t" << n << "\t" << n*8 << "\t\/\/ varies" << endl;

	n = sizeof(long long);
	cout << "l-long\t" << n << "\t" << n*8 << "\t\/\/ stable, use ll\%d for 64bit number" << endl;

	return 0;
}
