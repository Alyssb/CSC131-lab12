//
// Created by ajs41 on 5/1/2018.
//

#ifndef OPERATORS_BOX_H
#define OPERATORS_BOX_H

class Box {
public:
    double getVol() const;
    Box(double l = 1, double w = 1, double h = 1);
    bool operator<(const Box & rhs) const;
    bool operator>(const Box & rhs) const;
    bool operator==(const Box & rhs) const;
    Box operator+(const Box & rhs) const;
private:
    double length;
    double width;
    double height;
};

#endif //OPERATORS_BOX_H
