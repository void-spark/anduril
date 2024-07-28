#!/bin/bash

avrdude -c usbasp -p t1634 -v -Uflash:w:hex/anduril.hank-noctigon-m44.hex
