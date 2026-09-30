#include <stdio.h>

int main() {
  char category;
  int tempChoice;
  int currencyChoice;
  int massChoice;
  int userinputF; 
  int userinputC; 
  int userinputUSDtoINR; 
  int userinputINRtoUSD;
  int userinputpounds; 
  int userinputkilos;
  int farenheittocelsius; 
  int celsiustofarenheit; 
  float USDtoINR ; 
  float INRtoUSD;
  float kilostopounds; 
  float poundstokilos; 

  //Asking the user to choose a category to convert from.
  printf("Choose a category from the following: \n");
  printf("Temperature(T), Currency(C), Mass(M) \n");
  printf("Please enter the letter you want to convert.\n");
  scanf("%c", &category);
  
  if(category == 'T'){
      printf("Enter 1 for Fahrenheit to Celsius. \n");
      printf("Enter 2 for Celsius to Fahrenheit. \n");
      scanf("%d", &tempChoice);
      if(tempChoice == 1){
          printf("Please enter the temperature in Fahrenheit: \n");
          scanf("%d", &userinputF);
          farenheittocelsius =  ((userinputF-32) * (5.0/9.0));
          printf("Celcius: %d", farenheittocelsius);
      }
      else if(tempChoice == 2){
        printf("Please enter the temperature in Celsius: \n");
        scanf("%d", &userinputC);
        celsiustofarenheit = ((9.0/5.0)*userinputC + 32);
        printf("Fahrenheit: %d", celsiustofarenheit);
      }
      else
        printf("Please enter either 1 or 2. \n");
  }
  
  else if(category == 'C') {
      printf("Enter 1 for USD to INR. \n");
      printf("Enter 2 for INR to USD. \n");
      scanf("%d",&currencyChoice);
      if(currencyChoice == 1){
          printf("Please enter the USD amount: \n");
          scanf("%d", &userinputUSDtoINR);
          USDtoINR = userinputUSDtoINR * 95.94;
          printf("INR: %.2f", USDtoINR); // %.2f = rounds the float to only 2 decimal places;
      }
      else if(currencyChoice == 2){
          printf("Please enter the INR amount: \n");
          scanf("%d",&userinputINRtoUSD);
          INRtoUSD = userinputINRtoUSD * 0.0104;
          printf("USD: %.2f",INRtoUSD);
      }
      else
        printf("Please enter either 1 or 2. \n");
  }

  else if(category == 'M'){
      printf("Enter 1 for kilos to pounds. \n");
      printf("Enter 2 for pounds to kilos. \n");
      scanf("%d", &massChoice);
      if(massChoice == 1){
          printf("Please enter the mass in kilos: \n");
          scanf("%d", &userinputkilos);
          kilostopounds = userinputkilos * 2.205;
          printf("Pounds: %.2f", kilostopounds);
      }
      else if(massChoice == 2) {
          printf("Please enter the mass in pounds: \n");
          scanf("%d", &userinputpounds);
          poundstokilos = userinputpounds * 0.454;
          printf("Kilos: %.2f", poundstokilos);
      }
      else 
        printf("Please enter either 1 or 2. \n");
   }
  return 0;
}
