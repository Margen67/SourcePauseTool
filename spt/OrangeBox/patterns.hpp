#pragma once

#include <SPTLib\memutils.hpp>

namespace Patterns
{
	// engine.dll patterns
	const MemUtils::ptnvec ptnsSpawnPlayer =
	{
		{
			"5135",
			{
				0x83, 0xEC, 0x14, 0x80, 0x3D, '?', '?', '?', '?', 0x00, 0x56, 0x8B, 0xF1, 0x74, '?', 0x6A, 0x00, 0xB9, '?', '?', '?', '?', 0xE8, '?', '?', '?', '?', 0xEB, 0x23, 0x8B, 0x0D, '?', '?', '?', '?', 0x8B, 0x01, 0x8B, 0x96, '?', '?', '?', '?', 0x8B, 0x40, 0x0C, 0x52, 0xFF, 0xD0, 0x8B, 0x8E, '?', '?', '?', '?', 0x51, 0xE8, '?', '?', '?', '?', 0x83, 0xC4, 0x04, 0x8B, 0x46, 0x0C, 0x8B, 0x56, 0x04, 0x8B, 0x52, 0x74, 0x83, 0xC0, 0x01
			},
			"xxxxx????xxxxx?xxx????x????xxxx????xxxx????xxxxxxxx????xx????xxxxxxxxxxxxxxx"
		},

		{
			"5339",
			{
				0x55, 0x8B, 0xEC, 0x83, 0xEC, 0x14, 0x80, 0x3D, '?', '?', '?', '?', 0x00, 0x56, 0x8B, 0xF1, 0x74, '?', 0x6A, 0x00, 0xB9, '?', '?', '?', '?', 0xE8, '?', '?', '?', '?', 0xEB, 0x23, 0x8B, 0x0D, '?', '?', '?', '?', 0x8B, 0x01, 0x8B, 0x96, '?', '?', '?', '?', 0x8B, 0x40, 0x0C, 0x52, 0xFF, 0xD0, 0x8B, 0x8E, '?', '?', '?', '?', 0x51, 0xE8, '?', '?', '?', '?', 0x83, 0xC4, 0x04, 0x8B, 0x46, 0x0C, 0x8B, 0x56, 0x04, 0x8B, 0x52, 0x74, 0x40
			},
			"xxxxxxxx????xxxxx?xxx????x????xxxx????xxxx????xxxxxxxx????xx????xxxxxxxxxxxxx"
		},

		{
			"4104",
			{
				0x83, 0xEC, 0x14, 0x80, 0x3D, '?', '?', '?', '?', 0x00, 0x56, 0x8B, 0xF1, 0x74, '?', 0x6A, 0x00, 0xB9, '?', '?', '?', '?', 0xE8, '?', '?', '?', '?', 0xEB, 0x23, 0x8B, 0x0D, '?', '?', '?', '?', 0x8B, 0x01, 0x8B, 0x96, '?', '?', '?', '?', 0x8B, 0x40, 0x0C, 0x52, 0xFF, 0xD0, 0x8B, 0x8E, '?', '?', '?', '?', 0x51, 0xE8, '?', '?', '?', '?', 0x83, 0xC4, 0x04, 0x8B, 0x46, 0x0C, 0x8B, 0x56, 0x04, 0x8B, 0x52, 0x70, 0x83, 0xC0, 0x01
			},
			"xxxxx????xxxxx?xxx????x????xxxx????xxxx????xxxxxxxx????xx????xxxxxxxxxxxxxxx"
		},

		{
			"2257546",
			{
				0x55, 0x8B, 0xEC, 0x83, 0xEC, 0x14, 0x80, 0x3D, '?', '?', '?', '?', 0x00, 0x56, 0x8B, 0xF1, 0x74, '?', 0x6A, 0x00, 0xB9, '?', '?', '?', '?', 0xE8, '?', '?', '?', '?', 0xEB, 0x1F, 0x8B, 0x0D, '?', '?', '?', '?', 0xFF, 0xB6, '?', '?', '?', '?', 0x8B, 0x01, 0xFF, 0x50, 0x0C, 0xFF, 0xB6, '?', '?', '?', '?', 0xE8, '?', '?', '?', '?', 0x83, 0xC4, 0x04, 0x8B, 0x46, 0x0C, 0x8D, 0x4E, 0x04, 0x40
			},
			"xxxxxxxx????xxxxx?xxx????x????xxxx????xx????xxxxxxx????x????xxxxxxxxxx"
		},

		{
			"2707",
			{
				0x64, 0xA1, 0x00, 0x00, 0x00, 0x00, 0x6A, 0xFF, 0x68, '?', '?', '?', '?', 0x50, 0x64, 0x89, 0x25, 0x00, 0x00, 0x00, 0x00, 0x83, 0xEC, 0x14, 0x80, 0x3D, '?', '?', '?', '?', 0x00, 0x56, 0x8B, 0xF1, 0x74, 0x0E, 0x6A, 0x00, 0xB9, '?', '?', '?', '?', 0xE8, '?', '?', '?', '?', 0xEB, 0x21, 0x8B, 0x0D
			},
			"xxxxxxxxx????xxxxxxxxxxxxx????xxxxxxxxx????x????xxxx"
		}
	};

	const MemUtils::ptnvec ptnsSV_ActivateServer =
	{
		{
			"5135",
			{
				0x83, 0xEC, 0x08, 0x57, 0x8B, 0x3D, '?', '?', '?', '?', 0x68, '?', '?', '?', '?', 0xFF, 0xD7, 0x83, 0xC4, 0x04, 0xE8, '?', '?', '?', '?', 0x8B, 0x10
			},
			"xxxxxx????x????xxxxxx????xx"
		},

		{
			"5339",
			{
				0x55, 0x8B, 0xEC, 0x83, 0xEC, 0x0C, 0x57, 0x8B, 0x3D, '?', '?', '?', '?', 0x68, '?', '?', '?', '?', 0xFF, 0xD7, 0x83, 0xC4, 0x04, 0xE8, '?', '?', '?', '?', 0x8B, 0x10
			},
			"xxxxxxxxx????x????xxxxxx????xx"
		},

		{
			"2257546",
			{
				0x55, 0x8B, 0xEC, 0x83, 0xEC, 0x0C, 0x53, 0x8B, 0x1D, '?', '?', '?', '?', 0x57, 0x68, '?', '?', '?', '?', 0xFF, 0xD3, 0x83, 0xC4, 0x04, 0xE8, '?', '?', '?', '?', 0x6A, 0x0B
			},
			"xxxxxxxxx????xx????xxxxxx????xx"
		},

		{
			"2707",
			{
				0x6A, 0xFF, 0x68, '?', '?', '?', '?', 0x64, 0xA1, 0x00, 0x00, 0x00, 0x00, 0x50, 0x64, 0x89, 0x25, 0x00, 0x00, 0x00, 0x00, 0x51, 0x68, '?', '?', '?', '?', 0xE8, '?', '?', '?', '?', 0x83, 0xC4, 0x04, 0xE8, '?', '?', '?', '?', 0x8B, 0x10, 0x6A, 0x0B, 0x8B, 0xC8, 0xFF, 0x92
			},
			"xxx????xxxxxxxxxxxxxxxx????x????xxxx????xxxxxxxx"
		}
	};

