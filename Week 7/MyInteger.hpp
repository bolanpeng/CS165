/******************************************************************
 * MyInteger class specification file.
 *****************************************************************/

#ifndef MYINTEGER_HPP
#define MYINTEGER_HPP

class MyInteger{
  private:
    int *pInteger;
	
  public:
    MyInteger(int);
    MyInteger(const MyInteger &);
    ~MyInteger();
    MyInteger operator=(const MyInteger &);
    void setMyInt(int);
    int getMyInt();	
};
#endif

