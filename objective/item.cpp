#include "item.hpp"

Item::Item(const std::string& name, float cost)
    : m_name(name), m_cost(cost)
{}

std::string Item::get_name() const
{
    return m_name;
}

float Item::get_cost() const
{
    return m_cost;
}

bool Item::is_magical() const
{
    return m_magical;
}

void Item::enchant()
{
    m_magical = true;
}

void Item::damage()
{
    m_cost /= 3;
}
