//
//  ContentView.swift
//  SamplePDF
//
//  Created by Nilesh Yerunkar on 08/07/25.
//

import SwiftUI
import PDFKit

struct PDFKitView: UIViewRepresentable {
    let url: URL

    func makeUIView(context: Context) -> PDFView {
        let pdfView = PDFView()
        pdfView.autoScales = true
        pdfView.document = PDFDocument(url: url)
        return pdfView
    }

    func updateUIView(_ pdfView: PDFView, context: Context) {}
}

struct PDFViewer: View {
    let url: URL?
    var body: some View {
        if let url = url {
            PDFKitView(url: url)
                .edgesIgnoringSafeArea(.all)
        } else {
            Text("PDF not found.")
        }
    }
}
