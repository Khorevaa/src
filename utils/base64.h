#pragma once

#include <string>

// ������� �������� ������ � Base64
std::string base64_encode(unsigned char const*, unsigned int len);

// ������� ���������� ������ �� Base64
std::string base64_decode(std::string const& s);