#pragma once
#include "Button.h"
#include "BackButton.h"

class GameController;
class OptionsButton : public Button
{
public:
	OptionsButton(std::function<void(sf::RenderWindow*)> drow);
	void showContentButton(GameController& game, GameBoard& board)override;


private:
	sf::Text m_printing;
	BackButton m_backButton;
	std::function<void(sf::RenderWindow*)> m_drowFunk;
};