	const MemUtils::ptnvec ptnsFinishRestore =
	{
		{
			"5135",
			{
				0x81, 0xEC, 0xA4, 0x06, 0x00, 0x00, 0x33, 0xC0, 0x55, 0x8B, 0xE9, 0x8D, 0x8C, 0x24, 0x20, 0x01, 0x00, 0x00, 0x89, 0x84, 0x24, 0x08, 0x01, 0x00, 0x00
			},
			"xxxxxxxxxxxxxxxxxxxxxxxxx"
		},

		{
			"5339",
			{
				0x55, 0x8B, 0xEC, 0x81, 0xEC, 0xA4, 0x06, 0x00, 0x00, 0x33, 0xC0, 0x53, 0x8B, 0xD9, 0x8D, 0x8D, 0x74, 0xF9, 0xFF, 0xFF, 0x89, 0x85, 0x5C, 0xF9, 0xFF, 0xFF
			},
			"xxxxxxxxxxxxxxxxxxxxxxxxxx"
		},

		{
			"2257546",
			{
				0x55, 0x8B, 0xEC, 0x81, 0xEC, 0xA4, 0x06, 0x00, 0x00, 0x33, 0xC0, 0x53, 0x8B, 0xD9, 0x89, 0x85, 0x5C, 0xF9, 0xFF, 0xFF, 0x8D, 0x8D, 0x74, 0xF9, 0xFF, 0xFF
			},
			"xxxxxxxxxxxxxxxxxxxxxxxxxx"
		},

		{
			"2707",
			{
				0x55, 0x8B, 0xEC, 0x83, 0xE4, 0xF8, 0x81, 0xEC, 0x8C, 0x06, 0x00, 0x00, 0x55, 0x56, 0x57, 0x8B, 0xE9, 0x80, 0xBD, '?', '?', '?', '?', 0x00, 0x0F, 0x84, 0xC0, 0x00, 0x00, 0x00
			},
			"xxxxxxxxxxxxxxxxxxx????xxxxxxx"
		},

		{
			"BMS-Retail",
			{
				0x55, 0x8B, 0xEC, 0x81, 0xEC, 0xA8, 0x06, 0x00, 0x00, 0xA1, '?', '?', '?', '?', 0x33, 0xC5, 0x89, 0x45, 0xFC, 0x33, 0xC0, 0x53, 0x8B, 0xD9, 0x89, 0x85, 0x58, 0xF9, 0xFF, 0xFF
			},
			"xxxxxxxxxx????xxxxxxxxxxxxxxxx"
		},

		{
			"4044",
			{
				0x55, 0x8B, 0xEC, 0x83, 0xE4, 0xF8, 0x81, 0xEC, 0x8C, 0x06, 0x00, 0x00, 0x55, 0x56, 0x57, 0x8B, 0xE9, 0x80, 0xBD, 0x50, 0x01, 0x00, 0x00, 0x00, 0x0F, 0x84, 0xBE, 0x00, 0x00, 0x00, 0x33, 0xC0
			},
			"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"
		}
	};

	const MemUtils::ptnvec ptnsSetPaused =
	{
		{
			"5135",
			{
				0x83, 0xEC, 0x14, 0x56, 0x8B, 0xF1, 0x8B, 0x06, 0x8B, 0x50, '?', 0xFF, 0xD2, 0x84, 0xC0, 0x74, '?', 0x8B, 0x06, 0x8B, 0x50, '?', 0x8B, 0xCE, 0xFF, 0xD2, 0x84, 0xC0, 0x74, '?', 0x8A, 0x44, 0x24, 0x1C, 0x8B, 0x16, 0x8B, 0x92, 0x80, 0x00, 0x00, 0x00
			},
			"xxxxxxxxxx?xxxxx?xxxx?xxxxxxx?xxxxxxxxxxxx"
		},

		{
			"5339",
			{
				0x55, 0x8B, 0xEC, 0x83, 0xEC, 0x14, 0x56, 0x8B, 0xF1, 0x8B, 0x06, 0x8B, 0x50, '?', 0xFF, 0xD2, 0x84, 0xC0, 0x74, '?', 0x8B, 0x06, 0x8B, 0x50, '?', 0x8B, 0xCE, 0xFF, 0xD2, 0x84, 0xC0, 0x74, '?', 0x8A, 0x45, 0x08, 0x8B, 0x16, 0x8B, 0x92, 0x80, 0x00, 0x00, 0x00
			},
			"xxxxxxxxxxxxx?xxxxx?xxxx?xxxxxxx?xxxxxxxxxxx"
		},

		{
			"4104",
			{
				0x83, 0xEC, 0x14, 0x56, 0x8B, 0xF1, 0x8B, 0x06, 0x8B, 0x50, '?', 0xFF, 0xD2, 0x84, 0xC0, 0x74, '?', 0x8B, 0x06, 0x8B, 0x50, '?', 0x8B, 0xCE, 0xFF, 0xD2, 0x84, 0xC0, 0x74, '?', 0x8A, 0x44, 0x24, 0x1C, 0x8B, 0x16, 0x8B, 0x52, 0x7C, 0x33, 0xC9, 0x84, 0xC0
			},
			"xxxxxxxxxx?xxxxx?xxxx?xxxxxxx?xxxxxxxxxxxxx"
		},

		{
			"2257546",
			{
				0x55, 0x8B, 0xEC, 0x83, 0xEC, 0x14, 0x56, 0x8B, 0xF1, 0x8B, 0x06, 0x8B, 0x40, '?', 0xFF, 0xD0, 0x84, 0xC0, 0x74, '?', 0x8B, 0x06, 0x8B, 0xCE, 0x8B, 0x40, '?', 0xFF, 0xD0, 0x84, 0xC0, 0x74, '?', 0x8A, 0x4D, 0x08, 0x33, 0xC0, 0x84, 0xC9, 0x88, 0x4D, 0xFC, 0x6A, 0x00
			},
			"xxxxxxxxxxxxx?xxxxx?xxxxxx?xxxxx?xxxxxxxxxxxx"
		},

		{
			"2707",
			{
				0x64, 0xA1, 0x00, 0x00, 0x00, 0x00, 0x6A, 0xFF, 0x68, '?', '?', '?', '?', 0x50, 0x64, 0x89, 0x25, 0x00, 0x00, 0x00, 0x00, 0x83, 0xEC, 0x14, 0x56, 0x8B, 0xF1, 0x8B, 0x06, 0xFF, 0x50, '?', 0x84, 0xC0, 0x74, 0x59, 0x8B, 0x16, 0x8B, 0xCE, 0xFF, 0x52
			},
			"xxxxxxxxx????xxxxxxxxxxxxxxxxxx?xxxxxxxxxx"
		}
	};

