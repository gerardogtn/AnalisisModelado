// Copyright 2016
#ifndef FACEBOOKDNSHANDLER_H
#define FACEBOOKDNSHANDLER_H

#include <string>
#include "DnsHandler.hpp"

class FacebookDnsHandler : public DnsHandler {
 protected:
  bool isHandled(const std::string& url) override {
    std::size_t found = url.find("facebook");
    return found != std::string::npos;
  }

  std::string handleEmail(const std::string& url) override {
    return "10.10.10.10";
  }
};

#endif  // FACEBOOKDNSHANDLER_H
