#ifndef IBU H
#define IBU H

#include <iostream>
#include <vector>
using namespace std;
#include "anak.h"

//membuat class ibu  di file header ibu.h
class ibu {
public:
    string nama;
    vector<anak*> daftar_anak;