	const MemUtils::ptnvec ptnsMiddleOfSV_InitGameDLL =
	{
		{
			"4104",
			{
				0x8B, 0x0D, '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', 0xFF, '?', 0xD9, 0x15, '?', '?', '?', '?', 0xDD, 0x05, '?', '?', '?', '?', 0xDB, 0xF1, 0xDD, 0x05, '?', '?', '?', '?', 0x77, 0x08, 0xD9, 0xCA, 0xDB, 0xF2, 0x76, 0x1F, 0xD9, 0xCA
			},
			"xx????????????x?xx????xx????xxxx????xxxxxxxxxx"
		}
	};

	const MemUtils::ptnvec ptns_Host_RunFrame =
	{
		{
			"5135",
			{
				0x55, 0x8B, 0xEC, 0x83, 0xEC, 0x1C, 0x53, 0x56, 0x57, 0x33, 0xFF, 0x80, 0x3D, '?', '?', '?', '?', 0x00, 0x74, 0x17, 0xE8, '?', '?', '?', '?', 0x83, 0xF8, 0xFE, 0x74, 0x0D, 0x68
			},
			"xxxxxxxxxxxxx????xxxx????xxxxxx"
		}
	};

	const MemUtils::ptnvec ptnsSV_Frame =
	{
		{
			"5135",
			{
				0x8B, 0x0D, '?', '?', '?', '?', 0x83, 0xEC, 0x08, 0x85, 0xC9, 0x74, 0x10, 0x8B, 0x44, 0x24, 0x0C, 0x84, 0xC0, 0x74, 0x08, 0x8B, 0x11, 0x50, 0x8B, 0x42, 0x78, 0xFF, 0xD0, 0x83, 0x3D
			},
			"xx????xxxxxxxxxxxxxxxxxxxxxxxxx"
		}
	};

	const MemUtils::ptnvec ptnsRecord =
	{
		{
			"2707",
			{
				0x81, 0xEC, 0x08, 0x01, 0x00, 0x00, 0xE8, '?', '?', '?', '?', 0x83, 0xF8, 0x02, 0x74, 0x1E, 0xE8, '?', '?', '?', '?', 0x83, 0xF8, 0x03, 0x74, 0x14, 0x68, '?', '?', '?', '?', 0xE8, '?', '?', '?', '?', 0x83, 0xC4, 0x04, 0x81, 0xC4, 0x08, 0x01, 0x00, 0x00, 0xC3, 0x53, 0x32, 0xDB, 0x88, 0x5C, 0x24, 0x04, 0xE8
			},
			"xxxxxxx????xxxxxx????xxxxxx????x????xxxxxxxxxxxxxxxxxx"
		}
	};

	// client.dll patterns
	const MemUtils::ptnvec ptnsDoImageSpaceMotionBlur =
	{
		{
			"5135",
			{
				0xA1, '?', '?', '?', '?', 0x81, 0xEC, 0x8C, 0x00, 0x00, 0x00, 0x83, 0x78, 0x30, 0x00, 0x0F, 0x84, 0xF3, 0x06, 0x00, 0x00, 0x8B, 0x0D, '?', '?', '?', '?', 0x8B, 0x11, 0x8B, 0x82, 0x80, 0x00, 0x00, 0x00, 0xFF, 0xD0
			},
			"x????xxxxxxxxxxxxxxxxxx????xxxxxxxxxx"
		},

		{
			"5339",
			{
				0x55, 0x8B, 0xEC, 0xA1, '?', '?', '?', '?', 0x83, 0xEC, 0x7C, 0x83, 0x78, 0x30, 0x00, 0x0F, 0x84, 0x4A, 0x08, 0x00, 0x00, 0x8B, 0x0D, '?', '?', '?', '?', 0x8B, 0x11, 0x8B, 0x82, 0x80, 0x00, 0x00, 0x00, 0xFF, 0xD0
			},
			"xxxx????xxxxxxxxxxxxxxx????xxxxxxxxxx"
		},

		{
			"4104",
			{
				0xA1, '?', '?', '?', '?', 0x81, 0xEC, 0x8C, 0x00, 0x00, 0x00, 0x83, 0x78, 0x30, 0x00, 0x0F, 0x84, 0xEE, 0x06, 0x00, 0x00, 0x8B, 0x0D, '?', '?', '?', '?', 0x8B, 0x11, 0x8B, 0x42, 0x7C, 0xFF, 0xD0
			},
			"x????xxxxxxxxxxxxxxxxxx????xxxxxxx"
		},

		{
			"2257546",
			{
				0x53, 0x8B, 0xDC, 0x83, 0xEC, 0x08, 0x83, 0xE4, 0xF0, 0x83, 0xC4, 0x04, 0x55, 0x8B, 0x6B, 0x04, 0x89, 0x6C, 0x24, 0x04, 0x8B, 0xEC, 0xA1, '?', '?', '?', '?', 0x81, 0xEC, 0x98, 0x00, 0x00, 0x00, 0x83, 0x78, 0x30, 0x00
			},
			"xxxxxxxxxxxxxxxxxxxxxxx????xxxxxxxxxx"
		}
	};

