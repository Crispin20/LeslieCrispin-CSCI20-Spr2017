#include <iostream>
using namespace std;

class TemperatureConverter{
    public:
        void SetTempFromKelvin(double kelvinTemp);
        void SetTempFromCelsius(double celsius);
        void SetTempFromFahrenheit(double fehrenheit);
        
        double GetTempFromKelvin() const;
        double GetTempAsCelsius() const;
        double GetTempAsFahrenheit() const;
        
        void PrintTemperatures() const;
        TemperatureConverter();//default constructor
        TemperatureConverter(double kelvin);
    private: 
        double kelvin_;
};

    TemperatureConverter::TemperatureConverter() {       //defult constructor
        kelvin_ = 0.0;
        return;
    }
    TemperatureConverter::TemperatureConverter(double kelvin){
        kelvin_ = kelvin;
        return;
    }  
    
    
    void TemperatureConverter::SetTempFromKelvin(double tempKelvin){
        kelvin_ = tempKelvin;
    }
    
    void TemperatureConverter::SetTempFromCelsius(double celsius){
        kelvin_ = celsius;
        double kelvinFormula = 0.0;
            kelvinFormula = (celsius + 278.15);

    }
    void TemperatureConverter::SetTempFromFahrenheit(double fehrenheit){
        kelvin_ = fehrenheit;
        int fehrenheitconve = 0.0;
            fehrenheitconve = ((5 * (fehrenheit - 32) /9 ) + 273.15);
    }
    double TemperatureConverter::GetTempFromKelvin() const {
        
        return kelvin_;
    }
    double TemperatureConverter::GetTempAsCelsius() const {
        return (kelvin_ - 273.15);
    }
    double TemperatureConverter::GetTempAsFahrenheit() const {
        
        return (( SetTempFromCelsius() * 9)/5 + 32);
        
    }
    
    void TemperatureConverter::PrintTemperatures() const {
        cout << "Kelvin: " << kelvin_ << endl << "Fahrenheit: " << TemperatureConverter::GetTempAsFahrenheit() << endl << "Celsius: " << TemperatureConverter::GetTempAsCelsius()  << endl;
        return;
    }
    
    
    
int main ()
{
    TemperatureConverter temp1; //testing default constructor
    TemperatureConverter temp2(274); //testing overloaded constructor
    
    temp1.PrintTemperatures();
    temp2.PrintTemperatures();
    
    temp1.SetTempFromKelvin(400.15); //testing mutator function
    cout<<temp1.GetTempFromKelvin()<<endl;//testing accessor function
    temp1.PrintTemperatures();
    
    temp2.SetTempFromCelsius(32); //testing other functions
    cout<<temp2.GetTempAsCelsius()<<endl;
    temp2.PrintTemperatures();
    
    temp2.SetTempFromFahrenheit(32);
    cout<<temp2.GetTempAsFahrenheit()<<endl;
    temp2.PrintTemperatures();
    
    return 0;
}