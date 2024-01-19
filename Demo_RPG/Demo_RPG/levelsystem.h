#pragma once
#include <cstdint>

typedef std::uint64_t exptype;
typedef std::uint16_t leveltype;


class LevelSystem {
public:
	LevelSystem() {
		CurrentLevel = 1u;
		CurrentEXP = 0u;
	}

	void gainEXP(exptype gained_exp) {
		CurrentEXP += gained_exp;
		check_if_level();
	}

protected:
	leveltype CurrentLevel;
	leveltype LevelUpAvailable;
	exptype CurrentEXP;

	void check_if_level() {
		static const leveltype levelupmultipler = 2u;
		static const exptype level2at = 100u;
		leveltype current_equilevent_level = CurrentLevel + LevelUpAvailable;
	}
};