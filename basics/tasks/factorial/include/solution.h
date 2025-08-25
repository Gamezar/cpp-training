#pragma once

int factorial(int number) {
    int ans = 1;
    if (number < 0) {
        return -1;
    }
    for (int i = 1; i <= number; i++) {
        ans *= i;
    }
    return ans; // Replace this with your solution
}
