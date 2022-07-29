.MODEL SMALL
.DATA
    MSG DB 10,13,"Hello World!$"    
.CODE
MAIN PROC
    
    MOV AX,@DATA
    MOV DS,AX
    
    LEA DX,MSG
    MOV AH,9
    INT 21H
    
MAIN ENDP
END