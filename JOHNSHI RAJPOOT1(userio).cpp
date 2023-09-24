#include<iostream>
using namespace std;

int main() {
	// Write your code here
	char val;
		
		cin >> val;
	
       if(val>='A' && val<='Z'){
		   cout<<"1"<<endl;
	   }
	  else if(val>='a' && val<='z'){
		   cout<<"0"<<endl;
	   }
	   else{
		   cout<<"-1"<<endl;
	   }

	return 0;
}
