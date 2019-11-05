#include <Windows.h>
#include <iostream>

#include "menu/discord_register.h"
#include "menu/discord_rpc.h"

class discordpresence
{
public:
	void boot()
	{
		DiscordEventHandlers Handler;
		memset(&Handler, 0, sizeof(Handler));
		Discord_Initialize("640332999845740571", &Handler, 1, NULL);
	}
	void goupdate()
	{
		DiscordRichPresence discordPresence;
		memset(&discordPresence, 0, sizeof(discordPresence));
		discordPresence.state = "illusion.cc";
		discordPresence.details = "Best CSGO CHEAT";
		discordPresence.startTimestamp = 1507665886;
		discordPresence.largeImageText = "illusion.cc";
		discordPresence.smallImageText = "illusion.cc";
		Discord_UpdatePresence(&discordPresence);
	}

};