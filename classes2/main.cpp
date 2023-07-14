#include <iostream>

class Log {
public:
    enum Level {
        LevelError, LevelWarning, LevelInfo
    };
     
private:
    // Use Level type instead of int to restrict the possible values, though it's still an int
    Level m_LogLevel = Level::LevelInfo; // m_ is convention for class private property

public:
    void SetLevel(Level level) {
        m_LogLevel = level;
    }
    void Warn(const char* message){
        if (m_LogLevel >= LevelWarning) // enum is not a namespace in itself, so we can call it without Level::LevelWarning
            std::cout <<  "[Warning] " << message << std::endl;
    }
    void Info(const char* message){
        if (m_LogLevel >= LevelInfo)
            std::cout <<  "[Info] " << message << std::endl;
    }
    void Error(const char* message){
        if (m_LogLevel >= LevelError)
            std::cout <<  "[Error] " << message << std::endl;
    }
};

int main(int argc, const char * argv[]) {
    Log log;
    log.SetLevel(log.LevelWarning);
    log.Warn("Hello!");
    log.Error("Hello1");
    log.Info("Hello!");

    return 0;
}
