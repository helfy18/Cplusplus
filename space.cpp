#include <iostream>

int main() {
  double e_weight, weight;
  std:: string p;
  int planet;

  std::cout << "Enter earth weight: ";
  std::cin >> weight;

  std::cout << "Planets 1 = Venus, 2 = Mars, 3 = Jupiter, 4 = Saturn, 5 = Uranus, 6 = Neptune\n";
  std::cout << "Enter what number planet fight is on: ";
  std::cin >> planet;

  switch(planet){
    case 1:
      e_weight = weight * 0.78;
      p = "Venus";
      break;
    case 2:
      e_weight = weight * 0.39;
      p = "Mars";
      break;
    case 3:
      e_weight = weight * 2.65;
      p = "Jupiter";
      break;
    case 4:
      e_weight = weight * 1.17;
      p = "Saturn";
      break;
    case 5:
      e_weight = weight * 1.05;
      p = "Uranus";
      break;
    case 6:
      e_weight = weight * 1.23;
      p = "Neptune";
      break;
    default:
      break;
  }
  std::cout << "Weight on " << p << " is: " << e_weight << "\n";

}
