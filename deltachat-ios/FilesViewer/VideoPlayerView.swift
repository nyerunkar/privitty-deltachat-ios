//
//  VideoPlayerView.swift
//  SamplePDF
//
//  Created by Nilesh Yerunkar on 08/07/25.
//
import SwiftUI
import AVKit

struct VideoPlayerView: View {
    let videoURL: URL

    var body: some View {
        VideoPlayer(player: AVPlayer(url: videoURL))
            .aspectRatio(contentMode: .fit)
            .onAppear {
                // Optional autoplay
                AVPlayer(url: videoURL).play()
            }
    }
}
