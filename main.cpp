#include <fstream>
#include <iostream>
#include <time.h>
#include "CoordinateList.h"
int main() {
   CoordinateList* list = new CoordinateList(10);
   std::cout<<"Unsorted"<<std::endl;
   list->print();
   list->orderListFromCenter();
   std::cout<<"Sorted"<<std::endl;
   list->print();
}
