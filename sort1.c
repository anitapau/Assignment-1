#include<stdio.h>
#include<stdlib.h>
void insertionSor(int[] theArray) {
 int i, j, temp;
 for(i = 1; i< sizeOf(theArray);i++) {
   j= i;
   temp = theArray[i];
   while(j > 0; && temp < theArray[j-1]) {
     theArray[j] = theArray[j-1];
      j--;
   }
   theArray[j] = temp;
 }
}
