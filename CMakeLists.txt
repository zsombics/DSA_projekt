cmake_minimum_required(VERSION 3.20)
project(HOSPITAL_PROJECT C)

set(CMAKE_C_STANDARD 11)

add_executable(HOSPITAL_PROJECT main.c Src/orvos.c Headers/orvos.h Src/beteg.c Headers/beteg.h Src/gyogyszer.c Headers/gyogyszer.h Shared/Src/errors.c Shared/Header/errors.h Shared/Src/massages.c Shared/Header/massages.h Shared/Header/constans.h Src/orvosArray.c Headers/orvosArray.h Src/betegArray.c Headers/betegArray.h Manager/Src/lab1.c Manager/Header/lab1.h Manager/Src/lab2.c Manager/Header/lab2.h Manager/Src/Labmanager.c Manager/Header/Labmanager.h Src/gyogyszerQueue.c Headers/gyogyszerQueue.h)
