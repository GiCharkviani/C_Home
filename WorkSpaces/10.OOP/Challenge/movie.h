#ifndef _MOVIE_H_
#define _MOVIE_H_
#include <string>

using namespace std;

class Movie
{
// Friend
friend class Movies;

public:
    // Constructor
    Movie(string name_val = "None", string rating_val = 0, int watched_val = 0);

private:
    string name;
    string rating;
    int watched;
};

#endif