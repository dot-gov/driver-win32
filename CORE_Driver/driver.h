
#define DRV_CONTROL_NAME		L"MSH4DEV1"
#define DF_DEVICE_NAME			L"MSH4DEV2"

#define NT_CONTROL_DEVICE		L"\\Device\\" DRV_CONTROL_NAME
#define DOS_CONTROL_DEVICE		L"\\DosDevices\\" DRV_CONTROL_NAME
#define DEEPUNFREEZE_DEVICE		L"\\Device\\" DF_DEVICE_NAME
#define DEEPUNFREEZE_UNIQUE_ID	DF_DEVICE_NAME

#ifndef CTL_CODE
	#define CTL_CODE( DeviceType, Function, Method, Access ) (                 \
	((DeviceType) << 16) | ((Access) << 14) | ((Function) << 2) | (Method) \
	)
#endif
#ifndef METHOD_BUFFERED
	#define METHOD_BUFFERED	0
#endif
#ifndef FILE_WRITE_ACCESS
	#define FILE_WRITE_ACCESS ( 0x0002 )
#endif

#define FILE_DEVICE_H4DRIVER 0x00008234

#define ADMIN_FUNCTION 	 0x0882
#define UNHOOK_FUNCTION  0x0883
#define ADDPID_FUNCTION  0x0884
#define REG_FUNCTION	 0x0885
#define THAW_FUNCTION	 0x0886
#define FREEZE_FUNCTION  0x0887

#define VERSION_FUNCTION 0x08FF

#define IOCTL_UNHOOK CTL_CODE(FILE_DEVICE_H4DRIVER, UNHOOK_FUNCTION, METHOD_BUFFERED, FILE_WRITE_ACCESS) 
#define IOCTL_ADDPID CTL_CODE(FILE_DEVICE_H4DRIVER, ADDPID_FUNCTION, METHOD_BUFFERED, FILE_WRITE_ACCESS) 
#define IOCTL_ADMIN  CTL_CODE(FILE_DEVICE_H4DRIVER, ADMIN_FUNCTION, METHOD_BUFFERED, FILE_WRITE_ACCESS)  
#define IOCTL_REG 	 CTL_CODE(FILE_DEVICE_H4DRIVER, REG_FUNCTION, METHOD_BUFFERED, FILE_WRITE_ACCESS)    
#define IOCTL_THAW   CTL_CODE(FILE_DEVICE_H4DRIVER, THAW_FUNCTION, METHOD_BUFFERED, FILE_WRITE_ACCESS)   
#define IOCTL_FREEZE CTL_CODE(FILE_DEVICE_H4DRIVER, FREEZE_FUNCTION, METHOD_BUFFERED, FILE_WRITE_ACCESS) 

#define IOCTL_VERSION CTL_CODE(FILE_DEVICE_H4DRIVER, VERSION_FUNCTION, METHOD_BUFFERED, FILE_WRITE_ACCESS) 