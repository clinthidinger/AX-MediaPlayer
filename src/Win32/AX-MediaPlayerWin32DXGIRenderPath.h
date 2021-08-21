//
//  AX-MediaPlayerWin32DXGIRenderPath.h
//  AX-MediaPlayer
//
//  Created by Andrew Wright on 17/08/21.
//  (c) 2021 AX Interactive
//

#pragma once

#include "AX-MediaPlayerWin32Impl.h"

namespace AX::Video
{
    class DXGIRenderPath : public MediaPlayer::Impl::RenderPath
    {
    public:

        DXGIRenderPath ( MediaPlayer::Impl & owner, const ci::DataSourceRef & source, uint32_t flags );

        bool ProcessFrame ( ) override;
        bool InitializeRenderTarget ( const ci::ivec2 & size ) override;
    protected:

    };
}