QT += svg
HEADERS     = md.h 
SOURCES     = md.cc main.cc
FORMS       = md.ui

# install
target.path = md
sources.files = $$SOURCES $$HEADERS $$RESOURCES $$FORMS *.pro
sources.path = .
INSTALLS += target sources

