#include "clFileSystemEvent.h"

clFileSystemEvent::clFileSystemEvent(wxEventType commandType, int winid)
    : clCommandEvent(commandType, winid)
{
}

clFileSystemEvent::~clFileSystemEvent()
{
}

clFileSystemEvent::clFileSystemEvent(const clFileSystemEvent& event)
    : clCommandEvent(event)
{
    *this = event;
}

clFileSystemEvent& clFileSystemEvent::operator=(const clFileSystemEvent& src)
{
    clCommandEvent::operator=(src);
    
    // clFileSystemEvent specifics
    m_path = src.m_path;
    return *this;
}
