#include<stdio.h>
#include<stdlib.h>
#include "./curl/curl-8.7.1_9-win32-mingw/include/curl/curl.h"

void getweather(){
CURL *hnd = curl_easy_init();

curl_easy_setopt(hnd, CURLOPT_CUSTOMREQUEST, "GET");
curl_easy_setopt(hnd, CURLOPT_URL, "https://open-weather13.p.rapidapi.com/city/landon/EN");

struct curl_slist *headers = NULL;
headers = curl_slist_append(headers, "X-RapidAPI-Key: 39d5fb19b1msh25aaa3269910657p182fa5jsn52b8c8b9d1f7");
headers = curl_slist_append(headers, "X-RapidAPI-Host: open-weather13.p.rapidapi.com");
curl_easy_setopt(hnd, CURLOPT_HTTPHEADER, headers);

CURLcode ret = curl_easy_perform(hnd);

}

void location(){

    
}

int main(void){

printf("%d",getweather);

}
