##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Practica2
ConfigurationName      :=Debug
WorkspacePath          := "C:\_carlos\cole\allegro\Projecte_Base_Windows\Practica2\Practica-2---Allegro"
ProjectPath            := "C:\_carlos\cole\allegro\Projecte_Base_Windows\Practica2\Practica-2---Allegro"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Mitoshi
Date                   :=02/18/17
CodeLitePath           :="C:\Program Files\CodeLite"
LinkerName             :=C:/MinGW-4.8.1/bin/g++.exe 
SharedObjectLinkerName :=C:/MinGW-4.8.1/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="Practica2.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/MinGW-4.8.1/bin/windres.exe 
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := $(LibrarySwitch)allegro-5.0.10-monolith-mt-debug 
ArLibs                 :=  "liballegro-5.0.10-monolith-mt-debug.a" 
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/MinGW-4.8.1/bin/ar.exe rcu
CXX      := C:/MinGW-4.8.1/bin/g++.exe 
CC       := C:/MinGW-4.8.1/bin/gcc.exe 
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/MinGW-4.8.1/bin/as.exe 


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
UNIT_TEST_PP_SRC_DIR:=C:\UnitTest++-1.3
Objects0=$(IntermediateDirectory)/main.c$(ObjectSuffix) $(IntermediateDirectory)/LS_allegro.c$(ObjectSuffix) $(IntermediateDirectory)/loadRanking.c$(ObjectSuffix) $(IntermediateDirectory)/grafics.c$(ObjectSuffix) $(IntermediateDirectory)/logic.c$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main.c$(ObjectSuffix): main.c $(IntermediateDirectory)/main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/_carlos/cole/allegro/Projecte_Base_Windows/Practica2/Practica-2---Allegro/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.c$(DependSuffix): main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/main.c$(DependSuffix) -MM "main.c"

$(IntermediateDirectory)/main.c$(PreprocessSuffix): main.c
	@$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.c$(PreprocessSuffix) "main.c"

$(IntermediateDirectory)/LS_allegro.c$(ObjectSuffix): LS_allegro.c $(IntermediateDirectory)/LS_allegro.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/_carlos/cole/allegro/Projecte_Base_Windows/Practica2/Practica-2---Allegro/LS_allegro.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/LS_allegro.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/LS_allegro.c$(DependSuffix): LS_allegro.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/LS_allegro.c$(ObjectSuffix) -MF$(IntermediateDirectory)/LS_allegro.c$(DependSuffix) -MM "LS_allegro.c"

$(IntermediateDirectory)/LS_allegro.c$(PreprocessSuffix): LS_allegro.c
	@$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/LS_allegro.c$(PreprocessSuffix) "LS_allegro.c"

$(IntermediateDirectory)/loadRanking.c$(ObjectSuffix): loadRanking.c $(IntermediateDirectory)/loadRanking.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/_carlos/cole/allegro/Projecte_Base_Windows/Practica2/Practica-2---Allegro/loadRanking.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/loadRanking.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/loadRanking.c$(DependSuffix): loadRanking.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/loadRanking.c$(ObjectSuffix) -MF$(IntermediateDirectory)/loadRanking.c$(DependSuffix) -MM "loadRanking.c"

$(IntermediateDirectory)/loadRanking.c$(PreprocessSuffix): loadRanking.c
	@$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/loadRanking.c$(PreprocessSuffix) "loadRanking.c"

$(IntermediateDirectory)/grafics.c$(ObjectSuffix): grafics.c $(IntermediateDirectory)/grafics.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/_carlos/cole/allegro/Projecte_Base_Windows/Practica2/Practica-2---Allegro/grafics.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/grafics.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/grafics.c$(DependSuffix): grafics.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/grafics.c$(ObjectSuffix) -MF$(IntermediateDirectory)/grafics.c$(DependSuffix) -MM "grafics.c"

$(IntermediateDirectory)/grafics.c$(PreprocessSuffix): grafics.c
	@$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/grafics.c$(PreprocessSuffix) "grafics.c"

$(IntermediateDirectory)/logic.c$(ObjectSuffix): logic.c $(IntermediateDirectory)/logic.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/_carlos/cole/allegro/Projecte_Base_Windows/Practica2/Practica-2---Allegro/logic.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/logic.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/logic.c$(DependSuffix): logic.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/logic.c$(ObjectSuffix) -MF$(IntermediateDirectory)/logic.c$(DependSuffix) -MM "logic.c"

$(IntermediateDirectory)/logic.c$(PreprocessSuffix): logic.c
	@$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/logic.c$(PreprocessSuffix) "logic.c"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) ./Debug/*$(ObjectSuffix)
	$(RM) ./Debug/*$(DependSuffix)
	$(RM) $(OutputFile)
	$(RM) $(OutputFile).exe
	$(RM) ".build-debug/Practica2"


