#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t t;
    struct tm *tm;

    time(&t);

    setenv("TZ", "PST8", 1);

    tm = localtime(&t);

    printf("%02d:%02d:%02d\n",
           tm->tm_hour,
           tm->tm_min,
           tm->tm_sec);

    printf("%02d.%02d.%d\n",
           tm->tm_mday,
           tm->tm_mon + 1,
           tm->tm_year + 1900);

    return 0;
}
