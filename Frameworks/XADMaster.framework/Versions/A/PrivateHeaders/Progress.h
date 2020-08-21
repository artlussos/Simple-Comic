#import "CSBzip2Handle.h"
#import "CSHandle.h"
#import "CSStreamHandle.h"
#import "CSZlibHandle.h"

@interface CSHandle (Progress)

- (double)estimatedProgress;

@end

@interface CSZlibHandle (Progress)

- (double)estimatedProgress;

@end

@interface CSStreamHandle (progress)

- (double)estimatedProgress;

@end

@interface CSBzip2Handle (progress)

- (double)estimatedProgress;

@end
