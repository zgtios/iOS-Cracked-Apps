//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMPOISearcher.h"

#import "QMSSearchDelegate.h"

@class MMPOISearchTupleTupleManager, NSString, QMSSearcher;

@interface MMTencentPOISearcher : MMPOISearcher <QMSSearchDelegate>
{
    QMSSearcher *_searcher;
    MMPOISearchTupleTupleManager *_processingRequests;
}

@property(retain, nonatomic) MMPOISearchTupleTupleManager *processingRequests; // @synthesize processingRequests=_processingRequests;
@property(retain, nonatomic) QMSSearcher *searcher; // @synthesize searcher=_searcher;
- (void).cxx_destruct;
- (id)init;
- (void)searchWithPoiSearchOption:(id)arg1 didReceiveResult:(id)arg2;
- (void)searchWithSearchOption:(id)arg1 didFailWithError:(id)arg2;
- (void)poiSearchWithBoundaryRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)poiSearchWithCityRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)notifySearchOption:(id)arg1 result:(id)arg2 error:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

