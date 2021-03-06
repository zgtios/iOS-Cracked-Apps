//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KTVCompetitionRecordInfo, KTVCompetitionVLL, KTVDayMVPInfo, KTVOpusBaseInfo, KTV_SongInfo;

@protocol KTVCompetitionVLLDelegate <NSObject>
- (void)sendFailOpusWithPkId:(int)arg1 opusId:(int)arg2;
- (void)competitionVLL:(KTVCompetitionVLL *)arg1 isSelectedTip:(_Bool)arg2;
- (void)competitionVLL:(KTVCompetitionVLL *)arg1 didScrollAtOffsetY:(double)arg2;
- (void)competitionVLL:(KTVCompetitionVLL *)arg1 didSelectedRankRowWithType:(unsigned long long)arg2;
- (void)competitionVLLDidSelectedSongForecast:(KTVCompetitionVLL *)arg1;
- (void)competitionVLL:(KTVCompetitionVLL *)arg1 didSelectedSongRowWithSongInfo:(KTV_SongInfo *)arg2;
- (void)competitionVLLDidClickShareButton:(KTVCompetitionVLL *)arg1;
- (void)competitionVLLDidClickMoreExcellentOpus:(KTVCompetitionVLL *)arg1;
- (void)competitionVLL:(KTVCompetitionVLL *)arg1 didSelectedOpusWithDayMvpInfo:(KTVDayMVPInfo *)arg2;
- (void)competitionVLL:(KTVCompetitionVLL *)arg1 didClickPkButtonWithSongInfo:(KTV_SongInfo *)arg2;
- (void)competitionVLLDidClickDeJudgeButton:(KTVCompetitionVLL *)arg1;
- (void)competitionVLL:(KTVCompetitionVLL *)arg1 didClickJudgeListWithRecordInfo:(KTVCompetitionRecordInfo *)arg2;
- (void)competitionVLL:(KTVCompetitionVLL *)arg1 didClickPlayButtonWithOpusInfo:(KTVOpusBaseInfo *)arg2;
- (void)competitionVLL:(KTVCompetitionVLL *)arg1 didClickJudgeHeadWithPlayerId:(unsigned long long)arg2;
- (void)competitionVLLDidClickRule:(KTVCompetitionVLL *)arg1;
@end

