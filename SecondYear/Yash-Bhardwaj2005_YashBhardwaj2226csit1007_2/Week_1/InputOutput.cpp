#include<iostream>
using namespace std;

int main() {
	char i;
	cin >> i;
	if(i>=65 && i<=90){
		cout << 1 << endl;
	}
	else if(i>=97 && i<=122){
		cout << 0 << endl;
	}
	else{
		cout << -1 << endl;
	}
	
}
