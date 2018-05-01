//
// Created by ajs41 on 5/1/2018.
//

#include "Box.h"

Box::Box(double l, double w, double h) : length(l), width(w), height(h)
{
    // no-op
}

double Box::getVol() const {
    return length * width * height;
}

bool Box::operator<(const Box & rhs) const {
    return getVol() < rhs.getVol();
}

bool Box::operator>(const Box& rhs) const
{
    return !(rhs == *this) && !(*this < rhs);
}

bool Box::operator==(const Box& rhs) const
{
    return getVol() == rhs.getVol();
}
