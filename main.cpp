#include<iostream>
#include<stdlib.h>

int main(int argc, char* argv[])
{
	int n=atoi(argv[1]);
	int *p;
	p = new int[n];
	int flag;
	
	if(n==1)
	std::cout<<"No Primes";
	else if (n==2)
	std::cout<<"2";
	else if (n==3 || n==4)
	std::cout<<"2\n3";
	else
	{	
	p[0]=2;
	p[1]=3;
	int pmax=2;
	for(int i=5;i<=n;i+=2)
	{	
		
		flag=1;
		for(int j=0;j<pmax;j++)
		{
			if(i%p[j]==0)
			 flag=0;
			
		}
		if(flag==1)
		{
			p[pmax]=i;
			pmax+=1;
		}
		
	
	}
	for(int k=0;k<pmax;k++)
	{
		std::cout<<"\n"<<p[k];
	}
	}
	delete[] p;
	return 0;
}
