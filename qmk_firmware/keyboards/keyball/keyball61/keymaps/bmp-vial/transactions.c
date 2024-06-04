#include "transactions.h"

bool transaction_rpc_exec(int8_t transaction_id, uint8_t initiator2target_buffer_size, const void *initiator2target_buffer, uint8_t target2initiator_buffer_size, void *target2initiator_buffer) { return true; }

// void transaction_rpc_send(transaction_id, initiator2target_buffer_size, initiator2target_buffer) transaction_rpc_exec(transaction_id, initiator2target_buffer_size, initiator2target_buffer, 0, NULL) {}
void transaction_register_rpc(int8_t transaction_id, slave_callback_t callback) {}