#Specify the target
all: foo_physics
#Specify the object files that the target depends on
# Also specify the object files needed to create the executable
foo_physics: TableOfContents.o Sphere.o
	g++ TableOfContents.o Sphere.o -o foo_physics

# Specify how the object files should be created from source files
TableOfContents.o: Sphere.hpp
	g++ -c TableOfContents.cpp

Sphere.o: Sphere.hpp Sphere.cpp
	g++ -c Sphere.cpp
# Specify the object files and executables that are generated
# and need to be removed to re-compile the whole thing
clean:
	rm -f *.o foo_physics