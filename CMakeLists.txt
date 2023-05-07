cmake_minimum_required(VERSION 3.23)
project(cpp_lab_5)


set(SOURCES
        main.cpp
        src/App.h
        src/App.cpp
        src/Service/ExceptionService.h
        src/Service/ConsoleDisplayService.cpp
        src/Service/DisplayServiceInterface.h
        src/Service/ConsoleDisplayService.h
        src/Stack/Stack.cpp
        src/Stack/Stack.h
        )

add_executable(${PROJECT_NAME} ${SOURCES})