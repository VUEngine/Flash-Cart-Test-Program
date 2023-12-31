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

#include <SoundManager.h>
#include <WaveForms.h>


//---------------------------------------------------------------------------------------------------------
//												DEFINITIONS
//---------------------------------------------------------------------------------------------------------


const uint16 SuccessTrack[] =
{
  A_3, B_3, E_4, A_4, B_4, E_5, A_5, B_5, E_6, HOLD, HOLD, HOLD, HOLD, ENDSOUND,
  80,  80,  80,  80,  80,  80,  80,  80,  80,  1,    1,    1,    1,    1,
  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,   10,   5,    0,    0,
};

SoundChannelConfigurationROM SuccessSoundChannel1Configuration =
{
	/// kMIDI, kPCM
	kMIDI,

	/// SxINT
	0x9F,

	/// Volume SxLRV
	0xFF,

	/// SxRAM (this is overrode by the SoundManager)
	0x00,

	/// SxEV0
	0x80,

	/// SxEV1
	0x01,

	/// SxFQH
	0x00,

	/// SxFQL
	0x00,

	/// Ch. 5 only
	0x00,

	/// Waveform data pointer
	GlockenWaveForm,

	/// kChannelNormal, kChannelModulation, kChannelNoise
	kChannelNormal,

	/// Volume
	__SOUND_LR
};

SoundChannelROM SuccessSoundChannel1 =
{
	/// Configuration
	(SoundChannelConfiguration*)&SuccessSoundChannel1Configuration,

	/// Length (PCM)
	0,

	/// Sound track
	{
		(const uint8*)SuccessTrack
	}
};


SoundChannelROM* const SuccessSoundChannels[] =
{
	&SuccessSoundChannel1,
	NULL
};

SoundROMSpec SuccessSoundSpec =
{
	/// Name
	"Success",

	/// Play in loop
	false,

	/// Target timer resolution in us
	500,

	/// Tracks
	(SoundChannel**)SuccessSoundChannels
};
