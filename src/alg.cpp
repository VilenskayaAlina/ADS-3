// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int left = 0, right = size - 1, count = 0;
  int mid, check;
  while (left <= right) {
    mid = (right + left) / 2;
    if (arr[mid] == value) {
      count++;
      check = mid;
      break;
    }
    if (value < arr[mid])
      right = mid - 1;
    else
      left = mid + 1;
    }
  if (check >= 0) {
    for (int i = 0; i < check; i++) {
      if (arr[i] == value)
        count++;
    }
    for (int j = size - 1; j > check; j--) {
      if (arr[j] == value)
        count++;
    }
  }
  if (count > 0)
    return count;
  else
    return 0;
}
