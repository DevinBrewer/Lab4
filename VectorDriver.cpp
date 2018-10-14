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
  cout << "new vector: ";
  print(a);
  cout << endl;

  add_numbers(a);

  cout << "print even: ";
  print(a);
  cout << endl;
  print_even(a);
  cout << endl;

  return 0;
}
