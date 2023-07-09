#include <iostream>

class Log {
public:
    const int LogLevelError = 0;
    const int LogLevelWarning = 1;
    const int LogLevelInfo = 2;
     
private:
    int m_LogLevel = LogLevelInfo; // m_ is convention for class private property

public:
    void SetLevel(int level) {
        m_LogLevel = level;
    }
    void Warn(const char* message){
        if (m_LogLevel >= LogLevelWarning)
            std::cout <<  "[Warning] " << message << std::endl;
    }
    void Info(const char* message){
        if (m_LogLevel >= LogLevelInfo)
            std::cout <<  "[Info] " << message << std::endl;
    }
    void Error(const char* message){
        if (m_LogLevel >= LogLevelError)
            std::cout <<  "[Error] " << message << std::endl;
    }
};

int main(int argc, const char * argv[]) {
    Log log;
    log.SetLevel(log.LogLevelWarning);
    log.Warn("Hello!");
    log.Error("Hello1");
    log.Info("Hello!");

    return 0;
}
