/*
 * Flash Cart Test Program
 *
 * © Christian Radke
 *
 * For the full copyright and license information, please view the LICENSE file
 * that was distributed with this source code.
 */


//---------------------------------------------------------------------------------------------------------
//												INCLUDES
//---------------------------------------------------------------------------------------------------------

#include <VUEngine.h>
#include <TestScreenState.h>
#include <AlignmentCheckScreenState.h>


//---------------------------------------------------------------------------------------------------------
//											GAME'S MAIN LOOP
//---------------------------------------------------------------------------------------------------------

int32 game(void)
{
	// initialize plugins
	SplashScreenState::setNextState(
		SplashScreenState::safeCast(AlignmentCheckScreenState::getInstance()),
		GameState::safeCast(TestScreenState::getInstance())
	);

	// start the game
	VUEngine::start(VUEngine::getInstance(), GameState::safeCast(TestScreenState::getInstance()));

	// end program
	return true;
}
