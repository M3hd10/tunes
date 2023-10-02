#pragma once
#include <string>
using namespace std;
class track
{
    uint32_t album_code;
    uint32_t track_num;
    string name;
    uint32_t duration;
    double price;

public:
    track();
    ~track();
    friend istream &operator>>(istream &in, track &obj);
    friend ostream &operator<<(ostream &in, const track &obj);
    void set_album(uint32_t ac);
};

istream &operator>>(istream &in, track &obj);
ostream &operator<<(ostream &in, const track &obj);