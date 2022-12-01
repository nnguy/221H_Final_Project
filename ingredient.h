#ifndef INGREDIENT_H_
#define INGREDIENT_H_
enum FOOD_GROUP{meat, vegetable, starch}; 

class Ingredient{
private:
  FOOD_GROUP f; 
  double price; 
  double discount; 

public: 
  Ingredient(FOOD_GROUP, double, double); 

};
#endif 
