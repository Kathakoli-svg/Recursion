#include <iostream>
using namespace std;

void f(int i, int n){
	if (i>n){
		return;
	}
	cout << "Kathakoli" << endl;
	f(i+1,n);
}

int main(){
	int n;
	cout << "No. of times to print name:";
	cin >> n;
	f(1,n);
	return 0;
	
}
