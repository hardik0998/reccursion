#include<iostream>
using namespace std;


int power(int n){
	if(n==0)
		return 1;
		
	return 2*power(n-1);
}


int main(){

int n;
cout<<"enter power of 2 : "<<endl;
cin>>n;
int ans = power(n);

cout<<ans<<endl;


}
