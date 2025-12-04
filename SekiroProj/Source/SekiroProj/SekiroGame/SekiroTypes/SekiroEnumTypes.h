#pragma once

UENUM()
enum class ESekiroConfirmType : uint8
{
	Yes,
	No,
};

UENUM()
enum class ESekiroValidType : uint8
{
	Valid,
	Invalid
};

UENUM()
enum class ESekiroSuccessType : uint8
{
	Successful,
	Failed
};