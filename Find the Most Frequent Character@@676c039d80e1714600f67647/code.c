#include <stdio.h>
#include <string.h>

void remove_space(char ch[]){
    int n= strlen(ch);
    if(n>0 && ch[n-1]=='\n'){
        ch[n-1]='\0';
    }
}
void main(){
    char ch[100];
    fgets(ch,sizeof(ch),stdin);
    remove_space(ch);
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
    ans[index]='\0';
    printf("%s",ans);
}