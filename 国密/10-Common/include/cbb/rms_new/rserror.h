#ifndef _RS_ERROR_H_
#define _RS_ERROR_H_

typedef enum
{
	RSERR_SUCCESS,
	RSERR_NOT_IN_SERVICE = RSERR_SUCCESS + 100,
	RSERR_NOT_IN_TOPO, //101
	RSERR_DEVICE_IS_NOT_ENABLE,//102
	RSERR_DEVICE_ALREADY_ONLINE,//103
	RSERR_REACH_MAXNUM_NRU,//104
	RSERR_NO_SUITABLE_PARTITION,//105
	RSERR_HAS_NO_REC_RESOURCE,//106
	RSERR_REPEAT_ALLOC_RESOURCE,//107
	RSERR_CANNOT_STOP_ALARM_RECORD,//108
	RSERR_RECORD_FILE_IN_USE,//109
	RSERR_RECORD_FILE_NOT_EXIST,//110
	RSERR_PARTITION_OFFLINE,//111
	RSERR_PLAYTASK_TOO_MUCH,//112
	RSERR_PLAYTASK_NOTEXIST,//113
	RSERR_DOWNLOADTASK_TOO_MUCH,//114
	RSERR_DOWNLOADTASK_NOTEXIST,//115
	RSERR_DATABASE_OPERATION_FAILED,//116
	RSERR_DELETE_FILE_TIMEOUT,//117
	RSERR_UDP_BANDWIDTH_OVERLOAD,//118
	RSERR_RESOLV_CHANGED,//119
	RSERR_NO_PLAY_RESOURCE,//120
	RSERR_NO_DOWNLOAD_RESOURCE,//121
	RSERR_GET_OUTADDR,//122
	RSERR_POUNCH,//123
	RSERR_PATH_CREATE_FAIL,//124
	RSERR_STUN_TIMEOUT,//125
	RSERR_PUNCH_TIMEOUT,//126
	RSERR_FILE_FAIL,//127
	RSERR_RPCTRL_NOT_INITIAL,//128
	RSERR_NRU_NO_MEMORY,//129
	RSERR_REC_STATUS_ERROR,//130
	RSERR_RECTASK_TOO_MUCH,//131
	RSERR_REC_OVER_CAPACITY,//132
	RSERR_WAIT_KEYFRAME,//133
	RSERR_TIMESTAMP_ERR,//134
	RSERR_PREREC_TIME_INVALID,//135
	RSERR_SMALL_FILE_INTERVAL_INVALID,//136
	RSERR_ALREADY_ALARM_TWO,//137
	RSERR_PLAY_OVER_CAPACITY,//138
	RSERR_PLAY_DROG_TIME_INVALID,//139
	RSERR_PLAY_GRAN_INVALID,//140
	RSERR_PLAY_RECORD_LENGTH_ZERO,//141
	RSERR_PLAY_REACH_STOP_TIME,//142
	RSERR_DOWNLOAD_STATUS_ERROR,//143
	RSERR_SOCKET_ERROR,//144
	RSERR_CONNECT_ERROR,//145
	RSERR_PATH_ALREADY_EXIST,//146
	RSERR_PATH_NOT_EXIST,//147
	RSERR_PATH_CREATE_FAIL_RPC,//148
	RSERR_PATH_DELETE_FAIL,//149
	RSERR_FILE_PATH_INVALID,//150
	RSERR_FILE_ALREADY_EXIST,//151
	RSERR_FILE_NOT_EXIST,//152
	RSERR_FILE_DELETE_FAIL,//153
	RSERR_FILE_RENAME_FAIL,//154
	RSERR_FILE_NAME_INVALID,//155
	RSERR_MEDIATYPE_UNSUPPORT,//156
	RSERR_START_TIME_INVALID,//157
	RSERR_RECLOG_FILE_NOT_EXIST,//158
	RSERR_RPCMD_IS_BUSY,//159
	RSERR_INODE_DESTROYED,//160
	RSERR_DISC_TIMEOUT,//161
	RSERR_FORMAT_CHANGE,//162
	RSERR_FILEVER_TOOLOW,//163
	RSERR_IN_LOST,//164
	RSERR_FULL_LOST,//165
	RSERR_PARTITION_ALARM,//166
	RSERR_DISK_SPACE_NOT_ENOUGH,//167
	RSERR_PARTITION_BANDWIDTH_OVERRUN,//168
	RSERR_CLOUD_NTH_WITH_BINDING,//169
	RSERR_RMSSDK_NOT_ONLINE,//170
	RSERR_RECORDTASK_NOTEXIST,//171
	RSERR_FILE_PROPERTY,//172
	RSERR_METHOD_NOTSUPPORT,//173
	RSERR_NOSTREAM,//174
	RSERR_POST_MSG_FAILED,//175

	ERR_NRU_BGN  = RSERR_SUCCESS + 500,
}ERSComm_ErrType;


#endif