/********************************************************************
 * This program uses the Bubble Sort function to sort an array of 
 * Boxes from greatest volume to least volume.
 *******************************************************************/

#include "Box.hpp"

void boxSort(Box box[], int size){
  Box temp;
  bool swap;
	
  do{
    swap = false;
      for(int i=0; i<(size-1); i++){
		if(box[i].getVolume() < box[i+1].getVolume()){
			temp = box[i];
			box[i] = box[i+1];
			box[i+1] = temp;
			swap = true;
		}
      }
  } while(swap);
}
