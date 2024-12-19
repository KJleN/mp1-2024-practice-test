#include <stdio.h>
size_t task1(int A[], size_t n) {
    size_t count = 0; //у меня почему-то слетело то что я писал сначала, вот еще раз скину на всякий...
    for (size_t i = 0; i < n - 1; i++) {
        if (A[i] < A[i + 1]) {
            count++;
        }
    }
    return count;
}
