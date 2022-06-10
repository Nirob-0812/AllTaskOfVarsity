.MODEL SMALL 
.DATA
A DB 3
B DB 7
.CODE 
MAIN PROC
    
    MOV AX,@DATA
    MOV DS,AX
    MOV BL,A
    MOV CL,B
    SUB CL,BL
    
    ADD CL,48
    
    MOV DL,CL
    MOV AH,2
    INT 21H

MAIN ENDP
END