//¾Å¶È2.15 Ì°ĞÄËã·¨2
#include <stdio.h>
#include <algorithm>
#define M 20
using namespace std;
struct program
{
    int starttime;
    int endttime;

    bool operator < (const program &A) const
    {
       return endttime < A.endttime;
    }
}programs[M];

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0) break;
        int i;
        for(i=0;i<n;i++)
        {
            scanf("%d%d",&programs[i].starttime,&programs[i].endttime);
        }

        sort(programs,programs+n);
        int currenttime = 0;
        int ans = 0;

        for(i=0;i<n;i++)
        {
            if(currenttime<=programs[i].starttime)
            {
                ans++;
                currenttime = programs[i].endttime;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
