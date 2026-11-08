#pragma once
#include <cstdint>

namespace offsets {
    inline constexpr uintptr_t FakeDataModelPointer = 0x8eb6960;
    inline constexpr uintptr_t FakeDataModelToDataModel = 0x1f8;
    inline constexpr uintptr_t VisualEnginePointer = 0x8942e38;

    inline constexpr uintptr_t LocalPlayer = 0x118;
    inline constexpr uintptr_t ModelInstance = 0x2a0;
    inline constexpr uintptr_t NameContainer = 0x68;
    inline constexpr uintptr_t Name = 0x0;
    inline constexpr uintptr_t ClassDescriptor = 0x18;
    inline constexpr uintptr_t ClassDescriptorToClassName = 0x8;
    inline constexpr uintptr_t Parent = 0x60;
    inline constexpr uintptr_t Children = 0x70;
    inline constexpr uintptr_t ChildrenEnd = 0x8;

    inline constexpr uintptr_t Primitive = 0x178;
    inline constexpr uintptr_t Position = 0xd4;
    inline constexpr uintptr_t CFrame = 0xb0;

    inline constexpr uintptr_t Team = 0x2e0;
    inline constexpr uintptr_t Health = 0x184;
    inline constexpr uintptr_t MaxHealth = 0x19c;

    inline constexpr uintptr_t WalkSpeed = 0x1c4;
    inline constexpr uintptr_t WalkSpeedCheck = 0x39c;
    inline constexpr uintptr_t JumpPower = 0x198;

    inline constexpr uintptr_t viewmatrix = 0x1b0;
}
