// Very Easy
// 1. Sum of Natural Numbers up to N
    #include <iostream>
    using namespace std;
    
    int main() {
        int n;
        cin >> n;
        long long sum = n * (n + 1) / 2;
        cout << sum << endl;
        return 0;
    }

// 2. Check if a Number is Prime
    #include <iostream>
    #include <cmath>
    using namespace std;
    
    int main() {
        int n;
        cin >> n;
        bool isPrime = true;
        if (n < 2) {
            isPrime = false;
        } else {
            for (int i = 2; i <= sqrt(n); i++) {
                if (n % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        cout << (isPrime ? "Prime" : "Not Prime") << endl;
        return 0;
    }

// 3. Print Odd Numbers up to N
    #include <iostream>
    using namespace std;
    
    int main() {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i += 2) {
            cout << i << " ";
        }
        cout << endl;
        return 0;
    }

// 4. Sum of Odd Numbers up to N
    #include <iostream>
    using namespace std;
    
    int main() {
        int n;
        cin >> n;
        long long sum = 0;
        for (int i = 1; i <= n; i += 2) {
            sum += i;
        }
        cout << sum << endl;
        return 0;
    }

// 5. Print Multiplication Table of a Number
    #include <iostream>
    using namespace std;
    
    int main() {
        int n;
        cin >> n;
        for (int i = 1; i <= 10; i++) {
            cout << n << " x " << i << " = " << n * i << endl;
        }
        return 0;
    }


// Easy
// 1. Count Digits in a Number
    #include <iostream>
    using namespace std;
    
    int main() {
        int n;
        cin >> n;
        int count = 0;
        while (n > 0) {
            count++;
            n /= 10;
        }
        cout << count << endl;
        return 0;
    }

// 2. Reverse a Number
    #include <iostream>
    using namespace std;
    
    int main() {
        int n;
        cin >> n;
        int reversed = 0;
        while (n > 0) {
            reversed = reversed * 10 + n % 10;
            n /= 10;
        }
        cout << reversed << endl;
        return 0;
    }

// 3. Find the Largest Digit in a Number
    #include <iostream>
    using namespace std;
    
    int main() {
        int n;
        cin >> n;
        int maxDigit = 0;
        while (n > 0) {
            int digit = n % 10;
            if (digit > maxDigit) {
                maxDigit = digit;
            }
            n /= 10;
        }
        cout << maxDigit << endl;
        return 0;
    }

// 4. Check if a Number is a Palindrome
    #include <iostream>
    using namespace std;
    
    int main() {
        int n, original, reversed = 0;
        cin >> n;
        original = n;
        while (n > 0) {
            reversed = reversed * 10 + n % 10;
            n /= 10;
        }
        if (original == reversed) {
            cout << "Palindrome" << endl;
        } else {
            cout << "Not Palindrome" << endl;
        }
        return 0;
    }

// 5. Find the Sum of Digits of a Number
    #include <iostream>
    using namespace std;
    
    int main() {
        int n;
        cin >> n;
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        cout << sum << endl;
        return 0;
    }


// Medium

// 1. Function Overloading for Calculating Area
    #include <iostream>
    #include <iomanip>
    using namespace std;
    
    class AreaCalculator {
    public:
        double calculate(double radius) {
            return 3.14159 * radius * radius; // Circle Area
        }
        
        double calculate(double length, double breadth) {
            return length * breadth; // Rectangle Area
        }
        
        double calculate(double base, double height, bool isTriangle) {
            return 0.5 * base * height; // Triangle Area
        }
    };
    
    int main() {
        AreaCalculator areaCalc;
        cout << fixed << setprecision(5);
        cout << areaCalc.calculate(5) << endl; // Circle
        cout << areaCalc.calculate(4, 6) << endl; // Rectangle
        cout << areaCalc.calculate(3, 7, true) << endl; // Triangle
        return 0;
    }

// 2. Function Overloading with Hierarchical Structure
    #include <iostream>
    using namespace std;
    
    class SalaryCalculator {
    public:
        int calculate(int stipend) {
            return stipend; // Intern Salary
        }
        
        int calculate(int baseSalary, int bonuses) {
            return baseSalary + bonuses; // Employee Salary
        }
        
        int calculate(int baseSalary, int bonuses, int incentives) {
            return baseSalary + bonuses + incentives; // Manager Salary
        }
    };
    
    int main() {
        SalaryCalculator salaryCalc;
        cout << "Intern Salary: " << salaryCalc.calculate(10000) << endl;
        cout << "Employee Salary: " << salaryCalc.calculate(50000, 20000) << endl;
        cout << "Manager Salary: " << salaryCalc.calculate(80000, 30000, 20000) << endl;
        return 0;
    }

// 3. Encapsulation with Employee Details
    #include <iostream>
    #include <string>
    using namespace std;
    
    class Employee {
    private:
        int id;
        string name;
        float salary;
    
    public:
        void setDetails(int empId, const string& empName, float empSalary) {
            id = empId;
            name = empName;
            salary = empSalary;
        }
    
        void displayDetails() {
            cout << "Employee ID: " << id << endl;
            cout << "Employee Name: " << name << endl;
            cout << "Employee Salary: " << salary << endl;
        }
    };
    
    int main() {
        Employee emp;
        emp.setDetails(101, "John Doe", 75000.5);
        emp.displayDetails();
        return 0;
    }

// 4. Inheritance with Student and Result Classes
    #include <iostream>
    #include <string>
    using namespace std;
    
    class Student {
    protected:
        int rollNumber;
        string name;
    
    public:
        void setDetails(int roll, const string& studentName) {
            rollNumber = roll;
            name = studentName;
        }
    
        void displayDetails() {
            cout << "Roll Number: " << rollNumber << endl;
            cout << "Name: " << name << endl;
        }
    };
    
    class Result : public Student {
    private:
        int marks[3];
        int total;
        float percentage;
    
    public:
        void setMarks(int mark1, int mark2, int mark3) {
            marks[0] = mark1;
            marks[1] = mark2;
            marks[2] = mark3;
            total = mark1 + mark2 + mark3;
            percentage = (total / 300.0) * 100;
        }
    
        void displayResult() {
            displayDetails();
            cout << "Marks: " << marks[0] << ", " << marks[1] << ", " << marks[2] << endl;
            cout << "Total: " << total << endl;
            cout << "Percentage: " << percentage << "%" << endl;
        }
    };
    
    int main() {
        Result student;
        student.setDetails(101, "Alice Smith");
        student.setMarks(85, 90, 80);
        student.displayResult();
        return 0;
    }

// 5. Polymorphism with Shape Area Calculation
    #include <iostream>
    #include <iomanip>
    using namespace std;
    
    class Shape {
    public:
        virtual double calculateArea() = 0; // Pure virtual function
    };
    
    class Circle : public Shape {
    private:
        double radius;
    
    public:
        Circle(double r) : radius(r) {}
        double calculateArea() override {
            return 3.14159 * radius * radius;
        }
    };
    
    class Rectangle : public Shape {
    private:
        double length, breadth;
    
    public:
        Rectangle(double l, double b) : length(l), breadth(b) {}
        double calculateArea() override {
            return length * breadth;
        }
    };
    
    class Triangle : public Shape {
    private:
        double base, height;
    
    public:
        Triangle(double b, double h) : base(b), height(h) {}
        double calculateArea() override {
            return 0.5 * base * height;
        }
    };
    
    int main() {
        cout << fixed << setprecision(2);
    
        Circle circle(7);
        cout << "Circle Area: " << circle.calculateArea() << endl;
    
        Rectangle rectangle(10, 5);
        cout << "Rectangle Area: " << rectangle.calculateArea() << endl;
    
        Triangle triangle(8, 6);
        cout << "Triangle Area: " << triangle.calculateArea() << endl;
    
        return 0;
    }


// Hard
// 1. Implementing Polymorphism for Shape Hierarchies
    #include <iostream>
    #include <iomanip>
    #include <cmath>
    using namespace std;
    
    class Shape {
    public:
        virtual double calculateArea() = 0; // Pure virtual function
    };
    
    class Circle : public Shape {
    private:
        double radius;
    
    public:
        Circle(double r) : radius(r) {}
        double calculateArea() override {
            return 3.14159 * pow(radius, 2);
        }
    };
    
    class Rectangle : public Shape {
    private:
        double length, breadth;
    
    public:
        Rectangle(double l, double b) : length(l), breadth(b) {}
        double calculateArea() override {
            return length * breadth;
        }
    };
    
    class Triangle : public Shape {
    private:
        double base, height;
    
    public:
        Triangle(double b, double h) : base(b), height(h) {}
        double calculateArea() override {
            return 0.5 * base * height;
        }
    };
    
    int main() {
        double radius, length, breadth, base, height;
        cin >> radius >> length >> breadth >> base >> height;
    
        Circle circle(radius);
        Rectangle rectangle(length, breadth);
        Triangle triangle(base, height);
    
        cout << fixed << setprecision(5);
        cout << "Area of Circle: " << circle.calculateArea() << endl;
        cout << "Area of Rectangle: " << rectangle.calculateArea() << endl;
        cout << "Area of Triangle: " << triangle.calculateArea() << endl;
    
        return 0;
    }

// 2. Matrix Multiplication Using Function Overloading
    #include <iostream>
    #include <vector>
    using namespace std;
    
    class Matrix {
    public:
        vector<vector<int>> operate(const vector<vector<int>>& A, const vector<vector<int>>& B, int operationType) {
            if (operationType == 1) {
                if (A.size() != B.size() || A[0].size() != B[0].size()) {
                    throw invalid_argument("Invalid dimensions for operation.");
                }
                vector<vector<int>> result(A.size(), vector<int>(A[0].size()));
                for (size_t i = 0; i < A.size(); ++i) {
                    for (size_t j = 0; j < A[i].size(); ++j) {
                        result[i][j] = A[i][j] + B[i][j];
                    }
                }
                return result;
            } else if (operationType == 2) {
                if (A[0].size() != B.size()) {
                    throw invalid_argument("Invalid dimensions for operation.");
                }
                vector<vector<int>> result(A.size(), vector<int>(B[0].size(), 0));
                for (size_t i = 0; i < A.size(); ++i) {
                    for (size_t j = 0; j < B[0].size(); ++j) {
                        for (size_t k = 0; k < B.size(); ++k) {
                            result[i][j] += A[i][k] * B[k][j];
                        }
                    }
                }
                return result;
            } else {
                throw invalid_argument("Invalid operation type.");
            }
        }
    };
    
    void printMatrix(const vector<vector<int>>& matrix) {
        for (const auto& row : matrix) {
            for (int val : row) {
                cout << val << " ";
            }
            cout << endl;
        }
    }
    
    int main() {
        int operationType;
        cin >> operationType;
    
        int m, n, p;
        cin >> m >> n;
        vector<vector<int>> A(m, vector<int>(n));
        for (int i = 0; i < m; ++i)
            for (int j = 0; j < n; ++j)
                cin >> A[i][j];
    
        if (operationType == 1) {
            vector<vector<int>> B(m, vector<int>(n));
            for (int i = 0; i < m; ++i)
                for (int j = 0; j < n; ++j)
                    cin >> B[i][j];
            try {
                Matrix matrixOps;
                vector<vector<int>> result = matrixOps.operate(A, B, operationType);
                printMatrix(result);
            } catch (const exception& e) {
                cout << e.what() << endl;
            }
        } else if (operationType == 2) {
            cin >> p;
            vector<vector<int>> B(n, vector<int>(p));
            for (int i = 0; i < n; ++i)
                for (int j = 0; j < p; ++j)
                    cin >> B[i][j];
            try {
                Matrix matrixOps;
                vector<vector<int>> result = matrixOps.operate(A, B, operationType);
                printMatrix(result);
            } catch (const exception& e) {
                cout << e.what() << endl;
            }
        } else {
            cout << "Invalid operation type." << endl;
        }
    
        return 0;
    }

// 3. Polymorphism in Shape Classes
    #include <iostream>
    #include <iomanip>
    #include <cmath>
    using namespace std;
    
    class Shape {
    public:
        virtual double getArea() = 0; // Pure virtual function
    };
    
    class Rectangle : public Shape {
    private:
        double length, breadth;
    
    public:
        Rectangle(double l, double b) : length(l), breadth(b) {}
        double getArea() override {
            return length * breadth;
        }
    };
    
    class Circle : public Shape {
    private:
        double radius;
    
    public:
        Circle(double r) : radius(r) {}
        double getArea() override {
            return 3.14159 * radius * radius;
        }
    };
    
    class Triangle : public Shape {
    private:
        double base, height;
    
    public:
        Triangle(double b, double h) : base(b), height(h) {}
        double getArea() override {
            return 0.5 * base * height;
        }
    };
    
    int main() {
        int shapeType;
        cin >> shapeType;
    
        switch (shapeType) {
            case 1: {
                double length, breadth;
                cin >> length >> breadth;
                Rectangle rectangle(length, breadth);
                cout << "The area of the rectangle is: " << rectangle.getArea() << endl;
                break;
            }
            case 2: {
                double radius;
                cin >> radius;
                Circle circle(radius);
                cout << "The area of the circle is: " << circle.getArea() << endl;
                break;
            }
            case 3: {
                double base, height;
                cin >> base >> height;
                Triangle triangle(base, height);
                cout << "The area of the triangle is: " << triangle.getArea() << endl;
                break;
            }
            default:
                cout << "Invalid shape type." << endl;
                break;
        }
    
        return 0;
    }

// 4. Implement Multiple Inheritance to Simulate a Library System
    #include <iostream>
    #include <string>
    using namespace std;
    
    class Book {
    protected:
        string title;
        string author;
        int isbn;
    
    public:
        void setBookDetails(const string &t, const string &a, int i) {
            title = t;
            author = a;
            isbn = i;
        }
    
        string getBookDetails() const {
            return "\"" + title + "\" by " + author + " (ISBN: " + to_string(isbn) + ")";
        }
    };
    
    class Borrower {
    protected:
        string name;
        int id;
    
    public:
        void setBorrowerDetails(const string &n, int i) {
            name = n;
            id = i;
        }
    
        string getBorrowerDetails() const {
            return name + " (ID: " + to_string(id) + ")";
        }
    };
    
    class Library : public Book, public Borrower {
    public:
        void borrowBook() {
            cout << "Borrower " << getBorrowerDetails() << " has borrowed " << getBookDetails() << "." << endl;
        }
    
        void returnBook() {
            cout << "Borrower " << getBorrowerDetails() << " has returned " << getBookDetails() << "." << endl;
        }
    };
    
    int main() {
        Library library;
        int action;
    
        library.setBookDetails("C++ Basics", "John Doe", 1234);
        library.setBorrowerDetails("Alice", 42);
    
        cout << "Enter action type (1 for borrow, 2 for return): ";
        cin >> action;
    
        if (action == 1) {
            library.borrowBook();
        } else if (action == 2) {
            library.returnBook();
        } else {
            cout << "Invalid action type." << endl;
        }
    
        return 0;
    }

// 5. Implement Polymorphism for Banking Transactions
    #include <iostream>
    using namespace std;
    
    class Account {
    protected:
        int balance;
    
    public:
        virtual void calculateInterest() = 0; // Pure virtual function
        virtual ~Account() {}
    };
    
    class SavingsAccount : public Account {
        float rate;
        int time;
    
    public:
        SavingsAccount(int b, float r, int t) {
            balance = b;
            rate = r;
            time = t;
        }
    
        void calculateInterest() override {
            float interest = (balance * rate * time) / 100;
            cout << "Savings Account Interest: " << interest << endl;
        }
    };
    
    class CurrentAccount : public Account {
        int fee;
    
    public:
        CurrentAccount(int b, int f) {
            balance = b;
            fee = f;
        }
    
        void calculateInterest() override {
            balance -= fee;
            cout << "Balance after fee deduction: " << balance << endl;
        }
    };
    
    int main() {
        int accountType;
        cout << "Enter account type (1 for Savings, 2 for Current): ";
        cin >> accountType;
    
        if (accountType == 1) {
            int balance, time;
            float rate;
            cout << "Enter balance, interest rate, and time: ";
            cin >> balance >> rate >> time;
    
            SavingsAccount sa(balance, rate, time);
            sa.calculateInterest();
        } else if (accountType == 2) {
            int balance, fee;
            cout << "Enter balance and maintenance fee: ";
            cin >> balance >> fee;
    
            CurrentAccount ca(balance, fee);
            ca.calculateInterest();
        } else {
            cout << "Invalid account type." << endl;
        }
    
        return 0;
    }

// Very Hard

// 1. Hierarchical Inheritance for Employee Management System
    #include <iostream>
    #include <string>
    using namespace std;
    
    class Employee {
    protected:
        string name;
        int id;
        int salary;
    
    public:
        Employee(string n, int i, int s) : name(n), id(i), salary(s) {}
        virtual void display() const = 0; // Pure virtual function
    };
    
    class Manager : public Employee {
        int rating;
    
    public:
        Manager(string n, int i, int s, int r) : Employee(n, i, s), rating(r) {}
        void display() const override {
            int bonus = (salary * 0.1) * rating;
            cout << "Employee: " << name << " (ID: " << id << ")\n"
                 << "Role: Manager\n"
                 << "Base Salary: " << salary << "\n"
                 << "Bonus: " << bonus << "\n"
                 << "Total Earnings: " << salary + bonus << endl;
        }
    };
    
    class Developer : public Employee {
        int extraHours;
    
    public:
        Developer(string n, int i, int s, int e) : Employee(n, i, s), extraHours(e) {}
        void display() const override {
            int overtimeCompensation = 500 * extraHours;
            cout << "Employee: " << name << " (ID: " << id << ")\n"
                 << "Role: Developer\n"
                 << "Base Salary: " << salary << "\n"
                 << "Overtime Compensation: " << overtimeCompensation << "\n"
                 << "Total Earnings: " << salary + overtimeCompensation << endl;
        }
    };
    
    int main() {
        int type;
        cout << "Enter Employee Type (1 for Manager, 2 for Developer): ";
        cin >> type;
    
        if (type == 1) {
            string name;
            int id, salary, rating;
            cout << "Enter Name, ID, Salary, and Rating: ";
            cin >> name >> id >> salary >> rating;
            Manager m(name, id, salary, rating);
            m.display();
        } else if (type == 2) {
            string name;
            int id, salary, extraHours;
            cout << "Enter Name, ID, Salary, and Extra Hours: ";
            cin >> name >> id >> salary >> extraHours;
            Developer d(name, id, salary, extraHours);
            d.display();
        } else {
            cout << "Invalid employee type." << endl;
        }
    
        return 0;
    }

// 2.Multi-Level Inheritance for Vehicle Simulation
    #include <iostream>
    #include <string>
    using namespace std;
    
    class Vehicle {
    protected:
        string brand, model;
        double mileage;
    
    public:
        Vehicle(string b, string m, double mi) : brand(b), model(m), mileage(mi) {}
        virtual void display() const = 0; // Pure virtual function
    };
    
    class Car : public Vehicle {
    protected:
        double fuel, distance;
    
    public:
        Car(string b, string m, double mi, double f, double d)
            : Vehicle(b, m, mi), fuel(f), distance(d) {}
        void display() const override {
            cout << "Vehicle: " << brand << " " << model << "\n"
                 << "Mileage: " << mileage << "\n"
                 << "Fuel Efficiency: " << distance / fuel << " miles/gallon\n";
        }
    };
    
    class ElectricCar : public Car {
        double batteryCapacity, efficiency;
    
    public:
        ElectricCar(string b, string m, double mi, double bc, double e)
            : Car(b, m, mi, 0, 0), batteryCapacity(bc), efficiency(e) {}
        void display() const override {
            cout << "Vehicle: " << brand << " " << model << "\n"
                 << "Mileage: " << mileage << "\n"
                 << "Range: " << batteryCapacity * efficiency << " miles\n";
        }
    };
    
    int main() {
        int type;
        cout << "Enter Vehicle Type (1 for Car, 2 for Electric Car): ";
        cin >> type;
    
        if (type == 1) {
            string brand, model;
            double mileage, fuel, distance;
            cout << "Enter Brand, Model, Mileage, Fuel, and Distance: ";
            cin >> brand >> model >> mileage >> fuel >> distance;
            Car c(brand, model, mileage, fuel, distance);
            c.display();
        } else if (type == 2) {
            string brand, model;
            double mileage, batteryCapacity, efficiency;
            cout << "Enter Brand, Model, Mileage, Battery Capacity, and Efficiency: ";
            cin >> brand >> model >> mileage >> batteryCapacity >> efficiency;
            ElectricCar ec(brand, model, mileage, batteryCapacity, efficiency);
            ec.display();
        } else {
            cout << "Invalid vehicle type." << endl;
        }
    
        return 0;
    }

// 3.Function Overloading for Complex Number Operations
    #include <iostream>
    #include <cmath>
    using namespace std;
    
    class Complex {
        double real, imag;
    
    public:
        Complex(double r = 0, double i = 0) : real(r), imag(i) {}
    
        Complex add(const Complex &c) const {
            return Complex(real + c.real, imag + c.imag);
        }
    
        Complex multiply(const Complex &c) const {
            return Complex(real * c.real - imag * c.imag, real * c.imag + imag * c.real);
        }
    
        double magnitude() const {
            return sqrt(real * real + imag * imag);
        }
    
        void display() const {
            if (imag < 0)
                cout << real << " - " << -imag << "i";
            else
                cout << real << " + " << imag << "i";
        }
    };
    
    int main() {
        int operation;
        cout << "Select Operation (1 for Addition, 2 for Multiplication, 3 for Magnitude): ";
        cin >> operation;
    
        if (operation == 1) {
            double r1, i1, r2, i2;
            cout << "Enter first complex number (real and imaginary parts): ";
            cin >> r1 >> i1;
            cout << "Enter second complex number (real and imaginary parts): ";
            cin >> r2 >> i2;
    
            Complex c1(r1, i1), c2(r2, i2);
            Complex result = c1.add(c2);
            cout << "Result: ";
            result.display();
            cout << endl;
    
        } else if (operation == 2) {
            double r1, i1, r2, i2;
            cout << "Enter first complex number (real and imaginary parts): ";
            cin >> r1 >> i1;
            cout << "Enter second complex number (real and imaginary parts): ";
            cin >> r2 >> i2;
    
            Complex c1(r1, i1), c2(r2, i2);
            Complex result = c1.multiply(c2);
            cout << "Result: ";
            result.display();
            cout << endl;
    
        } else if (operation == 3) {
            double r, i;
            cout << "Enter a complex number (real and imaginary parts): ";
            cin >> r >> i;
    
            Complex c(r, i);
            cout << "Magnitude: " << c.magnitude() << endl;
    
        } else {
            cout << "Invalid operation type." << endl;
        }
    
        return 0;
    }

// 4.Polymorphism for Shape Area Calculations
    #include <iostream>
    #include <cmath>
    using namespace std;
    
    class Shape {
    public:
        virtual double calculateArea() const = 0; // Pure virtual function
        virtual void display() const = 0;
        virtual ~Shape() {}
    };
    
    class Rectangle : public Shape {
        double length, width;
    
    public:
        Rectangle(double l, double w) : length(l), width(w) {}
        double calculateArea() const override {
            return length * width;
        }
        void display() const override {
            cout << "Shape: Rectangle\nArea: " << calculateArea() << endl;
        }
    };
    
    class Circle : public Shape {
        double radius;
    
    public:
        Circle(double r) : radius(r) {}
        double calculateArea() const override {
            return 3.14159 * radius * radius;
        }
        void display() const override {
            cout << "Shape: Circle\nArea: " << calculateArea() << endl;
        }
    };
    
    class Triangle : public Shape {
        double base, height;
    
    public:
        Triangle(double b, double h) : base(b), height(h) {}
        double calculateArea() const override {
            return 0.5 * base * height;
        }
        void display() const override {
            cout << "Shape: Triangle\nArea: " << calculateArea() << endl;
        }
    };
    
    int main() {
        int shapeType;
        cout << "Enter Shape Type (1 for Rectangle, 2 for Circle, 3 for Triangle): ";
        cin >> shapeType;
    
        if (shapeType == 1) {
            double length, width;
            cout << "Enter Length and Width: ";
            cin >> length >> width;
            Rectangle r(length, width);
            r.display();
        } else if (shapeType == 2) {
            double radius;
            cout << "Enter Radius: ";
            cin >> radius;
            Circle c(radius);
            c.display();
        } else if (shapeType == 3) {
            double base, height;
            cout << "Enter Base and Height: ";
            cin >> base >> height;
            Triangle t(base, height);
            t.display();
        } else {
            cout << "Invalid shape type." << endl;
        }
    
        return 0;
    }

// 5.Advanced Function Overloading for Geometric Shapes
    #include <iostream>
    #include <cmath>
    using namespace std;
    
    // Function to calculate area of a circle
    double calculateArea(double radius) {
        return 3.14159 * radius * radius;
    }
    
    // Function to calculate area of a rectangle
    double calculateArea(double length, double breadth) {
        return length * breadth;
    }
    
    // Function to calculate area of a triangle
    double calculateArea(double base, double height, bool isTriangle) {
        return 0.5 * base * height;
    }
    
    int main() {
        int choice;
        cout << "Enter Shape Type (1 for Circle, 2 for Rectangle, 3 for Triangle): ";
        cin >> choice;
    
        if (choice == 1) {
            double radius;
            cout << "Enter Radius: ";
            cin >> radius;
    
            if (radius > 0)
                cout << "Shape: Circle\nArea: " << calculateArea(radius) << endl;
            else
                cout << "Invalid radius." << endl;
    
        } else if (choice == 2) {
            double length, breadth;
            cout << "Enter Length and Breadth: ";
            cin >> length >> breadth;
    
            if (length > 0 && breadth > 0)
                cout << "Shape: Rectangle\nArea: " << calculateArea(length, breadth) << endl;
            else
                cout << "Invalid dimensions." << endl;
    
        } else if (choice == 3) {
            double base, height;
            cout << "Enter Base and Height: ";
            cin >> base >> height;
    
            if (base > 0 && height > 0)
                cout << "Shape: Triangle\nArea: " << calculateArea(base, height, true) << endl;
            else
                cout << "Invalid dimensions." << endl;
    
        } else {
            cout << "Invalid choice. Please select a valid shape type." << endl;
        }
    
        return 0;
    }
