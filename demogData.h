#ifndef DEMOG_H
#define DEMOG_H

#include <string>
#include<iostream>

using namespace std;

/*
  class to represent county demographic data
  from CORGIS
*/
class demogData {
  public:
    demogData(string inN, string inS, double in65, double in18,
        double in5, int totPop14) :
            name(inN), state(inS), popOver65(in65), popUnder18(in18),
            popUnder5(in5), popBachelorEduPlus(-1), popHighSchoolEduPlus(-1), totalPopulation2014(totPop14){}

    demogData(string inN, string inS, double in65, double in18,
        double in5, double inBach, double inHigh, int totPop14) :
            name(inN), state(inS), popOver65(in65), popUnder18(in18),
            popUnder5(in5), popBachelorEduPlus(inBach), popHighSchoolEduPlus(inHigh), totalPopulation2014(totPop14) {}

    string getName() const { return name; }
    string getState() const { return state; }
    double getpopOver65() const { return popOver65; }
    double getpopUnder18() const { return popUnder18; }
    double getpopUnder5() const { return popUnder5; }
    int getPop() const { return totalPopulation2014; }
    double getBAup() const { return popBachelorEduPlus; }
    double getHSup() const { return popHighSchoolEduPlus; }

    int getpopOver65Count() const;
    int getpopUnder18Count() const;
    int getpopUnder5Count() const;
    int getBAupCount() const;
    int getHSupCount() const;

   friend std::ostream& operator<<(std::ostream &out, const demogData &DD); 
   //the friend in front means this function can access private vars even though
   //its not a member function

private:
    const string name;
    const string state;
    const double popOver65;
    const double popUnder18;
    const double popUnder5;
    const int totalPopulation2014;
    const double popBachelorEduPlus;
    const double popHighSchoolEduPlus;
};
#endif
