#include <iostream>
#include "GioString.h"

using namespace std;


int main() {
    cout << "** GIO STRING CLASS **" << endl;

    GioString Giorgi {"GioRgi"};
    GioString Gela {Giorgi};

    cout << Giorgi << endl;
    cout << Gela << endl;



    return 0;
}