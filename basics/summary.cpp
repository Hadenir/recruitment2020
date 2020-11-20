#include <iostream>
#include <string>
#include <vector>

void add_book(std::vector<std::string>& titles, std::vector<float>& prices)
{
    std::cout << "Title of the book: ";
    std::string title;
    std::cin >> title;

    std::cout << "Price of the book: ";
    float price;
    std::cin >> price;

    if(price <= 0.0)
    {
        std::cout << "Wrong data!" << std::endl;
        return;
    }

    titles.push_back(title);
    prices.push_back(price);
}

void edit_book(std::vector<std::string>& titles, std::vector<float>& prices, unsigned int id)
{
    if(id >= titles.size())
    {
        std::cout << "There is no such book." << std::endl;
        return;
    }

    std::cout << "New title of the book: ";
    std::string title;
    std::cin >> title;

    std::cout << "New price of the book: ";
    float price;
    std::cin >> price;

    if(price <= 0.0)
    {
        std::cout << "Wrong data!" << std::endl;
        return;
    }

    titles[id] = title;
    prices[id] = price;
}

void print_books(const std::vector<std::string>& titles, const std::vector<float>& prices)
{
    for(int i = 0; i < titles.size(); i++)
    {
        std::cout << i << ". \"" << titles[i] << "\", $" << prices[i] << ";" << std::endl;
    }
}

int main()
{
    std::vector<std::string> book_titles;
    std::vector<float> book_prices;

    std::cout << "Welcome to my book library." << std::endl;

    char option;
    bool exit = false;
    while(!exit)
    {
        std::cout << "a. Add a book" << std::endl
                  << "b. Clear library" << std::endl
                  << "c. Edit book info" << std::endl
                  << "d. Show my books" << std::endl
                  << "e. Exit program" << std::endl;
        std::cout << "Pick an option: ";
        std::cin >> option;

        switch(option)
        {
            case 'a':
                add_book(book_titles, book_prices);
                break;
            case 'b':
                book_titles.clear();
                book_prices.clear();
                break;
            case 'c':
                std::cout << "Which book to edit: ";
                unsigned int id;
                std::cin >> id;
                edit_book(book_titles, book_prices, id);
                break;
            case 'd':
                print_books(book_titles, book_prices);
                break;
            case 'e':
                exit = true;
                break;
            default:
                std::cout << "That's not an option!" << std::endl;
                continue;
        }

        std::cout << std::endl;
    }

    std::cout << "Goodbye!" << std::endl;
    return 0;
}
