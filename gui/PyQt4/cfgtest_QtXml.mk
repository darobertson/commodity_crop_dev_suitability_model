#############################################################################
# Makefile for building: cfgtest_QtXml.app/Contents/MacOS/cfgtest_QtXml
# Generated by qmake (2.01a) (Qt 4.8.6) on: Tue Jan 20 20:27:16 2015
# Project:  cfgtest_QtXml.pro
# Template: app
# Command: /opt/local/bin/qmake -spec /opt/local/share/qt4/mkspecs/macx-g++ -o cfgtest_QtXml.mk cfgtest_QtXml.pro
#############################################################################

####### Compiler, tools and options

CC            = /usr/bin/clang
CXX           = /usr/bin/clang++
DEFINES       = -DQT_NO_DEBUG -DQT_XML_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -O2 -arch x86_64 -Xarch_x86_64 -mmacosx-version-min=10.10 -Wall -W $(DEFINES)
CXXFLAGS      = -pipe -O2 -arch x86_64 -Xarch_x86_64 -mmacosx-version-min=10.10 -Wall -W $(DEFINES)
INCPATH       = -I/opt/local/share/qt4/mkspecs/macx-g++ -I. -I. -I/opt/local/Library/Frameworks/QtCore.framework/Versions/4/Headers -I/opt/local/Library/Frameworks/QtXml.framework/Versions/4/Headers -I/opt/local/Library/Frameworks/QtXml.framework/Versions/4/Headers -I/opt/local/Library/Frameworks/QtCore.framework/Versions/4/Headers -I/opt/local/include -F/opt/local/Library/Frameworks -F/opt/local/lib
LINK          = /usr/bin/clang++
LFLAGS        = -headerpad_max_install_names -arch x86_64 -Xarch_x86_64 -mmacosx-version-min=10.10
LIBS          = $(SUBLIBS) -F/opt/local/Library/Frameworks -F/opt/local/lib  -F/opt/local/Library/Frameworks -F/opt/local/lib -L/opt/local/lib -framework QtXml -framework QtCore 
AR            = ar cq
RANLIB        = ranlib -s
QMAKE         = /opt/local/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = cp -f
COPY_DIR      = cp -f -R
STRIP         = 
INSTALL_FILE  = $(COPY_FILE)
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = $(COPY_FILE)
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
export MACOSX_DEPLOYMENT_TARGET = 10.10

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = cfgtest_QtXml.cpp 
OBJECTS       = cfgtest_QtXml.o
DIST          = /opt/local/share/qt4/mkspecs/common/unix.conf \
		/opt/local/share/qt4/mkspecs/common/mac.conf \
		/opt/local/share/qt4/mkspecs/common/gcc-base.conf \
		/opt/local/share/qt4/mkspecs/common/gcc-base-macx.conf \
		/opt/local/share/qt4/mkspecs/common/g++-base.conf \
		/opt/local/share/qt4/mkspecs/common/g++-macx.conf \
		/opt/local/share/qt4/mkspecs/qconfig.pri \
		/opt/local/share/qt4/mkspecs/modules/qt_webkit_version.pri \
		/opt/local/share/qt4/mkspecs/features/qt_functions.prf \
		/opt/local/share/qt4/mkspecs/features/qt_config.prf \
		/opt/local/share/qt4/mkspecs/features/exclusive_builds.prf \
		/opt/local/share/qt4/mkspecs/features/default_pre.prf \
		/opt/local/share/qt4/mkspecs/features/mac/default_pre.prf \
		/opt/local/share/qt4/mkspecs/features/release.prf \
		/opt/local/share/qt4/mkspecs/features/default_post.prf \
		/opt/local/share/qt4/mkspecs/features/mac/default_post.prf \
		/opt/local/share/qt4/mkspecs/features/mac/x86_64.prf \
		/opt/local/share/qt4/mkspecs/features/mac/objective_cxx.prf \
		/opt/local/share/qt4/mkspecs/features/mac/objective_c.prf \
		/opt/local/share/qt4/mkspecs/features/mac/split_sources.prf \
		/opt/local/share/qt4/mkspecs/features/shared.prf \
		/opt/local/share/qt4/mkspecs/features/warn_on.prf \
		/opt/local/share/qt4/mkspecs/features/qt.prf \
		/opt/local/share/qt4/mkspecs/features/unix/thread.prf \
		/opt/local/share/qt4/mkspecs/features/moc.prf \
		/opt/local/share/qt4/mkspecs/features/mac/rez.prf \
		/opt/local/share/qt4/mkspecs/features/mac/sdk.prf \
		/opt/local/share/qt4/mkspecs/features/resources.prf \
		/opt/local/share/qt4/mkspecs/features/uic.prf \
		/opt/local/share/qt4/mkspecs/features/yacc.prf \
		/opt/local/share/qt4/mkspecs/features/lex.prf \
		/opt/local/share/qt4/mkspecs/features/include_source_dir.prf \
		cfgtest_QtXml.pro
