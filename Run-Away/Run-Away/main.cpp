#include<iostream>
#include<SFML/Graphics.hpp>
#include<vector>
#include<string>

sf::VideoMode win_size(1080, 800);
std::string win_name{ "Run-Away" };

int main() {

	sf::RenderWindow window(win_size, win_name, sf::Style::Default);

	//First player configuration:--
	sf::Vector2f player_1_size(40.0f, 40.0f);
	sf::RectangleShape player_1(player_1_size);
	// player origin:
	player_1.setOrigin(player_1_size.x / 2, player_1_size.y / 2);
	// player position:
	player_1.setPosition(window.getSize().x / -20, window.getSize().y / 2);
	//Player color:
	player_1.setFillColor(sf::Color::Red);
	// player velocity:
	sf::Vector2f player_1_velocity(0.0f, 0.0f);
	//float speed_1 = 0.5f;



	//Second player configuration:--
	sf::Vector2f player_2_size(40.0f, 40.0f);
	sf::RectangleShape player_2(player_2_size);
	// player origin:
	player_2.setOrigin(player_2_size.x / 2, player_2_size.y / 2);
	// player position
	player_2.setPosition(window.getSize().x / 1.05, window.getSize().y / 2);
	//Player color:
	player_2.setFillColor(sf::Color::Yellow);
	// player velocity:
	sf::Vector2f player_2_velocity(0.0f, 0.0f);
	//float speed_2 = 0.5f;


	//Vertical-Maze Configuration:
	std::vector<sf::RectangleShape> Ver_maze_wall;
	sf::Vector2f Ver_maze_size(30.0f, 100.0f);

	//Texture
	sf::Texture maze_texture;
	maze_texture.loadFromFile("tex.png");

	//Maze-Walls:--
	Ver_maze_wall.push_back(sf::RectangleShape(Ver_maze_size));
	Ver_maze_wall.back().setPosition(100.0f, 200.0f);
	Ver_maze_wall.back().setTexture(&maze_texture);
	Ver_maze_wall.push_back(sf::RectangleShape(Ver_maze_size));
	Ver_maze_wall.back().setPosition(250.0f, 200.0f);
	Ver_maze_wall.back().setTexture(&maze_texture);
	Ver_maze_wall.push_back(sf::RectangleShape(Ver_maze_size));
	Ver_maze_wall.back().setPosition(400.0f, 200.0f);
	Ver_maze_wall.back().setTexture(&maze_texture);
	Ver_maze_wall.push_back(sf::RectangleShape(Ver_maze_size));
	Ver_maze_wall.back().setPosition(550.0f, 200.0f);
	Ver_maze_wall.back().setTexture(&maze_texture);
	Ver_maze_wall.push_back(sf::RectangleShape(Ver_maze_size));
	Ver_maze_wall.back().setPosition(700.0f, 200.0f);
	Ver_maze_wall.back().setTexture(&maze_texture);
	Ver_maze_wall.push_back(sf::RectangleShape(Ver_maze_size));
	Ver_maze_wall.back().setPosition(850.0f, 200.0f);
	Ver_maze_wall.back().setTexture(&maze_texture);
	Ver_maze_wall.push_back(sf::RectangleShape(Ver_maze_size));
	Ver_maze_wall.back().setPosition(1000.0f, 200.0f);
	Ver_maze_wall.back().setTexture(&maze_texture);
	//Ver_maze_wall.push_back(sf::RectangleShape(Ver_maze_size));
	//Ver_maze_wall.back().setPosition(800.0f, 200.0f);
	//Ver_maze_wall.back().setFillColor(sf::Color::Blue);
	//Ver_maze_wall.push_back(sf::RectangleShape(Ver_maze_size));
	//Ver_maze_wall.back().setPosition(900.0f, 200.0f);
	//Ver_maze_wall.back().setFillColor(sf::Color::Blue);

	Ver_maze_wall.push_back(sf::RectangleShape(Ver_maze_size));
	Ver_maze_wall.back().setPosition(100.0f, 500.0f);
	Ver_maze_wall.back().setTexture(&maze_texture);
	Ver_maze_wall.push_back(sf::RectangleShape(Ver_maze_size));
	Ver_maze_wall.back().setPosition(250.0f, 500.0f);
	Ver_maze_wall.back().setTexture(&maze_texture);
	Ver_maze_wall.push_back(sf::RectangleShape(Ver_maze_size));
	Ver_maze_wall.back().setPosition(400.0f, 500.0f);
	Ver_maze_wall.back().setTexture(&maze_texture);
	Ver_maze_wall.push_back(sf::RectangleShape(Ver_maze_size));
	Ver_maze_wall.back().setPosition(550.0f, 500.0f);
	Ver_maze_wall.back().setTexture(&maze_texture);
	Ver_maze_wall.push_back(sf::RectangleShape(Ver_maze_size));
	Ver_maze_wall.back().setPosition(700.0f, 500.0f);
	Ver_maze_wall.back().setTexture(&maze_texture);
	Ver_maze_wall.push_back(sf::RectangleShape(Ver_maze_size));
	Ver_maze_wall.back().setPosition(850.0f, 500.0f);
	Ver_maze_wall.back().setTexture(&maze_texture);
	Ver_maze_wall.push_back(sf::RectangleShape(Ver_maze_size));
	Ver_maze_wall.back().setPosition(1000.0f, 500.0f);
	Ver_maze_wall.back().setTexture(&maze_texture);
	//Ver_maze_wall.push_back(sf::RectangleShape(Ver_maze_size));
	//Ver_maze_wall.back().setPosition(800.0f, 500.0f);
	//Ver_maze_wall.back().setFillColor(sf::Color::Blue);
	//Ver_maze_wall.push_back(sf::RectangleShape(Ver_maze_size));
	//Ver_maze_wall.back().setPosition(900.0f, 500.0f);
	//Ver_maze_wall.back().setFillColor(sf::Color::Blue);



	////Horizontal-Maze Configuration:
	//std::vector<sf::RectangleShape>Hor_maze_wall;
	//sf::Vector2f Hor_maze_size(100.0f, 30.0f);
	////Maze Wall
	//Hor_maze_wall.push_back(sf::RectangleShape(Hor_maze_size));
	//Hor_maze_wall.back().setPosition(200.0f, 400.0f);
	//Hor_maze_wall.back().setFillColor(sf::Color::Blue);




	//Gameover-Timer-segment
	sf::Font time_font;
	if (!time_font.loadFromFile("Daily bubble.ttf"))
	{
		return -1;
	}
	sf::Text time;
	time.setCharacterSize(30);
	time.setFillColor(sf::Color::White);
	time.setStyle(sf::Text::Bold);
	time.setFont(time_font);
	time.setPosition(10.0f, 10.0f);
	//Clock:-
	sf::Clock clock;





	//Game over segment:
	sf::Font font;
	if (!font.loadFromFile("Daily Bubble.ttf"))
	{
		return -1;
	}
	bool is_gameover = false;
	sf::Text gameover;
	gameover.setFont(font);
	gameover.setString("GAME OVER");
	gameover.setFillColor(sf::Color::Green);
	gameover.setCharacterSize(50);
	gameover.setStyle(sf::Text::Bold);
	gameover.setPosition(400, 400);



	float speed = 0.5f;

	//Game loop
	while (window.isOpen()) {
		sf::Event ev{};
		while (window.pollEvent(ev)) {
			switch (ev.type)
			{
			case sf::Event::Closed:
				window.close();
				break;
			}
		}



		player_1_velocity = { 0.0f,0.0f };
		player_2_velocity = { 0.0f,0.0f };

		//First player movement
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
		{
			player_1_velocity.y = -speed;
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		{
			player_1_velocity.y = speed;
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		{
			player_1_velocity.x = -speed;
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		{
			player_1_velocity.x = speed;
		}

		player_1.move(player_1_velocity);


		//Second player movement
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
		{
			player_2_velocity.y = -speed;
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
		{
			player_2_velocity.y = speed;
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
		{
			player_2_velocity.x = -speed;
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
		{
			player_2_velocity.x = speed;
		}
		player_2.move(player_2_velocity);




		//Maze collision:
		//For Vertical-Maze
		for (int i = 0; i < Ver_maze_wall.size(); i++)
		{
			if (player_1.getGlobalBounds().intersects(Ver_maze_wall[i].getGlobalBounds()))
			{
				player_1.move(-player_1_velocity);
			}

			if (player_2.getGlobalBounds().intersects(Ver_maze_wall[i].getGlobalBounds()))
			{
				player_2.move(-player_2_velocity);
			}
		}

		//For Horizontal-Maze
		//for (int i = 0; i < Hor_maze_wall.size(); i++)
		//{
		//	if (player_1.getGlobalBounds().intersects(Hor_maze_wall[i].getGlobalBounds()))
		//	{
		//		player_1.move(-player_1_velocity);
		//	}

		//	if (player_2.getGlobalBounds().intersects(Hor_maze_wall[i].getGlobalBounds()))
		//	{
		//		player_2.move(-player_2_velocity);
		//	}
		//}




		//Wall Colision for First player: 
		if (player_1.getPosition().x - player_1_size.x / 2 < 0)
		{
			player_1.setPosition(player_1_size.x / 2, player_1.getPosition().y);
		}

		if (player_1.getPosition().x + player_1_size.x / 2 > window.getSize().x)
		{
			player_1.setPosition(window.getSize().x - player_1_size.x / 2, player_1.getPosition().y);

		}

		if (player_1.getPosition().y - player_1_size.y / 2 < 0)
		{
			player_1.setPosition(player_1.getPosition().x, player_1_size.y / 2);
		}

		if (player_1.getPosition().y + player_1_size.y / 2 > window.getSize().y)
		{
			player_1.setPosition(player_1.getPosition().x, window.getSize().y - player_1_size.y / 2);

		}


		//Wall Colision for Second  player: 
		if (player_2.getPosition().x - player_2_size.x / 2 < 0)
		{
			player_2.setPosition(player_2_size.x / 2, player_2.getPosition().y);
		}

		if (player_2.getPosition().x + player_2_size.x / 2 > window.getSize().x)
		{
			player_2.setPosition(window.getSize().x - player_2_size.x / 2, player_2.getPosition().y);

		}

		if (player_2.getPosition().y - player_2_size.y / 2 < 0)
		{
			player_2.setPosition(player_2.getPosition().x, player_2_size.y / 2);
		}


		if (player_2.getPosition().y + player_1_size.y / 2 > window.getSize().y)
		{
			player_2.setPosition(player_2.getPosition().x, window.getSize().y - player_2_size.y / 2);

		}


		if (player_1.getGlobalBounds().intersects(player_2.getGlobalBounds()))
		{
			//window.close();
			is_gameover = true;
		}


		float elapsed_time = clock.getElapsedTime().asSeconds();
		float countdown{ 90.0f };
		float timer = countdown - elapsed_time;
		int int_time = static_cast<int>(timer);


		time.setString("Time: " + std::to_string(int_time) + "s");


		window.clear();
		for (int i = 0; i < Ver_maze_wall.size(); i++) {
			window.draw(Ver_maze_wall[i]);
		}
		//for (int i = 0; i < Hor_maze_wall.size(); i++)
		//{
		//	window.draw(Hor_maze_wall[i]);
		//}
		if (is_gameover)
		{
			window.draw(gameover);
		}
		else if (timer > 120.0f)
		{
			window.draw(gameover);
		}
		else
		{
			window.draw(player_1);
			window.draw(player_2);
			window.draw(time);
		}
		window.display();

	}

	return 0;
}