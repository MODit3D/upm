%module javaupm_a110x
%include "../upm.i"
%include "stdint.i"
%include "typemaps.i"

%{
    #include "a110x.hpp"
%}
%include "a110x.hpp"

JAVA_JNI_LOADLIBRARY(javaupm_a110x)

JAVA_ADD_INSTALLISR(upm::A110X)
