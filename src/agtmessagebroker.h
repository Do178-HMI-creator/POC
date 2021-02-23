#ifndef AGTMESSAGEBROKER_H
#define AGTMESSAGEBROKER_H

#include <string>
#include <vector>

class agtMessageBroker
{
  public:
    agtMessageBroker();
    std::vector<std::string> split(const std::__cxx11::basic_string<char> s, char delimiter);
};

#endif // AGTMESSAGEBROKER_H
