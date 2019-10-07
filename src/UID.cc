// See the file "COPYING" in the main distribution directory for copyright.

#include "UID.h"

void Bro::UID::Set(bro_uint_t bits, const uint64_t* v, size_t n)
	{
	}

uint64_t Bro::UID::global_id = 0;

 std::string Bro::UID::Base62(uint64_t u[2])
{
	std::string prefix;


	std::cout << "UID.cc/base62/uuid[0]: " << Bro::uuid[0] << std::endl;
	std::cout << "UID.cc/base62/uuid[1]: " << Bro::uuid[1] << std::endl;


	char tmp[sizeof(u) * 8 + 1];  // enough for even binary representation
	for ( size_t i = 0; i < BRO_UID_LEN; ++i )
		prefix.append(uitoa_n(u[i], tmp, sizeof(tmp), 62));

	return prefix;
}

std::string Bro::UID::GUID()
{
    std::cout << "UID.cc/uuid[0]: " << Bro::uuid[0] << std::endl;
    std::cout << "UID.cc/uuid[1]: " << Bro::uuid[1] << std::endl;



    return Bro::UID::Base62(Bro::uuid);
}

