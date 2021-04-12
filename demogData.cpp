#include "demogData.h"
#include <sstream>

/* print county demographic data */
std::ostream& operator<<(std::ostream &out, const demogData &DD) {
    int popOver65Count = DD.getpopOver65Count();
    int popUnder18Count = DD.getpopUnder18Count();
    int popUnder5Count = DD.getpopUnder5Count();
    int BAupCount = DD.getBAupCount();
    int HSupCount = DD.getHSupCount();

    out << "County Demographics Info: " << DD.name << ", " << DD.state << " total population: " << DD.totalPopulation2014;
    out << "\nPopulation info: \n(\% over 65): " << DD.popOver65 << " Count: " << popOver65Count;
    out << "\n(\% under 18): " << DD.popUnder18 << " Count: " << popUnder18Count;
    out << "\n(\% under 5): " << DD.popUnder5 << " Count: " << popUnder5Count;
    out << "\nEducation info: ";
    out << "\n(% Bachelor degree or more): " << DD.popBachelorEduPlus << " Count: " << BAupCount;
    out << "\n(% high school or more): " << DD.popHighSchoolEduPlus << " Count: " << HSupCount;

    return out;
}

int demogData::getpopOver65Count() const
{
    int count;
    count = (popOver65 / 100) * totalPopulation2014; //calculate the count
    return count;
}

int demogData::getpopUnder18Count() const
{
    int count;
    count = (popUnder18 / 100) * totalPopulation2014; //calculate the count
    return count;
}

int demogData::getpopUnder5Count() const
{
    int count;
    count = (popUnder5 / 100) * totalPopulation2014; //calculate the count
    return count;
}

int demogData::getBAupCount() const
{
    int count;
    count = (popBachelorEduPlus / 100) * totalPopulation2014; //calculate the count
    return count;
}

int demogData::getHSupCount() const
{
    int count;
    count = (popHighSchoolEduPlus / 100) * totalPopulation2014; //calculate the count
    return count;
}