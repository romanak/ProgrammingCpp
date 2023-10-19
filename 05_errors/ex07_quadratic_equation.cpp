// Exercise 7: solving quadratic equation

#include "../std_lib_facilities.h"

vector<double> solve_quadratic(double a, double b, double c){
    vector<double> roots(2);
    double discriminant = b*b-4*a*c;
    if (discriminant<0) throw runtime_error("No real roots found.");
    roots[0] = (-b - sqrt(discriminant))/(2*a);
    roots[1] = (-b + sqrt(discriminant))/(2*a);
    return roots;
}

void print_vector(vector<double> v) {
    cout << "[";
    for (int i=0; i < v.size()-1; ++i) {
        cout << v[i] << ", ";
    }
    cout << v[v.size()-1] << "]\n";
}

int main(){
    double a, b, c;
    vector<double> roots;
    cin >> a >> b >> c;

    try{
        roots = solve_quadratic(a, b, c);
    } catch (runtime_error& e) {
        cerr << "Runtime Error: " << e.what() << endl;
        keep_window_open();
        return 1;
    }
    
    print_vector(roots);
    return 0;
}
