
class Harris_phone_map
{
	idd = 5026;
	movingEnabled = false;
	//onLoad = "[] spawn Harris_phoneOpened";
	class controlsbackground
	{
		class RscButton_1600: RscPhoneMapControl
		{
			idc = 1600;
			x = 0.42625 * safezoneW + safezoneX;
			y = 0.187481 * safezoneH + safezoneY;
			w = 0.149531 * safezoneW;
			h = 0.573 * safezoneH;
			maxSatelliteAlpha = 0.75;//0.75;
			alphaFadeStartScale = 1.15;//0.15;
			alphaFadeEndScale = 1.29;//0.29;
		};
	};
	class controls 
	{		
		class Frame: RscPicture
		{
			idc = 1202;

			text = "Harris_Client\Phone\framebig.paa";
			x = 0.273125 * safezoneW + safezoneX;
			y = 0.06 * safezoneH + safezoneY;
			w = 0.455 * safezoneW;
			h = 0.825 * safezoneH;
		};
	};
};