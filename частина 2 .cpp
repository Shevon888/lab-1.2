#include <stdio.h>

int main(void) {

    float f1, f2, f3;
    double d1, d2;

   
    const float cFloat = 0.0000000078234;
    const double cDouble = 567.67e-90;


    f1 = 0.0000000078234;
    f2 = -0.5678e62;       
    f3 = 3465787652.98;    

    d1 = -0.468e500;       
    d2 = 567.67e-90;      

    printf("float: %.13f | %e | %.2f\n", f1, f2, f3);
    printf("double: %e | %e\n", d1, d2);
    printf("Константи: %.13f | %e\n", cFloat, cDouble);

    return 0;
}
