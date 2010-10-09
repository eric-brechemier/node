// Copyright 2010 Ryan Dahl <ry@tinyclouds.org>

#include <node.h>

int main(int argc, char *argv[]) {
  // ------------------- P2PU ---------------------------
  // Start of the node application:
  // main() calls node::start()
  // ----------------------------------------------------
  return node::Start(argc, argv);
}
