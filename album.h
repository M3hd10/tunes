#pragma once
#include <string>
#include <vector>
using namespace std;

#include "track.h"
class album
{
    uint32_t id;
    string name;
    string singer;
    double price;
    vector<track> tracks;
    friend istream &operator>>(istream &in, album &al);
    friend ostream &operator<<(ostream &out, const album &al);

public:
    album();
    ~album();
    void add_track(track &tr);
    uint32_t get_albumid();
};

istream &operator>>(istream &in, album &al);
ostream &operator<<(ostream &out, const album &al);