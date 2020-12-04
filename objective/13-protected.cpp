#include <iostream>
#include <string>

class Player
{
public:
    Player(const std::string& nickname)
        : m_nickname(nickname) {}

    std::string get_nickname() const { return m_nickname; }

    float get_health() const { return m_health; }

    float get_attack() const { return m_attack; }

protected:
    float m_health = 10;
    float m_attack = 1;

private:
    std::string m_nickname;
};

class Warrior : public Player
{
public:
    Warrior(const std::string& nickname)
        : Player(nickname)
    {
        m_health = 15;
        m_attack = 5;
    }
};

int main()
{
    Player plyr("Hadenir");

    Warrior alex("Alexander");
    Warrior herc("Hercules");

    std::cout << "Player " << plyr.get_nickname() << "'s stats: " << plyr.get_attack() << '/' << plyr.get_health() << std::endl;
    std::cout << "Player " << alex.get_nickname() << "'s stats: " << alex.get_attack() << '/' << alex.get_health() << std::endl;
    std::cout << "Player " << herc.get_nickname() << "'s stats: " << herc.get_attack() << '/' << herc.get_health() << std::endl;

    // std::cout << "Player " << plyr.m_nickname << "'s stats: " << plyr.m_attack << '/' << plyr.m_health << std::endl;
    // std::cout << "Player " << alex.m_nickname << "'s stats: " << alex.m_attack << '/' << alex.m_health << std::endl;
    // std::cout << "Player " << herc.m_nickname << "'s stats: " << herc.m_attack << '/' << herc.m_health << std::endl;
}
