//
//  Shader.fsh
//  CubeGL
//
//  Created by Vuthichai Ampornaramveth on 9/18/13.
//  Copyright 2013 __MyCompanyName__. All rights reserved.
//

varying lowp vec4 colorVarying;

void main()
{
    gl_FragColor = colorVarying;
}
