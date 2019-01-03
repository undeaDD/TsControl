#pragma once
#include <string>

class API
{
private:
    API();

public:

   static API& instance()
   {
      static API instance;
      return instance;
   }

   // -------------------------------------------------------------------------------------------------

   // Teamspeak Client Query Documentation:
   // https://networkjanitor.gitlab.io/py-ts3/api/commands.html#ts3.commands.TS3ClientCommands

   // Set|Get Nickname of Remote Client
   void setClientName(std::string newValue);
   std::string getClientName();

   // Set|Get Channel of Remote Client
   void setClientChannel(int newChannelId);
   int getClientChannel();

   // Get Channel Name from Id
   std::string getChannelName(int channelId);

   // Send Message to Channel|Global|ClientId
   void sendChannelMessage(std::string msg);
   void sendGlobalMessage(std::string msg);
   void sendPrivateMessage(int clientId, std::string msg);

   void setActiveServerTab(int tabToUse);
   int getActiveServerTab();

   // Connect|Disconnect to Server
   void joinServer(std::string ip = "totalegal.xyz", int port = 9987, std::string password = "");
   void leaveServer(std::string leaveMessage);
   std::string getCurrentServerInfo();

   // Do stuff with other Clients
   void pokeClient(int clientId);
   void kickClient(int clientId, std::string reason = "Du wurdest von TSControl gekickt.");
   void banClient(int clientId, std::string reason = "Du wurdest von TSControl gebannt.");
   bool toggleMuteClient(int clientId);

   // Mute Mic|Speaker
   bool toggleClientMicrophone();
   bool toggleClientSpeaker();

   // Get Client Names from Ids and vice versa
   int getClientId(std::string name);
   std::string getClientName(int id);
   int* getConnectedClients(); // Int Array as Pointer !!!

   // Set|Get Client Informations
   void setClientDescription(std::string newDescription);
   std::string getClientDescription();
   void setClientAvatar(unsigned char* imageByteArray); // Image Byte Array as Pointer !!!
   unsigned char* getClientAvatar();

   // For later debug usage :P
   std::string sendUnsafeCommand(std::string cmd);

   // -------------------------------------------------------------------------------------------------

   // Connect|Disconnect ClientQuery
   void connectQuery(std::string ip = "192.168.2.115", int port = 25639);
   std::string getCurrentQueryInformations();
   void disconnectQuery();
   bool isConnected();

};
