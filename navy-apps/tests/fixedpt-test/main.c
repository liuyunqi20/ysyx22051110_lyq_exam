#include <fixedptc.h>
#include <stdio.h>

void test_muli(){
    printf("test muli:\n");
    fixedpt a = fixedpt_rconst(1.2);
    fixedpt b = fixedpt_fromint(10);
    fixedpt c = fixedpt_muli(a,b);
    printf("%x(1.2) * %x(10) = %x\n", a, b, c);
    a = fixedpt_rconst(-5.2);
    b = fixedpt_fromint(20);
    c = fixedpt_muli(a,b);
    printf("%x(-5.2) * %x(20) = %x\n", a, b, c);
    a = fixedpt_rconst(15.3);
    b = fixedpt_fromint(-4);
    c = fixedpt_muli(a,b);
    printf("%x(15.3) * %x(-4) = %x\n", a, b, c);
    a = fixedpt_rconst(-1.0);
    b = fixedpt_fromint(0x007fffff);
    c = fixedpt_muli(a,b);
    printf("%x(-1.0) * %x(max int) = %x\n", a, b, c);
}

void test_divi(){
    printf("test divi:\n");
    fixedpt a, b, c;
    a = fixedpt_rconst(16.8);
    b = fixedpt_fromint(4);
    c = fixedpt_divi(a,b);
    printf("%x(16.8) * %x(4) = %x\n", a, b, c);
    a = fixedpt_rconst(-20.4);
    b = fixedpt_fromint(5);
    c = fixedpt_divi(a,b);
    printf("%x(-20.4) * %x(5) = %x\n", a, b, c);
    a = fixedpt_rconst(36.4);
    b = fixedpt_fromint(-7);
    c = fixedpt_divi(a,b);
    printf("%x(36.4) * %x(-7) = %x\n", a, b, c);
}

void test_mul(){
    printf("test mul:\n");
    fixedpt a, b, c;
    a = fixedpt_rconst(4.8);
    b = fixedpt_rconst(5.5);
    c = fixedpt_mul(a,b);
    printf("%x(4.8) * %x(5.5) = %x\n", a, b, c);
    a = fixedpt_rconst(-4.8);
    b = fixedpt_rconst(5.5);
    c = fixedpt_mul(a,b);
    printf("%x(-4.8) * %x(5.5) = %x\n", a, b, c);
    a = fixedpt_rconst(4.8);
    b = fixedpt_rconst(-5.5);
    c = fixedpt_mul(a,b);
    printf("%x(4.8) * %x(-5.5) = %x\n", a, b, c);
    a = fixedpt_rconst(-4.8);
    b = fixedpt_rconst(-5.5);
    c = fixedpt_mul(a,b);
    printf("%x(-4.8) * %x(-5.5) = %x\n", a, b, c);
}

void test_div(){
    printf("test div:\n");
    fixedpt a, b, c;
    a = fixedpt_rconst(24.6);
    b = fixedpt_rconst(6.2);
    c = fixedpt_div(a,b);
    printf("%x(24.6) * %x(6.2) = %x\n", a, b, c);
    a = fixedpt_rconst(24.6);
    b = fixedpt_rconst(-6.2);
    c = fixedpt_div(a,b);
    printf("%x(24.6) * %x(-6.2) = %x\n", a, b, c);
    a = fixedpt_rconst(5.4);
    b = fixedpt_rconst(-10.8);
    c = fixedpt_div(a,b);
    printf("%x(5.4) * %x(-10.8) = %x\n", a, b, c);
}

void test_abs(){
    printf("test abs:\n");
    fixedpt a, b;
    a = fixedpt_rconst(-19.2);
    b = fixedpt_abs(a);
    printf("asb( %x(-19.2) ) = %x\n", a, b);
    a = fixedpt_rconst(26.7);
    b = fixedpt_abs(a);
    printf("asb( %x(26.7) ) = %x\n", a, b);
}

void test_floor(){
    printf("test floor:\n");
    fixedpt a, b;
    a = fixedpt_rconst(5.3);
    b = fixedpt_floor(a);
    printf("floor( %x(5.3) ) = %x\n", a, b);
    a = fixedpt_rconst(-19.2);
    b = fixedpt_floor(a);
    printf("floor( %x(-19.2) ) = %x\n", a, b);
    a = fixedpt_rconst(12.0);
    b = fixedpt_floor(a);
    printf("floor( %x(12.0) ) = %x\n", a, b);
    a = fixedpt_rconst(-11.0);
    b = fixedpt_floor(a);
    printf("floor( %x(-11.0) ) = %x\n", a, b);
}

void test_ceil(){
    printf("test ceil:\n");
    fixedpt a, b;
    a = fixedpt_rconst(5.3);
    b = fixedpt_ceil(a);
    printf("ceil( %x(5.3) ) = %x\n", a, b);
    a = fixedpt_rconst(-19.2);
    b = fixedpt_ceil(a);
    printf("ceil( %x(-19.2) ) = %x\n", a, b);
    a = fixedpt_rconst(7.0);
    b = fixedpt_ceil(a);
    printf("ceil( %x(7) ) = %x\n", a, b);
    a = fixedpt_rconst(-9.0);
    b = fixedpt_ceil(a);
    printf("ceil( %x(-9.0) ) = %x\n", a, b);
}

int main(){
    test_muli();
    test_divi();
    test_mul();
    test_div();
    test_abs();
    test_floor();
    test_ceil();
}