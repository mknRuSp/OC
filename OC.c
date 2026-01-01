// OC.c
#ifndef OC1
#define OC1
#include <stdio.h>
#include "OC.c"

#elif !OC2
#define OC2
int main(void)
{
#include "OC.c"
#elif !OC3
#define OC3
printf("hello,world");
#include "OC.c"
#elif !OC4
#define OC4
}
#endif