#include <iostream>

int main() {

  std::string firstVaccineName = "";
  std::string secondVaccineName = "";
  std::string firstDoseStatus = "";
  std::string secondDoseStatus = "";
  std:: string name = "";
  int Id = 0;
  
  int numFirstVaccine =0;
  int numSecondVaccine =0;
  int numDifferentVaccines = 0;
  int numPartiallyVaccinated = 0;
   int numFullyVaccinated = 0;

  for(int i=0; i < 5; i++){

      std::cout << "Please enter your Id or 0 to quit: \n";
  std:: cin >> Id;
    if(Id == 0){
      return 0;
    }

std::cout << "Please enter your name :\n";
  std:: cin >> name;  
    
  
std::cout << "Have you taken your first vaccine?(Please enter yes or no)\n";
  
  std::cin >> firstDoseStatus;

  if((firstDoseStatus == "Yes") ||(firstDoseStatus == "yes")){
    std::cout << "What brand of vaccine have you taken?\n";
    std::cin >> firstVaccineName;
    numFirstVaccine = numFirstVaccine +1;
    std::cout <<" Have you taken the second dose of the vaccine?\n";
    std::cin >> secondDoseStatus;

   if((secondDoseStatus == "Yes") ||(secondDoseStatus == "yes")){
     numSecondVaccine = numSecondVaccine +1;
    std::cout << "What brand of vaccine have you taken as the second dose?\n";
    std::cin >> secondVaccineName;


     if (firstVaccineName != secondVaccineName){
       numDifferentVaccines = numDifferentVaccines + 1;
        std::cout << "You are fully vaccinated with different brand of vaccines\n";
       numFullyVaccinated = numFullyVaccinated + 1;
         } else{
       std::cout << "You are fully vaccinated with the same brand of vaccine\n";
       numFullyVaccinated = numFullyVaccinated + 1;
     }
     }else{
     
        std::cout << "You are partially vaccinated with the\n" << 
         firstVaccineName <<  "vaccine\n";
        std::cout << "Please get a second dose to be fully vaccinated.\n";
         numPartiallyVaccinated = numPartiallyVaccinated +1;
     }
  }else {
    std::cout << "Please take your first dose of the vaccine \n";
  }
    }
  std::cout << numFirstVaccine<< "  -First Vaccine\n";
  std::cout << numSecondVaccine <<"  -Second Vaccine\n";
  std::cout << numDifferentVaccines <<"  -different Vaccines\n";
  std::cout << numPartiallyVaccinated <<"  -Partially vaccinated\n";
  std::cout << numFullyVaccinated <<"  -Fully vaccinated\n";

  

  
  return 0;
  }