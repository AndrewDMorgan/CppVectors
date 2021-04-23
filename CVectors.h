#include <iostream>
#include <math.h>
#include <cmath>


class float3
{
    public:
        float3() = default;

        float x;
        float y;
        float z;

        float3 (float x, float y, float z) {}

        float3 (float x)
        {
            y = x;
            z = x;
        }
        
        bool operator == (float3 vector)
        {
            return vector.x == x && vector.y == y && vector.z == z;
        }

        bool operator >= (float3 vector)
        {
            return vector.x >= x && vector.y >= y && vector.z >= z;
        }

        bool operator <= (float3 vector)
        {
            return vector.x <= x && vector.y <= y && vector.z <= z;
        }

        bool operator < (float3 vector)
        {
            return vector.x < x && vector.y < y && vector.z < z;
        }

        bool operator > (float3 vector)
        {
            return vector.x > x && vector.y > y && vector.z > z;
        }

        bool operator != (float3 vector)
        {
            return vector.x != x && vector.y != y && vector.z != z;
        }

        float3 operator % (float V)
        {
            int v = (int) V;
            return float3((int) x % v, (int) y % v, (int) z % v);
        }

        float3 operator % (float3 vector)
        {
            return float3((int) x + (int) vector.x, (int) y + (int) vector.y, (int) z + (int) vector.z);
        }

        float3 operator + (float v)
        {
            return float3(x + v, y + v, z + v);
        }

        float3 operator + (float3 vector)
        {
            return float3(x + vector.x, y + vector.y, z + vector.z);
        }

        float3 operator - (float v)
        {
            return float3(x - v, y - v, z - v);
        }

        float3 operator - (float3 vector)
        {
            return float3(x - vector.x, y - vector.y, z - vector.z);
        }

        float3 operator * (float v)
        {
            return float3(x * v, y * v, z * v);
        }

        float3 operator * (float3 vector)
        {
            return float3(x * vector.x, y * vector.y, z * vector.z);
        }

        float3 operator / (float v)
        {
            return float3(x / v, y / v, z / v);
        }

        float3 operator / (float3 vector)
        {
            return float3(x / vector.x, y / vector.y, z / vector.z);
        }
        float3 operator += (float v)
        {
            return float3(x + v, y + v, z + v);
        }

        float3 operator += (float3 vector)
        {
            return float3(x + vector.x, y + vector.y, z + vector.z);
        }

        float3 operator -= (float v)
        {
            return float3(x - v, y - v, z - v);
        }

        float3 operator -= (float3 vector)
        {
            return float3(x - vector.x, y - vector.y, z - vector.z);
        }

        float3 operator *= (float v)
        {
            return float3(x * v, y * v, z * v);
        }

        float3 operator *= (float3 vector)
        {
            return float3(x * vector.x, y * vector.y, z * vector.z);
        }

        float3 operator /= (float v)
        {
            return float3(x / v, y / v, z / v);
        }

        float3 operator /= (float3 vector)
        {
            return float3(x / vector.x, y / vector.y, z / vector.z);
        }
};

int print(float3 vector)
{
    std::cout<<vector.x<<","<<vector.y<<","<<vector.z<<std::endl;
    return 0;
}

float dot(float3 vector1, float3 vector2)
{
    return vector1.x * vector2.x + vector1.y * vector2.y + vector1.z * vector2.z;
}

float dot(float3 vector)
{
    return vector.x * vector.x + vector.y * vector.y + vector.z * vector.z;
}

float3 round(float3 vector)
{
    return float3(round(vector.x), round(vector.y), round(vector.z));
}

float length(float3 vector)
{
    return sqrt(dot(vector));
}

float length(float3 vector1, float3 vector2)
{
    return length(vector1 - vector2);
}

float3 normalize(float3 vector)
{
    return vector / length(vector);
}

float3 cross(float3 vector1, float3 vector2)
{
    float v1 = vector1.y * vector2.z - vector1.z * vector2.y;
    float v2 = vector1.z * vector2.x - vector1.x * vector2.z;
    float v3 = vector1.x * vector2.y - vector1.y * vector2.x;
    return float3(v1, v2, v3);
}

float fract(float v)
{
    return v - floor(v);
}

float3 fract(float3 vector)
{
    return float3(fract(vector.x), fract(vector.y), fract(vector.z));
}

float3 floor(float3 vector)
{
    return float3(floor(vector.x), floor(vector.y), floor(vector.z));
}

float3 ceil(float3 vector)
{
    return float3(ceil(vector.x), ceil(vector.y), ceil(vector.z));
}

float min(float v1, float v2)
{
    if (v1 < v2)
    {
        return v1;
    }
    else
    {
        return v2;
    }
}

float3 min(float3 vector, float v)
{
    return float3(min(vector.x, v), min(vector.y, v), min(vector.z, v));
}

float max(float v1, float v2)
{
    if (v1 > v2)
    {
        return v1;
    }
    else
    {
        return v2;
    }
}

float3 max(float3 vector, float v)
{
    return float3(max(vector.x, v), max(vector.y, v), max(vector.z, v));
}

float clamp(float v, float l, float r)
{
    return max(min(v, r), l);
}

float3 clamp(float3 vector, float l, float r)
{
    return float3(clamp(vector.x, l, r), clamp(vector.y, l, r), clamp(vector.z, l, r));
}

float clamp01(float v)
{
    return max(min(v, 1), 0);
}

float3 clamp01(float3 vector)
{
    return float3(clamp01(vector.x), clamp01(vector.y), clamp01(vector.z));
}

float lerp(float v1, float v2, float k)
{
    k = clamp01(k);
    return v1 * (1 - k) + v2 * k;
}

float3 lerp(float3 vector1, float3 vector2, float k)
{
    k = clamp(k, 0, 1);
    float k2 = 1 - k;
    return float3(vector1.x * k2 + vector2.x * k, vector1.y * k2 + vector2.y * k, vector1.z * k2 + vector2.z * k);
}

float smoothstep(float k)
{
    k = clamp01(k);
    return k * k * (3 - 2 * k);
}

float3 smoothstep(float3 vector)
{
    return float3(smoothstep(vector.x), smoothstep(vector.y), smoothstep(vector.z));
}

float map(float v, float cl, float cr, float nl, float nr)
{
    float nv = v - cl;
    nv = (nr - nl) / (cr - cl);
    nv += nl;
    return nv;
}

float3 map(float3 vector, float cl, float cr, float nl, float nr)
{
    return float3(map(vector.x, cl, cr, nl, nr), map(vector.y, cl, cr, nl, nr), map(vector.z, cl, cr, nl, nr));
}

float3 map(float3 vector, float3 cl, float3 cr, float3 nl, float3 nr)
{
    return float3(map(vector.x, cl.x, cr.x, nl.x, nr.x), map(vector.y, cl.y, cr.y, nl.y, nr.y), map(vector.z, cl.z, cr.z, nl.z, nr.z));
}

float3 pow(float3 vector, float v)
{
    return float3(std::pow(vector.x, v), std::pow(vector.y, v), std::pow(vector.z, v));
}

float3 pow(float3 vector1, float3 vector2)
{
    return float3(std::pow(vector1.x, vector2.x), std::pow(vector1.y, vector2.y), std::pow(vector1.z, vector2.z));
}

float3 abs(float3 vector)
{
    return float3(abs(vector.x), abs(vector.y), abs(vector.z));
}

