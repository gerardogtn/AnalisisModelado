// Copyright 2016

#include <exception>
#include <iostream>
#include <string>
#include "DnsChainOfResponsibilty.hpp"
#include "FacebookDnsHandler.hpp"
#include "GoogleDnsHandler.hpp"


int main(int argc, char const *argv[]) {
  DnsChainOfResponsibility dns;
  dns.addHandler(new GoogleDnsHandler());
  dns.addHandler(new FacebookDnsHandler());

  std::cout << "Handling google: \n";
  std::cout << "IP: " << dns.handle("google.com") << "\n";

  std::cout << "Handling facebook: " << '\n';
  std::cout << "IP: " << dns.handle("facebook.com") << "\n";

  std::cout << "Handle other" << '\n';

  try {
    dns.handle("invalid");
  } catch (std::runtime_error e) {
    std::cout << "No IP found" << '\n';
  }
  return 0;
}
