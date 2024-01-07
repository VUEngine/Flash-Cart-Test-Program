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
//                                               IMAGE DATA                                                
//---------------------------------------------------------------------------------------------------------

const uint32 AdjustmentIconREntityAdjustmentIconRightTiles[17] __attribute__((aligned(4))) =
{
	0x00000000,
	0xAFEBFFFC,0xAFEBAFEB,0xABABAFEB,0xEBAFEBAF,0xFAAB3FFF,0xEAABEAAB,0xEBEBEBEB,0xFAABEBEB,
	0xEAAFEBAF,0xFABFFABF,0xFEFFFABF,0xFFFCFEFF,0xEBEBEAAB,0xEBEBEBEB,0xEAABEAAB,0x3FFFFAAB,
};

const uint16 AdjustmentIconREntityAdjustmentIconMap[4] __attribute__((aligned(4))) =
{
	0x0000,0x0001,0x0002,0x0003,
};


//---------------------------------------------------------------------------------------------------------
//                                                 SPRITES                                                 
//---------------------------------------------------------------------------------------------------------


CharSetROMSpec AdjustmentIconRSprite1CharsetSpec =
{
	// number of chars in function or the number of frames to load at the same time
	4,

	// whether it is shared or not
	true,

	// whether the tiles are optimized or not
	true,

	// char spec
	(uint32*)AdjustmentIconREntityAdjustmentIconRightTiles,

	// pointer to the frames offsets
	NULL,
};

TextureROMSpec AdjustmentIconRSprite1TextureSpec =
{
	// charset spec
	(CharSetSpec*)&AdjustmentIconRSprite1CharsetSpec,

	// bgmap spec
	(uint16*)AdjustmentIconREntityAdjustmentIconMap,

	// cols (max 64)
	2,

	// rows (max 64)
	2,

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

BgmapSpriteROMSpec AdjustmentIconRSprite1SpriteSpec =
{
	{
		// sprite's type
		__TYPE(BgmapSprite),

		// texture spec
		(TextureSpec*)&AdjustmentIconRSprite1TextureSpec,

		// transparency (__TRANSPARENCY_NONE, __TRANSPARENCY_EVEN or __TRANSPARENCY_ODD)
		__TRANSPARENCY_NONE,

		// displacement
		{ 0, 0, 0, 0 },
	},

	// bgmap mode (__WORLD_BGMAP, __WORLD_AFFINE, __WORLD_OBJECT or __WORLD_HBIAS)
	// make sure to use the proper corresponding sprite type throughout the spec (BgmapSprite or ObjectSprite)
	__WORLD_BGMAP,
	
	// pointer to affine/hbias manipulation function
	NULL,

	// display mode (__WORLD_ON, __WORLD_LON or __WORLD_RON)
	__WORLD_RON,
};

BgmapSpriteROMSpec* const AdjustmentIconRSpriteSpecs[] =
{
	&AdjustmentIconRSprite1SpriteSpec,
	NULL
};

//---------------------------------------------------------------------------------------------------------
//                                                 ENTITY                                                  
//---------------------------------------------------------------------------------------------------------

EntityROMSpec AdjustmentIconREntitySpec =
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
			(SpriteSpec**)AdjustmentIconRSpriteSpecs,

			// use z displacement in projection
			false,

			// wireframes
			NULL,

			// collider shapes
			NULL,

			// size
			// if 0, width and height will be inferred from the first sprite's texture's size
			{ 0, 0, 0 },

			// gameworld's character's type
			kTypeNone,

			// physical specification
			(PhysicalProperties*)NULL,
};
