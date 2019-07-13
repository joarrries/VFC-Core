#ifndef REWARD_H
#define REWARD_H

// For compile time, is this going to be a client or a reward-paying masternode?
#define MASTER_NODE 0

// How often to pay rewards qRand(540, 660)
#define REWARD_INTERVAL 20

// How often to ping the peer requesting a reward address during their reward interval period
#define REWARD_RETRY_INTERVAL 3

//How many v the currency inflates by on each transaction
#define INFLATION_TAX 1000

// Reward Command
const char reward_command[]="coin dDWmPjoUtMyvL7gtQwJxpFcE1VHCdY1ahVZpcFCSUfuK%s %u privatekey_removed > /dev/null";

#endif
