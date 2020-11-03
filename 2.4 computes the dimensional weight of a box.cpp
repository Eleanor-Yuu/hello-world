/* computes the dimensional weight of a  12*10*8 box */

#include <stdio.h>

int main(void)
{
	int height,length,width,volume,weight;
	
	height=8,length=12,width=10;
	volume=length*width*height;
	weight=(volume+165)/166;
	
	printf("dimensional weight=%d",weight);
	
	return 0;
}