	//const MemUtils::ptnvec ptnsClientCheckJumpButton =
	//{
	//	{
	//		"5135",
	//		{
	//			0x83, 0xEC, 0x18, 0x56, 0x8B, 0xF1, 0x8B, 0x4E, 0x04, 0x80, 0xB9, 0x74, 0x0F, 0x00, 0x00, 0x00, 0x74, 0x0E, 0x8B, 0x76, 0x08, 0x83, 0x4E, 0x28, 0x02, 0x32, 0xC0, 0x5E, 0x83, 0xC4, 0x18, 0xC3, 0xD9, 0xEE, 0xD8, 0x91, 0x6C, 0x10, 0x00, 0x00
	//		},
	//		"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"
	//	},

	//	{
	//		"4104",
	//		{
	//			0x83, 0xEC, 0x18, 0x56, 0x8B, 0xF1, 0x8B, 0x4E, 0x08, 0x80, 0xB9, 0x3C, 0x0F, 0x00, 0x00, 0x00, 0x74, 0x0E, 0x8B, 0x76, 0x04, 0x83, 0x4E, 0x28, 0x02, 0x32, 0xC0, 0x5E, 0x83, 0xC4, 0x18, 0xC3, 0xD9, 0xEE, 0xD8, 0x91, 0x30, 0x10, 0x00, 0x00
	//		},
	//		"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"
	//	},

	//	{
	//		"5339",
	//		{
	//			0x55, 0x8B, 0xEC, 0x83, 0xEC, 0x1C, 0x56, 0x8B, 0xF1, 0x8B, 0x4E, 0x04, 0x80, 0xB9, 0x24, 0x10, 0x00, 0x00, 0x00, 0x74, 0x0E, 0x8B, 0x76, 0x08, 0x83, 0x4E, 0x28, 0x02, 0x32, 0xC0, 0x5E, 0x8B, 0xE5, 0x5D, 0xC3, 0xF3, 0x0F, 0x10, 0x89, 0x20, 0x11, 0x00, 0x00
	//		},
	//		"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"
	//	},

	//	{
	//		"2257546",
	//		{
	//			0x55, 0x8B, 0xEC, 0x83, 0xEC, 0x14, 0x56, 0x8B, 0xF1, 0x8B, 0x4E, 0x04, 0x80, 0xB9, 0x2C, 0x10, 0x00, 0x00, 0x00, 0x74, 0x0E, 0x8B, 0x46, 0x08, 0x83, 0x48, 0x28, 0x02, 0x32, 0xC0, 0x5E, 0x8B, 0xE5, 0x5D, 0xC3, 0xF3, 0x0F, 0x10, 0x89, 0x28, 0x11, 0x00, 0x00
	//		},
	//		"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"
	//	},

	//	{
	//		"2257546-HL1",
	//		{
	//			0x55, 0x8B, 0xEC, 0x83, 0xEC, 0x08, 0x56, 0x8B, 0xF1, 0x8B, 0x4E, 0x04, 0x80, 0xB9, 0xB4, 0x0F, 0x00, 0x00, 0x00, 0x74, 0x0E, 0x8B, 0x46, 0x08, 0x83, 0x48, 0x28, 0x02, 0x32, 0xC0, 0x5E, 0x8B, 0xE5, 0x5D, 0xC3, 0xF3, 0x0F, 0x10, 0x81, 0xB0, 0x10, 0x00, 0x00
	//		},
	//		"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"
	//	}
	//};

	const MemUtils::ptnvec ptnsHudUpdate =
	{
		{
			"5135",
			{
				0x51, 0xA1, '?', '?', '?', '?', 0xD9, 0x40, 0x10, 0x56, 0x83, 0xEC, 0x08, 0xD9, 0x54, 0x24, 0x0C, 0xDD, 0x1C, 0x24, 0xE8, '?', '?', '?', '?', 0x8B, 0xC8, 0xE8, '?', '?', '?', '?', 0x8B, 0x4C, 0x24, 0x0C, 0x51, 0xB9
			},
			"xx????xxxxxxxxxxxxxxx????xxx????xxxxxx"
		},

		{
			"5339",
			{
				0x55, 0x8B, 0xEC, 0x51, 0xA1, '?', '?', '?', '?', 0xD9, 0x40, 0x10, 0x56, 0x83, 0xEC, 0x08, 0xD9, 0x55, 0xFC, 0xDD, 0x1C, 0x24, 0xE8, '?', '?', '?', '?', 0x8B, 0xC8, 0xE8, '?', '?', '?', '?', 0x8B, 0x4D, 0x08, 0x51, 0xB9
			},
			"xxxxx????xxxxxxxxxxxxxx????xxx????xxxxx"
		},

		{
			"2257546",
			{
				0x55, 0x8B, 0xEC, 0x51, 0xA1, '?', '?', '?', '?', 0x56, 0x83, 0xEC, 0x08, 0xD9, 0x40, 0x10, 0xD9, 0x55, 0xFC, 0xDD, 0x1C, 0x24, 0xE8, '?', '?', '?', '?', 0x8B, 0xC8, 0xE8, '?', '?', '?', '?', 0xFF, 0x75, 0x08, 0xB9
			},
			"xxxxx????xxxxxxxxxxxxxx????xxx????xxxx"
		},

		{
			"bms",
			{
				0x55, 0x8B, 0xEC, 0x51, 0xA1, '?', '?', '?', '?', 0xF3, 0x0F, 0x10, 0x40, 0x10, 0x56, 0xF3, 0x0F, 0x11, 0x45, 0xFC, 0x83, 0xEC, 0x08, 0x0F, 0x5A, 0xC0, 0xF2, 0x0F, 0x11, 0x04, 0x24, 0xE8, '?', '?', '?', '?', 0x8B, 0xC8
			},
			"xxxxx????xxxxxxxxxxxxxxxxxxxxxxx????xx"
		},

		{
			"2707",
			{
				0x51, 0xA1, '?', '?', '?', '?', 0x8B, 0x48, 0x10, 0x89, 0x4C, 0x24, 0x00, 0xE8, '?', '?', '?', '?', 0xD9, 0x44, 0x24, 0x00, 0x83, 0xEC, 0x08, 0xDD, 0x1C, 0x24, 0xE8, '?', '?', '?', '?', 0x8B, 0xC8, 0xE8
			},
			"xx????xxxxxxxx????xxxxxxxxxxx????xxx"
		}
	};

