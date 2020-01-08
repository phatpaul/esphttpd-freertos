PROJECT_NAME := bootloader-bootloader
# $(shell date +"%Y%m%d-%H:%M") -->  20190403-10:37
# $(shell date +"%y%m%d%H%M") -->  1904031037
PROJECT_VER := bootloader-$(shell date +"%y%m%d%H%M")

include $(IDF_PATH)/make/project.mk

