#include <iostream>
using namespace std;

void f(int i, int factorial){
	if(i<1){
		cout << "The factorial:" << factorial;
		return;
	}
	f(i-1,factorial*i);
}

int main(){
	int n;
	cout << "The number:";
	cin >> n;
	f(n,1);
	return 0;
}
