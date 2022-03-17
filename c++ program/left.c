#include <stdio.h>
int main()
{
    int myPos,left,t,i,pos,f;
    scanf("%d", &t);
    
    for(i=1; i<=t; i++)
    {
        scanf("%d%d", &myPos, &left);
        if(myPos<=left)
            pos=left*4+19;
        else
            pos=(2*myPos-left)*4 +19;
        printf("Case %d: %d\n", i,pos);
    }
    return 0;
}
