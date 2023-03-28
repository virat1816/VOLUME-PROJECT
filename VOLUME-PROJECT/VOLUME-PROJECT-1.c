#include<stdio.h>
#include<string.h>
struct Transform {
    int feet;
    int inch;
};
int main(){
    struct Transform a, b, result;
    printf("Enter the first distance in feet and thenn in inches:");
    scanf("%d %d", &a.feet, &a.inch);
    result.feet = a.feet + b.feet;
    printf("Enter the second distance in feet and thenn in inches:");
    scanf("%d %d", &b.feet, &b.inch);
    result.inch = a.inch + b.inch;
    
    if (result.inch >= 12) {
        result.feet += result.inch / 12;
        result.inch %= 12;
    }
    printf("The sum of the distances is %d feet %d inches.", result.feet, result.inch);
    return 0;
}