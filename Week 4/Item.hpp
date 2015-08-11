/****************************************************************
 * Item class specification file.
 ****************************************************************/

#ifndef ITEM_HPP
#define ITEM_HPP

#include <string>
using std::string;

class Item{
	
  private:
    string name;
    double price;
    int quantity;
	
  public:
    Item();
    Item(string, double, int);
    void setName(string);
    void setPrice(double);
    void setQuantity(int);
    string getName();
    double getPrice();
    int getQuantity();	
};

#endif
