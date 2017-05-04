cmake_minimum_required(VERSION 3.6)
project(Praedor)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        build-Character-Creator-Desktop_Qt_5_9_0_MinGW_32bit-Debug/debug/moc_mainwindow.cpp
        build-Character-Creator-Desktop_Qt_5_9_0_MinGW_32bit-Debug/debug/moc_predefs.h
        build-Character-Creator-Desktop_Qt_5_9_0_MinGW_32bit-Debug/ui_mainwindow.h
        Character-Creator/character.cpp
        Character-Creator/character.h
        Character-Creator/main.cpp
        Character-Creator/mainwindow.cpp
        Character-Creator/mainwindow.h)

add_executable(Praedor ${SOURCE_FILES})