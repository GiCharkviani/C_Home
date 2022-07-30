#ifndef _MYSTRINGINIO_
#define _MYSTRINGINIO_

class Mystring {
private:
    char *str;
public:
    Mystring();
    Mystring(const char *str);
    Mystring(const Mystring &source);
    Mystring(Mystring &&source); // Move constructor
    ~Mystring();

    Mystring &operator=(const Mystring &rhs);
    Mystring &operator=(Mystring &&rhs); // Move assignment

    void display() const;
    int get_length() const;
    const char *get_str() const;
};


#endif