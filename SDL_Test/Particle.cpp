#include "Particle.h"
#include <math.h>
#include <stdlib.h>
#include <SDL_stdinc.h>

Particle::Particle() : m_x(0), m_y(0) {
	m_direction = (2 * M_PI * rand()) / RAND_MAX;
	m_speed = (0.001 * rand()) / RAND_MAX;
}

Particle::~Particle() {

}

void Particle::update() {
	double xSpeed = m_speed * cos(m_direction);
	double ySpeed = m_speed * sin(m_direction);

	m_x += xSpeed;
	m_y += ySpeed;
}
