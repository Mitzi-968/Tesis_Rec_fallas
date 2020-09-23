###########################################################################
## Makefile generated for Simulink model 'CtrlP_Tray_Poli_ROS'. 
## 
## Makefile     : CtrlP_Tray_Poli_ROS.mk
## Generated on : Thu Sep 17 13:48:22 2020
## MATLAB Coder version: 4.3 (R2019b)
## 
## Build Info:
## 
## Final product: $(RELATIVE_PATH_TO_ANCHOR)/CtrlP_Tray_Poli_ROS.elf
## Product type : executable
## Build type   : Top-Level Standalone Executable
## 
###########################################################################

###########################################################################
## MACROS
###########################################################################

# Macro Descriptions:
# PRODUCT_NAME            Name of the system to build
# MAKEFILE                Name of this makefile

PRODUCT_NAME              = CtrlP_Tray_Poli_ROS
MAKEFILE                  = CtrlP_Tray_Poli_ROS.mk
MATLAB_ROOT               = /usr/local/MATLAB/R2019b
MATLAB_BIN                = /usr/local/MATLAB/R2019b/bin
MATLAB_ARCH_BIN           = $(MATLAB_BIN)/glnxa64
MASTER_ANCHOR_DIR         = 
START_DIR                 = /home/anie/Tesis_Rec_fallas/matlab_files
SOLVER                    = 
SOLVER_OBJ                = 
CLASSIC_INTERFACE         = 0
TGT_FCN_LIB               = None
MODEL_HAS_DYNAMICALLY_LOADED_SFCNS = 0
RELATIVE_PATH_TO_ANCHOR   = ..
C_STANDARD_OPTS           = 
CPP_STANDARD_OPTS         = 
LIBSM_SSCI_OBJS           = ./sm_ssci_3dd14f0a.c.o ./sm_ssci_646478c5.c.o ./sm_ssci_916e6db1.c.o ./sm_ssci_b2b6b422.c.o ./sm_ssci_c16a187b.c.o
LIBSM_OBJS                = ./sm_1ade6722.c.o ./sm_1dba7276.c.o ./sm_1e022f29.c.o ./sm_2567b5ea.c.o ./sm_26df822b.c.o ./sm_346a6262.c.o ./sm_3c02344f.c.o ./sm_440126a7.c.o ./sm_45dc522c.c.o ./sm_5763bdb7.c.o ./sm_6166f1eb.c.o ./sm_62d41fb5.c.o ./sm_67d72683.c.o ./sm_6fbd150d.c.o ./sm_71b23225.c.o ./sm_73d210b9.c.o ./sm_7a6fe4d7.c.o ./sm_8bba0509.c.o ./sm_916806b3.c.o ./sm_9abcb56e.c.o ./sm_a0028316.c.o ./sm_a264a430.c.o ./sm_aa059a3a.c.o ./sm_acba2496.c.o ./sm_badd8656.c.o ./sm_bc63e36c.c.o ./sm_bfda6e42.c.o ./sm_c0ba649d.c.o ./sm_c160a102.c.o ./sm_c60cd1fd.c.o ./sm_c7d3720c.c.o ./sm_c7d6c0d7.c.o ./sm_cabca465.c.o ./sm_d3d79f0f.c.o ./sm_d3d946fd.c.o ./sm_e2bea5a2.c.o ./sm_e8bab6d7.c.o ./sm_efdfa66e.c.o
LIBPM_MATH_OBJS           = ./pm_math_1966ea7d.c.o ./pm_math_1ad202b7.c.o ./pm_math_1c69d5b2.c.o ./pm_math_2cdd2951.c.o ./pm_math_3463da5d.c.o ./pm_math_360e4b46.c.o ./pm_math_48bd51fb.c.o ./pm_math_500a14cd.c.o ./pm_math_5a01dda4.c.o ./pm_math_646fa971.c.o ./pm_math_8d05b7c0.c.o ./pm_math_a001e9ec.c.o ./pm_math_b7b980b1.c.o ./pm_math_bad43c87.c.o ./pm_math_d1be0f30.c.o ./pm_math_da630bd2.c.o ./pm_math_f760e8f6.c.o
LIBSSC_SLI_OBJS           = ./ssc_sli_0763c151.c.o ./ssc_sli_0bd269e6.c.o ./ssc_sli_0d6d0780.c.o ./ssc_sli_136b443c.c.o ./ssc_sli_140b3534.c.o ./ssc_sli_15d5f6ce.c.o ./ssc_sli_1db813e8.c.o ./ssc_sli_2bbd58a4.c.o ./ssc_sli_2f6ea1cd.c.o ./ssc_sli_360cfd63.c.o ./ssc_sli_43618287.c.o ./ssc_sli_466b08dd.c.o ./ssc_sli_496799bd.c.o ./ssc_sli_4e028390.c.o ./ssc_sli_51dbd3b5.c.o ./ssc_sli_550a4805.c.o ./ssc_sli_5a0cb974.c.o ./ssc_sli_5d63aeeb.c.o ./ssc_sli_62d81790.c.o ./ssc_sli_77063d8b.c.o ./ssc_sli_7a618260.c.o ./ssc_sli_880e593a.c.o ./ssc_sli_89d0f30a.c.o ./ssc_sli_8a64c4e2.c.o ./ssc_sli_93019ea6.c.o ./ssc_sli_9abcdb7f.c.o ./ssc_sli_9b67747c.c.o ./ssc_sli_9c030181.c.o ./ssc_sli_c7dda239.c.o ./ssc_sli_d064c978.c.o ./ssc_sli_d80c44d2.c.o ./ssc_sli_dcd66f69.c.o ./ssc_sli_e66fe6d5.c.o ./ssc_sli_e7b327bb.c.o ./ssc_sli_eb0a5702.c.o ./ssc_sli_f6bd9cc8.c.o ./ssc_sli_f9b5dbc5.c.o ./ssc_sli_fa0ce53e.c.o ./ssc_sli_fbdf29da.c.o
LIBSSC_CORE_OBJS          = ./ssc_core_01dcc633.c.o ./ssc_core_04da2c69.c.o ./ssc_core_05058dd9.c.o ./ssc_core_06ba68a6.c.o ./ssc_core_09b5fa6e.c.o ./ssc_core_0bd666aa.c.o ./ssc_core_0f019bd9.c.o ./ssc_core_0f0420a6.c.o ./ssc_core_18bf4d77.c.o ./ssc_core_1b0cafd5.c.o ./ssc_core_1c6b0332.c.o ./ssc_core_1fd25120.c.o ./ssc_core_24b4cdee.c.o ./ssc_core_2568b075.c.o ./ssc_core_280c0222.c.o ./ssc_core_2cd54448.c.o ./ssc_core_3169e4b7.c.o ./ssc_core_360a4baf.c.o ./ssc_core_37d4ea84.c.o ./ssc_core_40dfdbdc.c.o ./ssc_core_41017299.c.o ./ssc_core_4666b45b.c.o ./ssc_core_48b08af1.c.o ./ssc_core_48b1386a.c.o ./ssc_core_4965213d.c.o ./ssc_core_4ad9135b.c.o ./ssc_core_4db6bd68.c.o ./ssc_core_4db86fcc.c.o ./ssc_core_4e03e39d.c.o ./ssc_core_4e04eecd.c.o ./ssc_core_54d55ae9.c.o ./ssc_core_5505224d.c.o ./ssc_core_56b1a2bf.c.o ./ssc_core_576cd129.c.o ./ssc_core_59b034b8.c.o ./ssc_core_5d6ba758.c.o ./ssc_core_67d1f118.c.o ./ssc_core_68da074b.c.o ./ssc_core_6b6b89d2.c.o ./ssc_core_6dd833f3.c.o ./ssc_core_73d9c2b7.c.o ./ssc_core_76d825be.c.o ./ssc_core_79dd08ab.c.o ./ssc_core_7a613edb.c.o ./ssc_core_83db8762.c.o ./ssc_core_856738f2.c.o ./ssc_core_8569edc5.c.o ./ssc_core_89d7fa79.c.o ./ssc_core_8a6471dc.c.o ./ssc_core_8d0064b8.c.o ./ssc_core_96061071.c.o ./ssc_core_97d767fe.c.o ./ssc_core_990fe1a4.c.o ./ssc_core_9b607b15.c.o ./ssc_core_9c016445.c.o ./ssc_core_9c01d168.c.o ./ssc_core_9dd110ad.c.o ./ssc_core_9fb0e229.c.o ./ssc_core_9fb25b4f.c.o ./ssc_core_a1d393be.c.o ./ssc_core_a4d4c45e.c.o ./ssc_core_a4da1d0a.c.o ./ssc_core_a6b78ccc.c.o ./ssc_core_a76299bc.c.o ./ssc_core_a867d880.c.o ./ssc_core_a9bf1ff2.c.o ./ssc_core_abd05c18.c.o ./ssc_core_abd5e7b4.c.o ./ssc_core_acb64294.c.o ./ssc_core_acb6462e.c.o ./ssc_core_b1038cbb.c.o ./ssc_core_b10e34f4.c.o ./ssc_core_b2b3b239.c.o ./ssc_core_b402b40d.c.o ./ssc_core_b7b88213.c.o ./ssc_core_b96ebc21.c.o ./ssc_core_bc648043.c.o ./ssc_core_c3003040.c.o ./ssc_core_c5b050d7.c.o ./ssc_core_c5b63cb2.c.o ./ssc_core_c607b660.c.o ./ssc_core_c8d83e88.c.o ./ssc_core_cab615c8.c.o ./ssc_core_cabdc251.c.o ./ssc_core_cc067f58.c.o ./ssc_core_ce6a84bb.c.o ./ssc_core_d06d763c.c.o ./ssc_core_d3d34d7c.c.o ./ssc_core_d70a6a09.c.o ./ssc_core_d807fa59.c.o ./ssc_core_dcda6edd.c.o ./ssc_core_deb7fd8d.c.o ./ssc_core_e0d0866d.c.o ./ssc_core_e2b61d72.c.o ./ssc_core_e400c1c2.c.o ./ssc_core_ead8f455.c.o ./ssc_core_ee000fbe.c.o ./ssc_core_ee01086d.c.o ./ssc_core_ee0f0141.c.o ./ssc_core_f9b6dbed.c.o ./ssc_core_fa09e9e6.c.o ./ssc_core_fbd34e62.c.o ./ssc_core_ff06d9a4.c.o
LIBNE_OBJS                = ./ne_59b4e14a.c.o
LIBMC_OBJS                = ./mc_026e4f4b.c.o ./mc_03b98f6f.c.o ./mc_0764157d.c.o ./mc_0bd30dee.c.o ./mc_0d6fd085.c.o ./mc_0ed73c49.c.o ./mc_10d4ab75.c.o ./mc_11086079.c.o ./mc_110e6c6c.c.o ./mc_140e3c4c.c.o ./mc_15d12d95.c.o ./mc_15d828ca.c.o ./mc_220ba961.c.o ./mc_2565d6e0.c.o ./mc_2a642f54.c.o ./mc_2a6a9b24.c.o ./mc_2bbf87e3.c.o ./mc_2cdc96b4.c.o ./mc_32d501e3.c.o ./mc_32dc008a.c.o ./mc_3b6a945d.c.o ./mc_3e66abdf.c.o ./mc_4105189f.c.o ./mc_47b8cebe.c.o ./mc_47b91db1.c.o ./mc_4b0301c6.c.o ./mc_4c6117e3.c.o ./mc_51d4094e.c.o ./mc_52623861.c.o ./mc_52688a58.c.o ./mc_53b1fc84.c.o ./mc_550847c3.c.o ./mc_5766048f.c.o ./mc_59b6e413.c.o ./mc_5d65cd86.c.o ./mc_5edd42ef.c.o ./mc_630208f8.c.o ./mc_630dda0e.c.o ./mc_67da200d.c.o ./mc_67da4f41.c.o ./mc_6b6d311a.c.o ./mc_6e61d16c.c.o ./mc_6fb1c336.c.o ./mc_7809a65c.c.o ./mc_7a613aec.c.o ./mc_7bbf41f0.c.o ./mc_7cd58f0b.c.o ./mc_7cdbe436.c.o ./mc_7d0547c8.c.o ./mc_7d099de7.c.o ./mc_7eb21b39.c.o ./mc_81b0ada5.c.o ./mc_81b5717e.c.o ./mc_870ec75e.c.o ./mc_89d597cf.c.o ./mc_90b6aa0a.c.o ./mc_95b62b73.c.o ./mc_9ab7d9b0.c.o ./mc_9b6376d1.c.o ./mc_9b6c1529.c.o ./mc_a2647600.c.o ./mc_a26bab1a.c.o ./mc_a3b90582.c.o ./mc_a865d1dd.c.o ./mc_acb3fad7.c.o ./mc_af0cc4c9.c.o ./mc_b0de9cbc.c.o ./mc_b362c5eb.c.o ./mc_b7b03d44.c.o ./mc_b96a0bad.c.o ./mc_bb0520ee.c.o ./mc_bdbb9b78.c.o ./mc_c2dbf4b2.c.o ./mc_c8d25d23.c.o ./mc_cab8a1f9.c.o ./mc_ce6656ce.c.o ./mc_d20085b7.c.o ./mc_d9d38185.c.o ./mc_dbbb14d2.c.o ./mc_dcdddfae.c.o ./mc_debb448f.c.o ./mc_e7bc2f1a.c.o ./mc_e969ae87.c.o ./mc_edbf543c.c.o ./mc_ee000fbe.c.o ./mc_efdea3a7.c.o ./mc_f3be157c.c.o ./mc_fcb15a9b.c.o ./mc_fd619d14.c.o ./mc_fd6341bb.c.o
LIBEX_OBJS                = ./ex_04d5441d.c.o ./ex_136645f8.c.o ./ex_17bc61ac.c.o ./ex_18b4440a.c.o ./ex_2ebcd5b2.c.o ./ex_316a81de.c.o ./ex_40d5be33.c.o ./ex_47b11894.c.o ./ex_690b7cd0.c.o ./ex_79d100f1.c.o ./ex_8a6fc761.c.o ./ex_b2b40ad5.c.o ./ex_bb0efd4b.c.o ./ex_debffef2.c.o ./ex_e40d74b8.c.o ./ex_f866102d.c.o
LIBPM_OBJS                = ./pm_09bc42e2.c.o ./pm_14098e54.c.o ./pm_26dc3230.c.o ./pm_4fd5f5b9.c.o ./pm_fed8c2c9.c.o

