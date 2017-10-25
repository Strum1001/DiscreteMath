#include <iostream>
using namespace std;

int checkFor(int a[], int size, int search)
{
	for(int s=0; s<size; s++)
		if(a[s]==search)
			return 1;
return 0;
}
main()
{
	int x[] = {1,2,3,4,5,6,7,9}; //can switch up the different sets for x and why, but should probably
	int y[] = {4,3,6,7,3,9,0,1}; //keep the sets the same size just in case i messed up
	int u[] = {0,1,2,3,4,5,6,7,8,9,10}; // can also change the universe set
	int count= 0, yorno=0, e;
	cout<<"Enter element you want to search for"<<endl;
	cin>>e;
	cout<<"X&Y"<<endl;

		for(int r=0;r<sizeof(x)/sizeof(x[0]); r++) //figures out what's in the sait X and Y
		{
			yorno = checkFor(y, r, x[r]);
			if(yorno==1||r==0)
			cout<<x[r]<<" ";
			yorno=0;
		}
cout<<endl<< "X||Y"<<endl;
for(int r = 0; r<sizeof(x)/sizeof(x[0]); r++) //figures out what's in the sait X or Y
{
	yorno = checkFor(x, r, x[r]);
	
	if(yorno==0||r==0)
	cout<<x[r]<<" ";
	yorno = 0;
}
for(int r= 0; r<sizeof(x)/sizeof(x[0]);r++)
{
 yorno= checkFor(x, sizeof(x)/sizeof(x[0]), y[r]);
 if(yorno ==0)
 yorno= checkFor(y, sizeof(y)/sizeof(y[0]), y[r]);
 if(yorno ==0)
 	cout<<y[r]<<" ";
yorno = 0;	
}


cout<<endl<<"X-Y"<<endl; //figures out what's in the set X - Y
for(int r=0; r<sizeof(x)/sizeof(x[0]); r++)
if(checkFor(y, sizeof(x)/sizeof(x[0]), x[r])==0)
	cout<<x[r]<<" ";

	
cout<<endl<<"the compliment of X"<<endl;  //What's the compliment of X in the Universe
for(int r = 0; r< (sizeof(u)/sizeof(u[0])); r++)
	if(checkFor(x,sizeof(x)/sizeof(x[0]), u[r])==0)
		cout<<u[r]<<" ";

yorno = checkFor(x, sizeof(x)/sizeof(x[0]), e); //Checks whether or not E is an element of the set X
if(yorno ==1)
	cout<<endl<<"E is an element of X";
else
	cout<<endl<<"E is not an element of X";

}

