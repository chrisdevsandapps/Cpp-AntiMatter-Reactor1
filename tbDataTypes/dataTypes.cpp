

#include <iostream>
#include <iomanip>

using namespace std;

int main () {

  cout << INT_MIN << endl;
  cout << INT_MAX << endl;


  cout << "maximum value of unsigned integer: " << endl;
  cout << UINT_MAX << endl;
  uint max = UINT_MAX;
  uint given = 4294967290;

  cout << "max - given: " << max - given << endl;



  // ###########################################################

  cout << "size of int: " << sizeof(int) << endl;

  cout << "size of uint: " << sizeof(unsigned int) << endl;

  cout << "size of short int: " << sizeof(short int) << endl;

  cout << "size of long int: " << sizeof(long int) << endl;

  cout << "size of unsigned long int: " << sizeof(unsigned long int) << endl;

  cout << "size of long long int: " << sizeof( long long int) << endl;

  cout << "size of unsigned long long int: " << sizeof(unsigned long long int) << endl;



  // ###########################################################
  // float float1 = 123.456789;
  // double double1 = 123.456789;




  float float1 = 88.3;
  cout << "sizeof() float: \n" << sizeof(float) << " bytes" << endl;
  cout << "float1: \n" << float1 << endl;
  cout << "float1 fixed: \n" << fixed << float1 << endl;
  cout << "float1 scientific: \n" << scientific << float1 << endl;
  cout << "float1 with precision: \n" << setprecision(20) << fixed << float1 << endl;


  cout << "\n##################\n##################\n" << endl;


  double double1 = 88.3;
  cout << "sizeof() double: \n" << sizeof(double) << " bytes" << endl;
  cout << "double1: \n" << double1 << endl;
  cout << "double1 fixed: \n" << fixed << double1 << endl;
  cout << "double1 scientific: \n" << scientific << double1 << endl;
  cout << "double1 with precision: \n" << setprecision(20) << fixed << double1 << endl;




  cout << "\n##################\n##################\n" << endl;



  long double double2 = 123.456789876543210;

  cout << "sizeof() double: \n" << sizeof(long double) << " bytes" << endl;
  cout << "double2: \n" << double2 << endl;
  cout << "double2 fixed: \n" << fixed << double2 << endl;
  cout << "double2 scientific: \n" << scientific << double2 << endl;
  cout << "double2 with precision: \n" << setprecision(20) << fixed << double2 << endl;





  // ###########################################################


  bool boolValue1 = true;
  bool boolValue2 = false;
  cout << "boolValue1: " << boolValue1 << endl;
  cout << "boolValue2: " << boolValue2 << endl;



  // ###########################################################


  char charValue1 = 55;
  char charValue2 = 85;
  char charValue3 = 95;
  cout << "charValue1: " << charValue1 << endl;
  cout << "charValue2: " << charValue2 << endl;
  cout << "charValue3: " << charValue3 << endl;



  // ###########################################################


  char charValue10 = '7';
  char charValue20 = '88';
  char charValue30 = '90';
  char charValue40 = 'z';
  char charValue50 = 'Z';
  cout << "charValue10: " << (int)charValue10 << endl;
  cout << "charValue20: " << (int)charValue20 << endl;
  cout << "charValue30: " << (int)charValue30 << endl;
  cout << "charValue40: " << (int)charValue40 << endl;
  cout << "charValue50: " << (int)charValue50 << endl;




  return 0;
}