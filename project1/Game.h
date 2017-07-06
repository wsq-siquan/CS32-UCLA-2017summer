#ifndef _G_H
#define _G_H

//#include "globals.h"

//class Player;
class Arena;  // This is needed to let the compiler know that Arena is a
			  // type name, since it's mentioned in the Robot declaration.


class Game
{
  public:
        // Constructor/destructor
    Game(int rows, int cols, int nRobots);
    ~Game();

        // Mutators	
    void play();

  private:
    Arena* m_arena;
};
#endif // !_G_H