	const MemUtils::ptnvec ptnsGetButtonBits =
	{
		{
			"5135",
			{
				0x55, 0x56, 0x8B, 0xE9, 0xB1, 0x03, 0x33, 0xF6, 0x84, 0x0D, '?', '?', '?', '?', 0x57, 0x74, 0x05, 0xBE, 0x00, 0x00, 0x02, 0x00, 0x8B, 0x15, '?', '?', '?', '?', 0xF7, 0xC2, 0x00, 0x00, 0x02, 0x00, 0xB8, 0xFD, 0xFF, 0xFF
			},
			"xxxxxxxxxx????xxxxxxxxxx????xxxxxxxxxx"
		},

		{
			"5339",
			{
				0x55, 0x8B, 0xEC, 0x56, 0x33, 0xF6, 0xF6, 0x05, '?', '?', '?', '?', 0x03, 0x74, 0x05, 0xBE, 0x00, 0x00, 0x02, 0x00, 0x8B, 0x15, '?', '?', '?', '?', 0xB8, 0xFD, 0xFF, 0xFF, 0xFF, 0xF7, 0xC2, 0x00, 0x00, 0x02, 0x00, 0x74
			},
			"xxxxxxxx????xxxxxxxxxx????xxxxxxxxxxxx"
		},

		{
			"2257546",
			{
				0x55, 0x8B, 0xEC, 0x51, 0x8B, 0x15, '?', '?', '?', '?', 0xB8, 0x00, 0x00, 0x02, 0x00, 0x53, 0x56, 0x33, 0xF6, 0x8B, 0xD9, 0xF6, 0xC2, 0x03, 0xB9, 0xFD, 0xFF, 0xFF, 0xFF, 0x57, 0x0F, 0x45, 0xF0, 0xBF, 0xFC, 0xFF, 0xFF, 0xFF
			},
			"xxxxxx????xxxxxxxxxxxxxxxxxxxxxxxxxxxx"
		},

		{
			"2707",
			{
				0x51, 0xA0, '?', '?', '?', '?', 0xB2, 0x03, 0x84, 0xC2, 0xC7, 0x44, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x74, 0x08, 0xC7, 0x44, 0x24, 0x00, 0x00, 0x00, 0x02, 0x00, 0x8B, 0x0D, '?', '?', '?', '?', 0xF7, 0xC1, 0x00, 0x00, 0x02, 0x00
			},
			"xx????xxxxxxxxxxxxxxxxxxxxxxxx????xxxxxx"
		}
	};

	const MemUtils::ptnvec ptnsAdjustAngles =
	{
		{
			"5135",
			{
				0x83, 0xEC, 0x0C, 0xD9, 0x44, 0x24, 0x10, 0x56, 0x51, 0xD9, 0x1C, 0x24, 0x8B, 0xF1, 0xE8, '?', '?', '?', '?', 0xD9, 0x54, 0x24, 0x14, 0xD9, 0xEE, 0xDE, 0xD9, 0xDF, 0xE0, 0xF6, 0xC4, 0x01, 0x0F, 0x84, 0x90, 0x00, 0x00, 0x00, 0x8B, 0x0D
			},
			"xxxxxxxxxxxxxxx????xxxxxxxxxxxxxxxxxxxxx"
		},

		{
			"5135-hl2",
			{
				0x83, 0xEC, 0x0C, 0xD9, 0x44, 0x24, 0x10, 0x56, 0x51, 0xD9, 0x1C, 0x24, 0x8B, 0xF1, 0xE8, '?', '?', '?', '?', 0xD9, 0x54, 0x24, 0x14, 0xD9, 0xEE, 0xDE, 0xD9, 0xDF, 0xE0, 0xF6, 0xC4, 0x01, 0x74, 0x5D, 0x8B, 0x0D
			},
			"xxxxxxxxxxxxxxx????xxxxxxxxxxxxxxxxx"
		},

		{
			"4104",
			{
				0x83, 0xEC, 0x0C, 0xD9, 0x44, 0x24, 0x10, 0x56, 0x51, 0xD9, 0x1C, 0x24, 0x8B, 0xF1, 0xE8, '?', '?', '?', '?', 0xD9, 0x54, 0x24, 0x14, 0xD9, 0xEE, 0xDE, 0xD9, 0xDF, 0xE0, 0xF6, 0xC4, 0x01, 0x74, 0x58, 0x8B, 0x0D
			},
			"xxxxxxxxxxxxxxx????xxxxxxxxxxxxxxxxx"
		},

		{
			"5339",
			{
				0x55, 0x8B, 0xEC, 0xA1, '?', '?', '?', '?', 0xF3, 0x0F, 0x10, 0x4D, 0x08, 0x0F, 0x57, 0xD2, 0x83, 0xEC, 0x0C, 0x83, 0x78, 0x30, 0x00, 0x56, 0x8B, 0xF1, 0x74, 0x1F, 0xF3, 0x0F, 0x10, 0x46, 0x1C, 0x0F, 0x2F, 0xD0
			},
			"xxxx????xxxxxxxxxxxxxxxxxxxxxxxxxxxx"
		},

		{
			"2257546",
			{
				0x55, 0x8B, 0xEC, 0xA1, '?', '?', '?', '?', 0x83, 0xEC, 0x0C, 0xF3, 0x0F, 0x10, 0x4D, 0x08, 0x0F, 0x57, 0xD2, 0x83, 0x78, 0x30, 0x00, 0x56, 0x8B, 0xF1, 0x74, 0x1F, 0xF3, 0x0F, 0x10, 0x46, 0x1C, 0x0F, 0x2F, 0xD0
			},
			"xxxx????xxxxxxxxxxxxxxxxxxxxxxxxxxxx"
		}
	};

	const MemUtils::ptnvec ptnsCreateMove =
	{
		{
			"5135",
			{
				0x83, 0xEC, 0x14, 0x53, 0xD9, 0xEE, 0x55, 0x56, 0x57, 0x8B, 0xF9, 0x8B, 0x4C, 0x24, 0x28, 0xB8, 0xB7, 0x60, 0x0B, 0xB6, 0xF7, 0xE9, 0x03, 0xD1, 0xC1, 0xFA, 0x06, 0x8B, 0xC2, 0xC1, 0xE8, 0x1F, 0x03, 0xD0, 0x6B, 0xD2, 0x5A, 0x8B, 0xC1, 0x2B, 0xC2, 0x8B, 0xF0, 0x6B, 0xC0, 0x58, 0x03, 0x87
			},
			"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"
		}
	};