QMAKE_TARGET  = cfgtest_QtXml
DESTDIR       = 
TARGET        = cfgtest_QtXml.app/Contents/MacOS/cfgtest_QtXml

####### Custom Compiler Variables
QMAKE_COMP_QMAKE_OBJECTIVE_CXXFLAGS = -pipe \
		-O2 \
		-arch \
		x86_64 \
		-Xarch_x86_64 \
		-mmacosx-version-min=10.10 \
		-Wall \
		-W
QMAKE_COMP_QMAKE_OBJECTIVE_CFLAGS = -pipe \
		-O2 \
		-arch \
		x86_64 \
		-Xarch_x86_64 \
		-mmacosx-version-min=10.10 \
		-Wall \
		-W


first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: cfgtest_QtXml.mk cfgtest_QtXml.app/Contents/PkgInfo cfgtest_QtXml.app/Contents/Resources/empty.lproj cfgtest_QtXml.app/Contents/Info.plist $(TARGET)

$(TARGET):  $(OBJECTS)  
	@$(CHK_DIR_EXISTS) cfgtest_QtXml.app/Contents/MacOS/ || $(MKDIR) cfgtest_QtXml.app/Contents/MacOS/ 
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

cfgtest_QtXml.mk: cfgtest_QtXml.pro  /opt/local/share/qt4/mkspecs/macx-g++/qmake.conf /opt/local/share/qt4/mkspecs/common/unix.conf \
		/opt/local/share/qt4/mkspecs/common/mac.conf \
		/opt/local/share/qt4/mkspecs/common/gcc-base.conf \
		/opt/local/share/qt4/mkspecs/common/gcc-base-macx.conf \
		/opt/local/share/qt4/mkspecs/common/g++-base.conf \
		/opt/local/share/qt4/mkspecs/common/g++-macx.conf \
		/opt/local/share/qt4/mkspecs/qconfig.pri \
		/opt/local/share/qt4/mkspecs/modules/qt_webkit_version.pri \
		/opt/local/share/qt4/mkspecs/features/qt_functions.prf \
		/opt/local/share/qt4/mkspecs/features/qt_config.prf \
		/opt/local/share/qt4/mkspecs/features/exclusive_builds.prf \
		/opt/local/share/qt4/mkspecs/features/default_pre.prf \
		/opt/local/share/qt4/mkspecs/features/mac/default_pre.prf \
		/opt/local/share/qt4/mkspecs/features/release.prf \
		/opt/local/share/qt4/mkspecs/features/default_post.prf \
		/opt/local/share/qt4/mkspecs/features/mac/default_post.prf \
		/opt/local/share/qt4/mkspecs/features/mac/x86_64.prf \
		/opt/local/share/qt4/mkspecs/features/mac/objective_cxx.prf \
		/opt/local/share/qt4/mkspecs/features/mac/objective_c.prf \
		/opt/local/share/qt4/mkspecs/features/mac/split_sources.prf \
		/opt/local/share/qt4/mkspecs/features/shared.prf \
		/opt/local/share/qt4/mkspecs/features/warn_on.prf \
		/opt/local/share/qt4/mkspecs/features/qt.prf \
		/opt/local/share/qt4/mkspecs/features/unix/thread.prf \
		/opt/local/share/qt4/mkspecs/features/moc.prf \
		/opt/local/share/qt4/mkspecs/features/mac/rez.prf \
		/opt/local/share/qt4/mkspecs/features/mac/sdk.prf \
		/opt/local/share/qt4/mkspecs/features/resources.prf \
		/opt/local/share/qt4/mkspecs/features/uic.prf \
		/opt/local/share/qt4/mkspecs/features/yacc.prf \
		/opt/local/share/qt4/mkspecs/features/lex.prf \
		/opt/local/share/qt4/mkspecs/features/include_source_dir.prf \
		/opt/local/Library/Frameworks/QtXml.framework/QtXml.prl \
		/opt/local/Library/Frameworks/QtCore.framework/QtCore.prl
	$(QMAKE) -spec /opt/local/share/qt4/mkspecs/macx-g++ -o cfgtest_QtXml.mk cfgtest_QtXml.pro
