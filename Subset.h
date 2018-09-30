//
// Created by Olcay Taner Yıldız on 30.09.2018.
//

#ifndef UTIL_SET_H
#define UTIL_SET_H


class Subset {
protected:
    int* set;
    int* multiset;
    int elementCount;
private:
    int rangeEnd;
public:
    Subset(int rangeStart, int rangeEnd, int elementCount);
    Subset();
    virtual ~Subset();
    int* get();
    int* getX(int M);
    int* getmultiset();
    void multiSet(int M);
    bool next();
};


#endif //UTIL_SET_H
