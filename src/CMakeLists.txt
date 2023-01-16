project(hdb)
CMAKE_MINIMUM_REQUIRED(VERSION 3.7 FATAL_ERROR)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

# compiler must be 17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# required if linking to static library
add_definitions(-DANTLR4CPP_STATIC)

# using /MD flag for antlr4_runtime (for Visual C++ compilers only)
set(ANTLR4_WITH_STATIC_CRT OFF)

# Specify the version of the antlr4 library needed for this project.
# By default the latest version of antlr4 will be used.  You can specify a
# specific, stable version by setting a repository tag value or a link
# to a zip file containing the libary source.
set(ANTLR4_TAG 4.11.1)
# set(ANTLR4_ZIP_REPOSITORY https://github.com/antlr/antlr4/archive/refs/tags/4.11.1.zip)

# add external build for antlrcpp
include(ExternalAntlr4Cpp)
# add antrl4cpp artifacts to project environment
include_directories(${ANTLR4_INCLUDE_DIRS})

# add posix threads so the antlr runtime works
set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)

# set variable pointing to the antlr tool that supports C++
# this is not required if the jar file can be found under PATH environment
# set(ANTLR_EXECUTABLE /usr/local/lib/antlr-4.11.1-complete.jar)
# add macros to generate ANTLR Cpp code from grammar
# find_package(ANTLR REQUIRED)

# Call macro to add lexer and grammar to your build dependencies.
# antlr_target(ReplCommands ReplCommands.g4 LEXER PARSER LISTENER)

# Include modules:
# Repl
set(HDB_REPL_SOURCES_DIR ${CMAKE_CURRENT_SOURCE_DIR}/repl)
list(APPEND HDB_REPL_CXX_FILES 
            ReplCommandsBaseListener.cpp
            ReplCommandsLexer.cpp
            ReplCommandsListener.cpp
            ReplCommandsParser.cpp
            Repl.cpp)
list(TRANSFORM HDB_REPL_CXX_FILES PREPEND "${HDB_REPL_SOURCES_DIR}/")
include_directories(${HDB_REPL_SOURCES_DIR})

# DataContainer
set(HDB_DATACONTAINER_SOURCES_DIR ${CMAKE_CURRENT_SOURCE_DIR}/data_container)
list(APPEND HDB_DATACONTAINER_CXX_FILES 
            DataContainer.cpp
            InMemoryDataContainer.cpp)
list(TRANSFORM HDB_DATACONTAINER_CXX_FILES PREPEND "${HDB_DATACONTAINER_SOURCES_DIR}/")
include_directories(${HDB_DATACONTAINER_SOURCES_DIR})

# Domain
set(HDB_DOMAIN_SOURCES_DIR ${CMAKE_CURRENT_SOURCE_DIR}/domain)
list(APPEND HDB_DOMAIN_CXX_FILES 
            Assistant.cpp
            Department.cpp
            Doctor.cpp
            Employee.cpp
            Entry.cpp
            Nurse.cpp
            Paramedic.cpp
            Patient.cpp
            Person.cpp
            Room.cpp)
list(TRANSFORM HDB_DOMAIN_CXX_FILES PREPEND "${HDB_DOMAIN_SOURCES_DIR}/")
include_directories(${HDB_DOMAIN_SOURCES_DIR})

# add generated grammar to binary target
add_executable(hdb main.cpp 
                   ${HDB_REPL_CXX_FILES} 
                   ${HDB_DATACONTAINER_CXX_FILES}
                   ${HDB_DOMAIN_CXX_FILES})

target_link_libraries(hdb antlr4_static Threads::Threads)
