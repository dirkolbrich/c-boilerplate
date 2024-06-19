#pragma once

#include <string>
#include <string_view>

namespace boilerplate {

class Example {
  public:
    std::string_view Variable();

  private:
    std::string m_variable{"Hello, World!"};
};

}  // namespace boilerplate
