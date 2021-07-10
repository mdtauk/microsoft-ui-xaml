// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "FontIconSource.h"

namespace winrt::Microsoft::UI::Xaml::Controls
{
    CppWinRTActivatableClassWithDPFactory(FontIconSource)
}

#include "FontIconSource.g.cpp"

GlobalDependencyProperty FontIconSourceProperties::s_FontFamilyProperty{ nullptr };
GlobalDependencyProperty FontIconSourceProperties::s_FontSizeProperty{ nullptr };
GlobalDependencyProperty FontIconSourceProperties::s_FontStyleProperty{ nullptr };
GlobalDependencyProperty FontIconSourceProperties::s_FontWeightProperty{ nullptr };
GlobalDependencyProperty FontIconSourceProperties::s_GlyphProperty{ nullptr };
GlobalDependencyProperty FontIconSourceProperties::s_IsTextScaleFactorEnabledProperty{ nullptr };
GlobalDependencyProperty FontIconSourceProperties::s_MirroredWhenRightToLeftProperty{ nullptr };

FontIconSourceProperties::FontIconSourceProperties()
{
    EnsureProperties();
}

void FontIconSourceProperties::EnsureProperties()
{
    IconSource::EnsureProperties();
    if (!s_FontFamilyProperty)
    {
        s_FontFamilyProperty =
            InitializeDependencyProperty(
                L"FontFamily",
                winrt::name_of<winrt::FontFamily>(),
                winrt::name_of<winrt::FontIconSource>(),
                false /* isAttached */,
                ValueHelper<winrt::FontFamily>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnFontFamilyPropertyChanged));
    }
    if (!s_FontSizeProperty)
    {
        s_FontSizeProperty =
            InitializeDependencyProperty(
                L"FontSize",
                winrt::name_of<double>(),
                winrt::name_of<winrt::FontIconSource>(),
                false /* isAttached */,
                ValueHelper<double>::BoxValueIfNecessary(20.0),
                winrt::PropertyChangedCallback(&OnFontSizePropertyChanged));
    }
    if (!s_FontStyleProperty)
    {
        s_FontStyleProperty =
            InitializeDependencyProperty(
                L"FontStyle",
                winrt::name_of<winrt::FontStyle>(),
                winrt::name_of<winrt::FontIconSource>(),
                false /* isAttached */,
                ValueHelper<winrt::FontStyle>::BoxValueIfNecessary(winrt::FontStyle::Normal),
                winrt::PropertyChangedCallback(&OnFontStylePropertyChanged));
    }
    if (!s_FontWeightProperty)
    {
        s_FontWeightProperty =
            InitializeDependencyProperty(
                L"FontWeight",
                winrt::name_of<winrt::FontWeight>(),
                winrt::name_of<winrt::FontIconSource>(),
                false /* isAttached */,
                ValueHelper<winrt::FontWeight>::BoxValueIfNecessary({ 400 }),
                winrt::PropertyChangedCallback(&OnFontWeightPropertyChanged));
    }
    if (!s_GlyphProperty)
    {
        s_GlyphProperty =
            InitializeDependencyProperty(
                L"Glyph",
                winrt::name_of<winrt::hstring>(),
                winrt::name_of<winrt::FontIconSource>(),
                false /* isAttached */,
                ValueHelper<winrt::hstring>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnGlyphPropertyChanged));
    }
    if (!s_IsTextScaleFactorEnabledProperty)
    {
        s_IsTextScaleFactorEnabledProperty =
            InitializeDependencyProperty(
                L"IsTextScaleFactorEnabled",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::FontIconSource>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxValueIfNecessary(true),
                winrt::PropertyChangedCallback(&OnIsTextScaleFactorEnabledPropertyChanged));
    }
    if (!s_MirroredWhenRightToLeftProperty)
    {
        s_MirroredWhenRightToLeftProperty =
            InitializeDependencyProperty(
                L"MirroredWhenRightToLeft",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::FontIconSource>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnMirroredWhenRightToLeftPropertyChanged));
    }
}

void FontIconSourceProperties::ClearProperties()
{
    s_FontFamilyProperty = nullptr;
    s_FontSizeProperty = nullptr;
    s_FontStyleProperty = nullptr;
    s_FontWeightProperty = nullptr;
    s_GlyphProperty = nullptr;
    s_IsTextScaleFactorEnabledProperty = nullptr;
    s_MirroredWhenRightToLeftProperty = nullptr;
    IconSource::ClearProperties();
}

