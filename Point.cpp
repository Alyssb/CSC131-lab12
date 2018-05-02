//
// Created by ajs41 on 5/2/2018.
//

#include "Point.h"

Point::Point(int x, int y) : x_{x}, y_{y} //setX(x), setY(y)
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
    //int x_{rhs.x_ + this->x_};
    //int y_{rhs.y_ + this->y_};
    //Point z{x_+rhs.x_, y_+rhs.y_};
    return Point{x_+rhs.x_, y_+rhs.y_};
}

std::ostream& operator<<(std::ostream& out, const Point& p)
{
    out << "(" << p.x_ << ", " << p.y_ << ")";
    return out;
}
//std::ostream& Point::operator<<(const Point& p) const
//{
//    return <#initializer#>;
//}
