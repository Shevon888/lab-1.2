#include <stdio.h>

int main(void) {
 
    int iSignSave = -8;
    int iSignNeg  = 890;

    int iAdd1 = 235, iAdd2 = -655;
    int iSub1 = 78,  iSub2 = 34;
    int iMul1 = 97,  iMul2 = 20;

    int iIntDiv1_a = 15, iIntDiv1_b = 5;
    int iIntDiv2_a = 15, iIntDiv2_b = 4;

    int iMod1 = 17, iMod2 = 3;
    int iDiv1 = 48, iDiv2 = 7;

    double dReal1 = 10.5, dReal2 = 2.5;

    
    printf("Збереження знаку (+(-8)): %d\n", +iSignSave);
    printf("Заперечення знаку (-(890)): %d\n", -iSignNeg);
    printf("Додавання (235 + (-655)): %d\n", iAdd1 + iAdd2);
    printf("Віднімання (78 - 34): %d\n", iSub1 - iSub2);
    printf("Множення (97 * 20): %d\n", iMul1 * iMul2);
    printf("Цілочисельне ділення (15 / 5): %d\n", iIntDiv1_a / iIntDiv1_b);
    printf("Цілочисельне ділення (15 / 4): %d\n", iIntDiv2_a / iIntDiv2_b);
    printf("Залишок від ділення (17 %% 3): %d\n", iMod1 % iMod2);
    printf("Ділення (48 / 7): %f\n", (double)iDiv1 / iDiv2);

    printf("Дійсні (10.5 та 2.5): + = %.2f, - = %.2f, * = %.2f, / = %.2f\n",
           dReal1 + dReal2, dReal1 - dReal2, dReal1 * dReal2, dReal1 / dReal2);

    return 0;
}
