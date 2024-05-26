#ifndef POLYCLINIC_SERVER_SERVER_CONTEXTHANDLER_VIEW_CONTEXTHANDLERINTERFACE_HPP
#define POLYCLINIC_SERVER_SERVER_CONTEXTHANDLER_VIEW_CONTEXTHANDLERINTERFACE_HPP

#include "IContextHandlerInterface.hpp"

namespace server::context_handler::view {

class ContextHandlerInterface : public IContextHandlerInterface {
public:
    void request_to_open_uri(std::string uri) override;

private:
};

}   // !server::context_handler::view;

#endif  // !POLYCLINIC_SERVER_SERVER_CONTEXTHANDLER_VIEW_CONTEXTHANDLERINTERFACE_HPP;