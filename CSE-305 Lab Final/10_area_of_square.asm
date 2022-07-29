.MODEL SMALL

.DATA
    BASE DB 7

.CODE
MAIN PROC
    
    MOV AX,@DATA
    MOV DS,AX
                      
    MOV AL,BASE    ;FOR AREA= BASE X BASE      
    MOV BL,BASE   
    
    MUL BL      
    AAM
    MOV CH,AH   
    ADD CH,48   
    MOV CL,AL   
    ADD CL,48   
    
    MOV AH,2
    MOV DL,CH    ;PRINT FIRST DIGIT AH OF REGISTER AX
    INT 21H   
    
    MOV AH,2
    MOV DL,CL    ;PRINT SECOND DIGIT AL OF REGISTER AX
    INT 21H
    
    
MAIN ENDP
END
