#include <iostream>

#define Log(x) std::cout << x << std::endl;

class Player {
    public: // public accessible from external code
        int x, y;
        int speed;

        void Move(int xa, int ya){ // method: function inside a class
            x += xa * speed;
            y += ya * speed;
        }
    
};

int main() {
    Player player; // instantiate player object
    
    player.x = 5;
    player.y =6;
    player.speed = 5;
    
    player.Move(3,6);
    
    Log(player.x);
    Log(player.y);
    return 0;
}
