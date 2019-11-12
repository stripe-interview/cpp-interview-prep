#include<iostream>
#include<curl/curl.h>
 
int main(int argc, char *argv[]) {

  std::cout << "Hello World!" << std::endl;

  CURL* curl;
  CURLcode res;

  curl = curl_easy_init();

  const char *data = "foo=bar"; 
  curl_easy_setopt(curl, CURLOPT_URL, "https://example.com");
  curl_easy_setopt(curl, CURLOPT_POSTFIELDS, data);

  res = curl_easy_perform(curl);
  if(res == CURLE_OK) {
    long response_code;
    curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &response_code);
    std::cout << "Got response code: " << response_code << std::endl;
  }

  curl_easy_cleanup(curl);
  return 0;
}
