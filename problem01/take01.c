// forward algorithm
// invalid. moves elements multiple times

#include <stdio.h>


void swap(int n, int ar[n], int a, int b) {
  int temp = ar[a];
  ar[a] = ar[b];
  ar[b] = temp;
}


void algorithm(int n, int ar[n]) {
  int mn = 0;

  for (int i=mn; i < n; i+=1) {
    if (ar[i] <= ar[0])
      swap(n, ar, i, mn++);
  }

  swap(n, ar, 0, mn-1);
}


int main() {
  int ar[] = {4, 2, 1, 5, 6, 8, 1, 1, 9, 10, 3};
  int ln = sizeof(ar)/sizeof(int);

  algorithm(ln, ar);

  for (int i=0; i < ln; i++)
    printf("%d\n", ar[i]);

  return 0;
}
