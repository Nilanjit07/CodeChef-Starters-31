#include <stdio.h>
int main() 
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x;
        scanf("%d %d",&n,&x);
        printf("%d\n",(2*n)-x+1);
    }
	return 0;
}

