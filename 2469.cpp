class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        
        vector<double> ans;
        
        // Temperature in Kelvin gets pushed in vector
        ans.push_back(celsius + 273.15);

        // Temperature in Fahrenheit gets pushed in vector
        ans.push_back( ( celsius * 1.8 ) + 32 );

        return ans;
    }
};