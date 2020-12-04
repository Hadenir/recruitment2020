#pragma once

#include <string>

class Item
{
public:
    Item(const std::string& name, float cost);

    std::string get_name() const;

    float get_cost() const;

    bool is_magical() const;

    void enchant();

    void damage();

private:
    std::string m_name;
    float m_cost;
    bool m_magical = false;
};
