#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <iostream>
using std::string;
using std::cout;
using std::endl;

class Player
{
private:
	static int	num_of_players;
	string		*name;
	int			*health;
	int			*xp;

public:
	// Constructors
	Player(string name_to_set = "Player", int health_to_set = 100, int xp = 0);
	
	// Destructors
	~Player();

	// Mover
	Player(Player &&source) noexcept;

	// Copier
	Player(const Player &source);

	// Basic getters
	static int	get_num_of_players();
	string		get_name() const;
	int			get_health() const;
	int			get_xp() const;
	
	// Basic setters
	void		set_name(string name_to_set);
	void		set_health(int health_to_set);
	void		set_xp(int xp_to_set);

	// Overloaders
};

#endif
