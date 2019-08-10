#pragma once
#include "Window.h"
#include "Camera.h"
#include "CSATELITE.h"
#include "CPLANETA.h"
#include "CFOCO.h"
#include "CSISTEMASOLAR.h"
#include "CGALAXIA.h"
#include "CNODO.h"

class MANAGER
{
public:
	MANAGER();
	~MANAGER();
	void onIniti();
	void onLoop();
	void onDelete();
	CNODO *search(std::string name,CNODO *node);

private:
	GALAXIA* galaxia;
};
