int strStr(char* haystack, char* needle) {
    int ind = -1;
    
    // Determine lengths of haystack and needle
    int hs = strlen(haystack);
    int ns = strlen(needle);
    
    // Ensure needle is not longer than haystack
    if (ns > hs)
        return -1;
    
    // Iterate through haystack, checking for first needle character
    for (int i = 0; i < hs; i++) {
        
        // If current character matches first needle character:
        if (haystack[i] == needle[0]) {
            
            // Check if remaining haystack length is sufficient for needle
            if (ns > hs - i)
                
                // Not enough space for needle, skip remaining comparisons
                return -1;
            
            // Initialize potential match index
            ind = i;
            
            // Compare characters in needle with haystack starting at ind
            for (int n = 0; needle[n]; n++) {
                if (haystack[i + n] != needle[n]) {
                    // Mismatch, reset potential match index
                    ind = -1;
                    // Skip remaining comparisons
                    break;
                }
            }
            // If all needle characters matched, return match index
            if (ind >= 0)
                return ind;
        }
    }
    // No match found
    return -1;
}
