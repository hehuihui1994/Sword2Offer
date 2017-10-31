// 替换空格
// 替换空格

// 统计空格数
// 从后向前移动
// O(n)


class Solution {
public:
	void replaceSpace(char *str,int length) {
        if(str == NULL || length<=0)
            return;
        
        int p1=0, p2=0;
        int spaceNum = 0;

        int i =0;
        while(str[i] != '\0')
        {
            p1++;
            if(str[i] == ' ')
                spaceNum++;
            i++;
        }
        p2 = p1 + spaceNum*2;

        if(p2 > length)
            return;

        while(p1 >=0 && p1 <= p2)
        {
            if(str[p1] == ' '){
                str[p2--] = '0';
                str[p2--] = '2';
                str[p2--] = '%';
            }
            else{
                str[p2--] = str[p1];
            }
            p1--;
        }

	}
};