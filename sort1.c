#include "sort1.h"
void bubbleSort(int[] theArray, int theNum) {
int i, j, temp;
 for(i = 1; i< theNum;i++) {
   j= i;
   temp = theArray[i];
   for(j = 0; j < theNum-1; j++) {
    if(theArraj[j] > theArray[j+1]) {
     temp = theArray[j];
     theArray[j] = theArray[j+1];
     theArray[j+1] = temp;
     }
   }

   theNum--;
 }
}
