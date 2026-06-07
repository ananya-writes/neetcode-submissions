class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string = "";
        // if(strs == "")
        //     return encoded_string;
        
        for(auto &str :strs){
            int n = str.size();
            encoded_string += (to_string(n) + "#" + str); 
        }

        return encoded_string;
    }
    // strs = {"Hello","World","see"}
    // encoded_string = "5#Hello5#World3#see";

    vector<string> decode(string s) {
        vector<string> decoded_strs;
    
        int n = s.size();
        // 
        int i = 0;
        while(i<n){ 
            int j = i; // i= 0
            while (s[j] != '#'){
                j++;
            } // got integer before # in j 
            // j = 1
            int len = stoi(s.substr(i,j-i)); // length convert to int
             // len =5 
            // s.substr(start-index,length)
            i = j + 1; // from wherre word starts -start index
            j = i + len; // length to which we need to get str
            // i = 2 , j = 5, len =5
            // 2,3,4,5,6 till index 6 , it will get inserted
            decoded_strs.push_back(s.substr(i,len));
            // got 1st word
            i = j; // for next part of string
        }

        return decoded_strs;
    }
};
