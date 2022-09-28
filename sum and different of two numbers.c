#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    float c,d;
    scanf("%f",&c);
    scanf("%f",&d);
    int e = a +b;
    int f = a -b;
    printf("%d %d\n",e,f);
    float g = c+d;
    float h = c-d;
    printf("%0.1f %0.1f",g,h);    
    return 0;
}
