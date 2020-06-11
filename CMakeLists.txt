cmake_minimum_required(VERSION 3.9)
project(TelePhoneNotebook)

set(CMAKE_CXX_STANDARD 11)

add_executable(TelePhoneNotebook main.cpp caddress.h address.h card.h menu.h User.h tpaddress.h Telephone.h caddress.cpp card.cpp menu.cpp Telephone.cpp tpaddress.cpp User.cpp)