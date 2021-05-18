# C++ Vectors And More

CVectors contains a vector3 type called float3 and multiple math functions such as a cross prduct. The vector type overloads multiple operators including comparison operators ("==", "!=", ">", ect...) allowing for math between float3's and floats. The math functions are as following, ceil, floor, abs, ect..., dot for 1 - 2 vectors, normalize, cross, round, length for 1 - 2 vectors, map (remaps the range and is for vectors and floats), pow, clamp (vectors and floats), clamp01 (vectors and floats), lerp (vectors and floats), smoothstep (vectors and floats), min (vectors and floats), max (vectors and floats), fract (vectors and floats), print (prints the xyz of the vector and is for debugging).

# How To Use

To use the functions and types in CVectors, you want to include the header file: #include "CVectors". After that, you will have acces to all the functions and types. Ensure that the file or a reference to the file is in the directory of the file including it.

# Updates

A possible float5 type may happen and possibly vectors for doubles and intagers (through templates). A 2D and 4D cross product are on the way. More functions may/will also come. Vector math between different types of vectors will also be added at some point (for example, float2 - float3 or float3 - float2). An example of how this would work can be see in the python3 version of CVectors, PyVectors: https://github.com/AndrewDMorgan/PyVectors-and-PyMarching/tree/main/PyVectors. More math operators will be supported in the Array class along with some of the functions (like lerp, floor, ect...). The array class (not Array but array) will also be gaining more ways to create Array types.
