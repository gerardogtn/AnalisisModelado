// Copyright 2016 Gerardo Teruel
#ifndef DNSCHAINOFRESPONSIBILITY_H
#define DNSCHAINOFRESPONSIBILITY_H

#include <string>
#include "DnsHandler.hpp"

class DnsChainOfResponsibility {
 private:
  DnsHandler* dnsHandler;

 public:
  DnsChainOfResponsibility() {}

  virtual ~DnsChainOfResponsibility() {
    if (dnsHandler) {
      delete dnsHandler;
    }
  }

  void addHandler(DnsHandler* handler) {
    if (dnsHandler) {
      dnsHandler->addHandler(handler);
    } else {
      dnsHandler = handler;
    }
  }

  std::string handle(const std::string& url) {
    return dnsHandler->handle(url);
  }
};

#endif  // DNSCHAINOFRESPONSIBILITY_H
