//
// Created by ajs41 on 5/2/2018.
//

#include "Point.h"

Point::Point(int x, int y) : setX(x), setY(y)
{
    //no-op
}

void Point::setX(int x)
{
    x_ = x;
}

void Point::setY(int y)
{
    y_ = y;
}

Point Point::operator+(const Point& rhs) const
{
    int x_{rhs.x_ + this->x_};
    int y_{rhs.y_ + this->y_};
    return Point();
}
