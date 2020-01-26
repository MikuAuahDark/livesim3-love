/**
 * Copyright (c) 2006-2020 LOVE Development Team
 * 
 * This software is provided 'as-is', without any express or implied
 * warranty.  In no event will the authors be held liable for any damages
 * arising from the use of this software.
 * 
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 * 
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 **/

namespace love
{

// [nogame.lua]
const unsigned char nogame_lua[] = 
{

	0x2d, 0x2d, 0x20, 0x4d, 0x61, 0x6b, 0x65, 0x20, 0x73, 0x75, 0x72, 0x65, 0x20, 0x6c, 0x6f, 0x76, 0x65, 0x20, 
	0x65, 0x78, 0x69, 0x73, 0x74, 0x73, 0x2e, 0x0a,
	0x6c, 0x6f, 0x63, 0x61, 0x6c, 0x20, 0x6c, 0x6f, 0x76, 0x65, 0x20, 0x3d, 0x20, 0x72, 0x65, 0x71, 0x75, 0x69, 
	0x72, 0x65, 0x28, 0x22, 0x6c, 0x6f, 0x76, 0x65, 0x22, 0x29, 0x0a,
	0x0a,
	0x66, 0x75, 0x6e, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x6c, 0x6f, 0x76, 0x65, 0x2e, 0x6e, 0x6f, 0x67, 0x61, 
	0x6d, 0x65, 0x28, 0x29, 0x0a,
	0x09, 0x66, 0x75, 0x6e, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x6c, 0x6f, 0x76, 0x65, 0x2e, 0x6c, 0x6f, 0x61, 
	0x64, 0x28, 0x29, 0x0a,
	0x09, 0x09, 0x6c, 0x6f, 0x76, 0x65, 0x2e, 0x67, 0x72, 0x61, 0x70, 0x68, 0x69, 0x63, 0x73, 0x2e, 0x73, 0x65, 
	0x74, 0x42, 0x61, 0x63, 0x6b, 0x67, 0x72, 0x6f, 0x75, 0x6e, 0x64, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x28, 0x34, 
	0x33, 0x2f, 0x32, 0x35, 0x35, 0x2c, 0x20, 0x31, 0x36, 0x35, 0x2f, 0x32, 0x35, 0x35, 0x2c, 0x20, 0x32, 0x32, 
	0x33, 0x2f, 0x32, 0x35, 0x35, 0x29, 0x0a,
	0x09, 0x65, 0x6e, 0x64, 0x0a,
	0x0a,
	0x09, 0x66, 0x75, 0x6e, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x6c, 0x6f, 0x76, 0x65, 0x2e, 0x63, 0x6f, 0x6e, 
	0x66, 0x28, 0x74, 0x29, 0x0a,
	0x09, 0x09, 0x74, 0x2e, 0x74, 0x69, 0x74, 0x6c, 0x65, 0x20, 0x3d, 0x20, 0x22, 0x4c, 0x5c, 0x31, 0x39, 0x35, 
	0x5c, 0x31, 0x35, 0x30, 0x56, 0x45, 0x20, 0x22, 0x20, 0x2e, 0x2e, 0x20, 0x6c, 0x6f, 0x76, 0x65, 0x2e, 0x5f, 
	0x76, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x20, 0x2e, 0x2e, 0x20, 0x22, 0x20, 0x28, 0x22, 0x20, 0x2e, 0x2e, 
	0x20, 0x6c, 0x6f, 0x76, 0x65, 0x2e, 0x5f, 0x76, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x5f, 0x63, 0x6f, 0x64, 
	0x65, 0x6e, 0x61, 0x6d, 0x65, 0x20, 0x2e, 0x2e, 0x20, 0x22, 0x29, 0x20, 0x28, 0x4e, 0x4f, 0x20, 0x47, 0x41, 
	0x4d, 0x45, 0x29, 0x22, 0x0a,
	0x09, 0x09, 0x74, 0x2e, 0x67, 0x61, 0x6d, 0x6d, 0x61, 0x63, 0x6f, 0x72, 0x72, 0x65, 0x63, 0x74, 0x20, 0x3d, 
	0x20, 0x74, 0x72, 0x75, 0x65, 0x0a,
	0x09, 0x09, 0x74, 0x2e, 0x6d, 0x6f, 0x64, 0x75, 0x6c, 0x65, 0x73, 0x2e, 0x61, 0x75, 0x64, 0x69, 0x6f, 0x20, 
	0x3d, 0x20, 0x66, 0x61, 0x6c, 0x73, 0x65, 0x0a,
	0x09, 0x09, 0x74, 0x2e, 0x6d, 0x6f, 0x64, 0x75, 0x6c, 0x65, 0x73, 0x2e, 0x73, 0x6f, 0x75, 0x6e, 0x64, 0x20, 
	0x3d, 0x20, 0x66, 0x61, 0x6c, 0x73, 0x65, 0x0a,
	0x09, 0x09, 0x74, 0x2e, 0x6d, 0x6f, 0x64, 0x75, 0x6c, 0x65, 0x73, 0x2e, 0x6a, 0x6f, 0x79, 0x73, 0x74, 0x69, 
	0x63, 0x6b, 0x20, 0x3d, 0x20, 0x66, 0x61, 0x6c, 0x73, 0x65, 0x0a,
	0x09, 0x09, 0x74, 0x2e, 0x77, 0x69, 0x6e, 0x64, 0x6f, 0x77, 0x2e, 0x72, 0x65, 0x73, 0x69, 0x7a, 0x61, 0x62, 
	0x6c, 0x65, 0x20, 0x3d, 0x20, 0x74, 0x72, 0x75, 0x65, 0x0a,
	0x09, 0x09, 0x74, 0x2e, 0x77, 0x69, 0x6e, 0x64, 0x6f, 0x77, 0x2e, 0x68, 0x69, 0x67, 0x68, 0x64, 0x70, 0x69, 
	0x20, 0x3d, 0x20, 0x74, 0x72, 0x75, 0x65, 0x0a,
	0x0a,
	0x09, 0x09, 0x69, 0x66, 0x20, 0x6c, 0x6f, 0x76, 0x65, 0x2e, 0x5f, 0x6f, 0x73, 0x20, 0x3d, 0x3d, 0x20, 0x22, 
	0x69, 0x4f, 0x53, 0x22, 0x20, 0x74, 0x68, 0x65, 0x6e, 0x0a,
	0x09, 0x09, 0x09, 0x74, 0x2e, 0x77, 0x69, 0x6e, 0x64, 0x6f, 0x77, 0x2e, 0x62, 0x6f, 0x72, 0x64, 0x65, 0x72, 
	0x6c, 0x65, 0x73, 0x73, 0x20, 0x3d, 0x20, 0x74, 0x72, 0x75, 0x65, 0x0a,
	0x09, 0x09, 0x65, 0x6e, 0x64, 0x0a,
	0x09, 0x65, 0x6e, 0x64, 0x0a,
	0x65, 0x6e, 0x64, 0x0a,
	0x0a,
	0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x6c, 0x6f, 0x76, 0x65, 0x2e, 0x6e, 0x6f, 0x67, 0x61, 0x6d, 0x65, 0x0a,
}; // [nogame.lua]
} // love
