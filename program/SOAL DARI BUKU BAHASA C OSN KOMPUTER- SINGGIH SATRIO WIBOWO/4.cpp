#include <iostream>
 
using namespace std;
 
int a(int n)
{
		
  if (n == 0)
  {
	return 0;
  }
  else{
  	return 1- n * a(n-1);
  }
  
}
 
int main()
{
 int x;
 x = a(5);
 cout<<x;
  //SELESAI
}
