//
//  OpenGLView.h
//  OpenGL
//
//  Created by PVGCLIM01 on 2/1/16.
//  Copyright © 2016 Chuan Li. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import <OpenGLES/ES3/gl.h>
#import <OpenGLES/ES3/glext.h>


@interface OpenGLView : UIView{
    CAEAGLLayer* _eaglLayer;
    EAGLContext* _context;
    GLuint		 _colorRenderBuffer;
    
    GLuint _positionSlot;
    GLuint _colorSlot;
}

- (void)load;

@end
