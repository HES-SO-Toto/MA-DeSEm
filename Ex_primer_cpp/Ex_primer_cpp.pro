TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        circle.cpp \
        line.cpp \
        main.cpp \
        point.cpp \
        rectangle.cpp \
        shape.cpp

HEADERS += \
    circle.h \
    line.h \
    point.h \
    rectangle.h \
    shape.h
