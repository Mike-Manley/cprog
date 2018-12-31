#ifndef _dict_h_
#define _dict_h_

struct list;

struct dict {
    struct list** bins;
    unsigned int nbins;
    int (*deleter)(void* user_data);
};


/* Initializes the supplied dictionary
 *
 * Parameters:
 *   D        Pointer to an allocated (but not yet initialized) dictionary
 *   nbins    Number of bins to use in dictionary
 *   deleter  (Optional) callback function specifying how to free
 *            dictionary items.  Can be NULL if undesired.
 *
 * Returns:
 *   Negative value on failure; 0 on success */
int dict_init(struct dict* D, unsigned int nbins, int (*deleter)(void* user_data));

/* Destroys a dictionary
 *
 * Cycles through the dictionary, removes each item, and uses the
 * supplied deleter callback to free each item's assocated user data.
 *
 * Parameters:
 *   D          Pointer to an initialized dictionary */
void dict_destroy(struct dict* D);

/* Inserts a new item into the dictionary
 *
 * Parameters:
 *   D          Pointer to an initialized dictionary
 *   key        String to use as the key
 *   user_data  Pointer to value data to associate with the key
 *
 * Returns:
 *   Negative value on failure; 0 on success */
int dict_insert(struct dict* D, char* key, void* user_data);

/* Deletes an item from the dictionary
 *
 * Removes the item specified by 'key' from the dictionary and uses
 * the deleter provided at dictionary initialization to free the items
 * associated value data
 *
 * Parameters:
 *   D          Pointer to an initialized dictionary
 *   key        String specifying the key of the item to delete
 *
 * Returns:
 *   Value returned by user specified 'deleter' callback function */
int dict_delete(struct dict* D, char* key);

/* Retrieve a dictionary item's value data
 *
 * Returns the specified item's value data, but does not remove the
 * associated item from the dictionary
 *
 * Parameters:
 *   D          Pointer to an initialized dictionary
 *   key        String specifying the key of the item to retrieve
 *
 * Returns:
 *   Pointer to 'user_data' associated with 'key' on success; NULL
 *   if the specified 'key' does not exist in the dictionary */
void* dict_peek(struct dict* D, char* key);

/* Pops a dictionary item
 *
 * Returns the specified item's value data, and removes the
 * item from the dictionary
 *
 * Parameters:
 *   D          Pointer to an initialized dictionary
 *   key        String specifying the key of the item to retrieve
 *
 * Returns:
 *   Pointer to 'user_data' associated with 'key' on success; NULL
 *   if the specified 'key' does not exist in the dictionary */
void* dict_pop(struct dict* D, char* key);

/* Counts the number of dictionary items
 *
 * Parameters:
 *   D          Pointer to an initialized dictionary
 *
 * Returns:
 *   Total number of items in the specified dictionary */
unsigned long dict_count(struct dict* D);

#endif /* _dict_h_ */
