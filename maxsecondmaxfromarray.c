#include<stdio.h>
int main(int argc,char * argv[])
{
	int i,max=(atoi(argv[1])),temp=0;
	for(i=2;i<argc;i++)
	{
		if(max>atoi(argv[i])&&temp<(atoi(argv[i])))
		{
			temp=atoi(argv[i]);
		}
	else if(max<atoi(argv[i])&&temp<(atoi(argv[i])))
	{
		temp=max;
		max=atoi(argv[i]);
	}
	}
	//printf("max:%d\nsecondmax:%d\n",max,temp);
	for(i=1;i<argc;i++)
	{
		if(atoi(argv[i])<temp)
		{
			printf("%d\t",atoi(argv[i]));
		}
	}
}
