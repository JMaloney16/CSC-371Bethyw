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


const int PADDING_SIZE = 15;
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

    const std::map<unsigned int, double>& getValues();

    double getValue(unsigned int key);

    void setValue(unsigned int key, double value);

    unsigned int size();

    double getDifference() const;

    double getDifferenceAsPercentage() const;

    double getAverage() const;


    friend std::ostream& operator<<(std::ostream& os, const Measure& measure);
    friend bool operator==(const Measure &lhs, const Measure &rhs);
};

#endif // MEASURE_H_