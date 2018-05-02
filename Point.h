//
// Created by ajs41 on 5/2/2018.
//

#ifndef OPERATORS_POINT_H
#define OPERATORS_POINT_H

class Point {
public:
    explicit Point(int x = 0, int y = 0);
    void setX(int x);
    void setY(int y);
    Point operator+(const Point & rhs) const;
private:
    int x_;
    int y_;
};

#endif //OPERATORS_POINT_H
