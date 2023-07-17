#include <iostream>

class Entity
{
public:
    float x, y;
        
    void Move(float xa, float ya){
        x+= xa;
        y+= ya;
    }
    
    Entity() {
        x= 0;
        y = 0;
    }
};

class Player : public Entity // public : Entity defines the inheritance
{
public:
    const char* Name;
    
    void PrintName(){
        std::cout << Name << std::endl;
    }
    Player() {
        Name = "Juan";
    }
};

int main(int argc, const char * argv[]) {
    Player p;
    p.PrintName();
    std::cin.get();
}