void FontIconSourceProperties::OnFontFamilyPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::FontIconSource>();
    winrt::get_self<FontIconSource>(owner)->OnPropertyChanged(args);
}

void FontIconSourceProperties::OnFontSizePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::FontIconSource>();
    winrt::get_self<FontIconSource>(owner)->OnPropertyChanged(args);
}

void FontIconSourceProperties::OnFontStylePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::FontIconSource>();
    winrt::get_self<FontIconSource>(owner)->OnPropertyChanged(args);
}

void FontIconSourceProperties::OnFontWeightPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::FontIconSource>();
    winrt::get_self<FontIconSource>(owner)->OnPropertyChanged(args);
}

void FontIconSourceProperties::OnGlyphPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::FontIconSource>();
    winrt::get_self<FontIconSource>(owner)->OnPropertyChanged(args);
}

void FontIconSourceProperties::OnIsTextScaleFactorEnabledPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::FontIconSource>();
    winrt::get_self<FontIconSource>(owner)->OnPropertyChanged(args);
}

void FontIconSourceProperties::OnMirroredWhenRightToLeftPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::FontIconSource>();
    winrt::get_self<FontIconSource>(owner)->OnPropertyChanged(args);
}

void FontIconSourceProperties::FontFamily(winrt::FontFamily const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<FontIconSource*>(this)->SetValue(s_FontFamilyProperty, ValueHelper<winrt::FontFamily>::BoxValueIfNecessary(value));
    }
}

winrt::FontFamily FontIconSourceProperties::FontFamily()
{
    return ValueHelper<winrt::FontFamily>::CastOrUnbox(static_cast<FontIconSource*>(this)->GetValue(s_FontFamilyProperty));
}

void FontIconSourceProperties::FontSize(double value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<FontIconSource*>(this)->SetValue(s_FontSizeProperty, ValueHelper<double>::BoxValueIfNecessary(value));
    }
}

double FontIconSourceProperties::FontSize()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<FontIconSource*>(this)->GetValue(s_FontSizeProperty));
}

void FontIconSourceProperties::FontStyle(winrt::FontStyle const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<FontIconSource*>(this)->SetValue(s_FontStyleProperty, ValueHelper<winrt::FontStyle>::BoxValueIfNecessary(value));
    }
}

winrt::FontStyle FontIconSourceProperties::FontStyle()
{
    return ValueHelper<winrt::FontStyle>::CastOrUnbox(static_cast<FontIconSource*>(this)->GetValue(s_FontStyleProperty));
}

void FontIconSourceProperties::FontWeight(winrt::FontWeight const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<FontIconSource*>(this)->SetValue(s_FontWeightProperty, ValueHelper<winrt::FontWeight>::BoxValueIfNecessary(value));
    }
}

winrt::FontWeight FontIconSourceProperties::FontWeight()
{
    return ValueHelper<winrt::FontWeight>::CastOrUnbox(static_cast<FontIconSource*>(this)->GetValue(s_FontWeightProperty));
}

void FontIconSourceProperties::Glyph(winrt::hstring const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<FontIconSource*>(this)->SetValue(s_GlyphProperty, ValueHelper<winrt::hstring>::BoxValueIfNecessary(value));
    }
}

winrt::hstring FontIconSourceProperties::Glyph()
{
    return ValueHelper<winrt::hstring>::CastOrUnbox(static_cast<FontIconSource*>(this)->GetValue(s_GlyphProperty));
}

void FontIconSourceProperties::IsTextScaleFactorEnabled(bool value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<FontIconSource*>(this)->SetValue(s_IsTextScaleFactorEnabledProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
    }
}

bool FontIconSourceProperties::IsTextScaleFactorEnabled()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<FontIconSource*>(this)->GetValue(s_IsTextScaleFactorEnabledProperty));
}

void FontIconSourceProperties::MirroredWhenRightToLeft(bool value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<FontIconSource*>(this)->SetValue(s_MirroredWhenRightToLeftProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
    }
}

bool FontIconSourceProperties::MirroredWhenRightToLeft()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<FontIconSource*>(this)->GetValue(s_MirroredWhenRightToLeftProperty));
}
