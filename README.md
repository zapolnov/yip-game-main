
Game Main
=========

This is the cross-platform C++ framework for creating games. This framework handles
OpenGL ES context creation, resource loading, input handling, sound and music playback,
etc.


Compiling this library
----------------------

This library is not intended to be built directly. Instead it is supposed
to be included into projects using the [Yip](https://github.com/yiptool/yip.git).

Use the `import game-main` directive in your `Yipfile` to use this library.


Creating a game
---------------

When creating a new game, you have to subclass from the GameInstance class and
override callback methods. Then you have to use the special macro
`GAME_MAIN_CLASS` in the C++ source (**not header**!) file:

      class MyGame : public GameInstance
      {
          void init() {}
          void cleanup() {}
          void runFrame() {}
      };
      
      GAME_MAIN_CLASS(MyGame)

**Note:** your game code should **not** contain the `main` function - it is
provided by the *game-main* framework.

License
=======

Copyright © 2014 Nikolay Zapolnov (zapolnov@gmail.com).

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
