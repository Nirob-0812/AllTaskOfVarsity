.MODEL SMALL
.DATA
     A DB 5
     B DB 1

.CODE
MAIN PROC
    
    MOV AX,@DATA
    MOV DS,AX
    
    MOV BH,A
    ADD BH,B
    ADD BH,48
             
    MOV AH,2         
    MOV DL,BH
    INT 21H
    
    
MAIN ENDP
END