/opt/local/share/qt4/mkspecs/common/unix.conf:
/opt/local/share/qt4/mkspecs/common/mac.conf:
/opt/local/share/qt4/mkspecs/common/gcc-base.conf:
/opt/local/share/qt4/mkspecs/common/gcc-base-macx.conf:
/opt/local/share/qt4/mkspecs/common/g++-base.conf:
/opt/local/share/qt4/mkspecs/common/g++-macx.conf:
/opt/local/share/qt4/mkspecs/qconfig.pri:
/opt/local/share/qt4/mkspecs/modules/qt_webkit_version.pri:
/opt/local/share/qt4/mkspecs/features/qt_functions.prf:
/opt/local/share/qt4/mkspecs/features/qt_config.prf:
/opt/local/share/qt4/mkspecs/features/exclusive_builds.prf:
/opt/local/share/qt4/mkspecs/features/default_pre.prf:
/opt/local/share/qt4/mkspecs/features/mac/default_pre.prf:
/opt/local/share/qt4/mkspecs/features/release.prf:
/opt/local/share/qt4/mkspecs/features/default_post.prf:
/opt/local/share/qt4/mkspecs/features/mac/default_post.prf:
/opt/local/share/qt4/mkspecs/features/mac/x86_64.prf:
/opt/local/share/qt4/mkspecs/features/mac/objective_cxx.prf:
/opt/local/share/qt4/mkspecs/features/mac/objective_c.prf:
/opt/local/share/qt4/mkspecs/features/mac/split_sources.prf:
/opt/local/share/qt4/mkspecs/features/shared.prf:
/opt/local/share/qt4/mkspecs/features/warn_on.prf:
/opt/local/share/qt4/mkspecs/features/qt.prf:
/opt/local/share/qt4/mkspecs/features/unix/thread.prf:
/opt/local/share/qt4/mkspecs/features/moc.prf:
/opt/local/share/qt4/mkspecs/features/mac/rez.prf:
/opt/local/share/qt4/mkspecs/features/mac/sdk.prf:
/opt/local/share/qt4/mkspecs/features/resources.prf:
/opt/local/share/qt4/mkspecs/features/uic.prf:
/opt/local/share/qt4/mkspecs/features/yacc.prf:
/opt/local/share/qt4/mkspecs/features/lex.prf:
/opt/local/share/qt4/mkspecs/features/include_source_dir.prf:
/opt/local/Library/Frameworks/QtXml.framework/QtXml.prl:
/opt/local/Library/Frameworks/QtCore.framework/QtCore.prl:
qmake:  FORCE
	@$(QMAKE) -spec /opt/local/share/qt4/mkspecs/macx-g++ -o cfgtest_QtXml.mk cfgtest_QtXml.pro

cfgtest_QtXml.app/Contents/PkgInfo: 
	@$(CHK_DIR_EXISTS) cfgtest_QtXml.app/Contents || $(MKDIR) cfgtest_QtXml.app/Contents 
	@$(DEL_FILE) cfgtest_QtXml.app/Contents/PkgInfo
	@echo "APPL????" >cfgtest_QtXml.app/Contents/PkgInfo
cfgtest_QtXml.app/Contents/Resources/empty.lproj: 
	@$(CHK_DIR_EXISTS) cfgtest_QtXml.app/Contents/Resources || $(MKDIR) cfgtest_QtXml.app/Contents/Resources 
	@touch cfgtest_QtXml.app/Contents/Resources/empty.lproj
	
cfgtest_QtXml.app/Contents/Info.plist: 
	@$(CHK_DIR_EXISTS) cfgtest_QtXml.app/Contents || $(MKDIR) cfgtest_QtXml.app/Contents 
	@$(DEL_FILE) cfgtest_QtXml.app/Contents/Info.plist
	@sed -e "s,@SHORT_VERSION@,1.0,g" -e "s,@TYPEINFO@,????,g" -e "s,@ICON@,,g" -e "s,@EXECUTABLE@,cfgtest_QtXml,g" -e "s,@TYPEINFO@,????,g" /opt/local/share/qt4/mkspecs/macx-g++/Info.plist.app >cfgtest_QtXml.app/Contents/Info.plist
dist: 
	@$(CHK_DIR_EXISTS) .tmp/cfgtest_QtXml1.0.0 || $(MKDIR) .tmp/cfgtest_QtXml1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/cfgtest_QtXml1.0.0/ && $(COPY_FILE) --parents cfgtest_QtXml.cpp .tmp/cfgtest_QtXml1.0.0/ && (cd `dirname .tmp/cfgtest_QtXml1.0.0` && $(TAR) cfgtest_QtXml1.0.0.tar cfgtest_QtXml1.0.0 && $(COMPRESS) cfgtest_QtXml1.0.0.tar) && $(MOVE) `dirname .tmp/cfgtest_QtXml1.0.0`/cfgtest_QtXml1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/cfgtest_QtXml1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) -r cfgtest_QtXml.app
	-$(DEL_FILE) cfgtest_QtXml.mk


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_objective_cxx_make_all:
compiler_objective_cxx_clean:
compiler_objective_c_make_all:
compiler_objective_c_clean:
compiler_moc_header_make_all:
compiler_moc_header_clean:
compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_rez_source_make_all:
compiler_rez_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: 

####### Compile

cfgtest_QtXml.o: cfgtest_QtXml.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o cfgtest_QtXml.o cfgtest_QtXml.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

