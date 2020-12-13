typedef long data_t;

/* Create abstract data type for vector */
typedef struct {
	long len;
	data_t *data;
} vec_rec, *vec_ptr;

extern vec_ptr new_vec(long len);
extern int get_vec_element(vec_ptr v, long index, data_t *dest);
extern long vec_length(vec_ptr v);
extern void free_vec(vec_ptr v);
extern data_t *get_vec_start(vec_ptr v);