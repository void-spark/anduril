#!/bin/bash

avrdude -c usbasp -p t1634 -v -Uflash:w:hex/anduril.hank-emisar-2ch.hex