	const MemUtils::ptnvec ptnsMiddleOfCAM_Think =
	{
		{
			"5135",
			{
				0x8B, 0x54, 0x24, 0x74, 0x8B, 0x4C, 0x24, 0x78, 0x83, 0xEC, 0x0C, 0x8B, 0xC4, 0x89, 0x10, 0x8B, 0x94, 0x24, 0x88, 0x00, 0x00, 0x00, 0x89, 0x48, 0x04, 0x89, 0x50, 0x08, 0xE8
			},
			"xxxxxxxxxxxxxxxxxxxxxxxxxxxxx"
		}
	};

	const MemUtils::ptnvec ptnsGetGroundEntity =
	{
		{
			"5135",
			{
				0x8B, 0x81, 0xEC, 0x01, 0x00, 0x00, 0x83, 0xF8, 0xFF, 0x74, 0x20, 0x8B, 0x15, '?', '?', '?', '?', 0x8B, 0xC8, 0x81, 0xE1, 0xFF, 0x0F, 0x00, 0x00, 0xC1, 0xE1, 0x04, 0x8D, 0x4C
			},
			"xxxxxxxxxxxxx????xxxxxxxxxxxxx"
		}
	};

	const MemUtils::ptnvec ptnsCalcAbsoluteVelocity =
	{
		{
			"5135",
			{
				0x83, 0xEC, 0x1C, 0x57, 0x8B, 0xF9, 0xF7, 0x87, 0x3C, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x0F, 0x84, 0x76, 0x01, 0x00, 0x00, 0x53, 0x56, 0x8D, 0x9F, 0x9C, 0x04, 0x00, 0x00, 0xFF, 0x15
			},
			"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"
		}
	};

	const MemUtils::ptnvec ptnsCViewRender__OnRenderStart =
	{
		{
			"2707",
			{
				0x83, 0xEC, 0x38, 0x56, 0x8B, 0xF1, 0x8B, 0x0D, '?', '?', '?', '?', 0xD9, 0x41, 0x28, 0x57, 0xD8, 0x1D, '?', '?', '?', '?', 0xDF, 0xE0, 0xF6, 0xC4, 0x05, 0x7A, 0x35, 0xA1, '?', '?', '?', '?', 0xD9, 0x40, 0x28, 0x8B, 0x0D
			},
			"xxxxxxxx????xxxxxx????xxxxxxxx????xxxxx"
		}
	};

	// server.dll patterns
	const MemUtils::ptnvec ptnsServerCheckJumpButton =
	{
		{
			"5135",
			{
				0x83, 0xEC, 0x1C, 0x56, 0x8B, 0xF1, 0x8B, 0x4E, 0x04, 0x80, 0xB9, 0x04, 0x0A, 0x00, 0x00, 0x00, 0x74, 0x0E, 0x8B, 0x76, 0x08, 0x83, 0x4E, 0x28, 0x02, 0x32, 0xC0, 0x5E, 0x83, 0xC4, 0x1C, 0xC3, 0xD9, 0xEE, 0xD8, 0x91, 0x70, 0x0D, 0x00, 0x00
			},
			"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"
		},

		{
			"4104",
			{
				0x83, 0xEC, 0x1C, 0x56, 0x8B, 0xF1, 0x8B, 0x4E, 0x08, 0x80, 0xB9, 0xC4, 0x09, 0x00, 0x00, 0x00, 0x74, 0x0E, 0x8B, 0x76, 0x04, 0x83, 0x4E, 0x28, 0x02, 0x32, 0xC0, 0x5E, 0x83, 0xC4, 0x1C, 0xC3, 0xD9, 0xEE, 0xD8, 0x91, 0x30, 0x0D, 0x00, 0x00
			},
			"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"
		},

		{
			"5339",
			{
				0x55, 0x8B, 0xEC, 0x83, 0xEC, 0x20, 0x56, 0x8B, 0xF1, 0x8B, 0x4E, 0x04, 0x80, 0xB9, 0x40, 0x0A, 0x00, 0x00, 0x00, 0x74, 0x0E, 0x8B, 0x76, 0x08, 0x83, 0x4E, 0x28, 0x02, 0x32, 0xC0, 0x5E, 0x8B, 0xE5, 0x5D, 0xC3, 0xF3, 0x0F, 0x10, 0x89, 0xAC, 0x0D, 0x00, 0x00
			},
			"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"
		},

		{
			"2257546",
			{
				0x55, 0x8B, 0xEC, 0x83, 0xEC, 0x18, 0x56, 0x8B, 0xF1, 0x8B, 0x4E, 0x04, 0x80, 0xB9, 0x40, 0x0A, 0x00, 0x00, 0x00, 0x74, 0x0E, 0x8B, 0x46, 0x08, 0x83, 0x48, 0x28, 0x02, 0x32, 0xC0, 0x5E, 0x8B, 0xE5, 0x5D, 0xC3, 0xF3, 0x0F, 0x10, 0x89, 0xAC, 0x0D, 0x00, 0x00
			},
			"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"
		},

		{
			"2257546-HL1",
			{
				0x55, 0x8B, 0xEC, 0x83, 0xEC, 0x0C, 0x56, 0x8B, 0xF1, 0x8B, 0x4E, 0x04, 0x80, 0xB9, 0x10, 0x0A, 0x00, 0x00, 0x00, 0x74, 0x0E, 0x8B, 0x46, 0x08, 0x83, 0x48, 0x28, 0x02, 0x32, 0xC0, 0x5E, 0x8B, 0xE5, 0x5D, 0xC3, 0xF3, 0x0F, 0x10, 0x81, 0x68, 0x0D, 0x00, 0x00
			},
			"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"
		},

		{
			"1910503",
			{
				0x55, 0x8B, 0xEC, 0x83, 0xEC, 0x18, 0x56, 0x8B, 0xF1, 0x8B, 0x4E, 0x04, 0x80, 0xB9, 0x40, 0x0A, 0x00, 0x00, 0x00, 0x74, 0x0E, 0x8B, 0x76, 0x08, 0x83, 0x4E, 0x28, 0x02, 0x32, 0xC0, 0x5E, 0x8B
			},
			"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"
		},

		{
			"bms",
			{
				0x55, 0x8B, 0xEC, 0x83, 0xEC, 0x0C, 0x56, 0x8B, 0xF1, 0x8B, 0x46, 0x04, 0x80, 0xB8, 0x10, 0x0A, 0x00, 0x00, 0x00, 0x74, 0x0E, 0x8B, 0x76, 0x08, 0x83, 0x4E, 0x28, 0x02, 0x32, 0xC0, 0x5E, 0x8B, 0xE5, 0x5D, 0xC3, 0xE8, 0x08, 0xF9, 0xFF, 0xFF, 0x84, 0xC0, 0x75, 0xF0
			},
			"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"
		},

		{
			"estranged",
			{
				0x55, 0x8B, 0xEC, 0x83, 0xEC, '?', 0x56, 0x8B, 0xF1, 0x8B, 0x4E, 0x04, 0x80, 0xB9, 0x44, 0x0A, 0x00, 0x00, 0x00, 0x74, 0x0E, 0x8B, '?', 0x08, 0x83, '?', 0x28, 0x02, 0x32, 0xC0, 0x5E, 0x8B, 0xE5, 0x5D, 0xC3, 0xF3, 0x0F, 0x10, 0x89, 0xB0, 0x0D, 0x00, 0x00, 0x0F, 0x57, 0xC0, 0x0F, 0x2E
			},
			"xxxxx?xxxxxxxxxxxxxxxx?xx?xxxxxxxxxxxxxxxxxxxxxx"
		},

		{
			"2707",
			{
				0x83, 0xEC, 0x10, 0x53, 0x56, 0x8B, 0xF1, 0x8B, 0x4E, 0x08, 0x8A, 0x81, '?', '?', '?', '?', 0x84, 0xC0, 0x74, 0x0F, 0x8B, 0x76, 0x04, 0x83, 0x4E, '?', 0x02, 0x5E, 0x32, 0xC0, 0x5B, 0x83, 0xC4, 0x10, 0xC3, 0xD9, 0x81, 0x30, 0x0C, 0x00, 0x00, 0xD8, 0x1D
			},
			"xxxxxxxxxxxx????xxxxxxxxx?xxxxxxxxxxxxxxxxx"
		},

		{
			"BMS-Retail",
			{
				0x55, 0x8B, 0xEC, 0x83, 0xEC, 0x0C, 0x56, 0x8B, 0xF1, 0x8B, 0x46, 0x04, 0x80, 0xB8, 0x78, 0x0A, 0x00, 0x00, 0x00, 0x74, 0x0E, 0x8B, 0x46, 0x08, 0x83, 0x48, 0x28, 0x02, 0x32, 0xC0, 0x5E, 0x8B, 0xE5, 0x5D, 0xC3, 0x8B, 0x06, 0x8B, 0x80, 0x44, 0x01, 0x00, 0x00, 0xFF, 0xD0, 0x84, 0xC0, 0x75
			},
			"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"
		}
	};

