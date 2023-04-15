default:
	g++ -c ../../src/*.cpp -std=c++14 -Wno-missing-braces -Wall -m64 -I ../../include
	g++ *.o -o ../../bin/debug/main -s -L ../../lib -lmingw32 -lSDL2main -lSDL2 -lSDL2_image -lSDL2_ttf -lSDL2_mixer
	./main.exe