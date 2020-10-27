cmake_minimum_required(VERSION 3.17)
project(Kranos)

set(CMAKE_CXX_STANDARD 17)

find_package(OpenGL REQUIRED)

set(ASSIMP_LIB ${CMAKE_CURRENT_SOURCE_DIR}/../Deps/ASSIMP/lib/assimp-vc142-mtd.lib
        ${CMAKE_CURRENT_SOURCE_DIR}/../Deps/ASSIMP/lib/zlibstaticd.lib
        ${CMAKE_CURRENT_SOURCE_DIR}/../Deps/ASSIMP/lib/IrrXMLd.lib
        ${CMAKE_CURRENT_SOURCE_DIR}/../Deps/ASSIMP/lib/zlibd.lib)

include_directories(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/../Deps/GLAD/include)
include_directories(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/../Deps/GLFW/include)
include_directories(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/../Deps/STBI_IMAGE/include)
include_directories(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/../Deps/NUKLEAR)
include_directories(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/../Deps/GLM)
include_directories(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/../Deps/spdlog/include)
include_directories(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/../Deps/RxCpp/Rx/v2/src)
include_directories(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/../Deps/ASSIMP/include)

#? Adding event to exectuable already
include_directories(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/Kranos/Event)

set(Kranos_Header ${CMAKE_CURRENT_SOURCE_DIR}Kranos/Log.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/Kranos/Application.cpp)

set_source_files_properties(${Kranos_Header} PROPERTIES COMPLTE_FLAGS "Kranos/kpch.h")

set(PROJECT_FILE Kranos/Application.cpp Kranos/KranosContext.cpp Kranos/Log.cpp Kranos/Window/WindowsWindow.cpp Kranos/Layer.cpp Kranos/LayerStack.cpp Kranos/GUI/NuklearLayer.cpp Kranos/GUI/Panel/MenuPanel.cpp Kranos/GUI/Panel/PropertyPanel.cpp Kranos/GUI/Panel/HierarchyPanel.cpp Kranos/GUI/Panel/ContentPanel.cpp Kranos/GUI/Panel/GUIPanel.h Kranos/GUI/Panel/LogPanel.cpp Kranos/GUI/Panel/LogPanel.h Kranos/GUI/Style/KranosStyle.h)

#main.cpp glad.c  ${CPP_LIB}
add_executable(Kranos Kranos/Entry.cpp glad.c  ${PROJECT_FILE} Kranos/Window/Window.h Kranos/Window/WindowsWindow.h Kranos/KranosContext.h Kranos/Event/ApplicationEvent.h Kranos/Event/MouseEvent.h Kranos/Event/KeyboardEvent.h Kranos/Event/LogEvent.h Kranos/Event/GUIEvent.h Kranos/Event/WindowEvent.h Kranos/Event/Event.h  Kranos/Layer.h  Kranos/LayerStack.h  Kranos/GUI/NuklearLayer.h)
target_link_libraries(${PROJECT_NAME}
        ${CMAKE_CURRENT_SOURCE_DIR}/../Deps/GLFW/lib/glfw3.lib
        ${ASSIMP_LIB}
        OpenGL::GL )