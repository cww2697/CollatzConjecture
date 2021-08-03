#include <stdio.h>
#include <time.h>
#include <stdint.h>

struct collatzData{
    int64_t n;
    int steps;
};

int collatz();

int main(int argc, char *argv[]) {
    
    int64_t startInt, endInt;
    int avgStepsToCompletion;
    clock_t startFunc, endFunc, startProg, endProg;
    double cpuTimeUsedFunc, cpuTimeUsedProg, avgCalcTime;

    printf("Enter starting value: ");
    scanf("%li", &startInt);

    printf("\nEnter ending value: ");
    scanf("%li", &endInt);

    startProg = clock();

    int iterations = 1;
    
    for (int64_t i = startInt; i<=endInt; i++) {
        startFunc = clock();
        int data = collatz(i);
        endFunc = clock();
        cpuTimeUsedFunc = ((double)(endFunc - startFunc))/ CLOCKS_PER_SEC;
        avgStepsToCompletion = avgStepsToCompletion+data;
        avgCalcTime = avgCalcTime+cpuTimeUsedFunc;
        iterations++;
    }

    avgStepsToCompletion = avgStepsToCompletion/iterations;
    avgCalcTime = avgCalcTime/iterations;
    endProg = clock();
    cpuTimeUsedProg = ((double)(endProg - startProg)) / CLOCKS_PER_SEC;
    printf("Total Program Time: %f\nAverage Calculation Time: %f\n Average Steps to Completion: %d", cpuTimeUsedProg, avgCalcTime, avgStepsToCompletion);

    return 0;
}

/**
 * @param n
 * @return
 */
int collatz(int64_t n) {
    int64_t originalValue = n;
    int steps = 0;
    while (n != 1) {
        if (n < 0){
            break;
        }
        int isOdd = n%2;
        if(isOdd) {
            n = 3*n+1;
        } else {
            n = n/2;
        }
        steps++;
    }

    return steps;
}
