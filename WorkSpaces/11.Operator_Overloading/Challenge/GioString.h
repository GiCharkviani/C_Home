#ifndef _GIOSTRINGCLASS_
#define _GIOSTRINGCLASS_

#include <iostream>

class GioString {
    friend std::ostream &operator<<(std::ostream &os, const GioString &rhs);
    friend std::istream &operator>>(std::istream &is, GioString &rhs);
private:
    char *gString;
    int age;
public:
    GioString();
    GioString(const char *str);

    ~GioString();

    GioString(const GioString &source);
    GioString(GioString &&source);
};



#endif // _GIOSTRINGCLASS_