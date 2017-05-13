#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class CinderParticles1App : public App {
  public:
	void setup() override;
	void mouseDown( MouseEvent event ) override;
	void update() override;
	void draw() override;
};

void CinderParticles1App::setup()
{
}

void CinderParticles1App::mouseDown( MouseEvent event )
{
}

void CinderParticles1App::update()
{
}

void CinderParticles1App::draw()
{
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP( CinderParticles1App, RendererGl )
