/*
	uCNCport.h - Arduino uCNC mini port for Ethernet

	This library is free software; you can redistribute it and/or
	modify it under the terms of the GNU Lesser General Public
	License as published by the Free Software Foundation; either
	version 2.1 of the License, or (at your option) any later version.

	This library is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
	Lesser General Public License for more details.

	You should have received a copy of the GNU Lesser General Public
	License along with this library; if not, write to the Free Software
	Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef uCNCport_h
#define uCNCport_h

#include "stdlib.h"
#include "stdint.h"
#include "stdbool.h"
#include "string.h"
#include "math.h"
#ifdef __cplusplus
extern "C"
{
#endif

	#include "src/cnc.h"

	void yield(void);

	typedef unsigned int word;
	typedef bool boolean;
	typedef uint8_t byte;

	// c opac interface
	void w5xx_cs_select(void);
	void w5xx_cs_deselect(void);
	void w5xx_spi_config(void);
	void w5xx_spi_start(void);
	void w5xx_spi_end(void);
	uint8_t w5xx_spi_xmit(uint8_t c);
	void w5xx_spi_bulk_xmit(const uint8_t *out, uint8_t *in, uint16_t len);
	

#ifdef __cplusplus
} // extern "C"
#endif

#ifdef __cplusplus
#include "WCharacter.h"
#include "WString.h"

// WMath prototypes
static long random(long howsmall, long howbig)
{
	if (howsmall >= howbig)
	{
		return howsmall;
	}
	long diff = howbig - howsmall;
	if (diff == 0)
	{
		return howsmall;
	}
	return (rand() % diff) + howsmall;
}

#endif

#endif
