#include <iostream>
#include "movies.h"

using namespace std;

int main()
{
    Movies my_movies;
    my_movies.add_movie("Gios istoriebi", "G", 54);
    my_movies.list_movies();
    my_movies.add_one_watch("Gios istoriebi");

    return 0;
}