:: to get rid of the debug console just add flagship ( -Wl,--subsystem,windows )
:: made by Degenerate Zan 2/12/2021
:: WARNING !! in order to run this batch script you must have The latest GCC installed with added to your :PATH:
echo !Deleting previous executable
cd build
del game.exe
cd ..

echo !Begin Build the source file

g++ main.cpp -o build\game.exe -O1 -Wall -Wno-missing-braces -I include/ -L lib/ -lraylib -lopengl32 -lgdi32 -lwinmm
cd build
.\game.exe
cd ..