void winrt::App1::implementation::MainWindow::myAdd(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    int va = stoi(to_string(a().Text()));
    int vb = stoi(to_string(b().Text()));
    int vc = va + vb;
    c().Text(to_hstring(vc));

}
