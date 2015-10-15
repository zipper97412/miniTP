#include "stats.h"
#include <stdio.h>
#include <math.h>


float dataSets[MAXSET][MAXDATA] = {
  {12,  13.5, 8.5,  14.7, 6},
  {10,  10,   10,   10,   10},
  {8.7, 5.2,  4.2,  3.14, 0}

};

void afficherNotes(float* data, int len) {
  int i;
  for (i = 0; i < len; i++) {
    printf("%f\t", data[i]);
  }
}

float minimumNote(float* data, int len) {
  int i;
  float min = data[0];
  for (i = 0; i < len; i++) {
    if(data[i] < min)
      min = data[i];
  }
  return min;
}

float maximumNote(float* data, int len) {
  int i;
  float max = data[0];
  for (i = 0; i < len; i++) {
    if(data[i] > max)
      max = data[i];
  }
  return max;
}
float calculeMoyenne(float* data, int len) {
  int i;
  float sum = 0;
  for (i = 0; i < len; i++) {
    sum += data[i];
  }
  return sum/MAXDATA;
}

float calculeVariance(float* data, int len) {
  int i;
  float moy = calculeMoyenne(data, len);
  float sumVar = 0;
  for (i = 0; i < len; i++) {
    sumVar += (data[i] - moy)*(data[i] - moy);
  }
  return sumVar/len;
}

float calculeEcartType(float* data, int len) {
  return sqrt(calculeVariance(data, len));
}

int rechercherValeur(float* data, int len, float item) {
  int i;
  for (i = 0; i < len; i++) {
    if(data[i] == item) {
      return i;
    }
  }
  return -1;
}