###########################################################################
## TOOLCHAIN SPECIFICATIONS
###########################################################################

# Toolchain Name:          Catkin
# Supported Version(s):    
# ToolchainInfo Version:   2019b
# Specification Revision:  1.0
# 

#-----------
# MACROS
#-----------

CCOUTPUTFLAG = --output_file=
LDOUTPUTFLAG = --output_file=

TOOLCHAIN_SRCS = 
TOOLCHAIN_INCS = 
TOOLCHAIN_LIBS = -lm -lm

#------------------------
# BUILD TOOL COMMANDS
#------------------------

# Assembler: Catkin1.0 Assembler
AS = echo as

# C Compiler: Catkin1.0 C Compiler
CC = echo gcc

# Linker: Catkin1.0 Linker
LD = echo gcc

# C++ Compiler: Catkin1.0 C++ Compiler
CPP = echo g++

# C++ Linker: Catkin1.0 C++ Linker
CPP_LD = echo gcc

# Archiver: Catkin1.0 Archiver
AR = echo ar

# MEX Tool: MEX Tool
MEX_PATH = $(MATLAB_ARCH_BIN)
MEX = $(MEX_PATH)/mex

# Download: Download
DOWNLOAD =

# Execute: Execute
EXECUTE = $(PRODUCT)

