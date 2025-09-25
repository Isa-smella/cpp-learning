#include <iostream>
using namespace std;

int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d; 
	int list[4]={a,b,c,d};
	for(int i=0;i<4;i++)
	  {
	  	int max=i;
	  	for(int j=i+1;j<4;j++)
	  	  if(list[j]>list[max])
	  	    max=j;
	  	swap(list[i],list[max]);
	  }
	for(int i=0;i<4;i++)
	  cout<<list[i]<<" ";
	return 0;
}
