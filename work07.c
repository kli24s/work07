#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LENGTH 10

// ======================================================[1]
void printArr(int* arr) {

  int i;
  printf("[ ");
  for (i = 0; i < LENGTH; i++) {
    printf("%d ", *(arr + i));
  }
  printf("]");
}

// ======================================================[2]
double avgArr(int *arr) {

  long total = 0;

  int i;
  for (i = 0; i < LENGTH; i++) {
    total += arr[i];
  }

  double avg = total / LENGTH;
  return avg;
}

// ======================================================[3]
void copyArr(int *arr1, int *arr2) {

  int i;
  for (i = 0; i < LENGTH; i++) {
    arr2[i] = *(arr1 + i);
  }

}

// ======================================================[main]
int main() {
  // int length = 10;
  int arr1[LENGTH];
  int arr2[LENGTH];

  int i;

  srand(time(NULL));
  for (i = 0; i < LENGTH; i++) {
    arr1[i] = rand();
  }

  for (i = 0; i < LENGTH; i++) {
    arr1[i] = rand();
  }

  printf("============================================[1]\n");
  printArr(arr1);
  printf("\n");

  printf("============================================[2]\n");
  printf("%0.2lf\n", avgArr(arr1));

  printf("============================================[3]\n");

  printArr(arr1);
  printf("\n");
  printArr(arr2);
  printf("\n");

  copyArr(arr1, arr2);
  printArr(arr1);
  printf("\n");
  printArr(arr2);
  printf("\n");


  printf("============================================");
  printf("\n");
  return 0;
}
