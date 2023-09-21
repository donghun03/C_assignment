#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{/*
    //1
    int num;
    printf("정수 하나 입력: ");
    scanf("%d", &num);
    num = num*num;
    printf("%d", num);
    return 0;

    //2
    int num1, num2;
    printf("정수 두 개 입력: ");
    scanf("%d %d", &num1, &num2);
    printf("%d", num1 % num2);
    return 0;

    //3
    int num1, num2, num3;
    printf("정수 세 개 입력: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("%d", (num1 - num2) * (num2 + num3) * (num3 % num1));
    return 0; 

    //4
    int num1, num2, num3;
    printf("정수 하나 입력: ");
    scanf("%d", &num1);
    num2 = ~num1;
    num3 = num2 + 0b1;
    printf("%d", num3);
    return 0;

    //5
    int num1 = 3;
    int result1 = num1 << 3;
    int result2 = result1 >> 2;
    printf("%d", result2);
    return 0;

    int num1, num2;
    printf("Input two integers: ");
    scanf("%d %d", &num1, &num2);
    printf("%d & %d = %d \n", num1, num2, num1 & num2);
    printf("%d | %d = %d \n", num1, num2, num1 | num2);
    printf("%d ^ %d = %d \n", num1, num2, num1 ^ num2);
    return 0;
}