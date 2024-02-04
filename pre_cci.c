# 1 "c:\\users\\dell\\documents\\vugen\\scripts\\case_study_1_final_output\\\\combined_Case_Study_1_Final_Output.c"
# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"





















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_unmask (const char *EncodedString);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 513 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 516 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 540 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 574 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 597 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 621 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 700 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 761 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 776 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 800 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 812 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 820 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 826 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 929 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 936 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 958 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1034 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1063 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


# 1075 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_search_row(PVCI pvci, char * columnNames, char * messages, char * delimiter, char * **outcolumns, char * **outvalues);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);
VTCERR   vtc_update_all_message_ifequals(PVCI pvci, char * columnNames, char * message, char * ifmessage, char * delimiter, unsigned short *outRc);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_connect_ex(char * vtc_first_param, ...);
VTCERR   lrvtc_connect_ex_no_ellipsis(const char *vtc_first_param, char ** arguments, int argCount);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_search_row(char * columnNames, char * messages, char * delimiter);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);
VTCERR   lrvtc_update_all_message_ifequals(char * columnNames, char * message, char * ifmessage, char * delimiter);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);

int lr_get_char_count(const char * string);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 1 "c:\\users\\dell\\documents\\vugen\\scripts\\case_study_1_final_output\\\\combined_Case_Study_1_Final_Output.c" 2

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/SharedParameter.h" 1



 
 
 
 
# 100 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_search_row(PVCI2 pvci, char *columnNames, char *messages, char *delimiter, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
 
 
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_search_row(char *columnNames, char *messages, char *delimiter);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "c:\\users\\dell\\documents\\vugen\\scripts\\case_study_1_final_output\\\\combined_Case_Study_1_Final_Output.c" 2

# 1 "globals.h" 1



 
 

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/web_api.h" 1







# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_attrib(
		const char * mpszParamName,
		...);
										 
										 
										 
										 
										 
										 
										 		
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 789 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"


# 802 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"



























# 840 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 908 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

  int
web_stream_open(
	const char *		mpszArg1,
	...
);
  int
	web_stream_wait(
		const char *		mpszArg1,
		...
	);

  int
	web_stream_close(
		const char *		mpszArg1,
		...
	);

  int
web_stream_play(
	const char *		mpszArg1,
	...
	);

  int
web_stream_pause(
	const char *		mpszArg1,
	...
	);

  int
web_stream_seek(
	const char *		mpszArg1,
	...
	);

  int
web_stream_get_param_int(
	const char*			mpszStreamID,
	const int			miStateType
	);

  double
web_stream_get_param_double(
	const char*			mpszStreamID,
	const int			miStateType
	);

  int
web_stream_get_param_string(
	const char*			mpszStreamID,
	const int			miStateType,
	const char*			mpszParameterName
	);

  int
web_stream_set_param_int(
	const char*			mpszStreamID,
	const int			miStateType,
	const int			miStateValue
	);

  int
web_stream_set_param_double(
	const char*			mpszStreamID,
	const int			miStateType,
	const double		mdfStateValue
	);

  int
web_stream_set_custom_mpd(
	const char*			mpszStreamID,
	const char*			aMpdBuf
	);

 
 
 






# 9 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/web_api.h" 2

















 







 















  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);

  int					 
web_util_set_request_header(
	  const char *		aRequestHeaderNameStr,
	  const char *		aRequestHeaderValueStr);

 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 7 "globals.h" 2

# 1 "lrw_custom_body.h" 1
 




# 8 "globals.h" 2


 
 


# 3 "c:\\users\\dell\\documents\\vugen\\scripts\\case_study_1_final_output\\\\combined_Case_Study_1_Final_Output.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 4 "c:\\users\\dell\\documents\\vugen\\scripts\\case_study_1_final_output\\\\combined_Case_Study_1_Final_Output.c" 2

