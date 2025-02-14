// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License
// ============================================================================
// This is part of the Windows MIDI Services App API and should be used
// in your Windows application via an official binary distribution.
// Further information: https://github.com/microsoft/MIDI/
// ============================================================================

#pragma once


namespace Windows::Devices::Midi2::Internal
{
    HMODULE GetCurrentModule();

    class ResourceManager
    {
    private:

    public:
        static winrt::hstring GetHString(_In_ UINT resourceId);
    };
}