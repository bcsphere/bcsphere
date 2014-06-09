/*
 Copyright 2013-2014 JUMA Technology
 
 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at
 
 http://www.apache.org/licenses/LICENSE-2.0
 
 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

#import <Cordova/CDVViewController.h>
#import <Cordova/CDVCommandDelegateImpl.h>
#import <Cordova/CDVCommandQueue.h>

@interface BCWebViewController : CDVViewController
{
    BOOL isFirstView;
    BOOL isExistBackground;
    NSMutableDictionary *deviceInfo;
}
@property (nonatomic, assign) BOOL isFirstView;
@property (nonatomic, assign) BOOL isExistBackground;
@property (nonatomic, strong) NSMutableDictionary *deviceInfo;
@end
