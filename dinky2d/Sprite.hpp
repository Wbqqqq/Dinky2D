//
//  Sprite.hpp
//  dinky2d
//
//  Created by Vincent Yao on 2017/7/16.
//  Copyright © 2017年 ookcode. All rights reserved.
//

#ifndef Sprite_hpp
#define Sprite_hpp

#include "Node.hpp"
#include "TextureCache.hpp"

namespace Dinky {
    
    class Sprite : public Node {
    public:
        Sprite(const std::string& filePath);
        virtual ~Sprite() override;
        virtual void updateVertices() override;
        virtual void draw(Renderer* renderer, glm::mat4 &transform) override;
        
    private:
        void refresh();
        
        Texture* _texture = nullptr;
        Triangles _triangles;
    };
    
    
}

#endif /* Sprite_hpp */
