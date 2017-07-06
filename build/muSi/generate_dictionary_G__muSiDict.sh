#!/bin/bash

# This macro is used to generate the ROOT dictionaries
# To use the ctest launchers one needs some environment variables which
# are only present when running CMake. To have the same environment at
# the time the dictionary is build this script is used which is build
# at the time cmake runs.

# Setup the needed environment
export LD_LIBRARY_PATH=/opt/fs_may16p1_inst/lib/root::/opt/AMDAPPSDK-2.9-1/lib/x86_64/
export DYLD_LIBRARY_PATH=/opt/fs_may16p1_inst/lib/root::/opt/AMDAPPSDK-2.9-1/lib/x86_64/
export ROOTSYS=/opt/fs_may16p1_inst

/opt/fs_may16p1_inst/bin/rootcint -f /home/muzalevsky/check/build/muSi/G__muSiDict.cxx -inlineInputHeader -rmf /home/muzalevsky/check/build/lib/libmuSi.rootmap -rml muSi.so -c   -I/opt/fr_16.06_inst/include -I/opt/fs_may16p1_inst/include/root -I/opt/fs_may16p1_inst/include -I/home/muzalevsky/check/data/muSiData/ -I/home/muzalevsky/check/data/ -I/home/muzalevsky/check/muSi/ -I/opt/fs_may16p1_inst/include/root -I/opt/fs_may16p1_inst/include ERmuSi.h ERmuSiHitProducer.h ERmuSiTrackFinder.h ERmuSiMatcher.h ERmuSiVertexFinder.h ERmuSiLinkDef.h