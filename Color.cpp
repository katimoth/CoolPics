/**
 * Color.cpp
 *
 * EECS 183, Fall 2018
 * Project 4: CoolPics
 *
 * Evan Griffith and Tim Kao
 * evgriff; katimoth
 *
 * Coloring function definitions
 */

#include "Color.h"

// TODO: implement first checkRange, then two constructors, setRed, getRed,
//       setGreen, getGreen, setBlue, getBlue, read, write.

int Color::checkRange(int val) {
    
    return -1;
}

Color::Color() {
    
}

Color::Color(int redVal, int greenVal, int blueVal) {
    
}

void Color::setRed(int redVal) {
    
    
}

int Color::getRed() {
    
    return -1;
}

void Color::setGreen(int greenVal) {
    
    
}

int Color::getGreen() {
    
    return -1;
}

void Color::setBlue(int blueVal) {
    
    
}

void Color::read(istream& ins) {
    
    
}

void Color::write(ostream& outs) {
    
    
}


// Your code goes above this line.
// Don't change the implementations below!

istream& operator >> (istream& ins, Color& color)
{
   color.read(ins);
   return ins;
}

ostream& operator << (ostream& outs, Color color)
{
   color.write(outs);
   return outs;
}
