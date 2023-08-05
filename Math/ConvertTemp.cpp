 #include <iostream>
 #include <vector>
 
 std::vector<double> convertTemperature(double celsius) {
        double toKelvin = celsius + 273.15;
        double toFahrenheit = (celsius*1.80)+32.00;
        std::vector<double> converted ={toKelvin,toFahrenheit};
        return converted;
    }

int main(){
   std::vector<double> converted = convertTemperature(30.00);
    for (double digit :converted){
        std::cout << digit << std::endl;
    }
}