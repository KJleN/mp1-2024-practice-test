long long task2(unsigned A[], size_t n) {
    long long max_min = -1; //задаем минимум -1, ведь в массиве НЕ смогут находится отрицательные числа, от чего любой минимум в нем >-1
    for (size_t i = 1; i < n - 1; i++) {
        if (A[i] <= A[i - 1] && A[i] <= A[i + 1]) { // Проверка на локальный минимум
            if (max_min == -1 || A[i] > max_min) {
                max_min = A[i]; 
            }
        }
    }

    return max_min;
}
