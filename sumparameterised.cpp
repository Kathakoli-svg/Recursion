#include <iostream>
using namespace std;

void f(int i, int sum){
	if(i<1){
		cout << "The sum:" << sum;
		return;
	}
	f(i-1,sum+i);
}

int main(){
	int n;
	cout << "How many numbers?";
	cin >> n;
	f(n,0);
	return 0;
}
