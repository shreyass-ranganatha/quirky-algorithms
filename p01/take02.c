// ONE value that swaps with 0th element moves twice

#include <stdio.h>


void swap(int n, int ar[n], int a, int b) {
  int temp = ar[a];
  ar[a] = ar[b];
  ar[b] = temp;
}


void algorithm(int n, int ar[n]) {
  int mn = 1, mx = n-1;

  while (mn < mx) {
    for (; ar[mn] <= ar[0] && mn < n; mn++);
    for (; ar[mx] > ar[0]; mx--);

    if (mn < mx)
      swap(n, ar, mn++, mx--);
  }

  swap(n, ar, 0, mx);
}


int main() {
  int ar[] = {4, 2, 1, 5, 6, 2, 1, 1, 9, 10, 3};
  int ln = sizeof(ar)/sizeof(int);

  algorithm(ln, ar);

  for (int i=0; i < ln; i++)
    printf("%d\n", ar[i]);

  return 0;
}
