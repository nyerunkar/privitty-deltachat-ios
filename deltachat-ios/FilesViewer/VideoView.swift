//
//  VideoView.swift
//  SamplePDF
//
//  Created by Nilesh Yerunkar on 08/07/25.
//

import SwiftUI

struct VideoView: View {
    var body: some View {
        if let url = Bundle.main.url(forResource: "vdo", withExtension: "mp4") {
            VideoPlayerView(videoURL: url)
                .edgesIgnoringSafeArea(.all)
        } else {
            Text("Video not found")
        }
    }
}
