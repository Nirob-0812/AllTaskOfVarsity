.MODEL SMALL
.DATA
     A DB 5              ;STORE 5 INTO A 
     B DB 2              ;STORE 2 INTO B
     MSG DB "X = $"      ;FOR PRINT

.CODE
NIROB PROC
    
    MOV AX,@DATA
    MOV DS,AX
    
    MOV BH,A
    ADD BH,B          ;ADD TWO VARIABLE 
    ADD BH,48         ;FOR GET ACCURATE VALUE ADD 48 WITH RESULT 
             
    LEA DX,MSG
    MOV AH,9          ;PRINT MESSEGE
    INT 21H
    
    MOV AH,2         
    MOV DL,BH         ;PRINT RESULT
    INT 21H
    
    
NIROB ENDP
END