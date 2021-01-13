class Solution {
public:
    string defangIPaddr(string address) {
        string defanged = "";
        for(auto i : address) {
            if(i == '.')
                defanged = defanged + "[.]";
            else
                defanged += i;
        }
        return defanged;
    }
};
