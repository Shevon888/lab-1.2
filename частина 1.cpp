#include <stdio.h>

int main(void) {

    const short cShortOct = 0121;  
    const int   cIntDec   = -745;
    const long  cLongHex  = 0x7a;   


    short s1, s2, s3;
    int i1, i2, i3;
    long l1, l2, l3;
    unsigned short us1, us2, us3;


    s1 = -70;
    s2 = 657;
    s3 = 0x7a;

    i1 = -745;
    i2 = 20.78;          
    i3 = 228597;

    l1 = 14756987897LL; 
    l2 = 71.8;          
    l3 = -57;

    us1 = 135;
    us2 = 351362;       
    us3 = -34;           

    printf("short: %hd, %hd, %hd\n", s1, s2, s3);
    printf("int: %d, %d, %d\n", i1, i2, i3);
    printf("long: %ld, %ld, %ld\n", l1, l2, l3);
    printf("unsigned short: %hu, %hu, %hu\n", us1, us2, us3);
    printf("Константи: %hd, %d, %ld\n", cShortOct, cIntDec, cLongHex);

    return 0;
}
