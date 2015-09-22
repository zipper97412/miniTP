#include <stdio.h>
#include "tests.h"

int main() {

  float* data = dataSets[0];
  afficherNotes(data);
  printf("\nle minimum est : %f\n", minimumNote(data));
  printf("le maximum est : %f\n", maximumNote(data));
  return 0;
}
