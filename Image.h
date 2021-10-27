#include "CVectors.h"
#include <iostream>
#include <string>


namespace Image
{
    // a class for rgb images
    class Image
    {
        private:
            float3* data;

        public:
            float2 size;

            Image() = default;
            Image(float2 size_)
            {
                size = size_;
                data = new float3[(int) size.x * (int) size.y];
            }

            // returning or modifing the info on the image at an index
            float3 &operator [] (float2 index)
            {
                return data[(int) index.x + (int) (index.y * size.x)];
            }

            float3 &operator () (float2 index)
            {
                return data[(int) index.x + (int) (index.y * size.x)];
            }

            // wrting the image to a file
            void write(std::string file)
            {
                std::string str = "";
                std::string vectorString;
                for (int x = 0; x < size.x; x++)
                {
                    for (int y = 0; y < size.y; y++)
                    {
                        // adding a vector
                        vectorString = "";
                        vectorString += std::to_string(data[(int) (x + y * size.x)].x) + ",";
                        vectorString += std::to_string(data[(int) (x + y * size.x)].y) + ",";
                        vectorString += std::to_string(data[(int) (x + y * size.x)].z);
                        str += "(" + vectorString + ")";
                        // checking if a comma should be added
                        if (y < size.y - 1) str += ",";
                    }
                    // checking if a new line should be created
                    if (x < size.x - 1) str += "\n";
                }
                // writing the data to a file (for conversion to a png in python3)
                file::write(file + ".CVI", str);
            }

            ~Image()
            {
                delete data;
            }
    };

    // a class for gray scale images
    class ImageGray
    {
        private:
            float* data;

        public:
            float2 size;

            ImageGray() = default;
            ImageGray(float2 size_)
            {
                size = size_;
                data = new float[(int) size.x * (int) size.y];
            }

            // returning or modifing the info on the image at an index
            float &operator [] (float2 index)
            {
                return data[(int) index.x + (int) (index.y * size.x)];
            }

            float &operator () (float2 index)
            {
                return data[(int) index.x + (int) (index.y * size.x)];
            }

            // wrting the image to a file
            void write(std::string file)
            {
                std::string str = "";
                std::string vectorString;
                for (int x = 0; x < size.x; x++)
                {
                    for (int y = 0; y < size.y; y++)
                    {
                        // adding a vector
                        std::string v = std::to_string(data[(int) (x + y * size.x)]);
                        vectorString = v + "," + v + "," + v;
                        str += "(" + vectorString + ")";
                        // checking if a comma should be added
                        if (y < size.y - 1) str += ",";
                    }
                    // checking if a new line should be created
                    if (x < size.x - 1) str += "\n";
                }
                // writing the data to a file (for conversion to a png in python3)
                file::write(file + ".CVI", str);
            }

            ~ImageGray()
            {
                delete data;
            }
    };
    
    // reads a CVI file
    Image read(std::string file, float2 size)
    {
        Image image = Image(size);

        std::string d = file::read(file);
        std::string ch;
        int x = 0;
        int y = 0;

        std::string rgb = "";
        for (std::string::size_type i = 0; i < d.length(); i++)
        {
            ch = d[i];
            if (ch == ")")
            {
                x++;
                if (x >= size.x)
                {
                    x = 0;
                    y++;
                }
                
                std::string rgbChar;
                std::string rgbValue = "";
                
                int rgbCol[3];
                int rgbIndex = 0;
                for (std::string::size_type i = 1; i < rgb.length(); i++)
                {
                    rgbChar = rgb[i];
                    if (rgbChar == ",")
                    {
                        rgbCol[rgbIndex] = std::stoi(rgbValue);
                        rgbValue = "";
                        rgbIndex++;
                    }
                    else
                    {
                        rgbValue += rgbChar;
                    }
                }
                image[float2(x, y)] = float3(rgbCol[0], rgbCol[1], rgbCol[2]);
        
                rgb = "";
            }
            else rgb += ch;
        }
        return image;
    }
}
