#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) {
            return false;
        }

        auto alert = FLAlertLayer::create(
            "GD Plus", 
            "Geometry Dash Plus loaded successfully!", 
            "Awesome"
        );
        alert->m_noElasticity = true;
        alert->show();

        return true;
    }
};

