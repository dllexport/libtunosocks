#include "net/socksifier.h"
#include "tuntap/tuntapinstaller.h"

#include "utils/app/app.h"
#include "lib/tunosocks.h"
int main()
{

    App::Init();

    tunosocks_setsocks5("127.0.0.1", 5555);

    tunosocks_start();

	//if(!TuntapInstaller::GetInstance()->Find())
	//{
	//	if (!TuntapInstaller::GetInstance()->Install())
	//	{
	//		LOG_INFO("Install Tuntap Driver Err")

	//			getchar();
	//		exit(0);
	//	}
	//}

//    auto res = Socksifier::GetInstance()->Init();
//
//    if (res)
//    {
//        Socksifier::GetInstance()->AsyncRun();
//    }
//
//    getchar();

}

