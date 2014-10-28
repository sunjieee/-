//test
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
	int n,k;
	while(scanf("%d%d",&n,&k)!=EOF)
	{
		int i;
		int s=1;
		int f=0;
		while(1)
		{
			printf("%d ",s);
			k--;
			if(k==0)
			{
				f=1;
				break;
			}
			printf("%d ",n+1-s);
			k--;
			if(k==0)
			{
				f=2;
				break;
			}
			s++;
		}
		if(f==1)
		{
			for(i=s+1;i<=n+1-s;i++)
			{
				printf("%d ",i);
			}
		}
		else
		{
			for(i=n-s;i>s;i--)
			{
				printf("%d ",i);
			}
		}
		printf("\n");
	}



	return 0;
}
