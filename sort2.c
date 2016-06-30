#include "sort2.h"

void sort2(int *theArray, int theNum) {
 int i, min, j;
 for(int i = 0; i < theNum; i++) {
  min =i;
  for(j = i+1; j < theNum; j++) {
    if(theArray[min] > theArray[j]) {
       min = j;
    }
  }
  int temp = theArray[i];
  theArray[i] = theArray[min];
  theArray[min] = temp;
 }
}
