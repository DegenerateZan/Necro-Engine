#!/bin/bash 

# to get rid of the debug console just add flagship ( -Wl,--subsystem,windows )
# made by Degenerate Zan 2/12/2021
# WARNING!! Different Distro require different method of installing Dependency, Please Check the Official Raylib Github
# for more detail information
echo !Deleting previous executable
cd build
rm game
cd ..

echo !Begin Build the source file

g++ main.cpp -o build\game -O1 -Wall -Wno-missing-braces -I include/ -L lib/ -lraylib -lopengl32 -lgdi32 -lwinmm
cd build
./game
cd ..