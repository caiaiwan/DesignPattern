#include "Facade.h"

Facade::Facade(std::unique_ptr<Physics> physics, std::unique_ptr<Renderer> render, std::shared_ptr<MediaPlayer> mediaplayer) 
	:m_py{ std::move(physics) }, m_render{ std::move(render) }, m_mediaPlayers{ mediaplayer }
{
}

void Facade::initPhysics()
{
	m_py->initPhysicsWorld();
}

void Facade::playSound()
{
	m_mediaPlayers->playSound();
}

void Facade::renderWorld()
{
	m_render->startRender();
}

Facade::~Facade()
{
}
