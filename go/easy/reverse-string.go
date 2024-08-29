func reverseString(s []byte)  {
    
    lenght := len(s) -1 
    for x:= 0; x < lenght; x++ {
       temp := s[x]
       s[x] = s[lenght]
       s[lenght] = temp 
       lenght-- 
       
    } 
    
}
