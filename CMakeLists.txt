cmake_minimum_required(VERSION 3.14)

project(practica1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(practica1
  main.cpp
  ejer3.cpp
  ejer5.cpp
  ejer7.cpp
  ejer9.cpp
  ejer11.cpp
  ejer13.cpp
  ejer15.cpp
  ejer17.cpp
  ejer19.cpp
  ejer21.cpp
  ejer23.cpp
  ejer25.cpp
  ejer27.cpp
  ejer29.cpp
  problem3.cpp
  problem5.cpp
  problem7.cpp
  problem9.cpp
  problem11.cpp
  problem13.cpp
  problem15.cpp
  problem17.cpp
)
target_link_libraries(practica1 Qt${QT_VERSION_MAJOR}::Core)

include(GNUInstallDirs)
install(TARGETS practica1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
