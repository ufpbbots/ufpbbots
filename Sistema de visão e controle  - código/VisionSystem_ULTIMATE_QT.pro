#-------------------------------------------------
#
# Project created by QtCreator 2015-09-21T11:37:36
#
#-------------------------------------------------

QT       += core gui
QT += serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = VisionSystem_ULTIMATE_QT
TEMPLATE = app

QMAKE_CXXFLAGS+= -fopenmp
QMAKE_LFLAGS +=  -fopenmp
QMAKE_CXXFLAGS_RELEASE *= -O3

RC_ICONS = gpr.ico

SOURCES += main.cpp\
        mainwindow.cpp \
    Ball.cpp \
    Build_Robot.cpp \
    Configurations.cpp \
    Robot.cpp \
    Segmentation.cpp \
    controlador.cpp \
    Grouping.cpp \
    serialcomm.cpp \
    constantes_robot.cpp \
    strategy.cpp

HEADERS  += mainwindow.h \
    Ball.h \
    Build_Robot.h \
    Configurations.h \
    controlador.h \
    Grouping.h \
    Robot.h \
    Segmentation.h \
    serialcomm.h \
    constantes_robot.h \
    strategy.h

FORMS    += mainwindow.ui \
    constantes_robot.ui

INCLUDEPATH += C:/OpenCV-QT/mybuild/install/include

LIBS += -LC:\\OpenCV-QT\\mybuild\\bin \
    libopencv_core2411d \
    libopencv_calib3d2411d \
    libopencv_contrib2411d \
    libopencv_flann2411d \
    libopencv_gpu2411d \
    libopencv_highgui2411d \
    libopencv_imgproc2411d \
    libopencv_legacy2411d \
    libopencv_ml2411d \
    libopencv_nonfree2411d \
    libopencv_objdetect2411d \
    libopencv_ocl2411d \
    libopencv_photo2411d \
    libopencv_stitching2411d \
    libopencv_superres2411d \
    libopencv_video2411d \
    libopencv_videostab2411d \
    libopencv_features2d2411d \

RESOURCES += \
    recurso.qrc
