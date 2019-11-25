#include "../test/test.h"
int main() {
b = (int*)malloc(sizeof(int*));
goto label2;
label1:
r1=pile[--pile_i].int_val; //depiler
f_x = r1;
r2 = f_x;
r3 = 1;
r4 = r2 + r3;
f_x = r4;
printf("f_x = %d\n",f_x);
// aff 
r5 = f_x;
retReg=pile[--pile_i].addr; //depiler
pile[pile_i++].int_val=r5; //enpiler
goto *retReg;
// ret 
retReg=pile[--pile_i].addr; //depiler
goto *retReg;
label2:
// func 
r6 = 4;
a = r6;
printf("a = %d\n",a);
// aff 
r7 = 2;
r8 = b;
*r8 = r7;
printf("*b = %d\n",*b);
// aff 
r9 = a;
r10 = b;
r11 = *r10;
r12 = 2;
r13 = r11 * r12;
r14 = r9 + r13;
c = r14;
printf("c = %d\n",c);
// aff 
r15 = c;
r16 = 10;
r17 = r15 == r16;
if (!r17) goto label3;
r18 = c;
r19 = 1;
r20 = r18 + r19;
c = r20;
printf("c = %d\n",c);
// aff 
// block 
goto label4;
label3:
r21 = c;
r22 = 10;
r23 = r21 + r22;
c = r23;
printf("c = %d\n",c);
// aff 
label4:
// cond 
label5:
r24 = c;
r25 = 20;
r26 = r24 < r25;
if (!r26) goto label6;
r27 = c;
r28 = 1;
r29 = r27 + r28;
c = r29;
printf("c = %d\n",c);
// aff 
goto label5;
label6:
// loop 
r30 = c;
r31 = a;
r32 = r30 - r31;
r33 = b;
*r33 = r32;
printf("*b = %d\n",*b);
// aff 
retReg = &&label7;
pile[pile_i++].addr=retReg; //enpiler
r34 = a;
pile[pile_i++].int_val=r34; //enpiler
goto label1;
label7:
r35=pile[--pile_i].int_val; //depiler
// appl 
a = r35;
printf("a = %d\n",a);
// aff 
r36 = a;
e = (float)r36;
printf("e = %f\n",e);
// aff 
r37 = e;
r38 = b;
r39 = *r38;
r40 = r37 + (float)r39;
c = (int)r40;
printf("c = %d\n",c);
// aff 
r41 = e;
r42 = a;
r43 = r41 == (float)r42;
g = (int)r43;
printf("g = %d\n",g);
// aff 
return 0; }
