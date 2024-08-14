#pragma once
#include"MediaPlayer.h"
#include"Physics.h"
#include"Renderer.h"
#include<memory>
class Facade
{
public:
	Facade(std::unique_ptr<Physics> physics, std::unique_ptr<Renderer> render,std::shared_ptr<MediaPlayer> mediaplayer);
	void initPhysics();
	void playSound();
	void renderWorld();
	~Facade();
private:
	std::unique_ptr<Physics> m_py;
	std::unique_ptr<Renderer> m_render;
	std::shared_ptr<MediaPlayer> m_mediaPlayers;
};

