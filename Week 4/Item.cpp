/****************************************************************
 * Item class function implementation file.
 ***************************************************************/

#include "Item.hpp"

Item::Item(){
  setName("");
  setPrice(0.0);
  setQuantity(0);
}

Item::Item(string n, double p, int q){
  setName(n);
  setPrice(p);
  setQuantity(q);
}

void Item::setName(string n){
  name = n;
}

void Item::setPrice(double p){
  price = p;
}

void Item::setQuantity(int q){
  quantity = q;
}

string Item::getName(){
  return name;
}

double Item::getPrice(){
  return price;
}

int Item::getQuantity(){
  return quantity;
}
