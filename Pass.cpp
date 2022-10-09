#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,n,x,p;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d",&n,&x,&p);
        if(3*x+x-n>=p)
            printf("pass\n");
        else
            printf("fail\n");
    }
}
