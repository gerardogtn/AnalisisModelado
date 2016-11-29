// Copyright 2016
#ifndef GOOGLEDNSHANDLER_H
#define GOOGLEDNSHANDLER_H

#include <string>
#include "DnsHandler.hpp"

class GoogleDnsHandler : public DnsHandler {
 protected:
  bool isHandled(const std::string& url) override {
    std::size_t found = url.find("google");
    return found != std::string::npos;
  }

  std::string handleEmail(const std::string& url) override {
    return "8.8.8.8";
  }
};

#endif  // GOOGLEDNSHANDLER_H
