///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                              THIS FILE WAS AUTO-GENERATED - DO NOT EDIT                               //
///////////////////////////////////////////////////////////////////////////////////////////////////////////

//---------------------------------------------------------------------------------------------------------
//                                                INCLUDES                                                 
//---------------------------------------------------------------------------------------------------------

#include <BgmapSprite.h>
#include <Entity.h>
#include <Texture.h>


//---------------------------------------------------------------------------------------------------------
//                                              DECLARATIONS                                               
//---------------------------------------------------------------------------------------------------------

extern uint32 FlashBoyPlusLogoEntityFlashBoyPlusLogoTiles[];
extern uint16 FlashBoyPlusLogoEntityFlashBoyPlusLogoBackgroundMap[];
extern uint16 FlashBoyPlusLogoEntityFlashBoyPlusLogoForegroundMap[];


//---------------------------------------------------------------------------------------------------------
//                                                 SPRITES                                                 
//---------------------------------------------------------------------------------------------------------


CharSetROMSpec FlashBoyPlusLogoSprite1CharsetSpec =
{
	// number of chars in function or the number of frames to load at the same time
	253,

	// whether it is shared or not
	true,

	// whether the tiles are optimized or not
	true,

	// char spec
	FlashBoyPlusLogoEntityFlashBoyPlusLogoTiles,

	// pointer to the frames offsets
	NULL,
};

TextureROMSpec FlashBoyPlusLogoSprite1TextureSpec =
{
	// charset spec
	(CharSetSpec*)&FlashBoyPlusLogoSprite1CharsetSpec,

	// bgmap spec
	FlashBoyPlusLogoEntityFlashBoyPlusLogoBackgroundMap,

	// cols (max 64)
	30,

	// rows (max 64)
	10,

	// padding for affine/hbias transformations
	{ 0, 0 },

	// number of frames
	1,

	// palette number (0-3)
	1,

	// recyclable
	false,

	// vertical flip
	false,

	// horizontal flip
	false,
};

BgmapSpriteROMSpec FlashBoyPlusLogoSprite1SpriteSpec =
{
	{
		// sprite's type
		__TYPE(BgmapSprite),

		// texture spec
		(TextureSpec*)&FlashBoyPlusLogoSprite1TextureSpec,

		// transparency (__TRANSPARENCY_NONE, __TRANSPARENCY_EVEN or __TRANSPARENCY_ODD)
		__TRANSPARENCY_NONE,

		// displacement
		{ 0, 0, 0, -1 },
	},

	// bgmap mode (__WORLD_BGMAP, __WORLD_AFFINE, __WORLD_OBJECT or __WORLD_HBIAS)
	// make sure to use the proper corresponding sprite type throughout the spec (BgmapSprite or ObjectSprite)
	__WORLD_BGMAP,
	
	// pointer to affine/hbias manipulation function
	NULL,

	// display mode (__WORLD_ON, __WORLD_LON or __WORLD_RON)
	__WORLD_ON,
};

TextureROMSpec FlashBoyPlusLogoSprite2TextureSpec =
{
	// charset spec
	(CharSetSpec*)&FlashBoyPlusLogoSprite1CharsetSpec,

	// bgmap spec
	FlashBoyPlusLogoEntityFlashBoyPlusLogoForegroundMap,

	// cols (max 64)
	30,

	// rows (max 64)
	10,

	// padding for affine/hbias transformations
	{ 0, 0 },

	// number of frames
	1,

	// palette number (0-3)
	0,

	// recyclable
	false,

	// vertical flip
	false,

	// horizontal flip
	false,
};

BgmapSpriteROMSpec FlashBoyPlusLogoSprite2SpriteSpec =
{
	{
		// sprite's type
		__TYPE(BgmapSprite),

		// texture spec
		(TextureSpec*)&FlashBoyPlusLogoSprite2TextureSpec,

		// transparency (__TRANSPARENCY_NONE, __TRANSPARENCY_EVEN or __TRANSPARENCY_ODD)
		__TRANSPARENCY_NONE,

		// displacement
		{ 0, 0, -1, -1 },
	},

	// bgmap mode (__WORLD_BGMAP, __WORLD_AFFINE, __WORLD_OBJECT or __WORLD_HBIAS)
	// make sure to use the proper corresponding sprite type throughout the spec (BgmapSprite or ObjectSprite)
	__WORLD_BGMAP,
	
	// pointer to affine/hbias manipulation function
	NULL,

	// display mode (__WORLD_ON, __WORLD_LON or __WORLD_RON)
	__WORLD_ON,
};

BgmapSpriteROMSpec* const FlashBoyPlusLogoSpriteSpecs[] =
{
	(BgmapSpriteSpec*)&FlashBoyPlusLogoSprite1SpriteSpec,
	(BgmapSpriteSpec*)&FlashBoyPlusLogoSprite2SpriteSpec,
	NULL
};

//---------------------------------------------------------------------------------------------------------
//                                                 ENTITY                                                  
//---------------------------------------------------------------------------------------------------------

EntityROMSpec FlashBoyPlusLogoEntitySpec =
{
			// class allocator
			__TYPE(Entity),

			// children
			NULL,

			// behaviors
			NULL,

			// extra
			NULL,

			// sprites
			(SpriteSpec**)FlashBoyPlusLogoSpriteSpecs,

			// use z displacement in projection
			false,

			// wireframes
			NULL,

			// colliders
			NULL,

			// size
			// if 0, width and height will be inferred from the first sprite's texture's size
			{ 0, 0, 0 },

			// gameworld's character's type
			kTypeNone,

			// physical specification
			(PhysicalProperties*)NULL,
};
