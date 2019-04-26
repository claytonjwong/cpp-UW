#include "Failure.h"
#include <utility>

Failure::Failure(
    std::string theCondition,
    std::string theFileName,
    long theLineNumber)
    : condition(std::move(theCondition)),
    fileName(std::move(theFileName)),
    lineNumber(theLineNumber)
{
}

Failure::Failure(
    const std::wstring& theCondition,
    std::string theFileName,
    long theLineNumber)
    : condition(theCondition.begin(), theCondition.end()),
    fileName(std::move(theFileName)),
    lineNumber(theLineNumber)
{
}

std::ostream& operator<<(
    std::ostream& stream,
    Failure& failure)
{
    stream << std::endl
           << failure.fileName
           << "(" << failure.lineNumber << ") : "
           << "Failure: " << failure.condition;
    return stream;
}