# Builder: GMAKE Utility
MAKE = echo


#-------------------------
# Directives/Utilities
#-------------------------

ASDEBUG             = -g
AS_OUTPUT_FLAG      = -o
CDEBUG              = -g
C_OUTPUT_FLAG       = -o
LDDEBUG             = -g
OUTPUT_FLAG         = -o
CPPDEBUG            = -g
CPP_OUTPUT_FLAG     = -o
CPPLDDEBUG          = -g
OUTPUT_FLAG         = -o
ARDEBUG             =
STATICLIB_OUTPUT_FLAG =
MEX_DEBUG           = -g
RM                  = @rm -f
ECHO                = @echo
MV                  = @mv
RUN                 =

#----------------------------------------
# "Faster Builds" Build Configuration
#----------------------------------------

ARFLAGS              = -r
ASFLAGS              = -c \
                       $(ASFLAGS_ADDITIONAL) \
                       $(INCLUDES)
CFLAGS               = -c \
                       -O0
CPPFLAGS             =
CPP_LDFLAGS          =
CPP_SHAREDLIB_LDFLAGS  =
DOWNLOAD_FLAGS       =
EXECUTE_FLAGS        =
LDFLAGS              =
MEX_CPPFLAGS         =
MEX_CPPLDFLAGS       =
MEX_CFLAGS           =
MEX_LDFLAGS          =
MAKE_FLAGS           = "### Successfully generated all binary outputs."
SHAREDLIB_LDFLAGS    =