# 1 "Action.c" 1
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
	while(string1 != 0){
		strcat(wspStr, string1);
		string1 = (char *)strtok(0," ");
	}
	lr_output_message("w: %s", wspStr);
	
	string2 = (char*)strtok(wspStr, "0");
	while(string2 != 0){
		strcat(wzero, string2);
		string2 = (char*)strtok(0,"0");
	}
	lr_output_message("w: %s", wzero);

string3 = (char*)strtok(wzero, "$");
	while(string3 != 0){
		strcpy(sSearchStrings[n], string3);
		lr_output_message("\n%s",sSearchStrings[n]);
		n++;
		string3 = (char*)strtok(0,"$");
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
		"LAST");

	lr_think_time(11);

 
# 63 "Action.c"

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
		"LAST");

	web_url("101.0.1210.53", 
		"URL=https://config.edge.skype.com/config/v1/Edge/101.0.1210.53?clientId=-5187258890398331796&osname=win&client=edge&channel=stable&scpfull=0&scpguard=1&scpfre=0&scpver=2&osarch=x86_64&osver=10.0.22000&wu=1&devicefamily=desktop&uma=1&mngd=0&installdate=1612048346&edu=0&bphint=2&soobedate=1612048344", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"LAST");

	 
# 99 "Action.c"

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
		"LAST");

	 

	 
# 127 "Action.c"

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
		"LAST");

	lr_think_time(7);

	 
# 170 "Action.c"

	 
# 183 "Action.c"

	 
# 201 "Action.c"

	lr_think_time(20);

	lr_start_transaction("t01_login");
    web_reg_find("Text=New Customer","SaveCount=count_2","LAST");
	web_url("index.php", 
		"URL=http://{P_baseurl}/Shop/index.php?route=account/login", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{P_baseurl}/Shop/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"LAST");

	 
# 232 "Action.c"

	web_url("find-assets", 
		"URL=https://edge.microsoft.com/entityextractiontemplates/api/v1/assets/find-assets?name=extraction.autofillFull.en-us&version=1.*.*&channel=stable&key=d414dd4f9db345fa8003e32adc81b362", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"LAST");

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
		"LAST");

	web_submit_data("index.php_2", 
		"Action=http://{P_baseurl}/Shop/index.php?route=account/login", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://{P_baseurl}/Shop/index.php?route=account/login", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=email", "Value={P_username}", "ENDITEM", 
		"Name=password", "Value={P_password}", "ENDITEM", 
		"LAST");

	lr_end_transaction("t01_login",2);

	lr_think_time(3);

	lr_think_time(18);

	 
