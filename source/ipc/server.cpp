#include "server.hpp"

#include "sl_service.hpp"

namespace efl::ipc {

    Server::Server() {
        R_ABORT_UNLESS(m_serverManager.RegisterServer<SlService>(SlService::SERVICE_NAME, EIFFEL_SERVICE_MAX_SESSIONS));
    }

};  // namespace efl::ipc
