#pragma once
#include <map>
#include <vector>
using namespace std;
#include "album.h"
class store
{
    vector<album> albums;
    map<album, int> album_count;
    static const int DEFAULT_ALBUM_COUNT = 10;

public:
    store();
    void load(string &db_path);
    void run(int argc, char *argv[]);
    void add_album(album &a);
};