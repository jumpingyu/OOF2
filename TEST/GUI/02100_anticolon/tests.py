# -*- python -*-

# This software was produced by NIST, an agency of the U.S. government,
# and by statute is not subject to copyright in the United States.
# Recipients of this software assume all responsibilities associated
# with its operation, modification and maintenance. However, to
# facilitate maintenance we ask that before distributing modified
# versions of this software, you first contact the authors at
# oof_manager@nist.gov. 

from generics import *

def msOKsensitive():
    return is_sensitive('Dialog-Create Microstructure:gtk-ok')

def propertyOKsensitive():
    return is_sensitive('Dialog-Copy property Mechanical;Elasticity;Isotropic:gtk-ok')

def property2OKsensitive():
    return is_sensitive('Dialog-Copy property Mechanical;Elasticity;Isotropic;abc:gtk-ok')

def skelOKsensitive():
    return is_sensitive("Dialog-New skeleton:gtk-ok")
