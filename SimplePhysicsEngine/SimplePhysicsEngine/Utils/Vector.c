#include "Vector.h"
#include <math.h>

Vec2 Vec2_Set(float x, float y)
{
    Vec2 v = { v.x = x, v.y = y };
    return v;
}

Vec2 Vec2_Perp(Vec2 v)
{
    return Vec2_Set(v.y, -v.x);
}

// TODO - Complétez le fichier

Vec2 Vec2_Add(Vec2 v1, Vec2 v2)
{
    v1.x += v2.x;
    v1.y += v2.y;
    return v1;
}

Vec2 Vec2_Sub(Vec2 v1, Vec2 v2)
{
    v1.x -= v2.x;
    v1.y -= v2.y;
    return v1;
}

Vec2 Vec2_Scale(Vec2 v, float s)
{
    v.x *= s;
    v.y *= s;
    return v;
}

float Vec2_Length(Vec2 v)
{
    float len = sqrtf(pow(v.x, 2) + pow(v.y, 2));
    return len;
}

Vec2 Vec2_Normalize(Vec2 v)
{
    float len = Vec2_Length(v);
    v.x /= len;
    v.y /= len;
    return v;
}

float Vec2_Distance(Vec2 v1, Vec2 v2)
{
    float distance = sqrtf(pow((v2.x - v1.x), 2) + pow((v2.y - v1.y), 2));
    return distance;
}