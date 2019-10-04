// See the file "COPYING" in the main distribution directory for copyright.

#include "UID.h"


void Bro::UID::Set(bro_uint_t bits, const uint64_t* v, size_t n)
	{
	}

uint64_t Bro::UID::global_id = 0;

     std::string Bro::UID::Base62(uint64_t uuid[2])
     	{
     	std::string prefix;
     	char tmp[2 * 8 + 1];  // enough for even binary representation
     	for ( size_t i = 0; i < 2; ++i )
     		prefix.append(uitoa_n(uuid[i], tmp, sizeof(tmp), 62));

     	return prefix;
     	}

     	    std::string Bro::UID::GUID()
     	    {
     	        return Bro::UID::Base62(Bro::uuid);
     	    }
