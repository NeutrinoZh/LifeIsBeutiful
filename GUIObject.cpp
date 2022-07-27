#include "GUIObject.h"

namespace EngineCore {
	void GUIObject::start() {
		if (!container)
			container = new Container();
		container->Start();
	}

	void GUIObject::update() {
		container->Update();
	}

	void GUIObject::draw() {
		container->Draw();
	}

	void GUIObject::free() {
		container->Free();
		delete container;
	}
}