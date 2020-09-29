#include<stdio.h>
int main(){
	int a[3];
	int i,j;
	for(i=0;i<3;i++)
	{
	    scanf("%d",&a[i]);
	}
	int m=a[0];
	for(j=0;j<3;j++)
	{
		if(m<a[j])
		{
			m=a[j];
		}
		
	}
	printf("%d %d",a[0]+a[1]+a[2],m);
	return 0;
}
