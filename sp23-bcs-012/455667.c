#include <stdio.h>
#include <math.h>

int main()
{int no,pow1,pow2;
printf("number\tsquare\tcube\n");
for(no=0;no<=10;no++)
   {
    printf("%6d",no);
    pow1=pow(no,2);
    printf("%6d",pow1);
    pow2=pow(no,3);
    printf("%5d\n",pow2);

    }
    return 0;
}
