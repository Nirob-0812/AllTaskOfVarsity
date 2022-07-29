.MODEL SMALL
.DATA
    UP DB 10,13,"THIS LATTER IS UPPER CASE$"
    LOW DB 10,13,"THIS LATTER IS LOWER CASE$"

.CODE
MAIN PROC
    
    MOV AX,@DATA
    MOV DS,AX
    
    MOV AH,1    ;FOR INPUT A CHARACTER
    INT 21H
    
    CMP AL,40H
    JG PU 
    
    
    LOWER:
    LEA DX,LOW
    MOV AH,9
    INT 21H
    
    MOV AH,4CH
    INT 21H
    
    
    PU:
    CMP AL,5BH
    JL UPPER
    
    CMP AL,40H
    JG PL 
    
    PL:
    CMP AL,7BH
    JL LOWER
    
            
    UPPER:        
    LEA DX,UP
    MOV AH,9
    INT 21H
    
    
    
MAIN ENDP
END