#include <iostream>
#include<string>
using namespace std;
//int binarytodecimal(int);
int main() {
	int n;
	cin>>n;
	int base=1,dec_value=0;
    while(n){
        int rem=n%10;
        n=n/10;
        dec_value+=rem*base;
        base*=2;
    }
    cout<<dec_value<<endl;
	return 0;
}
