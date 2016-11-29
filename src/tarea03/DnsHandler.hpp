// Copyright 2016 Gerardo Teruel
#ifndef DNSHANDLER_H
#define DNSHANDLER_H

#include <stdexcept>
#include <string>

class DnsHandler {
 private:
  DnsHandler* sucessor = nullptr;

 public:
  DnsHandler() {}
  virtual ~DnsHandler() {
    if (sucessor) {
      delete sucessor;
    }
  }

  void setNext(DnsHandler* next) {
    this->sucessor = next;
  }

  void addHandler(DnsHandler* newHandler) {
    if (this->sucessor) {
      this->sucessor->addHandler(newHandler);
    } else {
      this->sucessor = newHandler;
    }
  }

  std::string handle(const std::string& email) {
    if (isHandled(email)) {
      return handleEmail(email);
    } else if (sucessor != nullptr) {
      return sucessor->handle(email);
    } else {
      throw std::runtime_error("No way to handle the email :(");
    }
  }

 protected:
  virtual bool isHandled(const std::string& email) = 0;
  virtual std::string handleEmail(const std::string& email) = 0;
};

#endif  // DNSHANDLER_H
