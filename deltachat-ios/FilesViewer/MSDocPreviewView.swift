//
//  DocPreviewView.swift
//  SamplePDF
//
//  Created by Nilesh Yerunkar on 08/07/25.
//
import SwiftUI
import QuickLook

struct MSDocPreviewView: UIViewControllerRepresentable {
    let url: URL

    func makeCoordinator() -> Coordinator {
        Coordinator()
    }

    func makeUIViewController(context: Context) -> QLPreviewController {
        let controller = QLPreviewController()
        controller.dataSource = context.coordinator
        context.coordinator.previewItem = url as QLPreviewItem
        return controller
    }

    func updateUIViewController(_ uiViewController: QLPreviewController, context: Context) {
        // No update needed
    }

    class Coordinator: NSObject, QLPreviewControllerDataSource {
        var previewItem: QLPreviewItem?

        func numberOfPreviewItems(in controller: QLPreviewController) -> Int {
            return previewItem == nil ? 0 : 1
        }

        func previewController(_ controller: QLPreviewController, previewItemAt index: Int) -> QLPreviewItem {
            return previewItem!
        }
    }
}

