#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

// 표준편차를 계산하는 함수
double calculateStandardDeviation(double num[], int n) {
    double sum = 0.0, mean, standardDeviation = 0.0;
    int i;
    for (i = 0; i < n; i++) {
        sum += num[i];
    }
    mean = sum / n;
    for (i = 0; i < n; i++) {
        standardDeviation += pow(num[i] - mean, 2);
    }
    standardDeviation = sqrt(standardDeviation / n);

    return standardDeviation;
}

int main() {
    double arr[5];
    printf("Enter 5 real numbers:");
    for (int i = 0; i < 5; i++) {
        scanf("%lf", &arr[i]);
    }
    double result = calculateStandardDeviation(arr, 5);
    printf("Standard Deviation: %lf\n", result);

    return 0;
}
