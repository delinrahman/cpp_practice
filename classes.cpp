#include <iostream>
using namespace std;
class Log {
public:
  const int Loglevelwarning = 0;
  const int LoglevelError = 1;
  const int LoglevelInfo = 2;

private:
  int m_level;

public:
  void setLevel(int level) { m_level = level; }
  void warn(const char *message) {
    if (m_level >= Loglevelwarning) {
      cout << "[Warning]" << message << endl;
    }
  }

  void Erro(const char *message) {
    if (m_level >= LoglevelError) {
      cout << "[error]" << message << endl;
    }
  }
  void info(const char *message) {
    if (m_level >= LoglevelInfo) {

      cout << "[Info]" << message << endl;
    }
  }
};

int main() {
  Log log;
  log.setLevel(2);
  log.warn("hello world");
  log.Erro("delin rahman");
  log.info("mumdudur rahman");
  /*delin rahmanh*/

  return 0;
}
