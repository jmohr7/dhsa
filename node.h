#include "keygroup.h"
#include "dhmanager.h"

class Node{
private:
  int nodeId;
  KeyGroup kg;
public:
  Node(int id);
  int getNodeId();
  void setGroupKey(unsigned char* newKey);
  unsigned char* getGroupKey();
  void cycleGroupKey();
  void joinGroup(Node requestedNode);
  void deriveSharedKey(int id);
};
