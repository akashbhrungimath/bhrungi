#include<stdio.h>
int input();
void get_array(int ,int *);
void compute(int ,int *);
void output(int ,int *);
int main()
{
	int n=5;
	//n=input();
	int a[5];
	get_array(n,a);
	compute(n,a);
	output(n,a);
	return 0;
}
/*int input()
{
	int n;
	printf("how many numbers you want to enter=");
	scanf("%d",&n);
	return n;
}*/
void get_array(int n,int a[n])
{
	//printf("enter the numbers =\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void compute(int n,int a[])
{
	int pivot=a[0],k=n-1,i=0,l,c=0;
	while(a[i]<=pivot)
		i++;	
	while(a[k]>pivot)
		k--;
	while(i<k)
	{
		l=a[k];
		a[k]=a[i];
		a[i]=l;
		i++;
		k--;
		while(a[i]<=pivot)
			i++;	
		while(a[k]>pivot)
			k--;
	}
	if(a[k]<pivot)
	{
		a[c]=a[k];
		a[k]=pivot;
	}
}
void output(int n,int a[n])
{
	for(int i=0;i<n;i++)
		printf("%d",a[i]);
	printf("\n");
}
