#ifndef __S_LOG_CFG_H__
#define __S_LOG_CFG_H__

#ifdef __cplusplus
extern "C" {
#endif

/**
 * S_Log是否开启
 */
#define S_LOG_ENABLE						(1)

/**
 * S_Log是否启用色彩格式
 */
#define S_LOG_COLOR_OPEN                    (1)

/**
 * S_Log输出方式，可选择多种方式同时开启
 */
#define S_LOG_OUT_BY_PRINTF					(1)				/* 通过printf输出 */
#define S_LOG_OUT_BY_FILE				    (0)				/* 保存到文件,暂未实现 */
#define S_LOG_OUT_BY_NET				    (0)				/* 保存到网络,暂未实现 */

/**
 * S_Log输出长度限制（缓冲区大小，单位Byte）
 */
#define S_LOG_BUFF_SIZE		                (1024)

/**
 * S_Log输出选项
 */
#define S_LOG_OPT_ASSERT					(1<<0)			/* 断言 */
#define S_LOG_OPT_VERSION                   (1<<1)			/* 版本 */
#define S_LOG_OPT_ERROR                   	(1<<2)			/* 错误 */
#define S_LOG_OPT_WARN                     	(1<<3)			/* 警告 */
#define S_LOG_OPT_TRACE						(1<<4)			/* 跟踪 */	 
#define S_LOG_OPT_INFO                     	(1<<5)			/* 信息 */
#define S_LOG_OPT_DEBUG                     (1<<6)			/* 调试 */ 

/**
 * S_Log输出选项等级
 */
#define S_LOG_OPT_LVL 						S_LOG_OPT_DEBUG

#ifdef __cplusplus
}
#endif

#endif /* __S_LOG_CFG_H__ */
