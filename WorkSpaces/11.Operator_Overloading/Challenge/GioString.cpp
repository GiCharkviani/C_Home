#include <iostream>
#include <cstring>
#include "GioString.h"

using namespace std;

/* IMPLEMENTING METHODS and CONSTRUCTORS */
GioString::GioString() {
    gString = new char[1];
    *gString = '\0';
}

GioString::GioString(const char *str): age {27} {
    gString = new char[strlen(str) + 1];
    strcpy(gString, str);
}

GioString::~GioString() {
    delete [] gString;
}

GioString::GioString(const GioString &source): gString {nullptr} {
    gString = new char[strlen(source.gString) + 1];
    strcpy(gString, source.gString);
}

GioString::GioString(GioString &&source): gString {source.gString} {
    source.gString = nullptr;
}


std::ostream &operator<<(std::ostream &os, const GioString &rhs) {
    os << rhs.gString;
    return os;
}

std::istream &operator>>(std::istream &is, GioString &rhs) {
    char *buff = new char[1000];
    is >> buff;
    rhs = GioString {buff};
    delete [] buff;
    return is;
}


