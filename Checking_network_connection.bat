:startAgain
@echo off
@color 4
@title ########## CHECKING NETWORK CONNECTION ######
@echo !! PLEASE SELECT AN OPTION !!
@echo 1. Checking Google.vn
@echo 2. Checking Tuoitre.vn
@echo 3. Checking Thanhnien.vn
@echo 0. Exit
@set /p choose=""
@cls

@if %choose% EQU 1 (start ping google.com.vn -t)
@if %choose% EQU 1 (goto :startAgain)

@if %choose% EQU 2 (start ping tuoitre.vn -t)
@if %choose% EQU 2 (goto :startAgain)

@if %choose% EQU 3 (start ping thanhnien.vn -t)
@if %choose% EQU 3 (goto :startAgain)

@if %choose% EQU 0 (exit)  
@pause

