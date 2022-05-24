#include<stdio.h>
#include<math.h>

int intupoverflow(void);
int floatupoverflow(void);
int floatdownoverflow(void);

int intupoverflow(void){
    int a;
    printf("type int has a size of %d bytes\n",sizeof(int));
    a = 0b01111111111111111111111111111111;
    printf("if a = 2^32-1,then a = %d\n",a);
    a = 0b10000000000000000000000000000000;
    printf("if a = 2^32,then a = %d\n",a);
    a = 0b11111111111111111111111111111111;
    printf("if a = 2^33-1,then a = %d\n",a);
    return 0;
}

int floatdownoverflow(void){
    float a;
    printf("type float has a size of %d bytes\n",sizeof(float));
    a = 0.1234e-38 / 100;
    printf("this is the test of float downoverflow:a = 0.1234e-38 / 100.\noutput:%e\n",a);
    return 0;
}

int floatupoverflow(void){
    float a;
    printf("type float has a size of %d bytes\n",sizeof(float));
    a = 3.4e38 * 100.0f;
    printf("this is the test of float upoverflow:a = 3.4e38 * 100.0.\noutput:%e\n",a);
    return 0;
}

int main(void){
    intupoverflow();
    printf("\n");
    floatupoverflow();
    printf("\n");
    floatdownoverflow();
    printf("\n");
    return 0;
}