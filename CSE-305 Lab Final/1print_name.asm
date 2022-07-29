.MODEL SMALL

.DATA

     MSG DB 10,13, "MEHEDI HASAN NIROB$"

.CODE
MAIN PROC        
    
    MOV AX,@DATA
    MOV DS,AX
    
    LEA DX,MSG
    MOV AH,9
    INT 21H
    
    
MAIN ENDP
END
