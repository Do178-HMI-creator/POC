#ifndef AGTMESSAGEBROKER_H
#define AGTMESSAGEBROKER_H

#include <vector>
#include <string>

class agtMessageBroker {
  public:
    agtMessageBroker();
    std::vector<std::string> split(const std::__cxx11::basic_string<char> s, char delimiter);
};

#endif // AGTMESSAGEBROKER_H
