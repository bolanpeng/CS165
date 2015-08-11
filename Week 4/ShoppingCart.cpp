/******************************************************************
 * ShoppingClass function implementation file.
 *****************************************************************/

#include "ShoppingCart.hpp"

/*****************************************************************
 * Default Constructor:
 * Initialize all the pointers pointing to NULL.
 * The first empty spot in the array is at location 0.
 ****************************************************************/
ShoppingCart::ShoppingCart(){
  for(int i=0; i<100; i++)
    ptr[i] = NULL;	 
    arrayEnd = 0;
}

/*****************************************************************
 * Takes the address of an Item and adds it to the ShoppingCart.
 ****************************************************************/
void ShoppingCart::addItem(Item *thing){
    // Assign the address of the item to pointer
    ptr[arrayEnd] = thing;
    // Move to the next empty spot of the array
    // Also keeps track of the number of elements used in array
    arrayEnd++;	
}

/*****************************************************************
 * Calculate the total cost of all the Items in the ShoppingCart.
 * Cost = Price x Quantity
 ****************************************************************/
double ShoppingCart::totalPrice(){
  double total;
  for(int i=0; i<arrayEnd; i++)
    // Gets the price and quantity of Item i, and adds to total
    total += ptr[i]->getPrice() * ptr[i]->getQuantity();
  return total;
}
