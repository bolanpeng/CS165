/******************************************************************
 * ShoppingCart class specification file.
 *****************************************************************/

#ifndef SHOPPINGCART_HPP
#define SHOPPINGCART_HPP

#include "Item.hpp"

class ShoppingCart{
	
  private:
    Item *ptr[100];		// An array of 100 pointers pointing to Item
    int arrayEnd;       // The index of the next empty spot in array
	
  public:
    ShoppingCart();
    void addItem(Item *);
    double totalPrice();
};
#endif
