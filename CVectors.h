#include <iostream>
#include <math.h>
#include <cmath>


// a vector2 type for floats
class float2
{
    public:
        // intializing the veriables
        float2() = default;

        float x;
        float y;

        // the constructor(s)
        float2 (float x, float y) {}

        float2 (float x)
        {
            y = x;
        }
        
        // overloading the operators to make it easier to use the vectors
        bool operator == (float2 vector)
        {
            return vector.x == x && vector.y == y;
        }

        bool operator >= (float2 vector)
        {
            return vector.x >= x && vector.y >= y;
        }

        bool operator <= (float2 vector)
        {
            return vector.x <= x && vector.y <= y;
        }

        bool operator < (float2 vector)
        {
            return vector.x < x && vector.y < y;
        }

        bool operator > (float2 vector)
        {
            return vector.x > x && vector.y > y;
        }

        bool operator != (float2 vector)
        {
            return vector.x != x && vector.y != y;
        }

        float2 operator % (float V)
        {
            int v = (int) V;
            return float2((int) x % v, (int) y % v);
        }

        float2 operator % (float2 vector)
        {
            return float2((int) x % (int) vector.x, (int) y % (int) vector.y);
        }

        float2 operator %= (float V)
        {
            int v = (int) V;
            return float2((int) x % v, (int) y % v);
        }

        float2 operator %= (float2 vector)
        {
            return float2((int) x % (int) vector.x, (int) y % (int) vector.y);
        }

        float2 operator + (float v)
        {
            return float2(x + v, y + v);
        }

        float2 operator + (float2 vector)
        {
            return float2(x + vector.x, y + vector.y);
        }

        float2 operator - (float v)
        {
            return float2(x - v, y - v);
        }

        float2 operator - (float2 vector)
        {
            return float2(x - vector.x, y - vector.y);
        }

        float2 operator * (float v)
        {
            return float2(x * v, y * v);
        }

        float2 operator * (float2 vector)
        {
            return float2(x * vector.x, y * vector.y);
        }

        float2 operator / (float v)
        {
            return float2(x / v, y / v);
        }

        float2 operator / (float2 vector)
        {
            return float2(x / vector.x, y / vector.y);
        }
        float2 operator += (float v)
        {
            return float2(x + v, y + v);
        }

        float2 operator += (float2 vector)
        {
            return float2(x + vector.x, y + vector.y);
        }

        float2 operator -= (float v)
        {
            return float2(x - v, y - v);
        }

        float2 operator -= (float2 vector)
        {
            return float2(x - vector.x, y - vector.y);
        }

        float2 operator *= (float v)
        {
            return float2(x * v, y * v);
        }

        float2 operator *= (float2 vector)
        {
            return float2(x * vector.x, y * vector.y);
        }

        float2 operator /= (float v)
        {
            return float2(x / v, y / v);
        }

        float2 operator /= (float2 vector)
        {
            return float2(x / vector.x, y / vector.y);
        }
};

// a vector3 type for floats
class float3
{
    public:
        // initializing the vector3 veriables
        float3() = default;

        float x;
        float y;
        float z;

        // the constructor(s)
        float3 (float x, float y, float z) {}

        float3 (float x)
        {
            y = x;
            z = x;
        }

        float3 (float x, float2 vector)
        {
            y = vector.x;
            z = vector.y;
        }

        float3 (float2 vector, float z)
        {
            x = vector.x;
            y = vector.y;
        }
        
