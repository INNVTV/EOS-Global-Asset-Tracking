#include "Assets.hpp"

namespace GlobalAssetTracker
{
    using namespace eosio;
    using std::string;

    class Assets : public contract
    {
        using contract::contract;

        public:
            Assets():contracts(){}

            //@abi action
    }
}