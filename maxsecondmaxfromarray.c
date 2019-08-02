#include<stdio.h>
int main(int argc,char * argv[])
{
	int i,max=(atoi(argv[1])),temp=0;
	int j,k;
	for(i=0; i<argc; i++)
    {
        for(j=i+1; j<argc; j++)
        {
            if((atoi(argv[i])) == (atoi (argv[j])))
            {
                for(k=j; k<argc; k++)
                {
                    (argv[k]=argv[k+1]);
                }
                argc--;
                j--;
            }
        }
    }
	
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
	for(i=1;i<argc;i++)
	{
		if(atoi(argv[i])<temp)
		{
			printf("%d\t",atoi(argv[i]));
		}
	}
}
