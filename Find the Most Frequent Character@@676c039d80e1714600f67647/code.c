#include <stdio.h>
#include <string.h>

void main(){
    char ch[100];
    fgets(ch,sizeof(ch),stdin);

    int freq[26]={0};
    for(int i=0;i<strlen(ch);i++){
        freq[ch[i]-'a']++;
    }

    //max num;
    int maxfreq=0;
    for(int i=0;i<26;i++){
        if(freq[i]>maxfreq){
            maxfreq= freq[i];
        }
    }

    char ans[26];
    int index=0;
    for(int i=0;i<26;i++){
        if(freq[i]==maxfreq){
            ans[index++]='a'+i;
        }
    }
    printf("%s",ans);
}