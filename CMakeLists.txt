cmake_minimum_required(VERSION 3.0.0)
include_directories(C:/Users/cqwuxiaolong/occt/build/inc ./src ./src/include)
link_directories(C:/Users/cqwuxiaolong/occt/build/win64/vc14/lib)
project(LamohCad VERSION 1.0.0)
#Qt5 
set(Qt5_DIR "C:/Qt/5.15.2/msvc2019_64/lib/cmake/Qt5")
set(OpenCASCADE_INSTALL_PREFIX "C:/Users/cqwuxiaolong/occt/build/")
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
find_package(Qt5 COMPONENTS Core Widgets Quick REQUIRED) 
# List of available OpenCASCADE libraries for each module  每个模块中的库
set (OpenCASCADE_FoundationClasses_LIBRARIES TKernel;TKMath)
set (OpenCASCADE_ModelingData_LIBRARIES TKG2d;TKG3d;TKGeomBase;TKBRep)
set (OpenCASCADE_ModelingAlgorithms_LIBRARIES TKGeomAlgo;TKTopAlgo;TKPrim;TKBO;TKShHealing;TKBool;TKHLR;TKFillet;TKOffset;TKFeat;TKMesh;TKXMesh)
set (OpenCASCADE_Visualization_LIBRARIES TKService;TKV3d;TKOpenGl;TKMeshVS)
set (OpenCASCADE_ApplicationFramework_LIBRARIES TKCDF;TKLCAF;TKCAF;TKBinL;TKXmlL;TKBin;TKXml;TKStdL;TKStd;TKTObj;TKBinTObj;TKXmlTObj;TKVCAF)
set (OpenCASCADE_DataExchange_LIBRARIES TKXSBase;TKSTEPBase;TKSTEPAttr;TKSTEP209;TKSTEP;TKIGES;TKXCAF;TKXDEIGES;TKXDESTEP;TKSTL;TKVRML;TKXmlXCAF;TKBinXCAF;TKRWMesh)
set (OpenCASCADE_Draw_LIBRARIES TKDraw;TKTopTest;TKViewerTest;TKXSDRAW;TKDCAF;TKXDEDRAW;TKTObjDRAW;TKQADraw)
# List of available OpenCASCADE libraries.所有的库
set (OpenCASCADE_LIBRARIES TKernel;TKMath;TKG2d;TKG3d;TKGeomBase;TKBRep;TKGeomAlgo;TKTopAlgo;TKPrim;TKBO;TKShHealing;TKBool;TKHLR;TKFillet;TKOffset;TKFeat;TKMesh;TKXMesh;TKService;TKV3d;TKOpenGl;TKMeshVS;TKCDF;TKLCAF;TKCAF;TKBinL;TKXmlL;TKBin;TKXml;TKStdL;TKStd;TKTObj;TKBinTObj;TKXmlTObj;TKVCAF;TKXSBase;TKSTEPBase;TKSTEPAttr;TKSTEP209;TKSTEP;TKIGES;TKXCAF;TKXDEIGES;TKXDESTEP;TKSTL;TKVRML;TKXmlXCAF;TKBinXCAF;TKRWMesh;TKDraw;TKTopTest;TKViewerTest;TKXSDRAW;TKDCAF;TKXDEDRAW;TKTObjDRAW;TKQADraw)
set(SOURCE_FILES
  "src/include/AndroidQt_TouchParameters.h"
  "src/include/AndroidQt_UserInteractionParameters.h"
  "src/include/AndroidQt_Window.h"
  "src/include/AndroidQt.h"
  "src/AndroidQt_TouchParameters.cxx"
  "src/AndroidQt_Window.cxx"
  "src/AndroidQt.cxx"
  "src/Main.cxx" 
  "src/AndroidQt.qrc"
)
add_executable(${PROJECT_NAME} ${SOURCE_FILES})
target_link_libraries(${PROJECT_NAME} 
                                      Qt5::Core Qt5::Widgets Qt5::Quick openGl32 
                                      ${OpenCASCADE_ModelingData_LIBRARIES} 
                                      ${OpenCASCADE_ModelingAlgorithms_LIBRARIES} 
                                      ${OpenCASCADE_FoundationClasses_LIBRARIES} 
                                      ${OpenCASCADE_Visualization_LIBRARIES})


