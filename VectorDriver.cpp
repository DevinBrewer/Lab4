#include <algorithm>  // Sort

#include "VectorDriver.h"

int main() {
  // cout << "  ..:: B E G I N  S A M P L E  C O D E  ::.." << endl << endl;
  // vector<short> sample_vector(5);
  //
  // cout << "new vector: ";
  // print(sample_vector);
  // cout << endl;
  //
  // fill_vector(sample_vector);
  //
  // cout << "filled vector: ";
  // print(sample_vector);
  // cout << endl;
  //
  // cout << "sum of vector's elements: " << compute_sum(sample_vector) << endl;
  // cout << endl << "   ..::  E N D   S A M P L E  C O D E  ::.." << endl;


  vector<short> a;
  a.push_back(213);
  a.push_back(654);
  a.push_back(123);
  a.push_back(678);
  a.push_back(124);

  cout << "unsorted: ";
  print(a);
  cout << endl;

  std::sort(a.begin(), a.end());

  cout << "sorted: ";
  print(a);
  cout << endl;

  return 0;
}
