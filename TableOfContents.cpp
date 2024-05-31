#include <iostream>
#include <cstdlib>
#include "Sphere.hpp"

using namespace std;

void introduction();
void chapters();
void properties();
void volumeSphere();
int choice = 0;


void introduction(void)
{
    cout << "Welcome to version 1.0 of Foo Physics! " 
    "In this community project, our goal is to provide an interactive experience for learners "
    "and developers to expand their knowledge and expertise in various scientific and " 
    "mathematical concepts. " << endl;
    cout << "The structure of this program is designed for continuous installments"
    " of new features and concepts." << endl;
}

void chapters(void)
{
    do
    {
        cout << "Table of Contents: " << endl;
        cout << "Chapter 1 - Geometric Properties" << endl;
        cout << "Chapter 2 - Volume of a Sphere" << endl;
        cout << "Chapter 3 - TBD" << endl;
        cout << "Chapter 4 - TBD" << endl;
        cout << "Chapter 5 - TBD" << endl;
        cout << "Please select a chapter (1/2/3/4/5) or 6 to quit: ";
        cin >> choice;
        cout << endl;

        switch(choice)
        {
            case(1):
                properties();
                break;

            case(2):
                volumeSphere();
                break;

            case(3):
                cout << "Welcome to Chapter 3! To be continued..." << endl << endl;
                break;

            case(4):
                cout << "Welcome to Chapter 4! To be continued..." << endl << endl;
                break;
            
            case(5):
                cout << "Welcome to Chapter 5! To be continued..." << endl << endl;
                break;

        }
    }
    while (choice != 6);
}

void properties(void)
{
    cout << "This chapter details the fundamental properties of Foo physics." << endl;
    cout << "Geometric Shapes - Key Terms" << endl << endl;
    cout << "Radius: a line segment from the center of any circular object to its outermost edge or boundary" << endl << endl;
    cout << "Diameter: a line segment that passes through the center of a circle, whose"
        "endpoints are on the circumference of the circle" << endl << endl;
    cout << "Circumference: the distance around the boundary of a circle" << endl << endl;
    cout << "Area: the total space taken up by a flat (2D) surface or object" << endl << endl;
    cout << "Volume: the space occupied  within the boundaries of a 3D object" << endl << endl;
    cout << "_______________________________________________________________" << endl;
    cout << "_______________________________________________________________" << endl;
    cout << "..." << endl;
    cout << "_______________________________________________________________" << endl << endl;

}

void volumeSphere(void)
{
    char answer;
    float radius;
    char again = 'y';
    cout << "In this chapter, you will learn how to use the radius of a sphere to determine its volume." << endl;
    cout << "Refer back to Chapter 1 for clarification on properties of 3D objects." << endl;
        cout << "Would you like to jump back to Chapter 1? (y/n): ";
        cin >> answer;
        cout << endl;
        if(answer == 'y')
        {
            properties();
            cout << "Now, back to volume..." << endl << endl;
        }
    cout << "The volume equation is as follows: " << endl;
    cout << "Volume = (4/3)*pi*(radius^3)" << endl;
    cout << "Volume is mesaured in cubic units because a sphere is 3-dimensional, " 
    " where the x-axis, y-axis, and z-axis define its shape." << endl;
    cout << "The 4/3 is derived from the idea that the volume of a sphere is roughly "
    "equal to the volume of a cylinder minus the volume of a cone." << endl;
    cout << "The volume depends on the radius of the sphere, since if we take the"
    "cross-section of the sphere, it is a circle." << endl;
    cout << "Now, let's see this formula in action!" << endl;

    do
    {
        cout << "Enter a radius value: ";
        cin >> radius;
        //Create sphere object
        Sphere newSphere;
        float volume = newSphere.getVolume(radius);
        cout << "Volume of a sphere with radius " << radius << " = " << volume << endl;
        cout << "Would you like to try again? (y/n): ";
        cin >> again;
    }
    while (again == 'y');

}

int main(int argc, char** argv) 
{
    introduction();
    chapters();
    return 0;
}