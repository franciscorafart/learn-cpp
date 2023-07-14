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

// For static explanation purposes
struct Entity {
    static int x, y; // public by default
    
    void Print() {
        std::cout << x << ", " << y << std::endl;
    }
};

// Has to be defined here because static x and y are not part of the class instance
int Entity::x;
int Entity::y;

int main() {
    Player player; // instantiate player object
    
    player.x = 5;
    player.y =6;
    player.speed = 5;
    
    player.Move(3,6);
    
    Log(player.x);
    Log(player.y);
    
    // static
    Entity e;
    e.x = 2;
    e.y = 3;
    
    // e1's x and y are overwriten because they're static
    Entity e1;
    e1.x = 5;
    e1.y = 8;
    
    e.Print();
    e1.Print();
    
    return 0;
}
