#include <string>

class Card
{
private:
	static std::string faces[13];
	static std::string suits[4];
	std::string face;
	std::string suit;
public:
	explicit Card(int);
	std::string toString();
	void setCard(int);
	void setFace(int);
	void setSuit(int);
};
