.MODEL SMALL
.DATA

   A DB ?             ;DATA 
   B DB ?
   C DB ? 
   MSG DB "ENTER THREE VALUE: $"
   MSG1 DB 10,13, "eh o maior: $"   ;MESSAGE FOR LARGEST VALUE 
   
.CODE
NIROB PROC
    MOV AX, @DATA
    MOV DS, AX

    LEA DX,MSG       
    MOV AH,9        
    INT 21H
    
    MOV AH,1          ;GET INPUT INTEGER VALUE
    INT 21H
    MOV A, AL          ;ASSIGN TO A 
                    
    MOV AH,1          ;GET INPUT INTEGER VALUE
    INT 21H
    MOV B, AL          ;ASSIGN TO B
    
    MOV AH,1          ;GET INPUT INTEGER VALUE
    INT 21H
    MOV C, AL          ;ASSIGN TO C
    
    MOV BL, B          ;ASSIGN B INTO BL FOR COMPARE
    MOV CL, C          ;ASSIGN C INTO BL FOR COMPARE
  
    CMP A, BL
    JG POSSIBLE_C     ;IF A IS GREATER THAN B THEN GO FOR COMPARE WITH C
    
    CMP B, CL         ;IF A IS NOT GREATER THAN B THEN THIS LINE EXECUTED
    JG GO_B           ;IF B IS GREATER THAN C THEN PRINT MESSAGE
    
    
    LEA DX, MSG1        ;IF B IS NOT GREATER THAN C THAT MEAN C IS LARGEST VALUE 
    MOV AH,9
    INT 21H
    
    MOV AH,2
    MOV DL, C
    INT 21H
    
    MOV AH,4CH
    INT 21H
    
    MOV AH,4CH
    INT 21H
    
    GO_B:
    LEA DX, MSG1
    MOV AH,9
    INT 21H
    
    MOV AH,2          ;IF B IS LARGEST VALUE
    MOV DL, B
    INT 21H
    
    MOV AH,4CH
    INT 21H
    
    POSSIBLE_C:
    CMP A, CL
    JG GO_A
    
    LEA DX, MSG1
    MOV AH,9
    INT 21H            ;IF C IS LARGEST VALUE
    
    MOV AH,2
    MOV DL, C
    INT 21H
    
    MOV AH,4CH         ;FOR INTERRUPT   
    INT 21H
    
    GO_A:
    LEA DX, MSG1
    MOV AH,9
    INT 21H            ;IF A IS LARGEST VALUE
    MOV AH,2
    MOV DL, A
    INT 21H
    
NIROB ENDP
END