        // overloading the operators
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
            return float3((int) x % (int) vector.x, (int) y % (int) vector.y, (int) z % (int) vector.z);
        }

        float3 operator %= (float V)
        {
            int v = (int) V;
            return float3((int) x % v, (int) y % v, (int) z % v);
        }

        float3 operator %= (float3 vector)
        {
            return float3((int) x % (int) vector.x, (int) y % (int) vector.y, (int) z % (int) vector.z);
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

// a vector4 class for floats
class float4
{
    public:
        // initializing veriables
        float4() = default;

        float x;
        float y;
        float z;
        float w;

        // the constructor(s)
        float4 (float x, float y, float z, float w) {}

        float4 (float x)
        {
            y = x;
            z = x;
            w = x;
        }

        float4 (float x, float y)
        {
            z = x;
            w = y;
        }

        float4 (float2 vector)
        {
            x = vector.x;
            y = vector.y;
            z = x;
            w = y;
        }

        float4 (float2 vector, float z, float w)
        {
            x = vector.x;
            y = vector.y;
        }

        float4 (float x, float y, float2 vector)
        {
            z = vector.x;
            w = vector.y;
        }

        float4 (float x, float2 vector, float w)
        {
            y = vector.x;
            z = vector.y;
        }

        float4 (float3 vector, float w)
        {
            x = vector.x;
            y = vector.y;
            z = vector.z;
        }

        float4 (float x, float3 vector)
        {
            y = vector.x;
            z = vector.y;
            w = vector.z;
        }

        float4 (float2 vector1, float2 vector2)
        {
            x = vector1.x;
            y = vector2.y;
            z = vector2.x;
            w = vector2.y;
        }
        
        // overloading the operators
        bool operator == (float4 vector)
        {
            return vector.x == x && vector.y == y && vector.z == z && vector.w == w;
        }

        bool operator >= (float4 vector)
        {
            return vector.x >= x && vector.y >= y && vector.z >= z && vector.w >= w;
        }

        bool operator <= (float4 vector)
        {
            return vector.x <= x && vector.y <= y && vector.z <= z && vector.w <= w;
        }

        bool operator < (float4 vector)
        {
            return vector.x < x && vector.y < y && vector.z < z && vector.w < w;
        }

        bool operator > (float4 vector)
        {
            return vector.x > x && vector.y > y && vector.z > z && vector.w > w;
        }

        bool operator != (float4 vector)
        {
            return vector.x != x && vector.y != y && vector.z != z && vector.w != w;
        }

        float4 operator % (float V)
        {
            int v = (int) V;
            return float4((int) x % v, (int) y % v, (int) z % v, (int) w % v);
        }

        float4 operator % (float4 vector)
        {
            return float4((int) x % (int) vector.x, (int) y % (int) vector.y, (int) z % (int) vector.z, (int) w % (int) vector.w);
        }

        float4 operator %= (float V)
        {
            int v = (int) V;
            return float4((int) x % v, (int) y % v, (int) z % v, (int) w % v);
        }

        float4 operator %= (float4 vector)
        {
            return float4((int) x % (int) vector.x, (int) y % (int) vector.y, (int) z % (int) vector.z, (int) w % (int) vector.w);
        }

        float4 operator + (float v)
        {
            return float4(x + v, y + v, z + v, w + v);
        }

        float4 operator + (float4 vector)
        {
            return float4(x + vector.x, y + vector.y, z + vector.z, w + vector.w);
        }

        float4 operator - (float v)
        {
            return float4(x - v, y - v, z - v, w - v);
        }

        float4 operator - (float4 vector)
        {
            return float4(x - vector.x, y - vector.y, z - vector.z, w - vector.w);
        }

        float4 operator * (float v)
        {
            return float4(x * v, y * v, z * v, w * v);
        }

        float4 operator * (float4 vector)
        {
            return float4(x * vector.x, y * vector.y, z * vector.z, w * vector.w);
        }

        float4 operator / (float v)
        {
            return float4(x / v, y / v, z / v, w / v);
        }

        float4 operator / (float4 vector)
        {
            return float4(x / vector.x, y / vector.y, z / vector.z, w / vector.w);
        }
        float4 operator += (float v)
        {
            return float4(x + v, y + v, z + v, w + v);
        }

        float4 operator += (float4 vector)
        {
            return float4(x + vector.x, y + vector.y, z + vector.z, w + vector.w);
        }

        float4 operator -= (float v)
        {
            return float4(x - v, y - v, z - v, w - v);
        }

        float4 operator -= (float4 vector)
        {
            return float4(x - vector.x, y - vector.y, z - vector.z, w - vector.w);
        }

        float4 operator *= (float v)
        {
            return float4(x * v, y * v, z * v, w * v);
        }

        float4 operator *= (float4 vector)
        {
            return float4(x * vector.x, y * vector.y, z * vector.z, w * vector.w);
        }

        float4 operator /= (float v)
        {
            return float4(x / v, y / v, z / v, w / v);
        }

        float4 operator /= (float4 vector)
        {
            return float4(x / vector.x, y / vector.y, z / vector.z, w / vector.w);
        }
};

// a debugging function to see the value of the vecotr
int print(float4 vector)
{
    std::cout<<vector.x<<","<<vector.y<<","<<vector.z<<","<<vector.w<<std::endl;
    return 0;
}

int print(float3 vector)
{
    std::cout<<vector.x<<","<<vector.y<<","<<vector.z<<std::endl;
    return 0;
}

int print(float2 vector)
{
    std::cout<<vector.x<<","<<vector.y<<std::endl;
    return 0;
}

// two dot product functions for 1 - 2 vectors
float dot(float4 vector1, float4 vector2)
{
    return vector1.x * vector2.x + vector1.y * vector2.y + vector1.z * vector2.z + vector1.w * vector2.w;
}

float dot(float4 vector)
{
    return vector.x * vector.x + vector.y * vector.y + vector.z * vector.z + vector.w * vector.w;
}

float dot(float3 vector1, float3 vector2)
{
    return vector1.x * vector2.x + vector1.y * vector2.y + vector1.z * vector2.z;
}

float dot(float3 vector)
{
    return vector.x * vector.x + vector.y * vector.y + vector.z * vector.z;
}

float dot(float2 vector1, float2 vector2)
{
    return vector1.x * vector2.x + vector1.y * vector2.y;
}

float dot(float2 vector)
{
    return vector.x * vector.x + vector.y * vector.y;
}

// vector rounding functions
float4 round(float4 vector)
{
    return float4(round(vector.x), round(vector.y), round(vector.z), round(vector.w));
}

float3 round(float3 vector)
{
    return float3(round(vector.x), round(vector.y), round(vector.z));
}

float2 round(float2 vector)
{
    return float2(round(vector.x), round(vector.y));
}

// length functions for vectors (1 - 2 vectors)
float length(float4 vector)
{
    return sqrt(dot(vector));
}

float length(float3 vector)
{
    return sqrt(dot(vector));
}

float length(float2 vector)
{
    return sqrt(dot(vector));
}

float length(float4 vector1, float4 vector2)
{
    return length(vector1 - vector2);
}

float length(float3 vector1, float3 vector2)
{
    return length(vector1 - vector2);
}

float length(float2 vector1, float2 vector2)
{
    return length(vector1 - vector2);
}

// normalizing vector types
float4 normalize(float4 vector)
{
    return vector / length(vector);
}

float3 normalize(float3 vector)
{
    return vector / length(vector);
}

float2 normalize(float2 vector)
{
    return vector / length(vector);
}

// the cross product
// add a 2D and 4D cross product
float3 cross(float3 vector1, float3 vector2)
{
    float v1 = vector1.y * vector2.z - vector1.z * vector2.y;
    float v2 = vector1.z * vector2.x - vector1.x * vector2.z;
    float v3 = vector1.x * vector2.y - vector1.y * vector2.x;
    return float3(v1, v2, v3);
}

// a fract function for floats and vectors
float fract(float v)
{
    return v - floor(v);
}

float4 fract(float4 vector)
{
    return float4(fract(vector.x), fract(vector.y), fract(vector.z), fract(vector.w));
}

float3 fract(float3 vector)
{
    return float3(fract(vector.x), fract(vector.y), fract(vector.z));
}

float2 fract(float2 vector)
{
    return float2(fract(vector.x), fract(vector.y));
}

// a vector floor function
float4 floor(float4 vector)
{
    return float4(floor(vector.x), floor(vector.y), floor(vector.z), floor(vector.w));
}

float3 floor(float3 vector)
{
    return float3(floor(vector.x), floor(vector.y), floor(vector.z));
}

float2 floor(float2 vector)
{
    return float2(floor(vector.x), floor(vector.y));
}

// a vector veil function
float4 ceil(float4 vector)
{
    return float4(ceil(vector.x), ceil(vector.y), ceil(vector.z), ceil(vector.w));
}

float3 ceil(float3 vector)
{
    return float3(ceil(vector.x), ceil(vector.y), ceil(vector.z));
}

float2 ceil(float2 vector)
{
    return float2(ceil(vector.x), ceil(vector.y));
}

// float min and vector min functions
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

float4 min(float4 vector, float v)
{
    return float4(min(vector.x, v), min(vector.y, v), min(vector.z, v), min(vector.w, v));
}

float3 min(float3 vector, float v)
{
    return float3(min(vector.x, v), min(vector.y, v), min(vector.z, v));
}

float2 min(float2 vector, float v)
{
    return float2(min(vector.x, v), min(vector.y, v));
}

// float max and vector max functions
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

float4 max(float4 vector, float v)
{
    return float4(max(vector.x, v), max(vector.y, v), max(vector.z, v), max(vector.w, v));
}

float3 max(float3 vector, float v)
{
    return float3(max(vector.x, v), max(vector.y, v), max(vector.z, v));
}

float2 max(float2 vector, float v)
{
    return float2(max(vector.x, v), max(vector.y, v));
}

// clamp functions for vectors and floats
float clamp(float v, float l, float r)
{
    return max(min(v, r), l);
}

float4 clamp(float4 vector, float l, float r)
{
    return float4(clamp(vector.x, l, r), clamp(vector.y, l, r), clamp(vector.z, l, r), clamp(vector.w, l, r));
}

float3 clamp(float3 vector, float l, float r)
{
    return float3(clamp(vector.x, l, r), clamp(vector.y, l, r), clamp(vector.z, l, r));
}

float2 clamp(float2 vector, float l, float r)
{
    return float2(clamp(vector.x, l, r), clamp(vector.y, l, r));
}

// clamp functions for floats and vectors that clamps the value(s) between 0 and 1
float clamp01(float v)
{
    return max(min(v, 1), 0);
}

float4 clamp01(float4 vector)
{
    return float4(clamp01(vector.x), clamp01(vector.y), clamp01(vector.z), clamp01(vector.w));
}

float3 clamp01(float3 vector)
{
    return float3(clamp01(vector.x), clamp01(vector.y), clamp01(vector.z));
}

float2 clamp01(float2 vector)
{
    return float2(clamp01(vector.x), clamp01(vector.y));
}

// mixing/linear interpolation functions for vectors and floats
float lerp(float v1, float v2, float k)
{
    k = clamp01(k);
    return v1 * (1 - k) + v2 * k;
}

float4 lerp(float4 vector1, float4 vector2, float k)
{
    k = clamp(k, 0, 1);
    float k2 = 1 - k;
    return float4(vector1.x * k2 + vector2.x * k, vector1.y * k2 + vector2.y * k, vector1.z * k2 + vector2.z * k, vector1.w * k2 + vector2.w * k);
}

float3 lerp(float3 vector1, float3 vector2, float k)
{
    k = clamp(k, 0, 1);
    float k2 = 1 - k;
    return float3(vector1.x * k2 + vector2.x * k, vector1.y * k2 + vector2.y * k, vector1.z * k2 + vector2.z * k);
}

float2 lerp(float2 vector1, float2 vector2, float k)
{
    k = clamp(k, 0, 1);
    float k2 = 1 - k;
    return float2(vector1.x * k2 + vector2.x * k, vector1.y * k2 + vector2.y * k);
}


// smoothstep functions for floats and vectors
float smoothstep(float k)
{
    k = clamp01(k);
    return k * k * (3 - 2 * k);
}

float4 smoothstep(float4 vector)
{
    return float4(smoothstep(vector.x), smoothstep(vector.y), smoothstep(vector.z), smoothstep(vector.w));
}

float3 smoothstep(float3 vector)
{
    return float3(smoothstep(vector.x), smoothstep(vector.y), smoothstep(vector.z));
}

float2 smoothstep(float2 vector)
{
    return float2(smoothstep(vector.x), smoothstep(vector.y));
}

// remapping functions for vectors and floats
float map(float v, float cl, float cr, float nl, float nr)
{
    float nv = v - cl;
    nv = (nr - nl) / (cr - cl);
    nv += nl;
    return nv;
}

float4 map(float4 vector, float cl, float cr, float nl, float nr)
{
    return float4(map(vector.x, cl, cr, nl, nr), map(vector.y, cl, cr, nl, nr), map(vector.z, cl, cr, nl, nr), map(vector.w, cl, cr, nl, nr));
}

float3 map(float3 vector, float cl, float cr, float nl, float nr)
{
    return float3(map(vector.x, cl, cr, nl, nr), map(vector.y, cl, cr, nl, nr), map(vector.z, cl, cr, nl, nr));
}

float2 map(float2 vector, float cl, float cr, float nl, float nr)
{
    return float2(map(vector.x, cl, cr, nl, nr), map(vector.y, cl, cr, nl, nr));
}

float4 map(float4 vector, float4 cl, float4 cr, float4 nl, float4 nr)
{
    return float4(map(vector.x, cl.x, cr.x, nl.x, nr.x), map(vector.y, cl.y, cr.y, nl.y, nr.y), map(vector.z, cl.z, cr.z, nl.z, nr.z), map(vector.w, cl.w, cr.w, nl.w, nr.w));
}

float3 map(float3 vector, float3 cl, float3 cr, float3 nl, float3 nr)
{
    return float3(map(vector.x, cl.x, cr.x, nl.x, nr.x), map(vector.y, cl.y, cr.y, nl.y, nr.y), map(vector.z, cl.z, cr.z, nl.z, nr.z));
}

float2 map(float2 vector, float2 cl, float2 cr, float2 nl, float2 nr)
{
    return float2(map(vector.x, cl.x, cr.x, nl.x, nr.x), map(vector.y, cl.y, cr.y, nl.y, nr.y));
}

// power functions for vectors
float4 pow(float4 vector, float v)
{
    return float4(std::pow(vector.x, v), std::pow(vector.y, v), std::pow(vector.z, v), std::pow(vector.w, v));
}

float3 pow(float3 vector, float v)
{
    return float3(std::pow(vector.x, v), std::pow(vector.y, v), std::pow(vector.z, v));
}

float2 pow(float2 vector, float v)
{
    return float2(std::pow(vector.x, v), std::pow(vector.y, v));
}

float4 pow(float4 vector1, float4 vector2)
{
    return float4(std::pow(vector1.x, vector2.x), std::pow(vector1.y, vector2.y), std::pow(vector1.z, vector2.z), std::pow(vector1.w, vector2.w));
}

float3 pow(float3 vector1, float3 vector2)
{
    return float3(std::pow(vector1.x, vector2.x), std::pow(vector1.y, vector2.y), std::pow(vector1.z, vector2.z));
}

float2 pow(float2 vector1, float2 vector2)
{
    return float2(std::pow(vector1.x, vector2.x), std::pow(vector1.y, vector2.y));
}

// vector absolute value functions
float4 abs(float4 vector)
{
    return float4(abs(vector.x), abs(vector.y), abs(vector.z), abs(vector.w));
}

float3 abs(float3 vector)
{
    return float3(abs(vector.x), abs(vector.y), abs(vector.z));
}

float2 abs(float2 vector)
{
    return float2(abs(vector.x), abs(vector.y));
}

// distance functions
class dists
{
    // distance to a point
    float point(float3 p1, float3 p2)
    {
        return length(p1, p2);
    }

    float point(float2 p1, float2 p2)
    {
        return length(p1, p2);
    }

    float point(float4 p1, float4 p2)
    {
        return length(p1, p2);
    }

    // distance to a circle/sphere/hyper sphere
    float hyperSphere(float4 p1, float4 p2, float r)
    {
        return length(p1, p2) - r;
    }

    float sphere(float3 p1, float3 p2, float r)
    {
        return length(p1, p2) - r;
    }

    float circle(float2 p1, float2 p2, float r)
    {
        return length(p1, p2) - r;
    }
};

