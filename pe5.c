#include<stdio.h>
int main()
{
	int i,a[20],j;
	for(i=0;i<20;i++)
	{
		a[i]=i+1;
	}
	for(i=0;i<20;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[i]%a[j]!=0)
			{
				printf("%d\n",a[i]);
			}
		}
	}
	return 0;
}
