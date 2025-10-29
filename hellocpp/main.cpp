#include <iostream>
#include <string>
#include <vector>
// #include <stdio.h>
// #include <string.h>

// VARFÖR HAR VI LÄRT OSS DUMMA "C" då?
// PÅ IOT devices/embedded systems C vanligare än C++

//Vad är jobbigt i C
// input/output - hej streams och stream insertion operator
//    printf %s %d, scanf (buffer overflow) etc etc      
// strings - japp hej std::string
// pekare - hej referenser
// allokeringar - hej vector
// NYTT:
// loopar for each
// auto

//Övningar: 
// allmänt input/output   ExercisesVecka1.docx
// + funktioner ExercisesWeek3 (1).docx

class Player{
public:
  std::string name;
  int age;
};

int main(){
    // std::string namn;
    // namn = "Stefan";
    // namn = namn + " Holmberg";

    // std::cout << "Hej " << namn << std::endl;

    // char namn[256];
    // strcpy(namn, "Stefan");
    // strcat(namn, " Holmberg");
    // printf("Hej %s\n", namn);
    // return 0;
    std::vector<Player> players; // Vektor = abstraction över dynamiska arrayer
    Player foppa;
    foppa.name = "Foppa";
    foppa.age = 42;

    players.push_back(foppa);

    int selection;
    while(true) {
      std::cout << "1. Skapa" << std::endl;
      std::cout << "2. Lista" << std::endl;
      std::cout << "3. Avsluta" << std::endl;
      std::cout << "Ditt val:" << std::endl;
      std::cin >> selection;
      if(selection == 1) {
        Player player;
        std::cout << "Ange namn:";
        std::cin >> player.name;
        std::cout << "Ange ålder:";
        std::cin >> player.age;
        players.push_back(player);

      } else if (selection == 2) {
        std::cout << "ALLA SPELARE:" << std::endl;
        for (const auto& p : players) {
          std::cout << "Namn: " << p.name << ", Ålder: " << p.age << std::endl;
        }
      }
    }

    // int arr[]{21,9,56,99,202};
    // // C = indexbaserade loopar
    // for(int index = 0; index < 5; index++) {
    //   std::cout << arr[index] << std::endl;
    // }
}