	const MemUtils::ptnvec ptnsFinishGravity =
	{
		{
			"bms",
			{
				0x8B, 0x51, 0x04, 0xF3, 0x0F, 0x10, 0x82, 0x7C, 0x0D, 0x00, 0x00, 0x0F, 0x57, 0xC9, 0x0F, 0x2E, 0xC1, 0x9F, 0xF6, 0xC4, 0x44, 0x7A, 0x51, 0xF3, 0x0F, 0x10, 0x82, 0x28, 0x02, 0x00, 0x00, 0x0F, 0x2E, 0xC1, 0x9F, 0xF6, 0xC4, 0x44
			},
			"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"
		}
	};

	const MemUtils::ptnvec ptnsPlayerRunCommand =
	{
		{
			"5135",
			{
				0x56, 0x8B, 0x74, 0x24, 0x08, 0x57, 0x8B, 0xF9, 0x33, 0xC9, 0x39, 0x8F, 0x18, 0x0A, 0x00, 0x00, 0x88, 0x8F, 0x74, 0x0B, 0x00, 0x00, 0x75, 0x1B, 0xD9, 0x46, 0x0C, 0xD9, 0x9F, 0x08, 0x0A, 0x00, 0x00, 0xD9, 0x46, 0x10, 0xD9, 0x9F, 0x0C, 0x0A, 0x00, 0x00, 0xD9, 0x46, 0x14, 0xD9, 0x9F, 0x10
			},
			"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"
		},

		{
			"4104",
			{
				0x56, 0x8B, 0x74, 0x24, 0x08, 0x57, 0x8B, 0xF9, 0x33, 0xC9, 0x39, 0x8F, 0xD8, 0x09, 0x00, 0x00, 0x88, 0x8F, 0x34, 0x0B, 0x00, 0x00, 0x75, 0x1B, 0xD9, 0x46, 0x0C, 0xD9, 0x9F, 0xC8, 0x09, 0x00, 0x00, 0xD9, 0x46, 0x10, 0xD9, 0x9F, 0xCC, 0x09, 0x00, 0x00, 0xD9, 0x46, 0x14, 0xD9, 0x9F, 0xD0
			},
			"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"
		},

		{
			"5339",
			{
				0x55, 0x8B, 0xEC, 0x56, 0x8B, 0x75, 0x08, 0x57, 0x8B, 0xF9, 0x33, 0xC0, 0x88, 0x87, 0xB0, 0x0B, 0x00, 0x00, 0x39, 0x87, 0x54, 0x0A, 0x00, 0x00, 0x75, 0x1B, 0xD9, 0x46, 0x0C, 0xD9, 0x9F, 0x44, 0x0A, 0x00, 0x00, 0xD9, 0x46, 0x10, 0xD9, 0x9F, 0x48, 0x0A, 0x00, 0x00, 0xD9, 0x46, 0x14, 0xD9
			},
			"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"
		},

		{
			"2257546",
			{
				0x55, 0x8B, 0xEC, 0x56, 0x8B, 0xF1, 0x57, 0x8B, 0x7D, 0x08, 0x83, 0xBE, 0x54, 0x0A, 0x00, 0x00, 0x00, 0xC6, 0x86, 0xB0, 0x0B, 0x00, 0x00, 0x00, 0x75, 0x1B, 0xD9, 0x47, 0x0C, 0xD9, 0x9E, 0x44, 0x0A, 0x00, 0x00, 0xD9, 0x47, 0x10, 0xD9, 0x9E, 0x48, 0x0A, 0x00, 0x00, 0xD9, 0x47, 0x14, 0xD9
			},
			"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"
		},

		{
			"2257546-hl1",
			{
				0x55, 0x8B, 0xEC, 0x56, 0x8B, 0xF1, 0x57, 0x8B, 0x7D, 0x08, 0x83, 0xBE, 0x24, 0x0A, 0x00, 0x00, 0x00, 0xC6, 0x86, 0x80, 0x0B, 0x00, 0x00, 0x00, 0x75, 0x1B, 0xD9, 0x47, 0x0C, 0xD9, 0x9E, 0x14, 0x0A, 0x00, 0x00, 0xD9, 0x47, 0x10, 0xD9, 0x9E, 0x18, 0x0A, 0x00, 0x00, 0xD9, 0x47, 0x14, 0xD9
			},
			"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"
		},

		{
			"bms",
			{
				0x55, 0x8B, 0xEC, 0x56, 0x8B, 0x75, 0x08, 0x57, 0x8B, 0xF9, 0x33, 0xC0, 0x88, 0x87, 0x80, 0x0B, 0x00, 0x00, 0x39, 0x87, 0x24, 0x0A, 0x00, 0x00, 0x75, 0x1B, 0xD9, 0x46, 0x0C, 0xD9, 0x9F, 0x14, 0x0A, 0x00, 0x00, 0xD9, 0x46, 0x10, 0xD9, 0x9F, 0x18, 0x0A, 0x00, 0x00, 0xD9, 0x46, 0x14, 0xD9
			},
			"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"
		},

		{
			"estranged",
			{
				0x55, 0x8B, 0xEC, 0x56, 0x8B, 0x75, 0x08, 0x57, 0x8B, 0xF9, 0x33, 0xC0, 0x88, 0x87, 0xB4, 0x0B, 0x00, 0x00, 0x39, 0x87, 0x58, 0x0A, 0x00, 0x00, 0x75, 0x1B, 0xD9, 0x46, 0x0C, 0xD9, 0x9F, 0x48, 0x0A, 0x00, 0x00, 0xD9, 0x46, 0x10, 0xD9, 0x9F, 0x4C, 0x0A, 0x00, 0x00, 0xD9, 0x46, 0x14, 0xD9
			},
			"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"
		},

		{
			"estranged-second",
			{
				0x55, 0x8B, 0xEC, 0x56, 0x8B, 0x75, 0x08, 0x57, 0x8B, 0xF9, 0x33, 0xC0, 0x88, 0x87, 0xB4, 0x0B, 0x00, 0x00, 0x39, 0x87, 0x58, 0x0A, 0x00, 0x00, 0x75, 0x1B, 0xD9, 0x46, 0x0C, 0xD9, 0x9F, 0x48, 0x0A, 0x00, 0x00, 0xD9, 0x46, 0x10, 0xD9, 0x9F, 0x4C, 0x0A, 0x00, 0x00, 0xD9, 0x46, 0x14, 0xD9
			},
			"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"
		},

		{
			"2707",
			{
				0x8B, 0x81, '?', '?', '?', '?', 0x8B, 0x54, 0x24, 0x04, 0x53, 0x33, 0xDB, 0x3B, 0xC3, 0x88, 0x99, 0x2C, 0x0A, 0x00, 0x00, 0x75, 0x1B, 0x8B, 0x42, 0x0C, 0x89, 0x81, 0xFC, 0x08, 0x00, 0x00, 0x8B, 0x42, 0x10, 0x89, 0x81, 0x00, 0x09, 0x00, 0x00, 0x8B, 0x42, 0x14, 0x89, 0x81, 0x04, 0x09, 0x00
			},
			"xx????xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"
		}
	};

