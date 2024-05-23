#pragma once
#include "Punct.h"

using namespace std;

class Cerc :
    public Punct
{
protected: 
    int raza;
public:

    Cerc(int r=0, int x = 0, int y = 0) :Punct{ x,y }, raza { r }
    {

    }

    virtual ~Cerc() override;


    virtual void   Print() override;
    virtual double GetArea() override;
    virtual void   Save(ostream& file) override;
    virtual void   Load(istream& file) override;
};

