#include "tests.h"
#include <stdio.h>


float dataSets[MAXSET][MAXDATA] = {
  {12,  13.5, 8.5,  14.7, 6},
  {10,  10,   10,   10,   10},
  {8.7, 5.2,  4.2,  3.14, 0}

};

void afficherNotes(float* data) {
  int i;
  for (i = 0; i < MAXDATA; i++) {
    printf("%f\t", data[i]);
  }
}

float minimumNote(float* data) {
  int i;
  float min = data[0];
  for (i = 0; i < MAXDATA; i++) {
    if(data[i] < min)
      min = data[i];
  }
  return min;
}

float maximumNote(float* data) {
  int i;
  float max = data[0];
  for (i = 0; i < MAXDATA; i++) {
    if(data[i] > max)
      max = data[i];
  }
  return max;
}
