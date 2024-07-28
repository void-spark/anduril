#!/bin/bash

avrdude -c usbasp -p t1634 -v -Uflash:w:hex/anduril.hank-emisar-d1v2-nofet.hex