	const MemUtils::ptnvec ptnsCheckStuck =
	{
		{
			"5135",
			{
				0x81, 0xEC, 0x80, 0x00, 0x00, 0x00, 0x56, 0x8B, 0xF1, 0xC7, 0x44, 0x24, 0x04, 0xFF, 0xFF, 0xFF, 0xFF, 0xE8, '?', '?', '?', '?', 0x8B, 0x46, 0x08, 0x8B, 0x16, 0x8B, 0x92, 0xBC, 0x00, 0x00, 0x00, 0x8D, 0x4C, 0x24, 0x30, 0x51, 0x05, 0x98, 0x00, 0x00, 0x00, 0x6A, 0x08, 0x50, 0x8D, 0x44
			},
			"xxxxxxxxxxxxxxxxxx????xxxxxxxxxxxxxxxxxxxxxxxxxx"
		},

		{
			"2707",
			{
				0x81, 0xEC, 0xB4, 0x00, 0x00, 0x00, 0x53, 0x56, 0x8B, 0xF1, 0x57, 0x8D, 0x4C, 0x24, 0x6C, 0xC7, 0x44, 0x24, 0x1C, 0xFF, 0xFF, 0xFF, 0xFF, 0xE8, '?', '?', '?', '?', 0xE8, '?', '?', '?', '?', 0x8B, 0x7E, 0x04, 0x8D, 0x4C, 0x24, 0x20, 0x83, 0xC7, 0x64, 0xE8
			},
			"xxxxxxxxxxxxxxxxxxxxxxxx????x????xxxxxxxxxxx"
		},

		{
			"ghosting",
			{
				0x55, 0x8B, 0xEC, 0x81, 0xEC, 0x80, 0x00, 0x00, 0x00, 0x56, 0x8B, 0xF1, 0xC7, 0x45, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xE8, '?', '?', '?', '?', 0x8B, 0x46, 0x08, 0x8B, 0x16, 0x8D, 0x4D, 0x80, 0x51, 0x05, 0x98, 0x00, 0x00, 0x00, 0x6A, 0x08, 0x50, 0x8D, 0x45, 0xEC, 0x50, 0x8B, 0xCE, 0xFF
			},
			"xxxxxxxxxxxxxxxxxxxx????xxxxxxxxxxxxxxxxxxxxxxxx"
		},

		{
			"1910503",
			{
				0x55, 0x8B, 0xEC, 0x81, 0xEC, 0x80, 0x00, 0x00, 0x00, 0x57, 0x8B, 0xF9, 0xE8, '?', '?', '?', '?', 0x85, 0xC0, 0x0F, 0x84, 0x47, 0x02, 0x00, 0x00, 0x56, 0x8B, 0x77, 0x04, 0x8B, 0x06, 0x8B
			},
			"xxxxxxxxxxxxx????xxxxxxxxxxxxxxx"
		}
	};
}
