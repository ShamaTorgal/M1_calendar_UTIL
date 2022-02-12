# Calendar Application
## Description
   This Calendar application can perform mainly three operations those are finding the day corresponding to a given date, month and the year which were asked. Next feature of this application is we can add task on a certain date just like todo list, Task/notes, One more feature is I will be storing these tasks in a file and And future we will be adding festivals on a certain day in the calender and one more is we can print all the days of the month.
 
 ## The main objectives of this application are 
* The user shall view the day when he enter the date month year
* The user shall add notes or tasks on certain day and that task to be added to the calendar
* The user shall be able to view all the days which have festivals
* To print all the days of the month

## Requirements

## High Level Requirements
| ID | Description | Status (Implemented/Future) |
| --- | --- | --- |
| HR01 | System should be able to display the day on the date entered | Implemented |
| HR02 | User should be able to add a new note on specific date | Implemented |
| HR03 | User should be able to view all the days of the month | Implemented |
| HR04 | User should be able to see the notes  | Implemented |
| HR05 | User should be able to view all the festivals date  | Future |

## Low Level Requirement
| ID | Description | Status (Implemented/Future) |
| --- | --- | --- |
| LR01 | Key '1' is pressed for - Find Out the day | Implemented |
| LR02 | Key '2' is pressed for - Print all the days of month | Implemented |
| LR03 | Key '3' is pressed for - Add note | Implemented |
| LR03 | Key '4' is pressed for - Exit | Implemented |
| LR03 | Key '5' is pressed for - Show festivals | future |
| LR03 | Key '6' is pressed for - TO DO list | Future |



## 4 W's and 1 H
### Who
* The user who wants to access Calendar.
### What
* To get infomation regarding months or day or years.
### When
* Whenever the user want to know about the perticular day/date/note/months and whenever used wants to add notes.
### Where
* Daily life.
### How
* By using the Calendar application and entering the key.

## SWOT Analysis 

![SWOT analysis](https://github.com/ShamaTorgal/M1_calendar_UTIL/blob/main/1_Requirements/SWOT.png)

## Badges
| Code Quality |
| --- |
| ![Code grade](https://api.codiga.io/project/31090/score/svg)    ![Code grade](https://api.codiga.io/project/31090/status/svg) |

# Implementation

This folder conatins all the coding files as well as the resources and testing files neede for proper execution of program.

## Instructions to execute
* Clone my repository
* Go to 3_Implementation folder (change directory to 3_Implementation folder using wsl terminal)
* Make sure your system meets all software and hardware requirements
* Run "make run" command in terminal for main code execution
* Run "make run_test" command in terminal for test code execution

| Folder | Description |
| --- | --- | 
| inc | Contains header files | 
| src | Contains additional source file for compilation | 
| test | Contains testing files |

## After Running the code 
* Press '1' to know the day according to the given date.
* Press '2' to print all days of month. (Enter month and year)
* Press '3' to add note to particular date. ( Enter the day, month, year)
* Press 's' to see the note.
* Press '4' to Exit.


# Test Plan
## Table 1 - High level test plan
| Test ID | Description | Exp Input | Exp Output | Status (Implemented/Future) |
| --- | --- | --- | --- | --- |
| H_01 | System should be able to display the day on the date entered | Enter key '1' and type date | Display the day | Implemented |
| H_02 | User should be able to view all the days of the month | Enter key '2' and type month, year | Print the days of month | Implemented |
| H_03 | User should be able to add a new note on specific date |  Enter key '3' and type note | Save the Note | Implemented |
| H_04 | User should be able to see the notes  | Press key 's'  | Show the Note | Implemented |
| H_05 | User should be able to view all the festivals date | Press key 'f' | Print the festivals | Future |

## Table 2 - low level test plan
| Test ID | Discription | Exp Input | Exp Output | Status (Implemented/Future) |
| --- | --- | --- | --- | --- |
| H_01 | Find Out the day | Key '1' is pressed  | Find Out the day for given date | Implemented |
| H_02 | Print all the days of month | Key '2' is pressed  | Print all the days according to given month and year | Implemented |
| H_03 | Add note | Key '3' is pressed  | Add note to the perticular date | Implemented |
| H_04 | Exit | Key '4' is pressed  | Exit | Implemented |
| H_05 | Show festivals | Key '5' is pressed  | Show festivals | Future |
| H_06 | TO DO list | Key '6' is pressed  | TO DO list | Future |


# Output 
## 1. Make run Process
![MakeRun](https://github.com/ShamaTorgal/M1_calendar_UTIL/blob/main/6_ImagesAndVideos/makeRun.png)  

## 2. Condition - Whenever key '1' is pressed it will display day of given date.
![Find the day](https://github.com/ShamaTorgal/M1_calendar_UTIL/blob/main/6_ImagesAndVideos/1_FindTheDay.png)  

## 3. Condition - Whenever key '2' is pressed it will print all days of given month.
![Print all days](https://github.com/ShamaTorgal/M1_calendar_UTIL/blob/main/6_ImagesAndVideos/2_printMonth.png)  

## 4. Condition - Whenever key '3' is pressed it will add a Note to particular date.
![Add note](https://github.com/ShamaTorgal/M1_calendar_UTIL/blob/main/6_ImagesAndVideos/3_AddNote.png)  

## 5. Condition - If user wants to view Note within the given month press key 's'.
![view note](https://github.com/ShamaTorgal/M1_calendar_UTIL/blob/main/6_ImagesAndVideos/4_ViewNote.jpeg)  

