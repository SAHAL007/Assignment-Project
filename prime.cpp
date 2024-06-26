int isPrime(int num) {
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int nthPrime(int n) {
    int count = 0, num = 2;
    while (1) {
        if (isPrime(num)) {
            count++;
            if (count == n) return num;
        }
        num++;
    }
}

