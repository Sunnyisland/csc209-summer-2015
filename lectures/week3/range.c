#include <stdio.h>
#include <limits.h>

int main(int argc, char *argv[])
{
    printf("Type Name       | sizeof | Minimum Value | Maximum Value\n");
    printf("----------------+--------+---------------+---------------\n");

    printf("unsigned char   |    %ld   |  %12d |  %10d\n",
            sizeof (unsigned char),     0,          UCHAR_MAX);
    printf("signed char     |    %ld   |  %12d |  %10d\n",
            sizeof (signed char),       SCHAR_MIN,  SCHAR_MAX);
    printf("                |        |               |\n");

    printf("unsigned short  |    %ld   |  %12d |  %10d\n",
            sizeof (unsigned short),    0,          USHRT_MAX);
    printf("signed short    |    %ld   |  %12d |  %10d\n",
            sizeof (signed short),      SHRT_MIN,   SHRT_MAX);
    printf("                |        |               |\n");

    printf("unsigned int    |    %ld   |  %12d |  %10ld\n",
            sizeof (unsigned int),      0,          (long) UINT_MAX);
    printf("signed int      |    %ld   |  %12d |  %10ld\n",
            sizeof (signed int),        INT_MIN,    (long) INT_MAX);
    printf("                |        |               |\n");

    printf("unsigned long   |    %ld   |  %12d |  %10llu\n",
            sizeof (unsigned long),     0,          (unsigned long long) ULONG_MAX);
    printf("signed long     |    %ld   |  %12ld |  %10llu\n",
            sizeof (signed long),       LONG_MIN,   (unsigned long long) LONG_MAX);

    return 0;
}
