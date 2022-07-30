#ifndef _MYSTRINGINIO_
#define _MYSTRINGINIO_

class Mystring {
private:
    char *str;
public:
    Mystring();
    Mystring(const char *str);
    Mystring(const Mystring &source);
    Mystring(Mystring &&source);
    ~Mystring();

    Mystring &operator=(const Mystring &rhs);
    Mystring &operator=(Mystring &&rhs);

    Mystring operator-() const; // make lowercase
    Mystring operator+(const Mystring &rhs) const; // concatenate
    bool operator==(const Mystring &rhs) const; // Equality

    void display() const;
    int get_length() const;
    const char *get_str() const;
};


#endif