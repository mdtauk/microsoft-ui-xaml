﻿// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#pragma once

#include "pch.h"
#include "common.h"

#include "Breadcrumb.g.h"
#include "Breadcrumb.properties.h"

#include "SplitButton.h"
#include "BreadcrumbElementFactory.h"

#include "Vector.h"

class Breadcrumb :
    public ReferenceTracker<Breadcrumb, winrt::implementation::BreadcrumbT>,
    public BreadcrumbProperties
{

public:
    Breadcrumb();
    ~Breadcrumb() {}

    // IFrameworkElement
    void OnApplyTemplate();
    void OnPropertyChanged(const winrt::DependencyPropertyChangedEventArgs& args);

private:
    void OnElementPreparedEvent(winrt::ItemsRepeater sender, winrt::ItemsRepeaterElementPreparedEventArgs args);
    void OnElementClearingEvent(winrt::ItemsRepeater sender, winrt::ItemsRepeaterElementClearingEventArgs args);
    void OnRepeaterCollectionChanged(const winrt::IInspectable&, const winrt::IInspectable&);

    void UpdateItemsSource();
    void UpdateItemTemplate();

    winrt::IInspectable GenerateInternalItemsSource();

    winrt::ItemsRepeater::ElementPrepared_revoker m_itemRepeaterElementPreparedRevoker{};
    winrt::ItemsRepeater::ElementClearing_revoker m_itemRepeaterElementClearingRevoker{};
    winrt::ItemsSourceView::CollectionChanged_revoker m_itemsSourceChanged{};
    winrt::IObservableVector<winrt::IInspectable>::VectorChanged_revoker m_itemsSourceChanged2{};

    tracker_ref<winrt::INotifyCollectionChanged> m_notifyCollectionChanged{ this };
    winrt::event_token m_eventToken{ };
    tracker_ref<winrt::ItemsRepeater> m_breadcrumbItemRepeater { this };
    com_ptr<BreadcrumbElementFactory> m_breadcrumbElementFactory{ nullptr };
};
