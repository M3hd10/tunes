#include <iostream>
using namespace std;

#include "store.h"
int main(int argc, char *argv[])
{
    store tunes;
    string db_path = "/home/shared/cpp/khosravi/assignments/9/albums.txt";
    tunes.load(db_path);
    tunes.run(argc, argv);
    return 0;
}