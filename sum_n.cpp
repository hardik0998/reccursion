#include <iostream>
using namespace std;

int sum_n(int n){

if(n==0)
	return n;

return n+sum_n(n-1); 


}


int main()
{
	
	int n;
	cin>>n;
	
	int ans = sum_n(n);
	
	cout<<ans<<endl;
	
	
}
