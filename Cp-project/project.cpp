#include <iostream>
#include <vector>
#include <string>
using namespace std;

// User class for login and logout functionality
class User {
private:
    string username;
    bool loggedIn;

public:
    User() : loggedIn(false) {}

    void login(string name) {
        if (!loggedIn) {
            username = name;
            loggedIn = true;
            cout << "Welcome, " << username << "! You are now logged in.\n";
        } else {
            cout << "You are already logged in as " << username << ".\n";
        }
    }

    void logout() {
        if (loggedIn) {
            cout << "Goodbye, " << username << "! You are now logged out.\n";
            username = "";
            loggedIn = false;
        } else {
            cout << "You are not logged in.\n";
        }
    }

    bool isLoggedIn() const {
        return loggedIn;
    }
};

// Product structure
struct Product {
    string name;
    double price;
};

// List of available products
vector<Product> listProducts() {
    return {
        {"Laptop", 999.99},
        {"Smartphone", 499.99},
        {"Headphones", 49.99},
        {"Keyboard", 29.99},
        {"Mouse", 19.99}
    };
}
// Cart class to manage shopping cart
class Cart {
private:
    vector<Product> products;

public:
    void addProduct(const Product& product) {
        products.push_back(product);
        cout << product.name << " has been added to your cart.\n";
    }

    void displayCart() const {
        if (products.empty()) {
            cout << "Your cart is empty.\n";
            return;
        }

        double total = 0;
        cout << "Your cart contains:\n";
        for (const auto& product : products) {
            cout << "- " << product.name << ": $" << product.price << '\n';
            total += product.price;
        }
        cout << "Total: $" << total << '\n';
    }

    void checkout() {
        if (products.empty()) {
            cout << "Your cart is empty. Add products before checkout.\n";
            return;
        }

        cout << "Order details:\n";
        displayCart();
        cout << "Thank you for your purchase!\n";
        products.clear(); // Clear cart after checkout
    }
};


// Main program
int main() {
    User user;
    Cart cart;
    vector<Product> products = listProducts();

    int choice;
    do {
        cout << "\n=== E-commerce Shopping Cart ===\n";
        cout << "1. Login\n";
        cout << "2. Logout\n";
        cout << "3. List all products\n";
        cout << "4. Add product to cart\n";
        cout << "5. View cart\n";
        cout << "6. Checkout\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string username;
                cout << "Enter your username: ";
                cin >> username;
                user.login(username);
                break;
            }
            case 2:
                user.logout();
                break;
            case 3:
                cout << "Available products:\n";
                for (size_t i = 0; i < products.size(); ++i) {
                    cout << i + 1 << ". " << products[i].name << " - $" << products[i].price << '\n';
                }
                break;
            case 4:
                if (user.isLoggedIn()) {
                    int productIndex;
                    cout << "Enter the product number to add to cart: ";
                    cin >> productIndex;
                    if (productIndex > 0 && productIndex <= products.size()) {
                        cart.addProduct(products[productIndex - 1]);
                    } else {
                        cout << "Invalid product number.\n";
                    }
                } else {
                    cout << "Please login first.\n";
                }
                break;
            case 5:
                cart.displayCart();
                break;
            case 6:
                if (user.isLoggedIn()) {
                    cart.checkout();
                } else {
                    cout << "Please login first.\n";
                }
                break;
            case 7:
                cout << "Exiting the program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 7);

    return 0;
}
