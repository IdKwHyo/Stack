#include <iostream>
#include "stack.h"
#include <cstring>

int main(int argc, char *argv[]) {
  Stack s;
  char c;
  int match = 1;
  int i, j;

  for (int i = 1; i < strlen(argv[1]); i++) {
    switch (argv[j][i]) {
      case '{':
      case '[':
        s.push(argv[j][i]);
        break;
      
      case ']':
        c = s.pop();
        if (c != '{')
          match = 0;
        break;

      default:
        break;
    }
  }

  if (match == 1) {
    std::cout << "Paranthesis do not match" << std::endl;
  } else {
    std::cout << "Paranthesis Match" << std::endl;
  }

  return 0;
}
