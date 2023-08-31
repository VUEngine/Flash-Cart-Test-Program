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


const uint16 FailureTrack[] =
{

  E_4, B_3, A_3, E_3, B_2, A_2, E_1, B_1, A_1, HOLD, HOLD, HOLD, HOLD, ENDSOUND,
  80,  80,  80,  80,  80,  80,  80,  80,  80,  1,    1,    1,    1,    1,
  15,  15,  15,  15,  15,  15,  15,  15,  15,  15 ,  10,   5,    0,    0,
};

SoundChannelConfigurationROM FailureSoundChannel1Configuration =
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

SoundChannelROM FailureSoundChannel1 =
{
	/// Configuration
	(SoundChannelConfiguration*)&FailureSoundChannel1Configuration,

	/// Length (PCM)
	0,

	/// Sound track
	{
		(const uint8*)FailureTrack
	}
};


SoundChannelROM* const FailureSoundChannels[] =
{
	&FailureSoundChannel1,
	NULL
};

SoundROM FailureSound =
{
	/// Name
	"Failure",

	/// Play in loop
	false,

	/// Target timer resolution in us
	500,

	/// Tracks
	(SoundChannel**)FailureSoundChannels
};