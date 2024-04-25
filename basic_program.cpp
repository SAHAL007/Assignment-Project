#include <stdio.h>\nint main() { printf("Hello World\\n"); return 0; }
int factorial(int n) { return (n < 2) ? 1 : n * factorial(n - 1); }
