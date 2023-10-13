/*******************************************************************************/
/* Author    : Mohamed Maged                                                   */
/* Version   : V01                                                             */
/* Date      : 8 October 2023         	                                       */
/* Logs      : V01 : Initial Creation                                          */
/*******************************************************************************/

#ifndef OS_INTERFACE_H
#define OS_INTERFACE_H


/* Task States */
typedef enum
{
	OS_TASK_READY         = 5,
	OS_TASK_SUSPEND
}OS_TASK_STATES_t;


/*******************************************************************************/
/* - Initialize OS and start the Scheduler                                     */
/*******************************************************************************/
void OS_voidStartScheduler(void);


/*******************************************************************************/
/* - Stop the Scheduler                                                        */
/*******************************************************************************/
void OS_voidStopScheduler(void);



/*******************************************************************************/
/* - Resume the Scheduler                                                      */
/*******************************************************************************/
void OS_voidResumeScheduler(void);



/*******************************************************************************/
/* - To Create new task  										               */
/*******************************************************************************/
void OS_voidCreateTask(u16 Copy_u16delay,u16 Copy_u16period,void(*Copy_voidFptr)(void),u8 Copy_u8ID);


/*******************************************************************************/
/* - To put the task in Suspend state 										   */
/*******************************************************************************/
void OS_voidSuspendTask(u8 Copy_u8ID);


/*******************************************************************************/
/* - To put the task in Ready state 										   */
/*******************************************************************************/
void OS_voidResumeTask(u8 Copy_u8ID);

/*******************************************************************************/
/* - To delete the task in Suspend state 									   */
/*******************************************************************************/
void OS_voidDeleteTask(u8 Copy_u8ID);


#endif
