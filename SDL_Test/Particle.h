#pragma once
struct Particle {
	double m_x;
	double m_y;
	double m_xSpeed;
	double m_ySpeed;

public:
	Particle();
	virtual ~Particle();
	void update();
};

