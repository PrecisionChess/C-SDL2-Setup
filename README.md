# C-SDL2-Setup
SDL2 along with SDL_ttf, SDL_image, and SDL_mixer are all you need to create a simple game in C++. This project template includes boilerplate code, and the basic project setup. 

# Requirements
g++ must be installed on your computer, to learn how to get the right version on windows, you can just watch [CoderGophers Tutorial](https://www.youtube.com/watch?v=KsG6dJlLBDw)
mingw32 or make will hopefully come with g++, so make sure to do that.
[Visual Studio Code](https://code.visualstudio.com/) should be installed on your computer.

# Building

## Debug Mode
To build this project in debug with all the errors showing, enter these commands:
```
cd bin/debug
make
```
or
```
cd bin/debug &&
mingw32-make
```
to build the project in ```debug``` mode.

## Release Mode
Sadly, the faster means more dangerous, since ```release``` mode doesn't have any ```-Wall``` flags, your project can exceed your memory and shut down your computer. Make sure to test in ```debug``` mode first.

To build this project:
```
cd bin/release
make
```
or
```
cd bin/release
mingw32-make
```
to build the project in the fastest mode to have optimizations.


# Credits
Thanks to [PolyMars](https://www.youtube.com/c/PolyMars) for some of the build code.
Thanks to [CoderGopher](https://www.youtube.com/channel/UCfiC4q3AahU4Io-s83-CIbQ) for most of the inspiration.
