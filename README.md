# UE_Spectator-Screen-W-Dual-Monitor

## Description
Developed with Unreal Engine 5.3, this example project demonstrates how to create a second window in Unreal Engine using a UserWidget to control scene objects. The UserWidget includes buttons for object manipulation and a render target material that allows real-time viewing of scene changes.



## Setup
Open the DualScreen in the Level folder to review my settings. To use it in a custom level, follow these instructions:
<br/>
<br/>

### Custom widget & SceneCapture Setup
To set up a material for use in a UserWidget to monitor objects in the scene in real time, follow these steps:
1. Create a `UTextureRenderTarget2D`
2. Add a `SceneCapture2D` to the scene.
3. In the `SceneCapture2D`'s Detail Panel, set the `TextureTarget` to the `UTextureRenderTarget2D` you just created.
4. Create a new material.
5. In the material's Detail Panel, set the `Material Domain` to `User Interface` and assign the `UTextureRenderTarget2D` you created to the Texture (as shown in the screenshot below).

![image](https://github.com/HsiyuanChu/UE_Spectator-Screen-W-Dual-Monitor/assets/137818387/a0dca31a-a59a-4bd4-bd59-4e688ff5d412)



6. In the UserWidget, add an `Image` component and set its `Brush Image` option to the material you created.

![image](https://github.com/HsiyuanChu/UE_Spectator-Screen-W-Dual-Monitor/assets/137818387/09c3e4fd-5168-41da-8340-c5b2aa1b66c8)


### Dual Screen Setup
Create a new scene and add the `DualScreenManager` to it. In the `DualScreenManager`'s Detail Panel, set the `SecondWindowWidgetSubclass` to the UserWidget you want to display on the second screen.


![image](https://github.com/HsiyuanChu/UE_Spectator-Screen-W-Dual-Monitor/assets/137818387/44dba22b-60d0-4ac4-ae39-e5f4bda654da)

