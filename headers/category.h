/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** category
*/

#ifndef CATEGORY_H_
    #define CATEGORY_H_

    static char *OBJ[8] = {
        "object/DamagePotion.png",
        "object/Pillow.png",
        "object/Pickaxe.png",
        "object/LighterOn.png",
        "object/Lintern.png",
        "object/LinternOld.png",
        "object/Potato.png",
        "object/Coin.png"
    };

    static char *CHAR_OBJ[8] = {
        "Potion rouge",
        "Drap doux",
        "Petite pioche",
        "Briquet",
        "Lampe-torche",
        "Lanterne",
        "Patate pourrie",
        "Piece en or"
    };

    static char *STAT_OBJ[8] = {
        "other/stat_potion.png",
        "other/stat_drap.png",
        "other/stat_pioche.png",
        "other/stat_briquet.png",
        "other/stat_lampe-torche.png",
        "other/stat_lanterne.png",
        "other/stat_patate.png",
        "other/stat_piece.png"
    };

    static char *BUTTON[18] = {
        "button/Pause1.png", "button/Pause2.png", "button/Pause3.png",
        "button/Inventory1.png", "button/Inventory2.png",
        "button/Inventory3.png",
        "button/Close1.png", "button/Close2.png", "button/Close3.png",
        "button/long_button.png", "button/long_button_idle.png",
        "button/long_button_pressed.png", "button/minus.png",
        "button/minus_idle.png", "button/minus_pressed.png",
        "button/plus.png", "button/plus_idle.png", "button/plus_pressed.png"
    };

    static char *NPC[18] = {
        "NPC/Alchemist_idle.png", "NPC/Alchemist_walk.png",
        "NPC/Barmaid_idle.png", "NPC/Barmaid_walk.png",
        "NPC/Bartender_idle.png", "NPC/Bartender_walk.png",
        "NPC/Blacksmith_idle.png", "NPC/Blacksmith_walk.png",
        "NPC/Farmer_idle.png", "NPC/Farmer_walk.png",
        "NPC/Fisherman_idle.png", "NPC/Fisherman_walk.png",
        "NPC/Kid_idle.png", "NPC/Kid_walk.png",
        "NPC/Merchant_idle.png", "NPC/Merchant_walk.png",
        "NPC/Timmy_idle.png", "NPC/Timmy_walk.png"
    };

    static char *BAT[9] = {
        "enemies/Bat 01_idle.png", "enemies/Bat 01_fly.png",
        "enemies/Bat 01_die.png",
        "enemies/Bat 02_idle.png", "enemies/Bat 02_fly.png",
        "enemies/Bat 02_die.png",
        "enemies/Bat 03_idle.png", "enemies/Bat 03_fly.png",
        "enemies/Bat 03_die.png"
    };

    static char *GHOST[9] = {
        "enemies/Ghost 01_idle.png", "enemies/Ghost 01_move.png",
        "enemies/Ghost 01_die.png",
        "enemies/Ghost 02_idle.png", "enemies/Ghost 02_move.png",
        "enemies/Ghost 02_die.png",
        "enemies/Ghost 03_idle.png", "enemies/Ghost 03_move.png",
        "enemies/Ghost 03_die.png"
    };

    static char *SKELETON[9] = {
        "enemies/Skeleton 01_idle.png", "enemies/Skeleton 01_walk.png",
        "enemies/Skeleton 01_die.png",
        "enemies/Skeleton 02_idle.png", "enemies/Skeleton 02_walk.png",
        "enemies/Skeleton 02_die.png",
        "enemies/Skeleton 03_idle.png", "enemies/Skeleton 03_walk.png",
        "enemies/Skeleton 03_die.png"
    };

    static char *ZOMBIE[9] = {
        "enemies/Zombie 01_idle.png", "enemies/Zombie 01_walk.png",
        "enemies/Zombie 01_die.png",
        "enemies/Zombie 02_idle.png", "enemies/Zombie 02_walk.png",
        "enemies/Zombie 02_die.png",
        "enemies/Zombie 03_idle.png", "enemies/Zombie 03_walk.png",
        "enemies/Zombie 03_die.png"
    };

    static char *VAMPIRE[6] = {
        "enemies/Vampire 01_idle.png", "enemies/Vampire 01_walk.png",
        "enemies/Vampire 01_die.png",
        "enemies/Vampire 02_idle.png", "enemies/Vampire 02_walk.png",
        "enemies/Vampire 02_die.png"
    };

    static char *WITCH[3] = {
        "enemies/Witch_idle.png", "enemies/Witch_move.png",
        "enemies/Witch_die.png"
    };

    static char *CLOWN[3] = {
        "enemies/Clown_idle.png", "enemies/Clown_walk.png",
        "enemies/Clown_die.png"
    };

    static char *GRIM[3] = {
        "enemies/Grim Reaper_idle.png", "enemies/Grim Reaper_move.png",
        "enemies/Grim Reaper_die.png"
    };

#endif /* !CATEGORY_H_ */
