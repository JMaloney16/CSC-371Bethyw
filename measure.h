#ifndef MEASURE_H_
#define MEASURE_H_

/*
  +---------------------------------------+
  | BETH YW? WELSH GOVERNMENT DATA PARSER |
  +---------------------------------------+

  AUTHOR: 991384

  This file contains the decalaration of the Measure class.

  TODO: Read the block comments with TODO in measure.cpp to know which 
  functions and member variables you need to declare in this class.
 */

#include <string>
#include <map>

/*
  The Measure class contains a measure code, label, and a container for readings
  from across a number of years.

  TODO: Based on your implementation, there may be additional constructors
  or functions you implement here, and perhaps additional operators you may wish
  to overload.
*/
class Measure {
private:
    std::string codename, label;
    std::map<unsigned int, double> values;
public:
  Measure(std::string code, const std::string &label);
  std::string getCodename();
  std::string getLabel();
  void setLabel(std::string label);
  double getValue(unsigned int key);
  void setValue(unsigned int key, double value);
  unsigned int size();
  const double getDifference();
  const double getDifferenceAsPercentage();
  const double getAverage();
};

#endif // MEASURE_H_