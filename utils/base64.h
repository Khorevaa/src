#pragma once

#include <string>

// функция кодирует строку в Base64
std::string base64_encode(unsigned char const*, unsigned int len);

// функция декодирует строку из Base64
std::string base64_decode(std::string const& s);