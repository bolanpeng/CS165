/*******************************************************************
 * Author: Bolan Peng
 * Date: 5/21/15
 * Description: This is the ShiftVec class specification file. This
 * is a template class.
 ******************************************************************/

#ifndef SHIFTVEC_HPP
#define SHIFTVEC_HPP

#include <vector>
#include <string>

template <class T>
class ShiftVec{
  private:
    std::vector<T> vect;           // Vector of type T
	
  public:
    ShiftVec(std::vector<T>);      // Constructor
    ~ShiftVec();
    std::vector<T> getVec();      
    void shiftRight(int);
    void shiftLeft(int);
};
#endif
