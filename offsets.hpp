#pragma once
#include <cstdint>

namespace offsets {
    inline constexpr uintptr_t FakeDataModelPointer = 0x8b54980;
    inline constexpr uintptr_t FakeDataModelToDataModel = 0x1f8;
    inline constexpr uintptr_t VisualEnginePointer = 0x858d208;

    inline constexpr uintptr_t LocalPlayer = 0x120;
    inline constexpr uintptr_t ModelInstance = 0x288;
    inline constexpr uintptr_t NameContainer = 0x70;
    inline constexpr uintptr_t Name = 0x8;
    inline constexpr uintptr_t ClassDescriptor = 0x18;
    inline constexpr uintptr_t ClassDescriptorToClassName = 0x8;
    inline constexpr uintptr_t Parent = 0x68;
    inline constexpr uintptr_t Children = 0x78;
    inline constexpr uintptr_t ChildrenEnd = 0x8;

    inline constexpr uintptr_t Primitive = 0x178;
    inline constexpr uintptr_t Position = 0xd4;
    inline constexpr uintptr_t CFrame = 0xb0;

    inline constexpr uintptr_t Team = 0x2c8;
    inline constexpr uintptr_t Health = 0x180;
    inline constexpr uintptr_t MaxHealth = 0x198;

    inline constexpr uintptr_t WalkSpeed = 0x1c0;
    inline constexpr uintptr_t WalkSpeedCheck = 0x39c;
    inline constexpr uintptr_t JumpPower = 0x194;

    inline constexpr uintptr_t viewmatrix = 0x1b0;
}
