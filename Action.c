Action()
{
	 long file;
    char *filelocation="C:\\Users\\DELL\\Documents\\VuGen\\Scripts\\result.txt";
	char sParamsList[] = "$0macbook $phone0 0$mobile0 $000samsung";
	char* string1;
	char* string2;
	char* string3;
	char wzero[400];
	char wspStr[200];
	char sSearchStrings[4][100];
	int j = 0;
	int n =0;
	int iter;
	int i;
    iter = atoi(lr_eval_string("{P_iteration}"));
    	
    string1 = (char *)strtok (sParamsList," ");
	while(string1 != NULL){
		strcat(wspStr, string1);
		string1 = (char *)strtok(NULL," ");
	}
	lr_output_message("w: %s", wspStr);
	
	string2 = (char*)strtok(wspStr, "0");
	while(string2 != NULL){
		strcat(wzero, string2);
		string2 = (char*)strtok(NULL,"0");
	}
	lr_output_message("w: %s", wzero);

string3 = (char*)strtok(wzero, "$");
	while(string3 != NULL){
		strcpy(sSearchStrings[n], string3);
		lr_output_message("\n%s",sSearchStrings[n]);
		n++;
		string3 = (char*)strtok(NULL,"$");
	}
	
	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("Shop", 
		"URL=http://{P_baseurl}/Shop/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(11);

/*	web_url("v2", 
		"URL=https://edge.microsoft.com/serviceexperimentation/v2/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);*/

	web_custom_request("msa", 
		"URL=https://edge.microsoft.com/identity/api/v3/msa", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"disable_features\":\"93277d03,41a1984b,f12ef9eb\",\"enable_features\":\"753d25b4,d2f1a9aa,e1bd6809,9f1c0678,1e558dd0,26be6553,626bb887,5b406743,34d10791,78d9e951,8ae1cf3a,1a981338,74ba319f,4cf84fae,21004d55,a996022f,36c474f9,98b22d67,5c6668f5,4b55f698,9df27ec0,521bcbf0,d1cd57e6,4911408a,46796345,2c2792dc,6c7afa7d,f651dabe,e8fd36c,5ce29ed4,c77c7562,4d5533d,7a0be64,11d5b0d1,9507495a,77a394e7,e6f2b97a,26fe35de,2619493b,8918c4bc,e409c8c6,7bd36cd7,b3f580d6,4b04110,55eb0e74,3c50050e,4c59a650,"
		"b1cacd26,657a13f8,75ab05e9,cb4f762e,8b95c5bc,bc76f362,e54d9e38,b1e99b0,f3765fb7,d0dc3263,226df4ef,ddf506df,f6b88a7b,8dbc0e2c,963f18b5,28706fb2,2eeae6f8,8b22c35b,ffe22a0,23194008,d511e129,41c26479,cbcb1ad9,b107eff,75b1b341,67c8089b,2c4d4fb,a1bbfde,60806046,7b1870e,8832ce78,a14f335e,fca608a4,928b17e9,39e9a0d5,1335445b,e67d0460,9f191260,2373949a,c4af4b95,5ef50543,8a2adb0,e7c29515,f7df8885,56181917,6a07a97c,2ec03fc8,b19ccb5,1df7f9ab,675d3083,9155bb95,b9ce036a,70c4141d,a5328636,4f2aea97,58e0343e,"
		"9d8f0daa,dd8c9de7,3160644e,6099ff4d,caa6d356,285cae5b,10bc8c5b,1870f99d,6227b2d5,5ef182e0,31763559,9f0f2477,47f3f59a,8a1d22f,e28a1926,d679ba69,9a789490,ace2c02,3d592cec,badd9207,2a00ae3c,aa84b360,ca7789fa,f5667f2e,62fd93b7,e872d53b,5969d71b,a2f3a356,39aa9578,1ef98be4,1a9250d8,d45412cb,5c82f28f,ce975dfa,be978d29,b0aeadcc,59e7987a,beeacc0d,d8dbe509,4f50853c,53e63c76,b8110d27,68aefda8,320bee6a,ebb2abb8,7c336ddf,ddcca13f,e3d7975a,3e97db87,7814311,2c83eeaf,c38b4943,14e8fa07,55408c40,ea27f81,b83652bc,"
		"21a4c31e,597842a0,c310ac47,14bda38d,715fb45c,f125bea,66d040c8,b2be56,cd20ec4f,e7b3ee3,ba2971c1,ef64b31a,bb51bf6e,a1d4ae4,1fd9c0de,b62bf9e1,d3cee3f,92831165,4c71b0c8,3061cce0,569a4007,d15b208e,a85c2524,a1f2654e,a14d4c47,b8ce4d35,60428d40,3e057f56,d8990b6c,5222cfba,ab6121a5,73176314,7499d66a,9b42372,2ebd7475,314d5969,e8fbe605,889d55da,6f40b892,b3aeb2,c256496d,7e210abf,c24507b4,fd28ab61,b5470b36,a3e3bef5,c93515ee,a8c68b98,e3cf7468,9afb0488,54410cd7\"}", 
		LAST);

	web_url("101.0.1210.53", 
		"URL=https://config.edge.skype.com/config/v1/Edge/101.0.1210.53?clientId=-5187258890398331796&osname=win&client=edge&channel=stable&scpfull=0&scpguard=1&scpfre=0&scpver=2&osarch=x86_64&osver=10.0.22000&wu=1&devicefamily=desktop&uma=1&mngd=0&installdate=1612048346&edu=0&bphint=2&soobedate=1612048344", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	/*web_url("homeCloud", 
		"URL=https://edge.activity.windows.com/v2/feeds/me/settings/homeCloud", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);*/

	web_custom_request("getsupporteddomains", 
		"URL=https://www.bing.com/api/shopping/v1/getsupporteddomains?appid=67220BD2169C2EA709984467C21494086DF8CA85", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"clientContext\":{\"appname\":\"Edge\",\"buildversion\":\"101.0.1210.53\",\"enabledfeatures\":[{\"name\":\"msShoppingExp3\",\"params\":[]},{\"name\":\"msShoppingExp17\",\"params\":[]},{\"name\":\"msShoppingExp19\",\"params\":[]},{\"name\":\"msShoppingExp21\",\"params\":[]},{\"name\":\"msShoppingExp22\",\"params\":[]},{\"name\":\"msShoppingExp23\",\"params\":[]},{\"name\":\"msShoppingExp34\",\"params\":[]},{\"name\":\"msShoppingExp38\",\"params\":[]},{\"name\":\"msWebAssistQuery\",\"params\""
		":[]},{\"name\":\"msEdgeShoppingPriceHistory\",\"params\":[]},{\"name\":\"msEdgeShoppingExpressCheckout\",\"params\":[]},{\"name\":\"msEdgeShoppingGuestDomainCoupons\",\"params\":[]},{\"name\":\"msEdgeShoppingRewards\",\"params\":[]},{\"name\":\"msEdgeShoppingExpressCheckoutFillDetails\",\"params\":[]},{\"name\":\"msEdgeShoppingRebatesSignUp\",\"params\":[]},{\"name\":\"msEdgeShoppingAutoShowControlForFeature\",\"params\":[{\"key\":\"duration\",\"value\":\"1\"}]},{\"name\":\""
		"msEdgeShoppingAutoShowMuteForFeature\",\"params\":[{\"key\":\"duration\",\"value\":\"1\"}]},{\"name\":\"msEdgePwiloPriceHistory\",\"params\":[]},{\"name\":\"msEdgeShoppingOtherSeller\",\"params\":[]},{\"name\":\"msEdgeShoppingWalmartOtherSeller\",\"params\":[]},{\"name\":\"msEdgePwiloItemDeletion\",\"params\":[]},{\"name\":\"msEdgeShoppingClarityEnabled\",\"params\":[]},{\"name\":\"msEdgeShoppingServerNotifications\",\"params\":[]},{\"name\":\"msEdgeShoppingPersistentStorage\",\"params\":[]},{\""
		"name\":\"msEdgeShoppingAutoShowMuteForFeature\",\"params\":[{\"key\":\"duration\",\"value\":\"1\"}]},{\"name\":\"msShoppingEdgeTemplateAutomation\",\"params\":[]}],\"ismobile\":false,\"osname\":\"Windows NT\",\"osversion\":\"10.0.22000\"}}", 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	/*web_url("signin", 
		"URL=https://www.bing.com/fd/auth/signin?&action=header&provider=windows_live_id&save_token=0", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);*/

	web_custom_request("getsupporteddomains_2", 
		"URL=https://www.bing.com/api/shopping/v1/getsupporteddomains?appid=67220BD2169C2EA709984467C21494086DF8CA85", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"clientContext\":{\"appname\":\"Edge\",\"buildversion\":\"101.0.1210.53\",\"enabledfeatures\":[{\"name\":\"msShoppingExp3\",\"params\":[]},{\"name\":\"msShoppingExp17\",\"params\":[]},{\"name\":\"msShoppingExp19\",\"params\":[]},{\"name\":\"msShoppingExp21\",\"params\":[]},{\"name\":\"msShoppingExp22\",\"params\":[]},{\"name\":\"msShoppingExp23\",\"params\":[]},{\"name\":\"msShoppingExp34\",\"params\":[]},{\"name\":\"msShoppingExp38\",\"params\":[]},{\"name\":\"msWebAssistQuery\",\"params\""
		":[]},{\"name\":\"msEdgeShoppingPriceHistory\",\"params\":[]},{\"name\":\"msEdgeShoppingExpressCheckout\",\"params\":[]},{\"name\":\"msEdgeShoppingGuestDomainCoupons\",\"params\":[]},{\"name\":\"msEdgeShoppingRewards\",\"params\":[]},{\"name\":\"msEdgeShoppingExpressCheckoutFillDetails\",\"params\":[]},{\"name\":\"msEdgeShoppingRebatesSignUp\",\"params\":[]},{\"name\":\"msEdgeShoppingAutoShowControlForFeature\",\"params\":[{\"key\":\"duration\",\"value\":\"1\"}]},{\"name\":\""
		"msEdgeShoppingAutoShowMuteForFeature\",\"params\":[{\"key\":\"duration\",\"value\":\"1\"}]},{\"name\":\"msEdgePwiloPriceHistory\",\"params\":[]},{\"name\":\"msEdgeShoppingOtherSeller\",\"params\":[]},{\"name\":\"msEdgeShoppingWalmartOtherSeller\",\"params\":[]},{\"name\":\"msEdgePwiloItemDeletion\",\"params\":[]},{\"name\":\"msEdgeShoppingClarityEnabled\",\"params\":[]},{\"name\":\"msEdgeShoppingServerNotifications\",\"params\":[]},{\"name\":\"msEdgeShoppingPersistentStorage\",\"params\":[]},{\""
		"name\":\"msEdgeShoppingAutoShowMuteForFeature\",\"params\":[{\"key\":\"duration\",\"value\":\"1\"}]},{\"name\":\"msShoppingEdgeTemplateAutomation\",\"params\":[]}],\"ismobile\":false,\"osname\":\"Windows NT\",\"osversion\":\"10.0.22000\"}}", 
		LAST);

	lr_think_time(7);

	/*web_custom_request("command", 
		"URL=https://edge.activity.windows.com/v1/feeds/me/syncEntities/command/?client=Chromium&client_id=8QZ%2Fr7nECJE9Tku2aoOQ6g%3D%3D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/vnd.google.octet-stream-compressible", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x188QZ/r7nECJE9Tku2aoOQ6g==\\x10c\\x18\\x02*\\xCF\\x03\\x12\\x04\\x08\\x00\\x10\\x01\\x18\\x012\\x1E\\x08\\x88\\x81\\x02\\x12\\x08\\xB0\\xB9C\\x96\\x7F\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x030\\x008\\x00@\\x002\\x1E\\x08\\xC6\\xA6\\x02\\x12\\x08y\\xDB\\xB0\\xE1\\x80\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x030\\x008\\x00@\\x002\\x1E\\x08\\xB1\\xE6\\x02\\x12\\x08y\\xDB\\xB0\\xE1\\x80\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00"
		"(\\x030\\x008\\x00@\\x002\\x1E\\x08\\xCF\\xF3\\x03\\x12\\x08y\\xDB\\xB0\\xE1\\x80\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x030\\x008\\x00@\\x002\\x1E\\x08\\xF1\\xF7\\x01\\x12\\x08y\\xDB\\xB0\\xE1\\x80\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x030\\x008\\x00@\\x002\\x1E\\x08\\xCD\\xBE\\x02\\x12\\x08y\\xDB\\xB0\\xE1\\x80\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00"
		"(\\x030\\x008\\x00@\\x002\\x1E\\x08\\xF7\\xF7\\x02\\x12\\x08y\\xDB\\xB0\\xE1\\x80\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x030\\x008\\x00@\\x002\\x1E\\x08\\xC7\\x87\\x03\\x12\\x08y\\xDB\\xB0\\xE1\\x80\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x030\\x008\\x00@\\x002\\x1E\\x08\\x9F\\xEF\\x05\\x12\\x08y\\xDB\\xB0\\xE1\\x80\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x030\\x008\\x00@\\x002\\x1E\\x08\\xEB\\x95\t"
		"\\x12\\x08y\\xDB\\xB0\\xE1\\x80\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x030\\x008\\x00@\\x002\\x1E\\x08\\x9A\\xB7\t\\x12\\x08\\xAC\\xD8\\xB0\\xE1\\x80\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x030\\x008\\x00@\\x002\\x1E\\x08\\xFC\\xDE$\\x12\\x08y\\xDB\\xB0\\xE1\\x80\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x030\\x008\\x00@\\x002\\x1E\\x08\\xA1\\xDD'\\x12\\x08y\\xDB\\xB0\\xE1\\x80\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00"
		"(\\x030\\x008\\x00@\\x002\\x1E\\x08\\x81\\xF5\\x02\\x12\\x08y\\xDB\\xB0\\xE1\\x80\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x050\\x008\\x00@\\x00H\\x0CP\\x00\\xC0>\\x01:\\x1FProductionEnvironmentDefinitionR\\xA1\\x05\n\\x02\\x08\\x05\n\\x02\\x08\t\n\\x02\\x08\n\n\\x10*\\x0E\\x08\\x88\\x81\\x02h\\x00x\\x86\\x11\\x90\\x01\\x9A\\xB7\t\n\\x15*\\x13\\x08\\xC6\\xA6\\x02h\\x00x\\x86\\x11\\x90\\x01\\x9A\\xB7\t\\x98\\x01\\x88\\x81\\x02\n"
		"\\x1A*\\x18\\x08\\xB1\\xE6\\x02h\\x00x\\x86\\x11\\x90\\x01\\x9A\\xB7\t\\x98\\x01\\x88\\x81\\x02\\x98\\x01\\xC6\\xA6\\x02\n\\x1F*\\x1D\\x08\\xCF\\xF3\\x03h\\x00x\\x86\\x11\\x90\\x01\\x9A\\xB7\t\\x98\\x01\\x88\\x81\\x02\\x98\\x01\\xC6\\xA6\\x02\\x98\\x01\\xB1\\xE6\\x02\n$*\"\\x08\\xF1\\xF7\\x01h\\x00x\\x86\\x11\\x90\\x01\\x9A\\xB7\t\\x98\\x01\\x88\\x81\\x02\\x98\\x01\\xC6\\xA6\\x02\\x98\\x01\\xB1\\xE6\\x02\\x98\\x01\\xCF\\xF3\\x03\n)*'\\x08\\xCD\\xBE\\x02h\\x00x\\x86\\x11\\x90\\x01\\x9A\\xB7\t"
		"\\x98\\x01\\x88\\x81\\x02\\x98\\x01\\xC6\\xA6\\x02\\x98\\x01\\xB1\\xE6\\x02\\x98\\x01\\xCF\\xF3\\x03\\x98\\x01\\xF1\\xF7\\x01\n.*,\\x08\\xF7\\xF7\\x02h\\x00x\\x86\\x11\\x90\\x01\\x9A\\xB7\t\\x98\\x01\\x88\\x81\\x02\\x98\\x01\\xC6\\xA6\\x02\\x98\\x01\\xB1\\xE6\\x02\\x98\\x01\\xCF\\xF3\\x03\\x98\\x01\\xF1\\xF7\\x01\\x98\\x01\\xCD\\xBE\\x02\n3*1\\x08\\xC7\\x87\\x03h\\x00x\\x86\\x11\\x90\\x01\\x9A\\xB7\t"
		"\\x98\\x01\\x88\\x81\\x02\\x98\\x01\\xC6\\xA6\\x02\\x98\\x01\\xB1\\xE6\\x02\\x98\\x01\\xCF\\xF3\\x03\\x98\\x01\\xF1\\xF7\\x01\\x98\\x01\\xCD\\xBE\\x02\\x98\\x01\\xF7\\xF7\\x02\n8*6\\x08\\x9F\\xEF\\x05h\\x00x\\x86\\x11\\x90\\x01\\x9A\\xB7\t\\x98\\x01\\x88\\x81\\x02\\x98\\x01\\xC6\\xA6\\x02\\x98\\x01\\xB1\\xE6\\x02\\x98\\x01\\xCF\\xF3\\x03\\x98\\x01\\xF1\\xF7\\x01\\x98\\x01\\xCD\\xBE\\x02\\x98\\x01\\xF7\\xF7\\x02\\x98\\x01\\xC7\\x87\\x03\n=*;\\x08\\xEB\\x95\th\\x00x\\x86\\x11\\x90\\x01\\x9A\\xB7\t"
		"\\x98\\x01\\x88\\x81\\x02\\x98\\x01\\xC6\\xA6\\x02\\x98\\x01\\xB1\\xE6\\x02\\x98\\x01\\xCF\\xF3\\x03\\x98\\x01\\xF1\\xF7\\x01\\x98\\x01\\xCD\\xBE\\x02\\x98\\x01\\xF7\\xF7\\x02\\x98\\x01\\xC7\\x87\\x03\\x98\\x01\\x9F\\xEF\\x05\n\\x10*\\x0E\\x08\\x9A\\xB7\th\\x00x\\xE4\\x0F\\x90\\x01\\x81\\xF5\\x02\nB*@\\x08\\xEE\\xF7!h\\x00x\\x86\\x11\\x90\\x01\\x9A\\xB7\t"
		"\\x98\\x01\\x88\\x81\\x02\\x98\\x01\\xC6\\xA6\\x02\\x98\\x01\\xB1\\xE6\\x02\\x98\\x01\\xCF\\xF3\\x03\\x98\\x01\\xF1\\xF7\\x01\\x98\\x01\\xCD\\xBE\\x02\\x98\\x01\\xF7\\xF7\\x02\\x98\\x01\\xC7\\x87\\x03\\x98\\x01\\x9F\\xEF\\x05\\x98\\x01\\xEB\\x95\t\nG*E\\x08\\xFC\\xDE$h\\x00x\\x86\\x11\\x90\\x01\\x9A\\xB7\t"
		"\\x98\\x01\\x88\\x81\\x02\\x98\\x01\\xC6\\xA6\\x02\\x98\\x01\\xB1\\xE6\\x02\\x98\\x01\\xCF\\xF3\\x03\\x98\\x01\\xF1\\xF7\\x01\\x98\\x01\\xCD\\xBE\\x02\\x98\\x01\\xF7\\xF7\\x02\\x98\\x01\\xC7\\x87\\x03\\x98\\x01\\x9F\\xEF\\x05\\x98\\x01\\xEB\\x95\t\\x98\\x01\\xEE\\xF7!\nL*J\\x08\\xA1\\xDD'h\\x00x\\x86\\x11\\x90\\x01\\x9A\\xB7\t"
		"\\x98\\x01\\x88\\x81\\x02\\x98\\x01\\xC6\\xA6\\x02\\x98\\x01\\xB1\\xE6\\x02\\x98\\x01\\xCF\\xF3\\x03\\x98\\x01\\xF1\\xF7\\x01\\x98\\x01\\xCD\\xBE\\x02\\x98\\x01\\xF7\\xF7\\x02\\x98\\x01\\xC7\\x87\\x03\\x98\\x01\\x9F\\xEF\\x05\\x98\\x01\\xEB\\x95\t\\x98\\x01\\xEE\\xF7!\\x98\\x01\\xFC\\xDE$\n\\x0B*\t\\x08\\x81\\xF5\\x02h\\x00x\\xA2\n\\x10\\x01\\x18\\x00 \\x00Z\\x05\n\\x03106b 00000000000000000000000000000000j\\x02\\x10\\x01r\\x1Cchr:8QZ/r7nECJE9Tku2aoOQ6g==", 
		LAST);*/

	/*web_custom_request("subscriptions", 
		"URL=https://edge.activity.windows.com/v2/feeds/me/subscriptions", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={\"channelurl\":\"https://wns2-sg2p.notify.windows.com/w/?token=BQYAAAAInSJgyl37uO1CPLCasMq%2faQT4dtP9%2beTjjU7MwXfXBv5%2fcFmS0ujkxMvNwvJAGvPfHn3KXiYKd111QmYclMYvpzlaAPTaOlhKIE0dNzCA2YHFKsbCWimd0iEKe7lTLRMEtlZ20CdXrjgiEGqtwGSrTMi9oqDeq%2bfTzzwyjHVgZpPIJuXmfQ25%2bQcz%2fsWbmNURX2rldck5LoK4PTSyZLxoJK80bW%2fR0XAhoMnekd61g2YjOusjzegc6WUOCQ%2bzCnc%3d\",\"deviceId\":\"chr:8QZ/r7nECJE9Tku2aoOQ6g==\",\"publisherFilters\":[{\"activityTypes\":[64,65,66,67,70,71,72,74,75,77,79,82,103,104],\"application\""
		":\"edge.activity.windows.com\",\"notificationType\":\"notificationOnly\",\"platform\":\"host\"}]}", 
		LAST);*/

	/*web_custom_request("command_2", 
		"URL=https://edge.activity.windows.com/v1/feeds/me/syncEntities/command/?client=Chromium&client_id=8QZ%2Fr7nECJE9Tku2aoOQ6g%3D%3D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/vnd.google.octet-stream-compressible", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x188QZ/r7nECJE9Tku2aoOQ6g==\\x10c\\x18\\x02*\\xCF\\x03\\x12\\x04\\x08\\x00\\x10\\x01\\x18\\x012\\x1E\\x08\\x88\\x81\\x02\\x12\\x08\\xCC`\\xA0t\\x80\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x030\\x008\\x00@\\x002\\x1E\\x08\\xC6\\xA6\\x02\\x12\\x08\\xCC`\\xA0t\\x80\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x030\\x008\\x00@\\x002\\x1E\\x08\\xB1\\xE6\\x02\\x12\\x08\\xCC`\\xA0t\\x80\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00"
		"(\\x030\\x008\\x00@\\x002\\x1E\\x08\\xCF\\xF3\\x03\\x12\\x08\\xCC`\\xA0t\\x80\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x030\\x008\\x00@\\x002\\x1E\\x08\\xF1\\xF7\\x01\\x12\\x08\\xCC`\\xA0t\\x80\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x030\\x008\\x00@\\x002\\x1E\\x08\\xCD\\xBE\\x02\\x12\\x08\\xCC`\\xA0t\\x80\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x030\\x008\\x00@\\x002\\x1E\\x08\\xF7\\xF7\\x02\\x12\\x08\\xCC`\\xA0t\\x80\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00"
		"(\\x030\\x008\\x00@\\x002\\x1E\\x08\\xC7\\x87\\x03\\x12\\x08\\xCC`\\xA0t\\x80\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x030\\x008\\x00@\\x002\\x1E\\x08\\x9F\\xEF\\x05\\x12\\x08\\xCC`\\xA0t\\x80\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x030\\x008\\x00@\\x002\\x1E\\x08\\xEB\\x95\t\\x12\\x08\\xCC`\\xA0t\\x80\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x030\\x008\\x00@\\x002\\x1E\\x08\\x9A\\xB7\t\\x12\\x08\\xCC`\\xA0t\\x80\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00"
		"(\\x030\\x008\\x00@\\x002\\x1E\\x08\\xFC\\xDE$\\x12\\x08\\xCC`\\xA0t\\x80\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x030\\x008\\x00@\\x002\\x1E\\x08\\xA1\\xDD'\\x12\\x08\\xCC`\\xA0t\\x80\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x030\\x008\\x00@\\x002\\x1E\\x08\\x81\\xF5\\x02\\x12\\x08\\xCC`\\xA0t\\x80\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x050\\x008\\x00@\\x00H\\x0CP\\x00\\xC0>\\x01:\\x1FProductionEnvironmentDefinitionR\\x06\\x10\\x01\\x18\\x00 \\x00Z\\x05\n\\x03106b "
		"00000000000000000000000000000000j\\x02\\x10\\x01r\\x1Cchr:8QZ/r7nECJE9Tku2aoOQ6g==", 
		LAST);*/

	lr_think_time(20);

	lr_start_transaction("t01_login");
    web_reg_find("Text=New Customer","SaveCount=count_2",LAST);
	web_url("index.php", 
		"URL=http://{P_baseurl}/Shop/index.php?route=account/login", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{P_baseurl}/Shop/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	/*web_custom_request("command_3", 
		"URL=https://edge.activity.windows.com/v1/feeds/me/syncEntities/command/?client=Chromium&client_id=8QZ%2Fr7nECJE9Tku2aoOQ6g%3D%3D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/vnd.google.octet-stream-compressible", 
		"Referer=", 
		"Snapshot=t13.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x188QZ/r7nECJE9Tku2aoOQ6g==\\x10c\\x18\\x01\"\\xF4\\x07\n\\x90\\x05\n$4d7a18bd-e008-4923-be74-c0c5dd42dbac \\xEE\\x87\\x8F\\xB2\\xF9/(\\xD6\\x9D\\xCE\\x8D\\x8E00\\xD5\\xF2\\x8E\\xB2\\xF9/:\tencrypted\\x90\\x01\\x00\\xAA\\x01\\xA4\\x04\n\\x9D\\x04\nXOPik5dKvZ8KBqr7kiNRdye6hf7kNXYmuxnNXjxTFYL/wBzsWrZz9Un1CqtXwbT0x0V0ELigCZAlhuVTwew4pKg==\\x12\\xC0\\x03pGmRYL0+D/XWi/je2eV/7TUTo2sxKqj8uyrGAo+7P8x+c29o8uu8nNxOORBGTv8IcaJdyOA5QjgBZVZo1BYd4FYcH2TYnYEcJPwX7KB3vFd/PlIbaBnsb8pZ6kjSPgwQdAfCss+"
		"TC4AUmKnPHEa7Mn9l+D2JeKaXQPjOd8BNut9M8lewqsts/zhxixtgFEm6G87PkQlF4mVfB5HgVmdsTWoaFNdpoo3F6ZMEGaal72RoYodUAGicON+Vkbpz6hr9lup0Z97L268i+tlqtWfF8iJ9jJfpSlB3cMzTucljTt/IZGg4w8pfVdKEa26xbWkU0ItK4iMqPTkwBP5h317xcnmHpY3MZyLUF+hG0vUQ4dU4uijcR4jS2ix90+dLF/vFsW/K9yjljEEtwNadzmf5M5NGqDIoKH+kuMInofVhIhj1jB+wCxQUUajgfh+5iVjy\\xFA\\x9C\\x1F\\x00\\xBA\\x01\\x1CTvHLOnRaHlTdHqLRVAaHPdmhGRE=\\x12\\x188QZ/r7nECJE9Tku2aoOQ6g==\""
		"B\\x08\\x88\\x81\\x02\\x08\\xC6\\xA6\\x02\\x08\\xB1\\xE6\\x02\\x08\\xCF\\xF3\\x03\\x08\\xF1\\xF7\\x01\\x08\\xCD\\xBE\\x02\\x08\\xF7\\xF7\\x02\\x08\\xC7\\x87\\x03\\x08\\x9F\\xEF\\x05\\x08\\xEB\\x95\t\\x08\\x9A\\xB7\t\\x08\\xEE\\xF7!\\x08\\xFC\\xDE$\\x08\\xA1\\xDD'\\x08\\x81\\xF5\\x02\\x10\\x01\\x18\\x00 \\x012\\x80\\x02Cw]~Ngf%vG-lS?i+m^X7`e,cY6GQBo_A{}Z(IJ8V!XC\"=Zs##`1,wI0~r5v-'Cc_tx#ro]GEzW)X?N*jB:W#'6E[*47IYaVmO p,GHDVo|;vXoB vZg$&~0csc0\\\\#v!7\"5@]2}cZ/kkQL3F9|i8m_7Okk&S<M9ABaIO:xSJSGttX?+G?"
		"''+ua0|=l@y? ,e\\\\;~p -hHQ~bt17iBV?-a(n\"J)j\\\\W]E'D5N^B8U\".Qx6mP]U::Tm}D@ZX_nWb32!1L:\\x1FProductionEnvironmentDefinitionRX\nJ\\x12H \\x00(\\x008\\x00@\rH\\x00R\\x04\\x08\\x00\\x10\\x01`\\x0C\\x92\\x03\\x18KH+TWndlnkymdJdeY6C7us.1\\x92\\x03\\x18yMUDLjQQR87twYO08N03BZ.1\n\\x04\\x18\\xCF\\xF3\\x03\\x10\\x01\\x18\\x00 \\x00Z\\x05\n\\x03106b 00000000000000000000000000000000j\\x04\\x08\\x00\\x10\\x01r\\x1Cchr:8QZ/r7nECJE9Tku2aoOQ6g==", 
		LAST);*/

	web_url("find-assets", 
		"URL=https://edge.microsoft.com/entityextractiontemplates/api/v1/assets/find-assets?name=extraction.autofillFull.en-us&version=1.*.*&channel=stable&key=d414dd4f9db345fa8003e32adc81b362", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("update", 
		"URL=https://edge.microsoft.com/componentupdater/api/v1/update?cup2key=5:Q89vmfpMiOGdP4SfLJ-_7N_broyjLzdJoUlJq3sfcOc&cup2hreq=29eec24af38ab5c14748e49e8706375be1cc6039c68266b5988cdfb749ea991c", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"msedge\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"kpfehajjjbbcifeehjgfgnabifknmdad\",\"brand\":\"GGLS\",\"cohort\":\"rrf@0.53\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.42AF0D1905C8F1D8F6167365271C4549A73603B838BA58B9A664C57C00DB1EE5\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.53\",\"AppMajorVersion\":\"101\",\"AppRollout\":0.53,\"AppVersion\":\"101.0.1210.53\",\"IsInternalUser\":false,\"Priority\""
		":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.161.35\"},\"updatecheck\":{},\"version\":\"101.0.4906.0\"},{\"appid\":\"oankkpibpaokgecfckkdkgaoafllipag\",\"brand\":\"GGLS\",\"cohort\":\"rrf@0.78\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.DD94940B6330D77E7797A60DE1183CCA7B0F71AB247BEA8F9AE0FF30EAFC379F\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.78\",\"AppMajorVersion\":\"101\",\"AppRollout\":0.78,\"AppVersion\":\"101.0.1210.53\",\"IsInternalUser\""
		":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.161.35\"},\"updatecheck\":{},\"version\":\"6498.2022.3.1\"},{\"appid\":\"eeobbhfgfagbclfofmgbdfoicabjdbkn\",\"brand\":\"GGLS\",\"cohort\":\"rrf@0.01\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.A7B3768750FC60664059FECF0E986A2E90718F18DE8E706EEBD99BC08BBB4AE4\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.01\",\"AppMajorVersion\":\"101\",\"AppRollout\":0.01,\"AppVersion\":\"101.0.1210.53\""
		",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.161.35\"},\"updatecheck\":{},\"version\":\"1.0.0.7\"},{\"appid\":\"ohckeflnhegojcjlcpbfpciadgikcohk\",\"brand\":\"GGLS\",\"cohort\":\"rrf@0.22\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.26123BEF7D73536450862D2C4D44963D720AA80B6FC2D8496F559CB9C1FDEB00\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.22\",\"AppMajorVersion\":\"101\",\"AppRollout\":0.22,\"AppVersion\":\""
		"101.0.1210.53\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.161.35\"},\"updatecheck\":{},\"version\":\"0.0.1.4\"},{\"appid\":\"fppmbhmldokgmleojlplaaodlkibgikh\",\"brand\":\"GGLS\",\"cohort\":\"rrf@0.68\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.A81D1959892AE4180554347DF1B97834ABBA2E1A5E6B9AEBA000ECEA26EABECC\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.68\",\"AppMajorVersion\":\"101\",\"AppRollout\":0.68,\""
		"AppVersion\":\"101.0.1210.53\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.161.35\"},\"updatecheck\":{},\"version\":\"1.15.0.1\"},{\"appid\":\"ndikpojcjlepofdkaaldkinkjbeeebkl\",\"brand\":\"GGLS\",\"cohort\":\"rrf@0.28\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.7349C8B46B4DA3B55C4E0C0B439D6168E8D0C9CA7380A1DEB6CFE072FEF7E1A3\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.28\",\"AppMajorVersion\":\"101\",\""
		"AppRollout\":0.28,\"AppVersion\":\"101.0.1210.53\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.161.35\"},\"updatecheck\":{},\"version\":\"10.34.0.15\"},{\"appid\":\"mkcgfaeepibomfapiapjaceihcojnphg\",\"brand\":\"GGLS\",\"cohort\":\"rrf@0.53\",\"enabled\":true,\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.53\",\"AppMajorVersion\":\"101\",\"AppRollout\":0.53,\"AppVersion\":\"101.0.1210.53\",\"IsInternalUser\":false,\"Priority\""
		":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.161.35\"},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"plbmmhnabegcabfbcejohgjpkamkddhn\",\"brand\":\"GGLS\",\"cohort\":\"rrf@0.80\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.A3BF13918E7FF63E8F10C299CB5EC5DF27465611F431E2B23F7D1A27D0DFE924\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.80\",\"AppMajorVersion\":\"101\",\"AppRollout\":0.8,\"AppVersion\":\"101.0.1210.53\",\"IsInternalUser\":false,"
		"\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.161.35\"},\"updatecheck\":{},\"version\":\"2814\"},{\"appid\":\"jbfaflocpnkhbgcijpkiafdpbjkedane\",\"brand\":\"GGLS\",\"cohort\":\"rrf@0.96\",\"enabled\":true,\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.96\",\"AppMajorVersion\":\"101\",\"AppRollout\":0.96,\"AppVersion\":\"101.0.1210.53\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.161.35\"},\"updatecheck\":{},\""
		"version\":\"1.0.0.22\"},{\"appid\":\"mpicjakjneaggahlnmbojhjpnileolnb\",\"brand\":\"GGLS\",\"cohort\":\"rrf@0.23\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.39D2E550C57DC730A42C053D3F2C3E6D041DC380E3A5CC2BAC0CAA373D2A6533\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.23\",\"AppMajorVersion\":\"101\",\"AppRollout\":0.23,\"AppVersion\":\"101.0.1210.53\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.161.35\"},\""
		"updatecheck\":{},\"version\":\"3.0.0.1\"},{\"appid\":\"ahmaebgpfccdhgidjaidaoojjcijckba\",\"brand\":\"GGLS\",\"cohort\":\"rrf@0.71\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.82497265352E024349DF20FCB72104978E8835933BF7497E11D8B1E0A8617AAE\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.71\",\"AppMajorVersion\":\"101\",\"AppRollout\":0.71,\"AppVersion\":\"101.0.1210.53\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\""
		"1.3.161.35\"},\"updatecheck\":{},\"version\":\"3.0.0.0\"},{\"appid\":\"ojblfafjmiikbkepnnolpgbbhejhlcim\",\"brand\":\"GGLS\",\"cohort\":\"rrf@0.78\",\"enabled\":true,\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.78\",\"AppMajorVersion\":\"101\",\"AppRollout\":0.78,\"AppVersion\":\"101.0.1210.53\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.161.35\"},\"updatecheck\":{},\"version\":\"4.10.2391.6\"},{\"appid\":\""
		"llmidpclgepbgbgoecnhcmgfhmfplfao\",\"brand\":\"GGLS\",\"cohort\":\"rrf@0.50\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.495CC3A41ABF9452095760BDDF347C74EC314F9F878100037D0DEAA620B3BBEF\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.50\",\"AppMajorVersion\":\"101\",\"AppRollout\":0.5,\"AppVersion\":\"101.0.1210.53\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.161.35\"},\"updatecheck\":{},\"version\":\"2.0.0.1837\""
		"},{\"appid\":\"lfmeghnikdkbonehgjihjebgioakijgn\",\"brand\":\"GGLS\",\"cohort\":\"rrf@0.71\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.6A223D620F1CD1EDB8E2A737220335C00D72510A947041B8EF5D33DB9726CC25\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.71\",\"AppMajorVersion\":\"101\",\"AppRollout\":0.71,\"AppVersion\":\"101.0.1210.53\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.161.35\"},\"updatecheck\":{},\"version"
		"\":\"1.0.8.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":1,\"physmemory\":8,\"sse\":1,\"sse2\":1,\"sse3\":1,\"sse41\":1,\"sse42\":1,\"ssse3\":1},\"ismachine\":1,\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"sku\":\"desktop\",\"version\":\"10.0.22000.613\"},\"prodversion\":\"101.0.1210.53\",\"protocol\":\"3.1\",\"requestid\":\"{38b39d5c-b53d-4e1c-bc21-078888dc52af}\",\"sessionid\":\""
		"{51b4df29-63c4-430e-8cd6-14882785b467}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":1,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.161.35\"},\"updaterversion\":\"101.0.1210.53\"}}", 
		LAST);

	web_submit_data("index.php_2", 
		"Action=http://{P_baseurl}/Shop/index.php?route=account/login", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://{P_baseurl}/Shop/index.php?route=account/login", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=email", "Value={P_username}", ENDITEM, 
		"Name=password", "Value={P_password}", ENDITEM, 
		LAST);

	lr_end_transaction("t01_login",LR_AUTO);

	lr_think_time(3);

	lr_think_time(18);

	/*web_custom_request("update_2", 
		"URL=https://edge.microsoft.com/componentupdater/api/v1/update", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"msedge\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"plbmmhnabegcabfbcejohgjpkamkddhn\",\"brand\":\"GGLS\",\"cohort\":\"rrf@0.80\",\"enabled\":true,\"event\":[{\"download_time_ms\":20402,\"downloaded\":28351,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"2816.0.0.0\",\"previousversion\":\"2814\",\"total\":28351,\"url\":\"http://msedge.b.tlu.dl.delivery.mp.microsoft.com/filestreamingservice/files/"
		"66f2cc62-ad6a-4078-91f6-32495d15336c?P1=1653505229&P2=404&P3=2&P4=NX7Jn30sonGUWp62%2fSuj7um3aK4lSSgBdgCY73TfgORjOJgxs46Fqp2k8oQDIhM1xcXVSgJo1N77AeNtP1Wz9Q%3d%3d\"},{\"eventresult\":1,\"eventtype\":3,\"install_time_ms\":234,\"nextfp\":\"1.8615E4FA13BA715404B15950C27FE49D9782C1287416F598CBC5A04E47AACC30\",\"nextversion\":\"2816.0.0.0\",\"previousfp\":\"1.A3BF13918E7FF63E8F10C299CB5EC5DF27465611F431E2B23F7D1A27D0DFE924\",\"previousversion\":\"2814\"}],\"packages\":{\"package\":[{\"fp\":\""
		"1.8615E4FA13BA715404B15950C27FE49D9782C1287416F598CBC5A04E47AACC30\"}]},\"version\":\"2816.0.0.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":1,\"physmemory\":8,\"sse\":1,\"sse2\":1,\"sse3\":1,\"sse41\":1,\"sse42\":1,\"ssse3\":1},\"ismachine\":1,\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"sku\":\"desktop\",\"version\":\"10.0.22000.613\"},\"prodversion\":\"101.0.1210.53\",\"protocol\":\"3.1\",\"requestid\":\""
		"{6cb71616-ce69-48ee-b508-6c1311d36e17}\",\"sessionid\":\"{51b4df29-63c4-430e-8cd6-14882785b467}\",\"updaterversion\":\"101.0.1210.53\"}}", 
		LAST);*/

	lr_think_time(28);
	for(i=1;i<=iter;i++)
	{
	lr_start_transaction("t02_search product");
    web_reg_find("Text=Search","SaveCount=count_3",LAST);
	web_url("index.php_3", 
		"URL=http://{P_baseurl}/Shop/index.php?route=product/search&search={P_search_random}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{P_baseurl}/Shop/index.php?route=account/account", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("t02_search product",LR_AUTO);

	lr_think_time(3);

	lr_think_time(89);
	if(i%2!=0)
	{

	lr_start_transaction("t03_sort price low to hight");
	
	web_reg_find("Text=Products","SaveCount=count_4",LAST);
	web_reg_save_param("C_productid1","LB=product&amp;product_id=","RB=&amp",LAST);
	
	web_reg_save_param("C_productname1","LB= title=\"","RB=\" class=","ord=6",LAST);
	
	
	web_url("index.php_4", 
		"URL=http://{P_baseurl}/Shop/index.php?route=product/search&sort=p.price&order=ASC&search={P_search_random}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{P_baseurl}/Shop/index.php?route=product/search&search={P_search_random}", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("t03_sort price low to hight",LR_AUTO);

	lr_think_time(70);
	
	lr_start_transaction("t_04 add to wishlist");

	web_submit_data("index.php_5", 
		"Action=http://{P_baseurl}/Shop/index.php?route=account/wishlist/add", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://{P_baseurl}/Shop/index.php?route=product/search&sort=p.price&order=ASC&search={P_search_random}", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=product_id", "Value=58", ENDITEM, 
		LAST);

	lr_end_transaction("t_04 add to wishlist",LR_AUTO);

	lr_think_time(3);

	lr_think_time(31);
	}
	if(i%2==0)
	{
	lr_start_transaction("t05_sort price high to low");
	web_reg_find("Text=Products","SaveCount=count_5",LAST);
	web_reg_save_param("C_productname2","LB= title=\"","RB=\" class=\"","ord=5",LAST);
	
	web_reg_save_param("C_price","LB=Ex Tax: $","RB=</span>","ord=1",LAST);
	
	web_reg_save_param("C_productid2","LB=product&amp;product_id=","RB=&amp",LAST);
	web_url("index.php_6", 
		"URL=http://{P_baseurl}/Shop/index.php?route=product/search&sort=p.price&order=DESC&search={P_search_random}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{P_baseurl}/Shop/index.php?route=product/search&sort=p.price&order=ASC&search={P_search_random}", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("t05_sort price high to low",LR_AUTO);

	lr_think_time(104);
	
	lr_start_transaction("t06_select in sort by");

	web_url("index.php_7", 
		"URL=http://{P_baseurl}/Shop/index.php?route=product/search&sort={P_sort_random}&search={P_search_random}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{P_baseurl}/Shop/index.php?route=product/search&sort=p.price&order=DESC&search={P_search_random}", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("t06_select in sort by",LR_AUTO);

	lr_think_time(58);
	}

	lr_start_transaction("t07_select product");
    web_reg_find("Text=Products","SaveCount=count_7",LAST);
	/*web_url("Samsung", 
		"URL=http://{P_baseurl}/Shop/index.php?route=product/product&product_id={C_productid1}&search={P_search_random}&sort={P_sort_random}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{P_baseurl}/Shop/index.php?route=product/search&sort=pd.name&order=ASC&search={P_search_random}", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);*/

	web_url("index.php_8", 
		"URL=http://{P_baseurl}/Shop/index.php?route=product/product/review&product_id={C_productid1}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{P_baseurl}/Shop/index.php?route=product/product&product_id=58&search={P_search_random}&sort={P_sort_random}", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(4);

	web_url("sh.f48a1a04fe8dbf021b4cda1d.html", 
		"URL=https://s7.addthis.com/static/sh.f48a1a04fe8dbf021b4cda1d.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{P_baseurl}/", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	web_url("sh.f48a1a04fe8dbf021b4cda1d.html_2", 
		"URL=https://s7.addthis.com/static/sh.f48a1a04fe8dbf021b4cda1d.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{P_baseurl}/", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		LAST);

	web_url("shares.json", 
		"URL=https://api-public.addthis.com/url/shares.json?url=http%3A%2F%2F{P_baseurl}%2FShop%2Findex.php%3Froute%3Dproduct%2Fproduct%26product_id%3D58&callback=_ate.cbs.sc_http3522518445shopindexphprouteproductproduct26productid580", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{P_baseurl}/", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		LAST);

	web_url("widget_iframe.bbd13993eb53d3a11ac08f5e8cf9d6a4.html", 
		"URL=https://platform.twitter.com/widgets/widget_iframe.bbd13993eb53d3a11ac08f5e8cf9d6a4.html?origin=http%3A%2F%2F{P_baseurl}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{P_baseurl}/", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(6);

	web_url("settings", 
		"URL=https://syndication.twitter.com/settings?session_id=93bb0caa3c1b848555a9d80eea68f3bc00aaffaf", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://platform.twitter.com/", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		LAST);

	web_url("tweet_button.bbd13993eb53d3a11ac08f5e8cf9d6a4.en.html", 
		"URL=https://platform.twitter.com/widgets/tweet_button.bbd13993eb53d3a11ac08f5e8cf9d6a4.en.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{P_baseurl}/", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);

	web_url("like.php", 
		"URL=https://www.facebook.com/v2.6/plugins/like.php?action=like&app_id=172525162793917&channel=https%3A%2F%2Fstaticxx.facebook.com%2Fx%2Fconnect%2Fxd_arbiter%2F%3Fversion%3D46%23cb%3Df243fac4f4fd3cc%26domain%3D{P_baseurl}%26is_canvas%3Dfalse%26origin%3Dhttp%253A%252F%252F{P_baseurl}%252Ff226072aa9bcaa4%26relation%3Dparent.parent&container_width=0&font=arial&height=25&href=http%3A%2F%2F{P_baseurl}%2FShop%2Findex.php%3Froute%3Dproduct%2Fproduct%26product_id%3D58&layout=button_count&locale=en_US"
		"&sdk=joey&send=false&share=false&show_faces=false&width=90", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{P_baseurl}/", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(7);

	web_custom_request("100eng.json", 
		"URL=https://m.addthis.com/live/red_lojson/100eng.json?sh=0&ph=1140&ivh=746&dt=26578&pdt=2990&ict=&pct=0&perf=widget%7C2990%7C1647%2Clojson%7C9484%7C5922%2Csh%7C9489%7C1234&rndr=render_toolbox%7C10729&cmenu=null&ppd=0&ppl=0&fbe=&xmv=0&xms=0&xmlc=0&jsfw=jquery%2Cfacebook&jsfwv=jquery-2.1.1%2Cfacebook-unk&al=men&scr=0&scv=0&apiu=0&ba=3&sid=62879c3760aa733c&rev=v8.28.8-wp&pub=ra-515eeaf54693130e&dp={P_baseurl}&fp="
		"Shop%2Findex.php%3Froute%3Dproduct%2Fproduct%26product_id%3D58%26search%3D{P_search_random}%26sort%3Dpd.name%26order%3DASC&pfm=0&icns=", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"Referer=http://{P_baseurl}/", 
		"Snapshot=t32.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);
	//random_name=lr_paramarr_random("C_productname1");

	lr_end_transaction("t07_select product",LR_AUTO);

	lr_think_time(26);

	lr_start_transaction("t_08");
    web_reg_find("Text=Brand","SaveCount=count_10",LAST);
	/*web_url("index.php_9", 
		"URL=http://{P_baseurl}/Shop/index.php?route=product/product&product_id={C_productid2}&search={P_search_random}&sort={P_sort_random}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{P_baseurl}/Shop/index.php?route=product/search&sort={P_sort_random}&search={P_search_random}", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		LAST);*/

	web_url("sh.f48a1a04fe8dbf021b4cda1d.html_3", 
		"URL=https://s7.addthis.com/static/sh.f48a1a04fe8dbf021b4cda1d.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{P_baseurl}/", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		LAST);

	web_url("widget_iframe.bbd13993eb53d3a11ac08f5e8cf9d6a4.html_2", 
		"URL=https://platform.twitter.com/widgets/widget_iframe.bbd13993eb53d3a11ac08f5e8cf9d6a4.html?origin=http%3A%2F%2F{P_baseurl}", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=http://{P_baseurl}/", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		LAST);

	web_url("sh.f48a1a04fe8dbf021b4cda1d.html_4", 
		"URL=https://s7.addthis.com/static/sh.f48a1a04fe8dbf021b4cda1d.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{P_baseurl}/", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		LAST);

	web_url("index.php_10", 
		"URL=http://{P_baseurl}/Shop/index.php?route=product/product/review&product_id={C_productid2}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{P_baseurl}/Shop/index.php?route=product/product&product_id=33&search={P_search_random}&sort={P_sort_random}", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		LAST);

	web_url("shares.json_2", 
		"URL=https://api-public.addthis.com/url/shares.json?url=http%3A%2F%2F{P_baseurl}%2FShop%2Findex.php%3Froute%3Dproduct%2Fproduct%26product_id%3D33&callback=_ate.cbs.sc_http3522518445shopindexphprouteproductproduct26productid330", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{P_baseurl}/", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		LAST);

	web_url("settings_2", 
		"URL=https://syndication.twitter.com/settings?session_id=e9356286d88a5990c4fc3692d9434cef20168768", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://platform.twitter.com/", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		LAST);

	web_url("tweet_button.bbd13993eb53d3a11ac08f5e8cf9d6a4.en.html_2", 
		"URL=https://platform.twitter.com/widgets/tweet_button.bbd13993eb53d3a11ac08f5e8cf9d6a4.en.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=http://{P_baseurl}/", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		LAST);
	/*web_custom_request("search", 
		"URL=https://www.bing.com/api/shopping/v1/item/search?appid=45EBD043982A03A4CA6B8962005A06F2B1FED569", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"clientContext\":{\"PaRequestFeatureMask\":0,\"appname\":\"Edge\",\"buildversion\":\"101.0.1210.53\",\"enabledfeatures\":[{\"name\":\"msShoppingUapiExp0\",\"params\":[]},{\"name\":\"msShoppingUapiExp3\",\"params\":[]}],\"extraction_context\":\"PRODUCT_PICL_EXTRACTED\",\"isShoppingPersonalizationEnabled\":true,\"ismobile\":false,\"osname\":\"Windows NT\",\"osversion\":\"10.0.22000\",\"picl_model_version\":\"5.6.0\"},\"item\":{\"attributes\":{\"curl\":\"{P_baseurl}/Shop/index.php?route="
		"product/product&product_id={C_productid2}\",\"price\":\"$200.00\",\"priceCurrency\":\"$\",\"priceValue\":\"200.00\"},\"images\":[{\"content\":\"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\",\"contenturl\":\"{P_baseurl}/Shop/image/cache/catalog/demo/{P_search_random}_syncmaster_941bw-228x228.jpg\"}],\"seller\":{\"domain\":\"\"},\"title\":\"Samsung SyncMaster 941BW\",\"url\":\"%2Aip_removed%2A/Shop"
		"/index.php?route=product/product&product_id={C_productid2}&search={P_search_random}&sort=pd.name&order=ASC\"},\"sourceTypes\":[\"comparableOffers\",\"ratingReview\",\"priceHistory\"]}", 
		LAST);*/

	lr_think_time(39);

	lr_start_transaction("t_09_select mini image");

	lr_end_transaction("t_09_select mini image",LR_AUTO);
	
	lr_paramarr_random("C_product_name_2");

	lr_end_transaction("t_08",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("t_10 homepage");

	web_custom_request("100eng.json_2", 
		"URL=https://m.addthis.com/live/red_lojson/100eng.json?sh=0&ph=1140&ivh=746&dt=90616&pdt=2151&ict=&pct=3&perf=widget%7C2152%7C5%2Clojson%7C2260%7C360%2Csh%7C2263%7C224&rndr=render_toolbox%7C2342&cmenu=null&ppd=0&ppl=0&fbe=&xmv=0&xms=0&xmlc=0&jsfw=jquery%2Cfacebook&jsfwv=jquery-2.1.1%2Cfacebook-unk&al=men&scr=0&scv=0&apiu=0&ba=3&sid=62879c6e71526abb&rev=v8.28.8-wp&pub=ra-515eeaf54693130e&dp={P_baseurl}&fp="
		"Shop%2Findex.php%3Froute%3Dproduct%2Fproduct%26product_id%3D33%26search%3D{P_search_random}%26sort%3Dpd.name%26order%3DASC&pfm=0&icns=", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"Referer=http://{P_baseurl}/", 
		"Snapshot=t42.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_url("index.php_11", 
		"URL=http://{P_baseurl}/Shop/index.php?route=common/home", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{P_baseurl}/Shop/index.php?route=product/product&product_id={C_productid2}&search={P_search_random}&sort={P_sort_random}", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("t_10 homepage",LR_AUTO);

	lr_think_time(3);
	}
	lr_start_transaction("t_11 logout");

	web_url("Logout", 
		"URL=http://{P_baseurl}/Shop/index.php?route=account/logout", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{P_baseurl}/Shop/index.php?route=common/home", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("t_11 logout",LR_AUTO);

	lr_think_time(3);
	
	
	lr_save_datetime("%c",DATE_NOW,"Date");
	file=fopen(filelocation,"a");
	
	
	
	fprintf(file,"Current Timestamp:%s\n",lr_eval_string("{Date}"));
	
	fprintf(file,"Search criteria : %s\n",lr_eval_string("{P_search_random}"));
	
	fprintf(file,"Search results first time : %s\n",lr_eval_string("{C_productname1}"));
	

	
	fprintf(file,"Selected Product name : %s\n",lr_eval_string("{C_productname2}"));
	
	fprintf(file,"Product price in :  %d\n", atoi(lr_eval_string("{C_price}"))*72);
 
	fclose(file);

	return 0;
}