###########################################################################
## OUTPUT INFO
###########################################################################

PRODUCT = $(RELATIVE_PATH_TO_ANCHOR)/CtrlP_Tray_Poli_ROS.elf
PRODUCT_TYPE = "executable"
BUILD_TYPE = "Top-Level Standalone Executable"

###########################################################################
## INCLUDE PATHS
###########################################################################

INCLUDES_BUILDINFO = -I$(START_DIR) -I$(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw -I$(MATLAB_ROOT)/extern/include -I$(MATLAB_ROOT)/simulink/include -I$(MATLAB_ROOT)/rtw/c/src -I$(MATLAB_ROOT)/rtw/c/src/ext_mode/common -I$(MATLAB_ROOT)/rtw/c/ert -I$(MATLAB_ROOT)/toolbox/physmod/sm/ssci/c/glnxa64 -I$(MATLAB_ROOT)/toolbox/physmod/sm/core/c/glnxa64 -I$(MATLAB_ROOT)/toolbox/physmod/pm_math/c/glnxa64 -I$(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/glnxa64 -I$(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/glnxa64 -I$(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/glnxa64 -I$(MATLAB_ROOT)/toolbox/physmod/network_engine/c/glnxa64 -I$(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/glnxa64 -I$(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/glnxa64 -I$(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/glnxa64 -I$(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/glnxa64 -I$(MATLAB_ROOT)/toolbox/ros/slros/include -I$(MATLAB_ROOT)/toolbox/target/codertarget/rtos/inc

INCLUDES = $(INCLUDES_BUILDINFO)

###########################################################################
## DEFINES
###########################################################################

DEFINES_ = -DMODEL=CtrlP_Tray_Poli_ROS -DNUMST=2 -DNCSTATES=4 -DHAVESTDIO -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=0 -DUNIX -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0 -DTID01EQ=1 -DTERMFCN=1 -DONESTEPFCN=1 -DMAT_FILE=0 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0 -DMT=0 -DROS_PROJECT -DMW_SCHED_OTHER -DSTACK_SIZE=64 -D__MW_TARGET_USE_HARDWARE_RESOURCES_H__ -DRT=RT
DEFINES_BUILD_ARGS = -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0 -DTERMFCN=1 -DONESTEPFCN=1 -DMAT_FILE=0 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0 -DMT=0
DEFINES_CUSTOM = 
DEFINES_OPTS = -DTID01EQ=1
DEFINES_SKIPFORSIL = -DROS_PROJECT -DMW_SCHED_OTHER -DSTACK_SIZE=64
DEFINES_STANDARD = -DMODEL=CtrlP_Tray_Poli_ROS -DNUMST=2 -DNCSTATES=4 -DHAVESTDIO -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=0 -DUNIX

DEFINES = $(DEFINES_) $(DEFINES_BUILD_ARGS) $(DEFINES_CUSTOM) $(DEFINES_OPTS) $(DEFINES_SKIPFORSIL) $(DEFINES_STANDARD)

###########################################################################
## SOURCE FILES
###########################################################################

SRCS = $(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw/CtrlP_Tray_Poli_ROS_99de2b7c_1.c $(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw/CtrlP_Tray_Poli_ROS_99de2b7c_1_create.c $(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw/CtrlP_Tray_Poli_ROS_99de2b7c_1_setParameters.c $(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw/CtrlP_Tray_Poli_ROS_99de2b7c_1_asserts.c $(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw/CtrlP_Tray_Poli_ROS_99de2b7c_1_deriv.c $(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw/CtrlP_Tray_Poli_ROS_99de2b7c_1_checkDynamics.c $(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw/CtrlP_Tray_Poli_ROS_99de2b7c_1_output.c $(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw/CtrlP_Tray_Poli_ROS_99de2b7c_1_asm_delegate.c $(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw/CtrlP_Tray_Poli_ROS_99de2b7c_1_sim_delegate.c $(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw/CtrlP_Tray_Poli_ROS_99de2b7c_1_mode_zero_crossings.c $(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw/CtrlP_Tray_Poli_ROS_99de2b7c_1_geometries.c $(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw/CtrlP_Tray_Poli_ROS_99de2b7c_1_gateway.c $(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw/pm_printf.c $(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw/rt_backsubrr_dbl.c $(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw/rt_forwardsubrr_dbl.c $(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw/rt_lu_real.c $(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw/rt_matrixlib_dbl.c $(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw/CtrlP_Tray_Poli_ROS.cpp $(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw/CtrlP_Tray_Poli_ROS_data.cpp $(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw/rtGetInf.cpp $(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw/rtGetNaN.cpp $(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw/rt_nonfinite.cpp $(MATLAB_ROOT)/toolbox/target/codertarget/rtos/src/linuxinitialize.cpp $(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw/slros_busmsg_conversion.cpp $(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw/slros_initialize.cpp $(MATLAB_ROOT)/toolbox/ros/slros/src/slros_generic_param.cpp

MAIN_SRC = $(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw/ert_main.cpp

ALL_SRCS = $(SRCS) $(MAIN_SRC)

###########################################################################
## OBJECTS
###########################################################################

OBJS = CtrlP_Tray_Poli_ROS_99de2b7c_1.c.o CtrlP_Tray_Poli_ROS_99de2b7c_1_create.c.o CtrlP_Tray_Poli_ROS_99de2b7c_1_setParameters.c.o CtrlP_Tray_Poli_ROS_99de2b7c_1_asserts.c.o CtrlP_Tray_Poli_ROS_99de2b7c_1_deriv.c.o CtrlP_Tray_Poli_ROS_99de2b7c_1_checkDynamics.c.o CtrlP_Tray_Poli_ROS_99de2b7c_1_output.c.o CtrlP_Tray_Poli_ROS_99de2b7c_1_asm_delegate.c.o CtrlP_Tray_Poli_ROS_99de2b7c_1_sim_delegate.c.o CtrlP_Tray_Poli_ROS_99de2b7c_1_mode_zero_crossings.c.o CtrlP_Tray_Poli_ROS_99de2b7c_1_geometries.c.o CtrlP_Tray_Poli_ROS_99de2b7c_1_gateway.c.o pm_printf.c.o rt_backsubrr_dbl.c.o rt_forwardsubrr_dbl.c.o rt_lu_real.c.o rt_matrixlib_dbl.c.o CtrlP_Tray_Poli_ROS.cpp.o CtrlP_Tray_Poli_ROS_data.cpp.o rtGetInf.cpp.o rtGetNaN.cpp.o rt_nonfinite.cpp.o linuxinitialize.cpp.o slros_busmsg_conversion.cpp.o slros_initialize.cpp.o slros_generic_param.cpp.o

MAIN_OBJ = ert_main.cpp.o

ALL_OBJS = $(OBJS) $(MAIN_OBJ)

###########################################################################
## PREBUILT OBJECT FILES
###########################################################################

PREBUILT_OBJS = 

###########################################################################
## LIBRARIES
###########################################################################

LIBS = ./sm_ssci.lib ./sm.lib ./pm_math.lib ./ssc_sli.lib ./ssc_core.lib ./ne.lib ./mc.lib ./ex.lib ./pm.lib

###########################################################################
## SYSTEM LIBRARIES
###########################################################################

SYSTEM_LIBS = 

###########################################################################
## ADDITIONAL TOOLCHAIN FLAGS
###########################################################################

#---------------
# C Compiler
#---------------

CFLAGS_SKIPFORSIL =   -fpermissive
CFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CFLAGS += $(CFLAGS_SKIPFORSIL) $(CFLAGS_BASIC)

#-----------------
# C++ Compiler
#-----------------

CPPFLAGS_SKIPFORSIL =   -fpermissive
CPPFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CPPFLAGS += $(CPPFLAGS_SKIPFORSIL) $(CPPFLAGS_BASIC)

#---------------
# C++ Linker
#---------------

CPP_LDFLAGS_SKIPFORSIL = -lrt

CPP_LDFLAGS += $(CPP_LDFLAGS_SKIPFORSIL)

#------------------------------
# C++ Shared Library Linker
#------------------------------

CPP_SHAREDLIB_LDFLAGS_SKIPFORSIL = -lrt

CPP_SHAREDLIB_LDFLAGS += $(CPP_SHAREDLIB_LDFLAGS_SKIPFORSIL)

#-----------
# Linker
#-----------

LDFLAGS_SKIPFORSIL = -lrt

LDFLAGS += $(LDFLAGS_SKIPFORSIL)

#--------------------------
# Shared Library Linker
#--------------------------

SHAREDLIB_LDFLAGS_SKIPFORSIL = -lrt

SHAREDLIB_LDFLAGS += $(SHAREDLIB_LDFLAGS_SKIPFORSIL)

###########################################################################
## INLINED COMMANDS
###########################################################################


-include codertarget_assembly_flags.mk
-include ../codertarget_assembly_flags.mk


###########################################################################
## PHONY TARGETS
###########################################################################

.PHONY : all build buildobj clean info prebuild download execute


all : build
	@echo "### Successfully generated all binary outputs."


build : prebuild $(PRODUCT)


buildobj : prebuild $(OBJS) $(PREBUILT_OBJS) $(LIBS)
	@echo "### Successfully generated all binary outputs."


prebuild : 


download : $(PRODUCT)


execute : download
	@echo "### Invoking postbuild tool "Execute" ..."
	$(EXECUTE) $(EXECUTE_FLAGS)
	@echo "### Done invoking postbuild tool."


###########################################################################
## FINAL TARGET
###########################################################################

#-------------------------------------------
# Create a standalone executable            
#-------------------------------------------

$(PRODUCT) : $(OBJS) $(PREBUILT_OBJS) $(LIBS) $(MAIN_OBJ)
	@echo "### Creating standalone executable "$(PRODUCT)" ..."
	$(CPP_LD) $(CPP_LDFLAGS) -o $(PRODUCT) $(OBJS) $(MAIN_OBJ) $(LIBS) $(SYSTEM_LIBS) $(TOOLCHAIN_LIBS)
	@echo "### Created: $(PRODUCT)"


###########################################################################
## INTERMEDIATE TARGETS
###########################################################################

#---------------------
# SOURCE-TO-OBJECT
#---------------------

%.c.o : %.c
	$(CC) $(CFLAGS) -o $@ $<


%.s.o : %.s
	$(AS) $(ASFLAGS) -o $@ $<


%.cpp.o : %.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.c.o : $(RELATIVE_PATH_TO_ANCHOR)/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.s.o : $(RELATIVE_PATH_TO_ANCHOR)/%.s
	$(AS) $(ASFLAGS) -o $@ $<


%.cpp.o : $(RELATIVE_PATH_TO_ANCHOR)/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.c.o : $(MATLAB_ROOT)/toolbox/physmod/sm/ssci/c/glnxa64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.s.o : $(MATLAB_ROOT)/toolbox/physmod/sm/ssci/c/glnxa64/%.s
	$(AS) $(ASFLAGS) -o $@ $<


%.cpp.o : $(MATLAB_ROOT)/toolbox/physmod/sm/ssci/c/glnxa64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.c.o : $(MATLAB_ROOT)/toolbox/physmod/sm/core/c/glnxa64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.s.o : $(MATLAB_ROOT)/toolbox/physmod/sm/core/c/glnxa64/%.s
	$(AS) $(ASFLAGS) -o $@ $<


%.cpp.o : $(MATLAB_ROOT)/toolbox/physmod/sm/core/c/glnxa64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.c.o : $(MATLAB_ROOT)/toolbox/physmod/pm_math/c/glnxa64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.s.o : $(MATLAB_ROOT)/toolbox/physmod/pm_math/c/glnxa64/%.s
	$(AS) $(ASFLAGS) -o $@ $<


%.cpp.o : $(MATLAB_ROOT)/toolbox/physmod/pm_math/c/glnxa64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.c.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/glnxa64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.s.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/glnxa64/%.s
	$(AS) $(ASFLAGS) -o $@ $<


%.cpp.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/glnxa64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.c.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/glnxa64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.s.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/glnxa64/%.s
	$(AS) $(ASFLAGS) -o $@ $<


%.cpp.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/glnxa64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.c.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/glnxa64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.s.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/glnxa64/%.s
	$(AS) $(ASFLAGS) -o $@ $<


%.cpp.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/glnxa64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.c.o : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/glnxa64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.s.o : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/glnxa64/%.s
	$(AS) $(ASFLAGS) -o $@ $<


%.cpp.o : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/glnxa64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.c.o : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/glnxa64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.s.o : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/glnxa64/%.s
	$(AS) $(ASFLAGS) -o $@ $<


%.cpp.o : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/glnxa64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.c.o : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/glnxa64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.s.o : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/glnxa64/%.s
	$(AS) $(ASFLAGS) -o $@ $<


%.cpp.o : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/glnxa64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.c.o : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/glnxa64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.s.o : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/glnxa64/%.s
	$(AS) $(ASFLAGS) -o $@ $<


%.cpp.o : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/glnxa64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.c.o : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/glnxa64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.s.o : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/glnxa64/%.s
	$(AS) $(ASFLAGS) -o $@ $<


%.cpp.o : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/glnxa64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.c.o : $(START_DIR)/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.s.o : $(START_DIR)/%.s
	$(AS) $(ASFLAGS) -o $@ $<


%.cpp.o : $(START_DIR)/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.c.o : $(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.s.o : $(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw/%.s
	$(AS) $(ASFLAGS) -o $@ $<


%.cpp.o : $(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.c.o : $(MATLAB_ROOT)/rtw/c/src/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.s.o : $(MATLAB_ROOT)/rtw/c/src/%.s
	$(AS) $(ASFLAGS) -o $@ $<


%.cpp.o : $(MATLAB_ROOT)/rtw/c/src/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.c.o : $(MATLAB_ROOT)/simulink/src/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.s.o : $(MATLAB_ROOT)/simulink/src/%.s
	$(AS) $(ASFLAGS) -o $@ $<


%.cpp.o : $(MATLAB_ROOT)/simulink/src/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


CtrlP_Tray_Poli_ROS_99de2b7c_1.c.o : $(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw/CtrlP_Tray_Poli_ROS_99de2b7c_1.c
	$(CC) $(CFLAGS) -o $@ $<


CtrlP_Tray_Poli_ROS_99de2b7c_1_create.c.o : $(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw/CtrlP_Tray_Poli_ROS_99de2b7c_1_create.c
	$(CC) $(CFLAGS) -o $@ $<


CtrlP_Tray_Poli_ROS_99de2b7c_1_setParameters.c.o : $(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw/CtrlP_Tray_Poli_ROS_99de2b7c_1_setParameters.c
	$(CC) $(CFLAGS) -o $@ $<


CtrlP_Tray_Poli_ROS_99de2b7c_1_asserts.c.o : $(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw/CtrlP_Tray_Poli_ROS_99de2b7c_1_asserts.c
	$(CC) $(CFLAGS) -o $@ $<


CtrlP_Tray_Poli_ROS_99de2b7c_1_deriv.c.o : $(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw/CtrlP_Tray_Poli_ROS_99de2b7c_1_deriv.c
	$(CC) $(CFLAGS) -o $@ $<


CtrlP_Tray_Poli_ROS_99de2b7c_1_checkDynamics.c.o : $(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw/CtrlP_Tray_Poli_ROS_99de2b7c_1_checkDynamics.c
	$(CC) $(CFLAGS) -o $@ $<


CtrlP_Tray_Poli_ROS_99de2b7c_1_output.c.o : $(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw/CtrlP_Tray_Poli_ROS_99de2b7c_1_output.c
	$(CC) $(CFLAGS) -o $@ $<


CtrlP_Tray_Poli_ROS_99de2b7c_1_asm_delegate.c.o : $(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw/CtrlP_Tray_Poli_ROS_99de2b7c_1_asm_delegate.c
	$(CC) $(CFLAGS) -o $@ $<


CtrlP_Tray_Poli_ROS_99de2b7c_1_sim_delegate.c.o : $(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw/CtrlP_Tray_Poli_ROS_99de2b7c_1_sim_delegate.c
	$(CC) $(CFLAGS) -o $@ $<


CtrlP_Tray_Poli_ROS_99de2b7c_1_mode_zero_crossings.c.o : $(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw/CtrlP_Tray_Poli_ROS_99de2b7c_1_mode_zero_crossings.c
	$(CC) $(CFLAGS) -o $@ $<


CtrlP_Tray_Poli_ROS_99de2b7c_1_geometries.c.o : $(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw/CtrlP_Tray_Poli_ROS_99de2b7c_1_geometries.c
	$(CC) $(CFLAGS) -o $@ $<


CtrlP_Tray_Poli_ROS_99de2b7c_1_gateway.c.o : $(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw/CtrlP_Tray_Poli_ROS_99de2b7c_1_gateway.c
	$(CC) $(CFLAGS) -o $@ $<


pm_printf.c.o : $(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw/pm_printf.c
	$(CC) $(CFLAGS) -o $@ $<


ert_main.cpp.o : $(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw/ert_main.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


rt_backsubrr_dbl.c.o : $(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw/rt_backsubrr_dbl.c
	$(CC) $(CFLAGS) -o $@ $<


rt_forwardsubrr_dbl.c.o : $(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw/rt_forwardsubrr_dbl.c
	$(CC) $(CFLAGS) -o $@ $<


rt_lu_real.c.o : $(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw/rt_lu_real.c
	$(CC) $(CFLAGS) -o $@ $<


rt_matrixlib_dbl.c.o : $(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw/rt_matrixlib_dbl.c
	$(CC) $(CFLAGS) -o $@ $<


CtrlP_Tray_Poli_ROS.cpp.o : $(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw/CtrlP_Tray_Poli_ROS.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


CtrlP_Tray_Poli_ROS_data.cpp.o : $(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw/CtrlP_Tray_Poli_ROS_data.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


rtGetInf.cpp.o : $(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw/rtGetInf.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


rtGetNaN.cpp.o : $(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw/rtGetNaN.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


rt_nonfinite.cpp.o : $(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw/rt_nonfinite.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


linuxinitialize.cpp.o : $(MATLAB_ROOT)/toolbox/target/codertarget/rtos/src/linuxinitialize.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


slros_busmsg_conversion.cpp.o : $(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw/slros_busmsg_conversion.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


slros_initialize.cpp.o : $(START_DIR)/CtrlP_Tray_Poli_ROS_ert_rtw/slros_initialize.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


slros_generic_param.cpp.o : $(MATLAB_ROOT)/toolbox/ros/slros/src/slros_generic_param.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


#------------------------
# BUILDABLE LIBRARIES
#------------------------

./sm_ssci.lib : $(LIBSM_SSCI_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBSM_SSCI_OBJS)


./sm.lib : $(LIBSM_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBSM_OBJS)


./pm_math.lib : $(LIBPM_MATH_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBPM_MATH_OBJS)


./ssc_sli.lib : $(LIBSSC_SLI_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBSSC_SLI_OBJS)


./ssc_core.lib : $(LIBSSC_CORE_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBSSC_CORE_OBJS)


./ne.lib : $(LIBNE_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBNE_OBJS)


./mc.lib : $(LIBMC_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBMC_OBJS)


./ex.lib : $(LIBEX_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBEX_OBJS)


./pm.lib : $(LIBPM_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBPM_OBJS)


###########################################################################
## DEPENDENCIES
###########################################################################

$(ALL_OBJS) : rtw_proj.tmw $(MAKEFILE)


###########################################################################
## MISCELLANEOUS TARGETS
###########################################################################

info : 
	@echo "### PRODUCT = $(PRODUCT)"
	@echo "### PRODUCT_TYPE = $(PRODUCT_TYPE)"
	@echo "### BUILD_TYPE = $(BUILD_TYPE)"
	@echo "### INCLUDES = $(INCLUDES)"
	@echo "### DEFINES = $(DEFINES)"
	@echo "### ALL_SRCS = $(ALL_SRCS)"
	@echo "### ALL_OBJS = $(ALL_OBJS)"
	@echo "### LIBS = $(LIBS)"
	@echo "### MODELREF_LIBS = $(MODELREF_LIBS)"
	@echo "### SYSTEM_LIBS = $(SYSTEM_LIBS)"
	@echo "### TOOLCHAIN_LIBS = $(TOOLCHAIN_LIBS)"
	@echo "### ASFLAGS = $(ASFLAGS)"
	@echo "### CFLAGS = $(CFLAGS)"
	@echo "### LDFLAGS = $(LDFLAGS)"
	@echo "### SHAREDLIB_LDFLAGS = $(SHAREDLIB_LDFLAGS)"
	@echo "### CPPFLAGS = $(CPPFLAGS)"
	@echo "### CPP_LDFLAGS = $(CPP_LDFLAGS)"
	@echo "### CPP_SHAREDLIB_LDFLAGS = $(CPP_SHAREDLIB_LDFLAGS)"
	@echo "### ARFLAGS = $(ARFLAGS)"
	@echo "### MEX_CFLAGS = $(MEX_CFLAGS)"
	@echo "### MEX_CPPFLAGS = $(MEX_CPPFLAGS)"
	@echo "### MEX_LDFLAGS = $(MEX_LDFLAGS)"
	@echo "### MEX_CPPLDFLAGS = $(MEX_CPPLDFLAGS)"
	@echo "### DOWNLOAD_FLAGS = $(DOWNLOAD_FLAGS)"
	@echo "### EXECUTE_FLAGS = $(EXECUTE_FLAGS)"
	@echo "### MAKE_FLAGS = $(MAKE_FLAGS)"


clean : 
	$(ECHO) "### Deleting all derived files..."
	$(RM) $(PRODUCT)
	$(RM) $(ALL_OBJS)
	$(RM) *Object
	$(ECHO) "### Deleted all derived files."


