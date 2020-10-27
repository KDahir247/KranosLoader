//
// Created by kdahi on 2020-09-24.
//

#ifndef KRANOS_CUBMAP_H
#define KRANOS_CUBMAP_H

#include <string>
#include <vector>

struct Cubemap{
    std::vector<std::string> Path;

};


//Presets
enum SkyboxTheme {THEME_SUNNY = 0, THEME_GLORIOUS = 1, THEME_SPACE = 2, THEME_CLOUDY = 3, THEME_DUSK = 4,
        THEME_OVERCAST = 5,THEME_CARTOON_NIGHT = 6, THEME_CARTOON_DAY = 7, THEME_NIGHT = 8,THEME_DEFAULT = 9};
static Cubemap Set_Style_SkyBox(SkyboxTheme theme){

    Cubemap skyBoxMap;
    skyBoxMap.Path.clear();

    switch (theme) {

        case THEME_SUNNY:
            skyBoxMap.Path = {
                    //POSX
                    "../../Images/Cubemap/Sunny/EpicBlueSunsetLeft.png",
                    //NEGX
                    "../../Images/Cubemap/Sunny/EpicBlueSunsetRight.png",
                    //POSY
                    "../../Images/Cubemap/Sunny/EpicBlueSunsetUp.png",
                    //NEGY
                    "../../Images/Cubemap/Sunny/EpicBlueSunsetDown.png",
                    //POSZ
                    "../../Images/Cubemap/Sunny/EpicBlueSunsetFront.png",
                    //NEGZ
                    "../../Images/Cubemap/Sunny/EpicBlueSunsetBack.png"
            };
            break;

        case THEME_GLORIOUS:
            skyBoxMap.Path = {
                    //POSX
                    "../../Images/Cubemap/Glorious/GloriousPinkRight.png",
                    //NEGX
                    "../../Images/Cubemap/Glorious/GloriousPinkLeft.png",
                    //POSY
                    "../../Images/Cubemap/Glorious/GloriousPinkTop.png",
                    //NEGY
                    "../../Images/Cubemap/Glorious/GloriousPinkDown.png",
                    //POSZ
                    "../../Images/Cubemap/Glorious/GloriousPinkFront.png",
                    //NEGZ
                    "../../Images/Cubemap/Glorious/GloriousPinkBack.png"
            };
            break;

        case THEME_SPACE:
            skyBoxMap.Path = {
                    //POSX
                    "../../Images/Cubemap/Space/AnotherPlanetRight.png",
                    //NEGX
                    "../../Images/Cubemap/Space/AnotherPlanetLeft.png",
                    //POSY
                    "../../Images/Cubemap/Space/AnotherPlanetUp.png",
                    //NEGY
                    "../../Images/Cubemap/Space/AnotherPlanetDown.png",
                    //POSZ
                    "../../Images/Cubemap/Space/AnotherPlanetFront.png",
                    //NEGZ
                    "../../Images/Cubemap/Space/AnotherPlanetBack.png"
            };
            break;

        case THEME_CLOUDY:
            skyBoxMap.Path = {
                    //POSX
                    "../../Images/Cubemap/Cloudy/SunSetRight.png",
                    //NEGX
                    "../../Images/Cubemap/Cloudy/SunSetLeft.png",
                    //POSY
                    "../../Images/Cubemap/Cloudy/SunSetUp.png",
                    //NEGY
                    "../../Images/Cubemap/Cloudy/SunSetDown.png",
                    //POSZ
                    "../../Images/Cubemap/Cloudy/SunSetFront.png",
                    //NEGZ
                    "../../Images/Cubemap/Cloudy/SunSetBack.png",
            };
            break;
        case THEME_DUSK:
            skyBoxMap.Path = {
                    //POSX
                    "../../Images/Cubemap/Dusk/DeepDuskRight.png",
                    //NEGX
                    "../../Images/Cubemap/Dusk/DeepDuskLeft.png",
                    //POSY
                    "../../Images/Cubemap/Dusk/DeepDuskUp.png",
                    //NEGY
                    "../../Images/Cubemap/Dusk/DeepDuskDown.png",
                    //POSZ
                    "../../Images/Cubemap/Dusk/DeepDuskFront.png",
                    //NEGZ
                    "../../Images/Cubemap/Dusk/DeepDuskBack.png",
            };
            break;
        case THEME_OVERCAST:
            skyBoxMap.Path = {
                    //POSX
                    "../../Images/Cubemap/OverCast/OvercastRight.png",
                    //NEGX
                    "../../Images/Cubemap/OverCast/OvercastLeft.png",
                    //POSY
                    "../../Images/Cubemap/OverCast/OvercastUp.png",
                    //NEGY
                    "../../Images/Cubemap/OverCast/OvercastDown.png",
                    //POSZ
                    "../../Images/Cubemap/OverCast/OvercastFront.png",
                    //NEGZ
                    "../../Images/Cubemap/OverCast/OvercastBack.png",
            };
            break;
        case THEME_CARTOON_NIGHT:
            skyBoxMap.Path = {

                    //POSX
                    "../../Images/Cubemap/CartoonNight/NightSkyRight.png",
                    //NEGX
                    "../../Images/Cubemap/CartoonNight/NightSkyLeft.png",
                    //POSY
                    "../../Images/Cubemap/CartoonNight/NightSkyUp.png",
                    //NEGY
                    "../../Images/Cubemap/CartoonNight/NightSkyDown.png",
                    //POSZ
                    "../../Images/Cubemap/CartoonNight/NightSkyFront.png",
                    //NEGZ
                    "../../Images/Cubemap/CartoonNight/NightSkyBack.png",


            };
            break;
        case THEME_CARTOON_DAY:
            skyBoxMap.Path = {
                    //POSX
                    "../../Images/Cubemap/CartoonDay/BlueSkyRight.png",
                    //NEGX
                    "../../Images/Cubemap/CartoonDay/BlueSkyLeft.png",
                    //POSY
                    "../../Images/Cubemap/CartoonDay/BlueSkyUp.png",
                    //NEGY
                    "../../Images/Cubemap/CartoonDay/BlueSkyDown.png",
                    //POSZ
                    "../../Images/Cubemap/CartoonDay/BlueSkyFront.png",
                    //NEGZ
                    "../../Images/Cubemap/CartoonDay/BlueSkyBack.png",
            };
            break;
        case THEME_NIGHT:
            skyBoxMap.Path = {
                    //POSX
                    "../../Images/Cubemap/Night/NightMoonBurstRight.png",
                    //NEGX
                    "../../Images/Cubemap/Night/NightMoonBurstLeft.png",
                    //POSY
                    "../../Images/Cubemap/Night/NightMoonBurstUp.png",
                    //NEGY
                    "../../Images/Cubemap/Night/NightMoonBurstDown.png",
                    //POSZ
                    "../../Images/Cubemap/Night/NightMoonBurstFront.png",
                    //NEGZ
                    "../../Images/Cubemap/Night/NightMoonBurstBack.png",
            };
            break;
        default:
            skyBoxMap.Path = {
                    //POSX
                    "../../Images/Cubemap/Night/NightMoonBurstRight.png",
                    //NEGX
                    "../../Images/Cubemap/Night/NightMoonBurstLeft.png",
                    //POSY
                    "../../Images/Cubemap/Night/NightMoonBurstUp.png",
                    //NEGY
                    "../../Images/Cubemap/Night/NightMoonBurstDown.png",
                    //POSZ
                    "../../Images/Cubemap/Night/NightMoonBurstFront.png",
                    //NEGZ
                    "../../Images/Cubemap/Night/NightMoonBurstBack.png",
            };
            break;
    }

    return skyBoxMap;
}

#endif //KRANOS_CUBMAP_H
