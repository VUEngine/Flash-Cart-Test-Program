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

extern uint32 AdjustmentIconREntityAdjustmentIconRTiles[];
extern uint16 AdjustmentIconREntityAdjustmentIconMap[];


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
	AdjustmentIconREntityAdjustmentIconRTiles,

	// pointer to the frames offsets
	NULL,
};

TextureROMSpec AdjustmentIconRSprite1TextureSpec =
{
	// charset spec
	(CharSetSpec*)&AdjustmentIconRSprite1CharsetSpec,

	// bgmap spec
	AdjustmentIconREntityAdjustmentIconMap,

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
	(BgmapSpriteSpec*)&AdjustmentIconRSprite1SpriteSpec,
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
