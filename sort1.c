#include "sort1.h"
//bubble sort
void sort1(int *theArray, int theNum) {
  int i, j, k, temp;
	k =theNum;
   for(i = 1; i< theNum;i++) {
     j= i;
     temp = theArray[i];
     for(j = 0; j < k-1; j++) {
      if(theArray[j] > theArray[j+1]) {
         temp = theArray[j];
         theArray[j] = theArray[j+1];
         theArray[j+1] = temp;
       }
     }
     k--;
   }
}
