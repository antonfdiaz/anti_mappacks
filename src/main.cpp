#include <Geode/Geode.hpp>
#include <Geode/modify/CreatorLayer.hpp>

using namespace geode::prelude;

class $modify(CreatorLayer) {
	bool init() {
		if (!CreatorLayer::init()) {
			return false;
		}

		auto menu = this->getChildByID("creator-buttons-menu");
		menu->removeChildByID("map-packs-button"); //evil hax >:)

		return true;
	}
};