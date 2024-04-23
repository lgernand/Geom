#include <iostream>
#include "olcUtil_Geometry2D.h"
#include "olcPixelGameEngine.h"

class Geom : public olc::PixelGameEngine
{
public:
    Geom()
    {
        sAppName = "Geom";
    }

    bool OnUserCreate() override
    {
        return true;
    }

    bool OnUserUpdate(float fElapsedTime) override
    {
        Clear(olc::GREY);

        return true;
    }
};

int main()
{
    Geom geom;
    if (geom.Construct(256, 240, 4, 4))
        geom.Start();
    return 0;
}
