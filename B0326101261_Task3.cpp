/* Program : Lab 3 Task 1
Purpose : Find the floor area and tiling cost of a room */
//Name: Asyiq Afiqah binti Mohd Asri   Matric: B032610261
#include <iostream>
using namespace std;
   
  const double TILE_PRICE = 4.50;   // price per square metre (RM)
   
  int main()
  {
      // local declarations
      double length, width, area, cost;

      cout << "Enter length and width (m): ";
      cin >> length >> width;
      
      area = length * width;
      cost = area * TILE_PRICE;
   
      cout << "Area = " << area << " m2" << endl;
      cout << "Cost = RM" << cost << endl;
      return 0;
  }
