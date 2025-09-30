#ifndef OBJECT_H
#define OBJECT_H
#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <ctime>

namespace dsq{

class Object{
    public:
        virtual std::string toString() const = 0;
        friend std::ostream & operator<< (std::ostream & out, const Object &obj){
            out << obj.toString();
            return out;
        }
};

#endif
}
