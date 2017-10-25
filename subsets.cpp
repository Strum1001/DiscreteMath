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
	int x[] = {4,3,6,7,3,9};
	int y[] = {4,3,6,7,3,9,0};
	
	int yorno =1;
	for(int r = 0; r<sizeof(x)/sizeof(x[0])&&yorno ==1; r++)
		yorno = checkFor (y, 8, x[r]);
if(yorno ==1)
	cout<<"X is a subset of Y"<<endl;
else
	cout<<"X is not a subset of Y"<<endl;
	yorno = 1;
	
for(int r= 0; r<sizeof(x)/sizeof(x[0])&&yorno ==1; r++)
	yorno =checkFor(y, sizeof(y)/sizeof(y[0]), x[r]);


		for(int r= 0; r<sizeof(y)/sizeof(y[0])&&yorno ==1; r++)
			yorno =checkFor(x, sizeof(x)/sizeof(x[0]), y[r]);
	if(yorno ==0)
			cout<<"X is not equal to Y"<<endl;
	if(yorno== 1)
		cout<<"X is equal to Y";
	
		

}
