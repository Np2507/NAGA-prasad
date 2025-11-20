
#include<stdio.h>
int main()
{
	int a[6],i,pos,ele;
	for(i=0;i<5;i++){
		printf("enter  the elements in the array");
		scanf("%d",&a[i]);
	}
	printf("enter the position");
	scanf("%d",&pos);
	printf("enter the element");
	scanf("%d",&ele);
	for(i=4;i>=pos;i--)
	{
		a[i+1]=a[i];
	}
	a[pos]=ele;
	
	for(i=0;i<6;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
