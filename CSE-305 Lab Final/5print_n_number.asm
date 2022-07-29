.MODEL SMALL
.DATA
    I DB 1

.CODE
MAIN PROC
    
    MOV AX,@DATA
    MOV DS,AX
           
    MOV CX,9     ;LOOP WILL BE CONTINUE TILL 9
           
    AG:     
    MOV BL,I   ;ADD 48 FOR GET EXACT VALUE
    ADD BL,48
    
    MOV AH,2
    MOV DL,BL  ;FOR PRINT
    INT 21H
    
    INC I      ;INCREMENT VALUE OF I
    LOOP AG   
    
MAIN ENDP
END