# 306 "Action.c"

	lr_think_time(28);
	for(i=1;i<=iter;i++)
	{
	lr_start_transaction("t02_search product");
    web_reg_find("Text=Search","SaveCount=count_3","LAST");
	web_url("index.php_3", 
		"URL=http://{P_baseurl}/Shop/index.php?route=product/search&search={P_search_random}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{P_baseurl}/Shop/index.php?route=account/account", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("t02_search product",2);

	lr_think_time(3);

	lr_think_time(89);
	if(i%2!=0)
	{

	lr_start_transaction("t03_sort price low to hight");
	
	web_reg_find("Text=Products","SaveCount=count_4","LAST");
	web_reg_save_param("C_productid1","LB=product&amp;product_id=","RB=&amp","LAST");
	
	web_reg_save_param("C_productname1","LB= title=\"","RB=\" class=","ord=6","LAST");
	
	
	web_url("index.php_4", 
		"URL=http://{P_baseurl}/Shop/index.php?route=product/search&sort=p.price&order=ASC&search={P_search_random}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{P_baseurl}/Shop/index.php?route=product/search&search={P_search_random}", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("t03_sort price low to hight",2);

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
		"ITEMDATA", 
		"Name=product_id", "Value=58", "ENDITEM", 
		"LAST");

	lr_end_transaction("t_04 add to wishlist",2);

	lr_think_time(3);

	lr_think_time(31);
	}
	if(i%2==0)
	{
	lr_start_transaction("t05_sort price high to low");
	web_reg_find("Text=Products","SaveCount=count_5","LAST");
	web_reg_save_param("C_productname2","LB= title=\"","RB=\" class=\"","ord=5","LAST");
	
	web_reg_save_param("C_price","LB=Ex Tax: $","RB=</span>","ord=1","LAST");
	
	web_reg_save_param("C_productid2","LB=product&amp;product_id=","RB=&amp","LAST");
	web_url("index.php_6", 
		"URL=http://{P_baseurl}/Shop/index.php?route=product/search&sort=p.price&order=DESC&search={P_search_random}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{P_baseurl}/Shop/index.php?route=product/search&sort=p.price&order=ASC&search={P_search_random}", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("t05_sort price high to low",2);

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
		"LAST");

	lr_end_transaction("t06_select in sort by",2);

	lr_think_time(58);
	}

	lr_start_transaction("t07_select product");
    web_reg_find("Text=Products","SaveCount=count_7","LAST");
	 
# 423 "Action.c"

	web_url("index.php_8", 
		"URL=http://{P_baseurl}/Shop/index.php?route=product/product/review&product_id={C_productid1}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{P_baseurl}/Shop/index.php?route=product/product&product_id=58&search={P_search_random}&sort={P_sort_random}", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		"LAST");

	lr_think_time(4);

	web_url("sh.f48a1a04fe8dbf021b4cda1d.html", 
		"URL=https://s7.addthis.com/static/sh.f48a1a04fe8dbf021b4cda1d.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{P_baseurl}/", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("sh.f48a1a04fe8dbf021b4cda1d.html_2", 
		"URL=https://s7.addthis.com/static/sh.f48a1a04fe8dbf021b4cda1d.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{P_baseurl}/", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("shares.json", 
		"URL=https://api-public.addthis.com/url/shares.json?url=http%3A%2F%2F{P_baseurl}%2FShop%2Findex.php%3Froute%3Dproduct%2Fproduct%26product_id%3D58&callback=_ate.cbs.sc_http3522518445shopindexphprouteproductproduct26productid580", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{P_baseurl}/", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("widget_iframe.bbd13993eb53d3a11ac08f5e8cf9d6a4.html", 
		"URL=https://platform.twitter.com/widgets/widget_iframe.bbd13993eb53d3a11ac08f5e8cf9d6a4.html?origin=http%3A%2F%2F{P_baseurl}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{P_baseurl}/", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		"LAST");

	lr_think_time(6);

	web_url("settings", 
		"URL=https://syndication.twitter.com/settings?session_id=93bb0caa3c1b848555a9d80eea68f3bc00aaffaf", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://platform.twitter.com/", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("tweet_button.bbd13993eb53d3a11ac08f5e8cf9d6a4.en.html", 
		"URL=https://platform.twitter.com/widgets/tweet_button.bbd13993eb53d3a11ac08f5e8cf9d6a4.en.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{P_baseurl}/", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("like.php", 
		"URL=https://www.facebook.com/v2.6/plugins/like.php?action=like&app_id=172525162793917&channel=https%3A%2F%2Fstaticxx.facebook.com%2Fx%2Fconnect%2Fxd_arbiter%2F%3Fversion%3D46%23cb%3Df243fac4f4fd3cc%26domain%3D{P_baseurl}%26is_canvas%3Dfalse%26origin%3Dhttp%253A%252F%252F{P_baseurl}%252Ff226072aa9bcaa4%26relation%3Dparent.parent&container_width=0&font=arial&height=25&href=http%3A%2F%2F{P_baseurl}%2FShop%2Findex.php%3Froute%3Dproduct%2Fproduct%26product_id%3D58&layout=button_count&locale=en_US"
		"&sdk=joey&send=false&share=false&show_faces=false&width=90", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{P_baseurl}/", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		"LAST");

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
		"LAST");
	 

	lr_end_transaction("t07_select product",2);

	lr_think_time(26);

	lr_start_transaction("t_08");
    web_reg_find("Text=Brand","SaveCount=count_10","LAST");
	 
# 538 "Action.c"

	web_url("sh.f48a1a04fe8dbf021b4cda1d.html_3", 
		"URL=https://s7.addthis.com/static/sh.f48a1a04fe8dbf021b4cda1d.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{P_baseurl}/", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("widget_iframe.bbd13993eb53d3a11ac08f5e8cf9d6a4.html_2", 
		"URL=https://platform.twitter.com/widgets/widget_iframe.bbd13993eb53d3a11ac08f5e8cf9d6a4.html?origin=http%3A%2F%2F{P_baseurl}", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=http://{P_baseurl}/", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("sh.f48a1a04fe8dbf021b4cda1d.html_4", 
		"URL=https://s7.addthis.com/static/sh.f48a1a04fe8dbf021b4cda1d.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{P_baseurl}/", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("index.php_10", 
		"URL=http://{P_baseurl}/Shop/index.php?route=product/product/review&product_id={C_productid2}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{P_baseurl}/Shop/index.php?route=product/product&product_id=33&search={P_search_random}&sort={P_sort_random}", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("shares.json_2", 
		"URL=https://api-public.addthis.com/url/shares.json?url=http%3A%2F%2F{P_baseurl}%2FShop%2Findex.php%3Froute%3Dproduct%2Fproduct%26product_id%3D33&callback=_ate.cbs.sc_http3522518445shopindexphprouteproductproduct26productid330", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{P_baseurl}/", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("settings_2", 
		"URL=https://syndication.twitter.com/settings?session_id=e9356286d88a5990c4fc3692d9434cef20168768", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://platform.twitter.com/", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("tweet_button.bbd13993eb53d3a11ac08f5e8cf9d6a4.en.html_2", 
		"URL=https://platform.twitter.com/widgets/tweet_button.bbd13993eb53d3a11ac08f5e8cf9d6a4.en.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=http://{P_baseurl}/", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		"LAST");
	 
# 728 "Action.c"

	lr_think_time(39);

	lr_start_transaction("t_09_select mini image");

	lr_end_transaction("t_09_select mini image",2);
	
	lr_paramarr_random("C_product_name_2");

	lr_end_transaction("t_08",2);

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
		"LAST");

	web_url("index.php_11", 
		"URL=http://{P_baseurl}/Shop/index.php?route=common/home", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{P_baseurl}/Shop/index.php?route=product/product&product_id={C_productid2}&search={P_search_random}&sort={P_sort_random}", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("t_10 homepage",2);

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
		"LAST");

	lr_end_transaction("t_11 logout",2);

	lr_think_time(3);
	
	
	lr_save_datetime("%c",0,"Date");
	file=fopen(filelocation,"a");
	
	
	
	fprintf(file,"Current Timestamp:%s\n",lr_eval_string("{Date}"));
	
	fprintf(file,"Search criteria : %s\n",lr_eval_string("{P_search_random}"));
	
	fprintf(file,"Search results first time : %s\n",lr_eval_string("{C_productname1}"));
	

	
	fprintf(file,"Selected Product name : %s\n",lr_eval_string("{C_productname2}"));
	
	fprintf(file,"Product price in :  %d\n", atoi(lr_eval_string("{C_price}"))*72);
 
	fclose(file);

	return 0;
}
# 5 "c:\\users\\dell\\documents\\vugen\\scripts\\case_study_1_final_output\\\\combined_Case_Study_1_Final_Output.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "c:\\users\\dell\\documents\\vugen\\scripts\\case_study_1_final_output\\\\combined_Case_Study_1_Final_Output.c" 2

