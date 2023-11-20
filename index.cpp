#include <iostream>

int main () {
  std::string intrebari[4] = {
    "Care este capitala Spaniei?",
    "Ce planeta este mai aproape de soare?",
    "In ce continent se afla Argentina?",
    "Unde se afla Groapa Marianelor?"
  };

  std::string raspunsuri[][4] = {
    {"a. Olanda", "b. Madrid", "c. Germania", "d. Paris"},
    {"a. Mercur", "b. Romania", "c. Jupiter", "d. Venus"},
    {"a. Europa", "b. Asia", "c. AmericaN", "d. AmericaS"},
    {"a. Atlantic", "b. Mediteran", "c. Pacific", "d. Indian"}
  };

  char correct[] = {'B', 'A', 'D', 'C'};
  int score = 0;
  char user;

  for (int i = 0; i < sizeof(intrebari) / sizeof(std::string); i++) {
    std::cout << "****************************\n";
    std::cout << intrebari[i] << "\n";
    std::cout << "****************************\n";
    for (int j = 0; j < sizeof(raspunsuri) / sizeof(raspunsuri[i]); j++) {
      std::cout << raspunsuri[i][j] << "\n";
    }
    std::cin >> user;
    user = toupper(user);
    if (user == correct[i]) {
      std::cout << "Correct\n";
      score ++;
    }
    else {
      std::cout << "Incorrect\n";
    }

  }
  std::cout << "You do " << (score/(double)(sizeof(intrebari) / sizeof(std::string))) * 100 << "%";
  
  return 0;
}

