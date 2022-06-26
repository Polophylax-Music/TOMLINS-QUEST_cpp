class status
{
public:
	int hp;	
	int mp;	
};

class player : public status
{
public:
	int lv;	
	char name[20];
	void opening();
	void battle();
	void ending();
	void gameover();
};
