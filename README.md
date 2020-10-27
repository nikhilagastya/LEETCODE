# LEETCODE
DIVIDE TWO INTEGERS
class Solution:
    def divide(self, dividend: int, divisor: int) -> int :
        if -2147483648<=dividend<=2147483647 : 
          
                sol=dividend/divisor
                if -2147483648<=int(sol)<=2147483647 :        
                    output=int(sol)
                    return output
                   
          
                else:
                       return 2147483647
                  
                
        else:
             return 2147483647
             
