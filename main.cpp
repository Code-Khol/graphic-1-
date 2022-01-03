//Code Khol
#include <iostream>
#include <graphics.h>
#include <stdlib.h>

using namespace std;

main()
{
	initwindow(800,800);
	int x[2],y[2],c,n,i;
	cout<<"enter number of lines:"; cin>>n;
	
	for(i=0 ; i<=n ; i++)
	{
		x[0]=rand()%800;
		y[0]=rand()%800;
		x[1]=rand()%800;
		y[1]=rand()%800;
		c=rand()%15;
		setcolor(c);
		line(x[0],y[0],x[1],y[1]);
		cout<<i<<" - "<<x[0]<<" - "<<y[0]<<" - "<<x[1]<<" - "<<y[1]<<" - "<<c<<endl;
		delay(25);
	}
	
	
	return 0;
}
