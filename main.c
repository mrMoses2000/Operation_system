#include <sys/types.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
extern char *tzname[];
int main()
{
    if (putenv("TZ=California+7")==-1)
    {
        printf("putenv failed -- out of memory");
        exit(1);
    }

    time_t now;
    time(&now);
    printf("%s", ctime( &now ) );
    return 0;
    /*struct tm* sp;
    sp = localtime(&now);
        printf("%d/%d/%02d %d:%02d %s\n",
           sp->tm_mon + 1, sp->tm_mday,
                    sp->tm_year, sp->tm_hour,sp->tm_min, tzname[sp->tm_isdst]);
        exit(0);*/
}