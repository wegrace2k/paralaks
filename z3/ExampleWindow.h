/*
 * ExampleWindow.h
 *
 *  Created on: 25 мар. 2021 г.
 *      Author: TEN
 */

#ifndef EXAMPLEWINDOW_H_
#define EXAMPLEWINDOW_H_

#include "Window.h"

class ExampleWindow: public Window
{
protected:
	std::shared_ptr<SDL_Texture> _doroga;
	std::shared_ptr<SDL_Texture> _trava1;
	std::shared_ptr<SDL_Texture> _trava11;
	std::shared_ptr<SDL_Texture> _trava2;
	std::shared_ptr<SDL_Texture> _trava22;
	std::shared_ptr<SDL_Texture> _house;
	std::shared_ptr<SDL_Texture> _lesdal;
	std::shared_ptr<SDL_Texture> _lesdal2;
	std::shared_ptr<SDL_Texture> _cloudback;
	std::shared_ptr<SDL_Texture> _sun;
	std::shared_ptr<SDL_Texture> _cloud2;
	std::shared_ptr<SDL_Texture> _cloud1;
	std::shared_ptr<SDL_Texture> _otboibliz;
	std::shared_ptr<SDL_Texture> _otboibliz1;
	std::shared_ptr<SDL_Texture> _otboidaln;
	std::shared_ptr<SDL_Texture> _otboidaln1;
	std::shared_ptr<SDL_Texture> _treemnog;
	std::shared_ptr<SDL_Texture> _treemnog1;
	std::shared_ptr<SDL_Texture> _car;
	std::shared_ptr<SDL_Texture> _znak;





	int _doroga_x, _doroga_y,
		_trava1_x, _trava1_y,
		_trava11_x, _trava11_y,
		_trava2_x, _trava2_y,
		_trava22_x, _trava22_y,
		_house_x, _house_y,
		_lesdal_x, _lesdal_y,
		_lesdal2_x, _lesdal2_y,
		_cloudback_x, _cloudback_y,
		_sun_x, _sun_y,
		_cloud2_x, _cloud2_y,
		_cloud1_x, _cloud1_y,
		_otboibliz_x, _otboibliz_y,
		_otboidaln_x, _otboidaln_y,
		_otboibliz1_x, _otboibliz1_y,
		_otboidaln1_x, _otboidaln1_y,
		_treemnog_x, _treemnog_y,
		_treemnog1_x, _treemnog1_y,
		_car_x, _car_y,
		_znak_x, _znak_y;

	double _car_phase; //для движения

public:
	ExampleWindow (
			int width = DEFAULT_WIDTH,
			int height = DEFAULT_HEIGHT);

	virtual ~ExampleWindow() = default;


	virtual void render() override;
	virtual void do_logic() override;
	virtual void handle_keys(const Uint8 *keys) override;
};



#endif /* EXAMPLEWINDOW_H_ */
