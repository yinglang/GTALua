// =================================================================================
// GTALua.ini 
// =================================================================================
struct GTALuaConfig
{
	// Console
	bool bConsole_Enabled;
	bool bConsole_AutomaticPosition;
	int iConsole_ManualX;
	int iConsole_ManualY;

	// Game
	bool bGame_SkipIntro;
};

// =================================================================================
// GTALua 
// =================================================================================
class GTALua
{
public:
	GTALua();
	~GTALua();

	// Init
	void Init();
	void ProperInit();
	void InitAddons();

	// Update
	void Update();
	void UpdateLoop();
	void ProcessConsoleInput();

	// Game Version
	bool VersionCheck();
	char* GetGameVersion();

	// Configuration file(s)
	void LoadGTALuaIni();
	GTALuaConfig* GetConfig() { return &m_sConfig; };
	void LoadNativesINI();
	void LoadCallLayoutsINI();

private:
	bool m_bActive;
	GTALuaConfig m_sConfig;
};

// =================================================================================
// Global Instance 
// =================================================================================
extern GTALua* g_pGTALua;