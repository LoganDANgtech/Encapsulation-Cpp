#pragma once
#include"Entity.h"
#include <vector>

class World {
	public :
		std::vector<Entity*> W = {};

		World();
		
		void Init();
		int Step();
};