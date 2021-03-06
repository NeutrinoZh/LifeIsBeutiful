#pragma once
#include "Graphics.h"

namespace EngineCore {
	class Shaders : public Resource<Shader*> {
	public:
		Shaders(std::string name) : Resource<Shader*>(name) {};
		static Shaders* shaders;

		Shader* load(std::string path);
		void free(Shader* shader);
	};

	Shaders& shaders();
}