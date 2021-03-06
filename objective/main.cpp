#include <iostream>
#include <vector>

#include "item.hpp"

void print_items(const std::vector<Item>& items)
{
    for(int i = 0; i < items.size(); i++)
    {
        std::cout << (i+1) << ". ";
        if(items[i].is_magical()) std::cout << '*';
        std::cout << items[i].get_name() << " - $" << items[i].get_cost() << std::endl;
    }
}

int main()
{
    std::vector<Item> items;
    for(int i = 0; i < 5; i++)
    {
        Item new_item("Sword", 100);
        items.push_back(new_item);
    }

    for(int i = 0; i < 5; i++)
    {
        items.push_back(Item("Shield", 150));
    }

    Item wand("Magic wand", 1000);
    wand.enchant();
    items.push_back(wand);

    print_items(items);

    for(int i = 3; i < 7; i++)
    {
        items[i].damage();
        items[i].enchant();
    }

    print_items(items);
}
