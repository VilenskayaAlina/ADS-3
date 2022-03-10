// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int count = size + 1;
  int check = count;
    for (int i = 0; i < check; i++) {
      if (arr[i] != value)
        count--;
    }
  return count;
  return 0;
}
