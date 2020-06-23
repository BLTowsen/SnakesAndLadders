
class Player {
private:
	struct Coordinates{
		int newX = 0;
		int newY = 0;
		int oldX = 0;
		int oldY = 0;
	};
	Coordinates coordinates;
public:
	Player();
	void move(int steps);
	int getNewX() { return coordinates.newX;}
	int getNewY() { return coordinates.newY; }
};
