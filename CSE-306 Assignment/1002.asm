.MODEL SMALL

.DATA
    RADIUS DB 5    ;ASSIGN 5 INTO RADIUS 

.CODE
NIROB PROC
    
    MOV AX,@DATA
    MOV DS,AX
                      
    MOV AL,RADIUS    ;WE KNOW AREA OF CIRCLE= 3.1416 X RADIUS X RADIUS      
    MOV BL,RADIUS   
    
    MUL BL
    MOV CL,AL
    MOV AL,CL
    MOV BL,3         ;HERE I TAKE PI=3
    MUL BL
           
    AAM              ;ASCII ADJUST MULTIPLICATION 
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
    
    
NIROB ENDP
END
