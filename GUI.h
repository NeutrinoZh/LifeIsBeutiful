#pragma once
#include "Widget.h"

namespace EngineCore {
	class Widget;

	class GUI {
	public:
		static Shader* shader;
		static glm::mat4 proj;
		
		static void init();
		static void free();

		static void drawRect(glm::vec2 position, glm::vec2 size, glm::vec4 color, Texture texture);
	};


}