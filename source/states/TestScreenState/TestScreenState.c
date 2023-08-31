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
#include <Camera.h>
#include <CameraEffectManager.h>
#include <Printing.h>
#include <SoundManager.h>
#include <SRAMManager.h>
#include <TestScreenState.h>
#include <string.h>


//---------------------------------------------------------------------------------------------------------
//												DECLARATIONS
//---------------------------------------------------------------------------------------------------------

extern Sound FailureSound;
extern Sound SuccessSound;
extern Sound SuccessSuccessSound;
extern StageROMSpec TestScreenStageSpec;


//---------------------------------------------------------------------------------------------------------
//												CLASS'S METHODS
//---------------------------------------------------------------------------------------------------------

void TestScreenState::constructor()
{
	Base::constructor();
}

void TestScreenState::destructor()
{
	Base::destructor();
}

void TestScreenState::enter(void* owner)
{
	Base::enter(this, owner);

	TestScreenState::loadStage(this, (StageSpec*)&TestScreenStageSpec, NULL, true, false);

	TestScreenState::startClocks(this);
	Printing::setCoordinates(Printing::getInstance(), 0, 0, 0, 0);

	VUEngine::disableKeypad(VUEngine::getInstance());

	TestScreenState::startTest(this);

	Camera::startEffect(Camera::getInstance(), kHide);
	Camera::startEffect(Camera::getInstance(), kFadeTo, 0, NULL, 0, NULL, NULL);
}

void TestScreenState::startTest()
{
	Printing::setPalette(Printing::getInstance(), 0);
	Printing::text(Printing::getInstance(), "SRAM Prev. Data", 12, 20, NULL);
	uint8 success = 0;

	if(TestScreenState::testSRAM(this, false))
	{
		Printing::text(Printing::getInstance(), __CHAR_CHECKBOX_CHECKED, 29, 20, NULL);
		Printing::text(Printing::getInstance(), "Found", 30, 20, NULL);
		success++;
	} 
	else
	{
		Printing::text(Printing::getInstance(), __CHAR_CHECKBOX_UNCHECKED, 29, 20, NULL);
		Printing::text(Printing::getInstance(), "None", 30, 20, NULL);
	}

	Printing::text(Printing::getInstance(), "SRAM Read/Write", 12, 22, NULL);

	if(TestScreenState::testSRAM(this, true))
	{
		Printing::text(Printing::getInstance(), __CHAR_CHECKBOX_CHECKED, 29, 22, NULL);
		Printing::text(Printing::getInstance(), "Passed", 30, 22, NULL);
		success++;
	}
	else
	{
		Printing::setPalette(Printing::getInstance(), 3);
		Printing::text(Printing::getInstance(), __CHAR_CHECKBOX_UNCHECKED, 29, 22, NULL);
		Printing::text(Printing::getInstance(), "Failed", 30, 22, NULL);
	}

	switch(success)
	{
		case 0: 
			SoundManager::playSound(SoundManager::getInstance(), &FailureSound, kPlayAll, NULL, kSoundWrapperPlaybackNormal, NULL, NULL);
			break;
		case 1: 
			SoundManager::playSound(SoundManager::getInstance(), &SuccessSound, kPlayAll, NULL, kSoundWrapperPlaybackNormal, NULL, NULL);
			break;
		case 2: 
			SoundManager::playSound(SoundManager::getInstance(), &SuccessSuccessSound, kPlayAll, NULL, kSoundWrapperPlaybackNormal, NULL, NULL);
			break;
	}
}

bool TestScreenState::testSRAM(bool write)
{
	uint8 testStringLength = strlen(TEST_STRING);
	char testString[testStringLength];
	SRAMManager sramManager = SRAMManager::getInstance();

	if(write)
	{
		SRAMManager::save(sramManager, (BYTE*)TEST_STRING, 0, sizeof(testString));
	}
	SRAMManager::read(sramManager, (BYTE*)&testString, 0, sizeof(testString));

	return !strncmp(testString, TEST_STRING, testStringLength);
}
