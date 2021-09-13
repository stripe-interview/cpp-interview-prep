#include <iostream>
#include <curl/curl.h>
#include <string>


static size_t WriteCallback(void *contents, size_t size, size_t nmemb, void *userp){
  ((std::string*)userp)->append((char*)contents, size * nmemb);
  return size * nmemb;
}

int main(int argc, char *argv[]) {

  std::cout << "Hello World!" << std::endl;

  CURL* curl;
  CURLcode res;
  std::string readBuffer;

  curl = curl_easy_init();

  const char *data = "foo=bar"; 
  curl_easy_setopt(curl, CURLOPT_URL, "https://example.com");
  curl_easy_setopt(curl, CURLOPT_POSTFIELDS, data);
  curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
  curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);

  res = curl_easy_perform(curl);
  if(res == CURLE_OK) {
    long response_code;
    curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &response_code);
    std::cout << "Got response code: " << response_code << std::endl;
    std::cout << "Content " << readBuffer << std::endl;
  }

  curl_easy_cleanup(curl);
  return 0;
}
