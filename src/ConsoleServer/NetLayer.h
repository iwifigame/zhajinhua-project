/********************************************************************
	created:	2011/09/09
	created:	9:9:2011   17:04
	filename: 	d:\My Projects\ZJHClient&Server\src\ConsoleServer\NetLayer.h
	file path:	d:\My Projects\ZJHClient&Server\src\ConsoleServer
	file base:	NetLayer
	file ext:	h
	author:		PangShuo
*********************************************************************/


#ifndef NetLayer_h__
#define NetLayer_h__

class NetLayer
{
public:
	int Initialize();
	int Start(const int _port);
	int Uninitialize();
protected:
private:
};
#endif // NetLayer_h__