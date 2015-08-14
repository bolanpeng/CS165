/*******************************************************************
 * Author: Bolan Peng
 * Date: 5/21/15
 * Description: This is the ShiftVec class function implementation
 * file.
 ******************************************************************/

#include "ShiftVec.hpp"

/*******************************************************************
 * Constructor: take a vector as the parameter and assigns it to
 * the vector data member. 
 ******************************************************************/
template <class T>
ShiftVec<T>::ShiftVec(std::vector<T> input){
  vect = input;
}


/*******************************************************************
 * Destructor
 ******************************************************************/
template <class T>
ShiftVec<T>::~ShiftVec(){
}	


/*******************************************************************
 * Getter: return the value of the vector data member.
 ******************************************************************/
template <class T>
std::vector<T> ShiftVec<T>::getVec(){
  return vect;
}


/*******************************************************************
 * ShiftRight(): shifts all the elements in the vector data member 
 * to the right, according to the int parameter value.
 ******************************************************************/
template <class T>
void ShiftVec<T>::shiftRight(int offset){

  // Prepare a new vector with the same size of the vector data 
  // member for moving the elements. 
  std::vector<T> vect2(vect.size());
	
  // Move the elements from the data member to new vector, in
  // their appropriate position, after offset.
  for(int i=0; i<vect.size(); i++){
    vect2.at((i+offset)% vect.size()) = vect.at(i);
  }

  // Copy the elements in the new vector back to the data member.	
  vect = vect2;
}


/*******************************************************************
 * ShiftLeft(): shifts all the elements in the vector data member 
 * to the left, according to the int parameter value.
 ******************************************************************/
template <class T>
void ShiftVec<T>::shiftLeft(int offset){

  // If offset is greater than vector size, prepare to wrap around.	
  if(offset>vect.size())
    offset -= vect.size();
	
  // Move the element at the front to the end.
  // Erase the front element to prevent duplication.
  // Repeat until all the elements are at the correct position.
  for(int i=0; i < offset % vect.size(); i++){
    vect.insert(vect.end(), vect.at(0));
    vect.erase(vect.begin());
  }	
}


template class ShiftVec<int>;
template class ShiftVec<double>;
template class ShiftVec<bool>;
template class ShiftVec<std::string>;
