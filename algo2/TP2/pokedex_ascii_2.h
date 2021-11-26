/**
* The ASCII arts were extracted from:
*  - http://www.fiikus.net/?pokedex
*  - http://www.world-of-nintendo.com/pictures/text/
* And also generated with:
*  - http://www.text-image.com
*/

#ifndef __POKE_IMG__
#define __POKE_IMG__

#include <stdio.h>

#define ESPACIO "                                                                                                                                               "
#define UP "\033[F"
static const int MAX_NOMBRE = 100;

int encontrar_n_pokedex(char nombre[MAX_NOMBRE]){

    if(strcmp("Bulbasaur", nombre) == 0){
        return 2   - 1;
    }
    else if(strcmp("Ivysaur", nombre) == 0){
        return 3   - 1;
    }
    else if(strcmp("Venusaur", nombre) == 0){
        return 4   - 1;
    }
    else if(strcmp("Charmander", nombre) == 0){
        return 5   - 1;
    }
    else if(strcmp("Charmeleon", nombre) == 0){
        return 6   - 1;
    }
    else if(strcmp("Charizard", nombre) == 0){
        return 7   - 1;
    }
    else if(strcmp("Squirtle", nombre) == 0){
        return 8   - 1;
    }
    else if(strcmp("Wartortle", nombre) == 0){
        return 9   - 1;
    }
    else if(strcmp("Blastoise", nombre) == 0){
        return 10  - 1;
    }
    else if(strcmp("Caterpie", nombre) == 0){
        return 11  - 1;
    }
    else if(strcmp("Metapod", nombre) == 0){
        return 12  - 1;
    }
    else if(strcmp("Butterfree", nombre) == 0){
        return 13  - 1;
    }
    else if(strcmp("Weedle", nombre) == 0){
        return 14  - 1;
    }
    else if(strcmp("Kakuna", nombre) == 0){
        return 15  - 1;
    }
    else if(strcmp("Beedrill", nombre) == 0){
        return 16  - 1;
    }
    else if(strcmp("Pidgey", nombre) == 0){
        return 17  - 1;
    }
    else if(strcmp("Pidgeotto", nombre) == 0){
        return 18  - 1;
    }
    else if(strcmp("Pidgeot", nombre) == 0){
        return 19  - 1;
    }
    else if(strcmp("Rattata", nombre) == 0){
        return 20  - 1;
    }
    else if(strcmp("Raticate", nombre) == 0){
        return 21  - 1;
    }
    else if(strcmp("Spearow", nombre) == 0){
        return 22  - 1;
    }
    else if(strcmp("Fearow", nombre) == 0){
        return 23  - 1;
    }
    else if(strcmp("Ekans", nombre) == 0){
        return 24  - 1;
    }
    else if(strcmp("Arbok", nombre) == 0){
        return 25  - 1;
    }
    else if(strcmp("Pikachu", nombre) == 0){
        return 26  - 1;
    }
    else if(strcmp("Raichu", nombre) == 0){
        return 27  - 1;
    }
    else if(strcmp("Sandshrew", nombre) == 0){
        return 28  - 1;
    }
    else if(strcmp("Sandslash", nombre) == 0){
        return 29  - 1;
    }
    else if(strcmp("Nidoran♀", nombre) == 0){
        return 30  - 1;
    }
    else if(strcmp("Nidorina", nombre) == 0){
        return 31  - 1;
    }
    else if(strcmp("Nidoqueen", nombre) == 0){
        return 32  - 1;
    }
    else if(strcmp("Nidoran♂", nombre) == 0){
        return 33  - 1;
    }
    else if(strcmp("Nidorino", nombre) == 0){
        return 34  - 1;
    }
    else if(strcmp("Nidoking", nombre) == 0){
        return 35  - 1;
    }
    else if(strcmp("Clefairy", nombre) == 0){
        return 36  - 1;
    }
    else if(strcmp("Clefable", nombre) == 0){
        return 37  - 1;
    }
    else if(strcmp("Vulpix", nombre) == 0){
        return 38  - 1;
    }
    else if(strcmp("Ninetales", nombre) == 0){
        return 39  - 1;
    }
    else if(strcmp("Jigglypuff", nombre) == 0){
        return 40  - 1;
    }
    else if(strcmp("Wigglytuff", nombre) == 0){
        return 41  - 1;
    }
    else if(strcmp("Zubat", nombre) == 0){
        return 42  - 1;
    }
    else if(strcmp("Golbat", nombre) == 0){
        return 43  - 1;
    }
    else if(strcmp("Oddish", nombre) == 0){
        return 44  - 1;
    }
    else if(strcmp("Gloom", nombre) == 0){
        return 45  - 1;
    }
    else if(strcmp("Vileplume", nombre) == 0){
        return 46  - 1;
    }
    else if(strcmp("Paras", nombre) == 0){
        return 47  - 1;
    }
    else if(strcmp("Parasect", nombre) == 0){
        return 48  - 1;
    }
    else if(strcmp("Venonat", nombre) == 0){
        return 49  - 1;
    }
    else if(strcmp("Venomoth", nombre) == 0){
        return 50  - 1;
    }
    else if(strcmp("Diglett", nombre) == 0){
        return 51  - 1;
    }
    else if(strcmp("Dugtrio", nombre) == 0){
        return 52  - 1;
    }
    else if(strcmp("Meowth", nombre) == 0){
        return 53  - 1;
    }
    else if(strcmp("Persian", nombre) == 0){
        return 54  - 1;
    }
    else if(strcmp("Psyduck", nombre) == 0){
        return 55  - 1;
    }
    else if(strcmp("Golduck", nombre) == 0){
        return 56  - 1;
    }
    else if(strcmp("Mankey", nombre) == 0){
        return 57  - 1;
    }
    else if(strcmp("Primeape", nombre) == 0){
        return 58  - 1;
    }
    else if(strcmp("Growlithe", nombre) == 0){
        return 59  - 1;
    }
    else if(strcmp("Arcanine", nombre) == 0){
        return 60  - 1;
    }
    else if(strcmp("Poliwag", nombre) == 0){
        return 61  - 1;
    }
    else if(strcmp("Poliwhirl", nombre) == 0){
        return 62  - 1;
    }
    else if(strcmp("Poliwrath", nombre) == 0){
        return 63  - 1;
    }
    else if(strcmp("Abra", nombre) == 0){
        return 64  - 1;
    }
    else if(strcmp("Kadabra", nombre) == 0){
        return 65  - 1;
    }
    else if(strcmp("Alakazam", nombre) == 0){
        return 66  - 1;
    }
    else if(strcmp("Machop", nombre) == 0){
        return 67  - 1;
    }
    else if(strcmp("Machoke", nombre) == 0){
        return 68  - 1;
    }
    else if(strcmp("Machamp", nombre) == 0){
        return 69  - 1;
    }
    else if(strcmp("Bellsprout", nombre) == 0){
        return 70  - 1;
    }
    else if(strcmp("Weepinbell", nombre) == 0){
        return 71  - 1;
    }
    else if(strcmp("Victreebel", nombre) == 0){
        return 72  - 1;
    }
    else if(strcmp("Tentacool", nombre) == 0){
        return 73  - 1;
    }
    else if(strcmp("Tentacruel", nombre) == 0){
        return 74  - 1;
    }
    else if(strcmp("Geodude", nombre) == 0){
        return 75  - 1;
    }
    else if(strcmp("Graveler", nombre) == 0){
        return 76  - 1;
    }
    else if(strcmp("Golem", nombre) == 0){
        return 77  - 1;
    }
    else if(strcmp("Ponyta", nombre) == 0){
        return 78  - 1;
    }
    else if(strcmp("Rapidash", nombre) == 0){
        return 79  - 1;
    }
    else if(strcmp("Slowpoke", nombre) == 0){
        return 80  - 1;
    }
    else if(strcmp("Slowbro", nombre) == 0){
        return 81  - 1;
    }
    else if(strcmp("Magnemite", nombre) == 0){
        return 82  - 1;
    }
    else if(strcmp("Magneton", nombre) == 0){
        return 83  - 1;
    }
    else if(strcmp("Farfetch'd", nombre) == 0){
        return 84  - 1;
    }
    else if(strcmp("Doduo", nombre) == 0){
        return 85  - 1;
    }
    else if(strcmp("Dodrio", nombre) == 0){
        return 86  - 1;
    }
    else if(strcmp("Seel", nombre) == 0){
        return 87  - 1;
    }
    else if(strcmp("Dewgong", nombre) == 0){
        return 88  - 1;
    }
    else if(strcmp("Grimer", nombre) == 0){
        return 89  - 1;
    }
    else if(strcmp("Muk", nombre) == 0){
        return 90  - 1;
    }
    else if(strcmp("Shellder", nombre) == 0){
        return 91  - 1;
    }
    else if(strcmp("Cloyster", nombre) == 0){
        return 92  - 1;
    }
    else if(strcmp("Gastly", nombre) == 0){
        return 93  - 1;
    }
    else if(strcmp("Haunter", nombre) == 0){
        return 94  - 1;
    }
    else if(strcmp("Gengar", nombre) == 0){
        return 95  - 1;
    }
    else if(strcmp("Onix", nombre) == 0){
        return 96  - 1;
    }
    else if(strcmp("Drowzee", nombre) == 0){
        return 97  - 1;
    }
    else if(strcmp("Hypno", nombre) == 0){
        return 98  - 1;
    }
    else if(strcmp("Krabby", nombre) == 0){
        return 99  - 1;
    }
    else if(strcmp("Kingler", nombre) == 0){
        return 100 - 1;
    }
    else if(strcmp("Voltorb", nombre) == 0){
        return 101 - 1;
    }
    else if(strcmp("Electrode", nombre) == 0){
        return 102 - 1;
    }
    else if(strcmp("Exeggcute", nombre) == 0){
        return 103 - 1;
    }
    else if(strcmp("Exeggutor", nombre) == 0){
        return 104 - 1;
    }
    else if(strcmp("Cubone", nombre) == 0){
        return 105 - 1;
    }
    else if(strcmp("Marowak", nombre) == 0){
        return 106 - 1;
    }
    else if(strcmp("Hitmonlee", nombre) == 0){
        return 107 - 1;
    }
    else if(strcmp("Hitmonchan", nombre) == 0){
        return 108 - 1;
    }
    else if(strcmp("Lickitung", nombre) == 0){
        return 109 - 1;
    }
    else if(strcmp("Koffing", nombre) == 0){
        return 110 - 1;
    }
    else if(strcmp("Weezing", nombre) == 0){
        return 111 - 1;
    }
    else if(strcmp("Rhyhorn", nombre) == 0){
        return 112 - 1;
    }
    else if(strcmp("Rhydon", nombre) == 0){
        return 113 - 1;
    }
    else if(strcmp("Chansey", nombre) == 0){
        return 114 - 1;
    }
    else if(strcmp("Tangela", nombre) == 0){
        return 115 - 1;
    }
    else if(strcmp("Kangaskhan", nombre) == 0){
        return 116 - 1;
    }
    else if(strcmp("Horsea", nombre) == 0){
        return 117 - 1;
    }
    else if(strcmp("Seadra", nombre) == 0){
        return 118 - 1;
    }
    else if(strcmp("Goldeen", nombre) == 0){
        return 119 - 1;
    }
    else if(strcmp("Seaking", nombre) == 0){
        return 120 - 1;
    }
    else if(strcmp("Staryu", nombre) == 0){
        return 121 - 1;
    }
    else if(strcmp("Starmie", nombre) == 0){
        return 122 - 1;
    }
    else if(strcmp("Mr. Mime", nombre) == 0){
        return 123 - 1;
    }
    else if(strcmp("Scyther", nombre) == 0){
        return 124 - 1;
    }
    else if(strcmp("Jynx", nombre) == 0){
        return 125 - 1;
    }
    else if(strcmp("Electabuzz", nombre) == 0){
        return 126 - 1;
    }
    else if(strcmp("Magmar", nombre) == 0){
        return 127 - 1;
    }
    else if(strcmp("Pinsir", nombre) == 0){
        return 128 - 1;
    }
    else if(strcmp("Tauros", nombre) == 0){
        return 129 - 1;
    }
    else if(strcmp("Magikarp", nombre) == 0){
        return 130 - 1;
    }
    else if(strcmp("Gyarados", nombre) == 0){
        return 131 - 1;
    }
    else if(strcmp("Lapras", nombre) == 0){
        return 132 - 1;
    }
    else if(strcmp("Ditto", nombre) == 0){
        return 133 - 1;
    }
    else if(strcmp("Eevee", nombre) == 0){
        return 134 - 1;
    }
    else if(strcmp("Vaporeon", nombre) == 0){
        return 135 - 1;
    }
    else if(strcmp("Jolteon", nombre) == 0){
        return 136 - 1;
    }
    else if(strcmp("Flareon", nombre) == 0){
        return 137 - 1;
    }
    else if(strcmp("Porygon", nombre) == 0){
        return 138 - 1;
    }
    else if(strcmp("Omanyte", nombre) == 0){
        return 139 - 1;
    }
    else if(strcmp("Omastar", nombre) == 0){
        return 140 - 1;
    }
    else if(strcmp("Kabuto", nombre) == 0){
        return 141 - 1;
    }
    else if(strcmp("Kabutops", nombre) == 0){
        return 142 - 1;
    }
    else if(strcmp("Aerodactyl", nombre) == 0){
        return 143 - 1;
    }
    else if(strcmp("Snorlax", nombre) == 0){
        return 144 - 1;
    }
    else if(strcmp("Articuno", nombre) == 0){
        return 145 - 1;
    }
    else if(strcmp("Zapdos", nombre) == 0){
        return 146 - 1;
    }
    else if(strcmp("Moltres", nombre) == 0){
        return 147 - 1;
    }
    else if(strcmp("Dratini", nombre) == 0){
        return 148 - 1;
    }
    else if(strcmp("Dragonair", nombre) == 0){
        return 149 - 1;
    }
    else if(strcmp("Dragonite", nombre) == 0){
        return 150 - 1;
    }
    else if(strcmp("Mewtwo", nombre) == 0){
        return 151 - 1;
    }
    else if(strcmp("Mew", nombre) == 0){
        return 152 - 1;
    }
    else{
        return 0;
    }
}


void print_pokemon_2(int n_pokemon) {
    switch(n_pokemon) {

case 0:
    printf(ESPACIO"(No hay sprite de este pokemon)\n");

    break;

case 1:
    printf(ESPACIO"                                           /\n");
    printf(ESPACIO"                        _,.------....___,.' ',.-.\n");
    printf(ESPACIO"                     ,-'          _,.--\"        |\n");
    printf(ESPACIO"                   ,'         _.-'              .\n");
    printf(ESPACIO"                  /   ,     ,'                   `\n");
    printf(ESPACIO"                 .   /     /                     ``.\n");
    printf(ESPACIO"                 |  |     .                       \\.\\\n");
    printf(ESPACIO"       ____      |___._.  |       __               \\ `.\n");
    printf(ESPACIO"     .'    `---\"\"       ``\"-.--\"'`  \\               .  \\\n");
    printf(ESPACIO"    .  ,            __               `              |   .\n");
    printf(ESPACIO"    `,'         ,-\"'  .               \\             |    L\n");
    printf(ESPACIO"   ,'          '    _.'                -._          /    |\n");
    printf(ESPACIO"  ,`-.    ,\".   `--'                      >.      ,'     |\n");
    printf(ESPACIO" . .'\\'   `-'       __    ,  ,-.         /  `.__.-      ,'\n");
    printf(ESPACIO" ||:, .           ,'  ;  /  / \\ `        `.    .      .'/\n");
    printf(ESPACIO" j|:D  \\          `--'  ' ,'_  . .         `.__, \\   , /\n");
    printf(ESPACIO"/ L:_  |                 .  \"' :_;                `.'.'\n");
    printf(ESPACIO".    \"\"'                  \"\"\"\"\"'                    V\n");
    printf(ESPACIO" `.                                 .    `.   _,..  `\n");
    printf(ESPACIO"   `,_   .    .                _,-'/    .. `,'   __  `\n");
    printf(ESPACIO"    ) \\`._        ___....----\"'  ,'   .'  \\ |   '  \\  .\n");
    printf(ESPACIO"   /   `. \"`-.--\"'         _,' ,'     `---' |    `./  |\n");
    printf(ESPACIO"  .   _  `\"\"'--.._____..--\"   ,             '         |\n");
    printf(ESPACIO"  | .\" `. `-.                /-.           /          ,\n");
    printf(ESPACIO"  | `._.'    `,_            ;  /         ,'          .\n");
    printf(ESPACIO" .'          /| `-.        . ,'         ,           ,\n");
    printf(ESPACIO" '-.__ __ _,','    '`-..___;-...__   ,.'\\ ____.___.'\n");
    printf(ESPACIO" `\"^--'..'   '-`-^-'\"--    `-^-'`.''\"\"\"\"\"`.,^.`.--' \n");
    printf(ESPACIO"\n");
    printf(ESPACIO"\n");

    break;

case 2:
    printf(ESPACIO"                               ,'\"`.,./.\n");
    printf(ESPACIO"                             ,'        Y',\"..\n");
    printf(ESPACIO"                           ,'           \\  | \\\n");
    printf(ESPACIO"                          /              . |  `\n");
    printf(ESPACIO"                         /               | |   \\\n");
    printf(ESPACIO"            __          .                | |    .\n");
    printf(ESPACIO"       _   \\  `. ---.   |                | j    |\n");
    printf(ESPACIO"      / `-._\\   `Y   \\  |                |.     |\n");
    printf(ESPACIO"     _`.    ``    \\   \\ |..              '      |,-'\"\"7,....\n");
    printf(ESPACIO"     l     '-.     . , `|  | , |`. , ,  /,     ,'    '/   ,'_,.-.\n");
    printf(ESPACIO"     `-..     `-.  : :     |/ `   ' \"\\,' | _  /          '-'    /___\n");
    printf(ESPACIO"      \\\"\"' __.,.-`.: :        /   /._    l'.,'\n");
    printf(ESPACIO"       `--,   _.-' `\".           /__ `'-.' '         .\n");
    printf(ESPACIO"       ,---..._,.--\"\"\"\"\"\"\"--.__..----,-.'   .  /    .'   ,.--\n");
    printf(ESPACIO"       |                          ,':| /    | /     ;.,-'--      ,.-\n");
    printf(ESPACIO"       |     .---.              .'  :|'     |/ ,.-='\"-.`\"`' _   -.'\n");
    printf(ESPACIO"       /    \\    /               `. :|--.  _L,\"---.._        \"----'\n");
    printf(ESPACIO"     ,' `.   \\ ,'           _,     `''   ``.-'       `-  -..___,'\n");
    printf(ESPACIO"    . ,.  .   `   __     .-'  _.-           `.     .__    \\\n");
    printf(ESPACIO"    |. |`        \"  ;   !   ,.  |             `.    `.`'---'\n");
    printf(ESPACIO"    ,| |C\\       ` /    | ,' |(]|            -. |-..--`\n");
    printf(ESPACIO"   /  \"'--'       '      /___|__]        `.  `- |`.\n");
    printf(ESPACIO"  .       ,'                   ,   /       .    `. \\\n");
    printf(ESPACIO"    \\                      .,-'  ,'         .     `-.\n");
    printf(ESPACIO"     x---..`.  -'  __..--'\"/\"\"\"\"\"  ,-.      |   |   |\n");
    printf(ESPACIO"    / \\--._'-.,.--'     _`-    _. ' /       |     -.|\n");
    printf(ESPACIO"   ,   .   `-..__ ...--'  _,.-' | `   ,.-.  ;   /  '|\n");
    printf(ESPACIO"  .  _,'         '\"-----\"\"      |    `   | /  ,'    ;\n");
    printf(ESPACIO"  |-'  .-.    `._               |     `._// ,'     /\n");
    printf(ESPACIO" _|    `-'   _,' \"`--.._________|        `,'    _ /.\n");
    printf(ESPACIO"//\\   ,-._.'\"/\\__,.   _,\"     /_\\__/`. /'.-.'.-/_,`-' \n");
    printf(ESPACIO"`-\"`\"' v'    `\"  `-`-\"              `-'`-`  `'\n");

    break;

case 3:
    printf(ESPACIO"                           _._       _,._\n");
    printf(ESPACIO"                        _.'   `. ' .'   _`.\n");
    printf(ESPACIO"                ,\"\"\"/`\"\"-.-.,/. ` V'\\-,`.,--/\"\"\".\"-..\n");
    printf(ESPACIO"              ,'    `...,' . ,\\-----._|     `.   /   \\\n");
    printf(ESPACIO"             `.            .`  -'`\"\" .._   :> `-'   `.\n");
    printf(ESPACIO"            ,'  ,-.  _,.-'| `..___ ,'   |'-..__   .._ L\n");
    printf(ESPACIO"           .    \\_ -'   `-'     ..      `.-' `.`-.'_ .|\n");
    printf(ESPACIO"           |   ,',-,--..  ,--../  `.  .-.    , `-.  ``.\n");
    printf(ESPACIO"           `.,' ,  |   |  `.  /'/,,.\\/  |    \\|   |\n");
    printf(ESPACIO"                `  `---'    `j   .   \\  .     '   j\n");
    printf(ESPACIO"              ,__`\"        ,'|`'\\_/`.'\\'        |\\-'-, _,.\n");
    printf(ESPACIO"       .--...`-. `-`. /    '- ..      _,    /\\ ,' .--\"'  ,'\".\n");
    printf(ESPACIO"     _'-\"\"-    --  _`'-.../ __ '.'`-^,_`-\"\"\"\"---....__  ' _,-`\n");
    printf(ESPACIO"   _.----`  _..--.'        |  \"`-..-\" __|'\"'         .\"\"-. \"\"'--.._\n");
    printf(ESPACIO"  /        '    /     ,  _.+-.'  ||._'   \"\"\"\". .          `     .__\\\n");
    printf(ESPACIO" `---    /        /  / j'       _/|..`  -. `-`\\ \\   \\  \\   `.  \\ `-..\n");
    printf(ESPACIO",\" _.-' /    /` ./  /`_|_,-\"   ','|       `. | -'`._,   L  \\ .  `.   |\n");
    printf(ESPACIO"`\"' /  /  / ,__...-----| _.,  ,'            `|----.._`-.|' |. .` ..  .\n");
    printf(ESPACIO"   /  '| /.,/   \\--.._ `-,' ,          .  '`.'  __,., '  ''``._ \\ \\`,'\n");
    printf(ESPACIO"  /_,'---  ,     \\`._,-` \\ //  / . \\    `._,  -`,  / / _   |   `-L -\n");
    printf(ESPACIO"   /       `.     ,  ..._ ' `_/ '| |\\ `._'       '-.'   `.,'     |\n");
    printf(ESPACIO"  '         /    /  ..   `.  `./ | ; `.'    ,\"\" ,.  `.    \\      |\n");
    printf(ESPACIO"   `.     ,'   ,'   | |\\  |       \"        |  ,'\\ |   \\    `    ,L\n");
    printf(ESPACIO"   /|`.  /    '     | `-| '                  /`-' |    L    `._/  \\\n");
    printf(ESPACIO"  / | .`|    |  .   `._.'                   `.__,'   .  |     |  (`\n");
    printf(ESPACIO" '-\"\"-'_|    `. `.__,._____     .    _,        ____ ,-  j     \".-'\"'\n");
    printf(ESPACIO"        \\      `-.  \\/.    `\"--.._    _,.---'\"\"\\/  \"_,.'     /-'\n");
    printf(ESPACIO"         )        `-._ '-.        `--\"      _.-'.-\"\"        `.\n");
    printf(ESPACIO"        ./            `,. `\".._________...\"\"_.-\"`.          _j\n");
    printf(ESPACIO"       /_\\.__,\"\".   ,.'  \"`-...________.---\"     .\".   ,.  / \\\n");
    printf(ESPACIO"              \\_/\"\"\"-'                           `-'--(_,`\"`-` \n");

    break;

case 4:
    printf(ESPACIO"              _.--\"\"`-..\n");
    printf(ESPACIO"            ,'          `.\n");
    printf(ESPACIO"          ,'          __  `.\n");
    printf(ESPACIO"         /|          \" __   \\\n");
    printf(ESPACIO"        , |           / |.   .\n");
    printf(ESPACIO"        |,'          !_.'|   |\n");
    printf(ESPACIO"      ,'             '   |   |\n");
    printf(ESPACIO"     /              |`--'|   |\n");
    printf(ESPACIO"    |                `---'   |\n");
    printf(ESPACIO"     .   ,                   |                       ,\".\n");
    printf(ESPACIO"      ._     '           _'  |                    , ' \\ `\n");
    printf(ESPACIO"  `.. `.`-...___,...---\"\"    |       __,.        ,`\"   L,|\n");
    printf(ESPACIO"  |, `- .`._        _,-,.'   .  __.-'-. /        .   ,    \\\n");
    printf(ESPACIO"-:..     `. `-..--_.,.<       `\"      / `.        `-/ |   .\n");
    printf(ESPACIO"  `,         \"\"\"\"'     `.              ,'         |   |  ',,\n");
    printf(ESPACIO"    `.      '            '            /          '    |'. |/\n");
    printf(ESPACIO"      `.   |              \\       _,-'           |       ''\n");
    printf(ESPACIO"        `._'               \\   '\"\\                .      |\n");
    printf(ESPACIO"           |                '     \\                `._  ,'\n");
    printf(ESPACIO"           |                 '     \\                 .'|\n");
    printf(ESPACIO"           |                 .      \\                | |\n");
    printf(ESPACIO"           |                 |       L              ,' |\n");
    printf(ESPACIO"           `                 |       |             /   '\n");
    printf(ESPACIO"            \\                |       |           ,'   /\n");
    printf(ESPACIO"          ,' \\               |  _.._ ,-..___,..-'    ,'\n");
    printf(ESPACIO"         /     .             .      `!             ,j'\n");
    printf(ESPACIO"        /       `.          /        .           .'/\n");
    printf(ESPACIO"       .          `.       /         |        _.'.'\n");
    printf(ESPACIO"        `.          7`'---'          |------\"'_.'\n");
    printf(ESPACIO"       _,.`,_     _'                ,''-----\"'\n");
    printf(ESPACIO"   _,-_    '       `.     .'      ,\\\n");
    printf(ESPACIO"   -\" /`.         _,'     | _  _  _.|\n");
    printf(ESPACIO"    \"\"--'---\"\"\"\"\"'        `' '! |! /\n");
    printf(ESPACIO"                            `\" \" -' \n");
    printf(ESPACIO"\n");
    printf(ESPACIO"\n");

    break;

case 5:
    printf(ESPACIO"                      ,-'`\\\n");
    printf(ESPACIO"                  _,\"'    j\n");
    printf(ESPACIO"           __....+       /               .\n");
    printf(ESPACIO"       ,-'\"             /               ; `-._.'.\n");
    printf(ESPACIO"      /                (              ,'       .'\n");
    printf(ESPACIO"     |            _.    \\             \\   ---._ `-.\n");
    printf(ESPACIO"     ,|    ,   _.'  Y    \\             `- ,'   \\   `.`.\n");
    printf(ESPACIO"     l'    \\ ,'._,\\ `.    .              /       ,--. l\n");
    printf(ESPACIO"  .,-        `._  |  |    |              \\       _   l .\n");
    printf(ESPACIO" /              `\"--'    /              .'       ``. |  )\n");
    printf(ESPACIO".\\    ,                 |                .        \\ `. '\n");
    printf(ESPACIO"`.                .     |                '._  __   ;. \\'\n");
    printf(ESPACIO"  `-..--------...'       \\                  `'  `-\"'.  \\\n");
    printf(ESPACIO"      `......___          `._                        |  \\\n");
    printf(ESPACIO"               /`            `..                     |   .\n");
    printf(ESPACIO"              /|                `-.                  |    L\n");
    printf(ESPACIO"             / |               \\   `._               .    |\n");
    printf(ESPACIO"           ,'  |,-\"-.   .       .     `.            /     |\n");
    printf(ESPACIO"         ,'    |     '   \\      |       `.         /      |\n");
    printf(ESPACIO"       ,'     /|       \\  .     |         .       /       |\n");
    printf(ESPACIO"     ,'      / |        \\  .    +          \\    ,'       .'\n");
    printf(ESPACIO"    .       .  |         \\ |     \\          \\_,'        / j\n");
    printf(ESPACIO"    |       |  L          `|      .          `        ,' '\n");
    printf(ESPACIO"    |    _. |   \\          /      |           .     .' ,'\n");
    printf(ESPACIO"    |   /  `|    \\        .       |  /        |   ,' .'\n");
    printf(ESPACIO"    |   ,-..\\     -.     ,        | /         |,.' ,'\n");
    printf(ESPACIO"    `. |___,`    /  `.   /`.       '          |  .'\n");
    printf(ESPACIO"      '-`-'     j     ` /.\"7-..../|          ,`-'\n");
    printf(ESPACIO"                |        .'  / _/_|          .\n");
    printf(ESPACIO"                `,       `\"'/\"'    \\          `.\n");
    printf(ESPACIO"                  `,       '.       `.         |\n");
    printf(ESPACIO"             __,.-'         `.        \\'       |\n");
    printf(ESPACIO"            /_,-'\\          ,'        |        _.\n");
    printf(ESPACIO"             |___.---.   ,-'        .-':,-\"`\\,' .\n");
    printf(ESPACIO"                  L,.--\"'           '-' |  ,' `-.\\\n");
    printf(ESPACIO"                                        `.' \n");

    break;

case 6:
    printf(ESPACIO"                 .\"-,.__\n");
    printf(ESPACIO"                 `.     `.  ,\n");
    printf(ESPACIO"              .--'  .._,'\"-' `.\n");
    printf(ESPACIO"             .    .'         `'\n");
    printf(ESPACIO"             `.   /          ,'\n");
    printf(ESPACIO"               `  '--.   ,-\"'\n");
    printf(ESPACIO"                `\"`   |  \\\n");
    printf(ESPACIO"                   -. \\, |\n");
    printf(ESPACIO"                    `--Y.'      ___.\n");
    printf(ESPACIO"                         \\     L._, \\\n");
    printf(ESPACIO"               _.,        `.   <  <\\                _\n");
    printf(ESPACIO"             ,' '           `, `.   | \\            ( `\n");
    printf(ESPACIO"          ../, `.            `  |    .\\`.           \\ \\_\n");
    printf(ESPACIO"         ,' ,..  .           _.,'    ||\\l            )  '\".\n");
    printf(ESPACIO"        , ,'   \\           ,'.-.`-._,'  |           .  _._`.\n");
    printf(ESPACIO"      ,' /      \\ \\        `' ' `--/   | \\          / /   ..\\\n");
    printf(ESPACIO"    .'  /        \\ .         |\\__ - _ ,'` `        / /     `.`.\n");
    printf(ESPACIO"    |  '          ..         `-...-\"  |  `-'      / /        . `.\n");
    printf(ESPACIO"    | /           |L__           |    |          / /          `. `.\n");
    printf(ESPACIO"   , /            .   .          |    |         / /             ` `\n");
    printf(ESPACIO"  / /          ,. ,`._ `-_       |    |  _   ,-' /               ` \\\n");
    printf(ESPACIO" / .           \\\"`_/. `-_ \\_,.  ,'    +-' `-'  _,        ..,-.    \\`.\n");
    printf(ESPACIO".  '         .-f    ,'   `    '.       \\__.---'     _   .'   '     \\ \\\n");
    printf(ESPACIO"' /          `.'    l     .' /          \\..      ,_|/   `.  ,'`     L`\n");
    printf(ESPACIO"|'      _.-\"\"` `.    \\ _,'  `            \\ `.___`.'\"`-.  , |   |    | \\\n");
    printf(ESPACIO"||    ,'      `. `.   '       _,...._        `  |    `/ '  |   '     .|\n");
    printf(ESPACIO"||  ,'          `. ;.,.---' ,'       `.   `.. `-'  .-' /_ .'    ;_   ||\n");
    printf(ESPACIO"|| '              V      / /           `   | `   ,'   ,' '.    !  `. ||\n");
    printf(ESPACIO"||/            _,-------7 '              . |  `-'    l         /    `||\n");
    printf(ESPACIO". |          ,' .-   ,' ||               | .-.        `.      .'     ||\n");
    printf(ESPACIO" `'        ,'    `\".'    |               |    `.        '. -.'       `'\n");
    printf(ESPACIO"          /      ,'      |               |,'    \\-.._,.'/'\n");
    printf(ESPACIO"          .     /        .               .       \\    .''\n");
    printf(ESPACIO"        .`.    |         `.             /         :_,'.'\n");
    printf(ESPACIO"          \\ `...\\   _     ,'-.        .'         /_.-'\n");
    printf(ESPACIO"           `-.__ `,  `'   .  _.>----''.  _  __  /\n");
    printf(ESPACIO"                .'        /\"'          |  \"'   '_\n");
    printf(ESPACIO"               /_|.-'\\ ,\".             '.'`__'-( \\\n");
    printf(ESPACIO"                 / ,\"'\"\\,'               `/  `-.|\" \n");

    break;

case 7:
    printf(ESPACIO"               _,........__\n");
    printf(ESPACIO"            ,-'            \"`-.\n");
    printf(ESPACIO"          ,'                   `-.\n");
    printf(ESPACIO"        ,'                        \\\n");
    printf(ESPACIO"      ,'                           .\n");
    printf(ESPACIO"      .'\\               ,\"\".       `\n");
    printf(ESPACIO"     ._.'|             / |  `       \\\n");
    printf(ESPACIO"     |   |            `-.'  ||       `.\n");
    printf(ESPACIO"     |   |            '-._,'||       | \\\n");
    printf(ESPACIO"     .`.,'             `..,'.'       , |`-.\n");
    printf(ESPACIO"     l                       .'`.  _/  |   `.\n");
    printf(ESPACIO"     `-.._'-   ,          _ _'   -\" \\  .     `\n");
    printf(ESPACIO"`.\"\"\"\"\"'-.`-...,---------','         `. `....__.\n");
    printf(ESPACIO".'        `\"-..___      __,'\\          \\  \\     \\\n");
    printf(ESPACIO"\\_ .          |   `\"\"\"\"'    `.           . \\     \\\n");
    printf(ESPACIO"  `.          |              `.          |  .     L\n");
    printf(ESPACIO"    `.        |`--...________.'.        j   |     |\n");
    printf(ESPACIO"      `._    .'      |          `.     .|   ,     |\n");
    printf(ESPACIO"         `--,\\       .            `7\"\"' |  ,      |\n");
    printf(ESPACIO"            ` `      `            /     |  |      |    _,-'\"\"\"`-.\n");
    printf(ESPACIO"             \\ `.     .          /      |  '      |  ,'          `.\n");
    printf(ESPACIO"              \\  v.__  .        '       .   \\    /| /              \\\n");
    printf(ESPACIO"               \\/    `\"\"\\\"\"\"\"\"\"\"`.       \\   \\  /.''                |\n");
    printf(ESPACIO"                `        .        `._ ___,j.  `/ .-       ,---.     |\n");
    printf(ESPACIO"                ,`-.      \\         .\"     `.  |/        j     `    |\n");
    printf(ESPACIO"               /    `.     \\       /         \\ /         |     /    j\n");
    printf(ESPACIO"              |       `-.   7-.._ .          |\"          '         /\n");
    printf(ESPACIO"              |          `./_    `|          |            .     _,'\n");
    printf(ESPACIO"              `.           / `----|          |-............`---'\n");
    printf(ESPACIO"                \\          \\      |          |\n");
    printf(ESPACIO"               ,'           )     `.         |\n");
    printf(ESPACIO"                7____,,..--'      /          |\n");
    printf(ESPACIO"                                  `---.__,--.'\n");

    break;

case 8:
    printf(ESPACIO"     __                                _.--'\"7\n");
    printf(ESPACIO"    `. `--._                        ,-'_,-  ,'\n");
    printf(ESPACIO"     ,'  `-.`-.                   /' .'    ,|\n");
    printf(ESPACIO"     `.     `. `-     __...___   /  /     - j\n");
    printf(ESPACIO"       `.     `  `.-\"\"        \" .  /       /\n");
    printf(ESPACIO"         \\     /                ` /       /\n");
    printf(ESPACIO"          \\   /                         ,'\n");
    printf(ESPACIO"          '._'_               ,-'       |\n");
    printf(ESPACIO"             | \\            ,|  |   ...-'\n");
    printf(ESPACIO"             || `         ,|_|  |   | `             _..__\n");
    printf(ESPACIO"            /|| |          | |  |   |  \\  _,_    .-\"     `-.\n");
    printf(ESPACIO"           | '.-'          |_|_,' __!  | /|  |  /           \\\n");
    printf(ESPACIO"   ,-...___ .=                  ._..'  /`.| ,`,.      _,.._ |\n");
    printf(ESPACIO"  |   |,.. \\     '  `'        ____,  ,' `--','  |    /      |\n");
    printf(ESPACIO" ,`-..'  _)  .`-..___,---'_...._/  .'      '-...'   |      /\n");
    printf(ESPACIO"'.__' \"\"'      `.,------'\"'      ,/            ,     `.._.' `.\n");
    printf(ESPACIO"  `.             | `--........,-'.            .         \\     \\\n");
    printf(ESPACIO"    `-.          .   '.,--\"\"     |           ,'\\        |      .\n");
    printf(ESPACIO"       `.       /     |          L          ,\\  .       |  .,---.\n");
    printf(ESPACIO"         `._   '      |           \\        /  .  L      | /   __ `.\n");
    printf(ESPACIO"            `-.       |            `._   ,    l   .    j |   '  `. .\n");
    printf(ESPACIO"              |       |               `\"' |  .    |   /  '      .' |\n");
    printf(ESPACIO"              |       |                   j  |    |  /  , `.__,'   |\n");
    printf(ESPACIO"              `.      L                 _.   `    j ,'-'           |\n");
    printf(ESPACIO"               |`\"---..\\._______,...,--' |   |   /|'      /        j\n");
    printf(ESPACIO"               '       |                 |   .  / |      '        /\n");
    printf(ESPACIO"                .      .              ____L   \\'  j    -',       /\n");
    printf(ESPACIO"               / `.     .          _,\"     \\   | /  ,-','      ,'\n");
    printf(ESPACIO"              /    `.  ,'`-._     /         \\  i'.,'_,'      .'\n");
    printf(ESPACIO"             .       `.      `-..'             |_,-'      _.'\n");
    printf(ESPACIO"             |         `._      |            ''/      _,-'\n");
    printf(ESPACIO"             |            '-..._\\             `__,.--'\n");
    printf(ESPACIO"            ,'           ,' `-.._`.            .\n");
    printf(ESPACIO"           `.    __      |       \"'`.          |\n");
    printf(ESPACIO"             `-\"'  `\"\"\"\"'            7         `.\n");
    printf(ESPACIO"                                    `---'--.,'\"`' \n");

    break;

case 9:
    printf(ESPACIO"                       _\n");
    printf(ESPACIO"            _,..-\"\"\"--' `,.-\".\n");
    printf(ESPACIO"          ,'      __.. --',  |\n");
    printf(ESPACIO"        _/   _.-\"' |    .' | |       ____\n");
    printf(ESPACIO"  ,.-\"\"'    `-\"+.._|     `.' | `-..,',--.`.\n");
    printf(ESPACIO" |   ,.                      '    j 7    l \\__\n");
    printf(ESPACIO" |.-'                            /| |    j||  .\n");
    printf(ESPACIO" `.                   |         / L`.`\"\"','|\\  \\\n");
    printf(ESPACIO"   `.,----..._       ,'`\"'-.  ,'   \\ `\"\"'  | |  l\n");
    printf(ESPACIO"     Y        `-----'       v'    ,'`,.__..' |   .\n");
    printf(ESPACIO"      `.                   /     /   /     `.|   |\n");
    printf(ESPACIO"        `.                /     l   j       ,^.  |L\n");
    printf(ESPACIO"          `._            L       +. |._   .' \\|  | \\\n");
    printf(ESPACIO"            .`--...__,..-'\"\"'-._  l L  \"\"\"    |  |  \\\n");
    printf(ESPACIO"          .'  ,`-......L_       \\  \\ \\     _.'  ,'.  l\n");
    printf(ESPACIO"       ,-\"`. / ,-.---.'  `.      \\  L..--\"'  _.-^.|   l\n");
    printf(ESPACIO" .-\"\".'\"`.  Y  `._'   '    `.     | | _,.--'\"     |   |\n");
    printf(ESPACIO"  `._'   |  |,-'|      l     `.   | |\"..          |   l\n");
    printf(ESPACIO"  ,'.    |  |`._'      |      `.  | |_,...---\"\"\"\"\"`    L\n");
    printf(ESPACIO" /   |   j _|-' `.     L       | j ,|              |   |\n");
    printf(ESPACIO"`--,\"._,-+' /`---^..../._____,.L',' `.             |\\  |\n");
    printf(ESPACIO"   |,'      L                   |     `-.          | \\j\n");
    printf(ESPACIO"            .                    \\       `,        |  |\n");
    printf(ESPACIO"             \\                __`.Y._      -.     j   |\n");
    printf(ESPACIO"              \\           _.,'       `._     \\    |  j\n");
    printf(ESPACIO"              ,-\"`-----\"\"\"\"'           |`.    \\  7   |\n");
    printf(ESPACIO"             /  `.        '            |  \\    \\ /   |\n");
    printf(ESPACIO"            |     `      /             |   \\    Y    |\n");
    printf(ESPACIO"            |      \\    .             ,'    |   L_.-')\n");
    printf(ESPACIO"             L      `.  |            /         _.-^._\n");
    printf(ESPACIO"              \\   ,'  `-7         ,-'      / |  ,'      `-._\n");
    printf(ESPACIO"             _,`._       `.   _,-'        ,',^.-            `.\n");
    printf(ESPACIO"          ,-'     v....  _.`\"',          _:'--....._______,.-'\n");
    printf(ESPACIO"        ._______./     /',,-'\"'`'--.  ,-'  `.\n");
    printf(ESPACIO"                 \"\"\"\"\"`.,'         _\\`----...' \n");
    printf(ESPACIO"                        --------\"\"'\n");
    printf(ESPACIO"\n");
    printf(ESPACIO"\n");

    break;

case 10:
    printf(ESPACIO"                   _,........_\n");
    printf(ESPACIO"               _.-'    ___    `-._\n");
    printf(ESPACIO"            ,-'      ,'   \\       `.\n");
    printf(ESPACIO" _,...    ,'      ,-'     |  ,\"\"\":`._.\n");
    printf(ESPACIO"/     `--+.   _,.'      _.',',|\"|  ` \\`\n");
    printf(ESPACIO"\\_         `\"'     _,-\"'  | / `-'   l L\\\n");
    printf(ESPACIO"  `\"---.._      ,-\"       | l       | | |\n");
    printf(ESPACIO"      /   `.   |          ' `.     ,' ; |\n");
    printf(ESPACIO"     j     |   |           `._`\"\"\"' ,'  |__\n");
    printf(ESPACIO"     |      `--'____          `----'    .' `.\n");
    printf(ESPACIO"     |    _,-\"\"\"    `-.                 |    \\\n");
    printf(ESPACIO"     l   /             `.               F     l\n");
    printf(ESPACIO"      `./     __..._     `.           ,'      |\n");
    printf(ESPACIO"        |  ,-\"      `.    | ._     _.'        |\n");
    printf(ESPACIO"        . j           \\   j   /`\"\"\"      __   |          ,\"`.\n");
    printf(ESPACIO"         `|           | _,.__ |        ,'  `. |          |   |\n");
    printf(ESPACIO"          `-._       /-'     `L       .     , '          |   |\n");
    printf(ESPACIO"              F-...-'          `      |    , /           |   |\n");
    printf(ESPACIO"              |            ,----.     `...' /            |   |\n");
    printf(ESPACIO"              .--.        j      l        ,'             |   j\n");
    printf(ESPACIO"             j    L       |      |'-...--<               .  /\n");
    printf(ESPACIO"             `     |       . __,,_    ..  |               \\/\n");
    printf(ESPACIO"              `-..'.._  __,-'     \\  |  |/`._           ,'`\n");
    printf(ESPACIO"                  |   \"\"       .--`. `--,  ,-`..____..,'   |\n");
    printf(ESPACIO"                   L          /     \\ _.  |   | \\  .-.\\    j\n");
    printf(ESPACIO"                  .'._        l     .\\    `---' |  |  || ,'\n");
    printf(ESPACIO"                   .  `..____,-.._.'  `._       |  `--;\"I'\n");
    printf(ESPACIO"                    `--\"' `.            ,`-..._/__,.-1,'\n");
    printf(ESPACIO"                            `-.__  __,.'     ,' ,' _-'\n");
    printf(ESPACIO"                                 `'...___..`'--^--' \n");

    break;

case 11:
    printf(ESPACIO"                                   ,--..\n");
    printf(ESPACIO"                                  /     `.\n");
    printf(ESPACIO"                                 /|       `.\n");
    printf(ESPACIO"                                / |        |\n");
    printf(ESPACIO"                               /  j        |\n");
    printf(ESPACIO"                              /  |         `\n");
    printf(ESPACIO"                             '  ,'          \\\n");
    printf(ESPACIO"                           ,'                L\n");
    printf(ESPACIO"                          /                  +\n");
    printf(ESPACIO"                        .:.                   .      `\n");
    printf(ESPACIO"                     ,\"`.  `.       ,..-._    +\n");
    printf(ESPACIO"                     |  |`.  L     '   _.'`.   .\n");
    printf(ESPACIO"                     j  `.,\\ '    | ,.' |  +.  +\n");
    printf(ESPACIO"                    '`.    |,'    |\" `\"\"   / `, .\n");
    printf(ESPACIO"                   |   `\"\"'/      `-.____.'    \\|\n");
    printf(ESPACIO"                 ,'|     ,'                     Y\n");
    printf(ESPACIO"                /  |    /                      '|\n");
    printf(ESPACIO"               /   |  ,'                     ,' +\n");
    printf(ESPACIO"              /    \\-'                      /    `\n");
    printf(ESPACIO"             /    /                       ,'      `\n");
    printf(ESPACIO"            .     ,`'-.                 ,'         L\n");
    printf(ESPACIO"             \\   /     \\               /            .\n");
    printf(ESPACIO"                /      `               \\            |\n");
    printf(ESPACIO"              `/          _,            `          ,'\n");
    printf(ESPACIO"               |                         `       ,'\n");
    printf(ESPACIO"               |           \"'             `.   ,'\n");
    printf(ESPACIO"               j         -\"'               |`-'\n");
    printf(ESPACIO"              /                           /'/\n");
    printf(ESPACIO"             /           ,               / /\n");
    printf(ESPACIO"            /            '              j /\n");
    printf(ESPACIO"          .' ___                        '/\n");
    printf(ESPACIO"          |-'   `\"`-.                  '/\n");
    printf(ESPACIO"          '          \\                .'\n");
    printf(ESPACIO"        ,\"            l          _,.-'\n");
    printf(ESPACIO"       ,---..         |L     _.-'\n");
    printf(ESPACIO"     ,'      `.      / |  ,-'\n");
    printf(ESPACIO"    /          `  _,'  ;-'\n");
    printf(ESPACIO"  ,'--.       ,-`|  ,-'\n");
    printf(ESPACIO" /     L   _,'  _|-'\n");
    printf(ESPACIO"(       \\-' _,-'\n");
    printf(ESPACIO" `......^.-' \n");
    printf(ESPACIO"\n");
    printf(ESPACIO"\n");

    break;

case 12:
    printf(ESPACIO"       ,-.                                            ___.._\n");
    printf(ESPACIO" _     `. `.                                    _,-\"\"\"      ',._\n");
    printf(ESPACIO"`.`.      `.\\                                _,'         _..-'  `.\n");
    printf(ESPACIO"  `._\\       `.                            ,'         _,'_,.-'-.  \\\n");
    printf(ESPACIO"      `.       `.                        ,'        ,-',-\"       \\  .\n");
    printf(ESPACIO"        `.       \\                      /  _,----\"',-'           L  L\n");
    printf(ESPACIO"          `.      \\                   ,' _.--\"-.  [              |  |\n");
    printf(ESPACIO"            `.     .                 / ,'       | |     _..---../   |\n");
    printf(ESPACIO"              .     L               / /         | j ,.-'        `   |\n");
    printf(ESPACIO"               \\    .              ' /          j ,'             |  |\n");
    printf(ESPACIO"                \\    .            ' /          ' /               |  |\n");
    printf(ESPACIO"                 \\   l           / /          /,'                j  '\n");
    printf(ESPACIO"                  L__L._        / /          +'      __,........'  j\n");
    printf(ESPACIO"                ,'   '  \"`.    / /         .' _,.--'\"           \\  |\n");
    printf(ESPACIO"               /,\"\"-.      `. ' '        _/.-'                  | F\n");
    printf(ESPACIO"              /|   / l       . /       ,'                       | |\n");
    printf(ESPACIO"             | |  /  |     '      ,'                         | |\n");
    printf(ESPACIO"            ,._\\\"'   |       |     ,'-'\"\"\"\"\"\"\"\"\"\"\"\"\"'----.._    / |\n");
    printf(ESPACIO"            |  \\`.._,'       F  _,'                         `--'  |\n");
    printf(ESPACIO"            `..'           _/ ,:_____                         L   |\n");
    printf(ESPACIO"              `..          .-'       `'--.._                   | j\n");
    printf(ESPACIO"            _,. /,---.       \\              `--..              | |\n");
    printf(ESPACIO"           F  <j-.'   `       ._                 `\"-._        j  '\n");
    printf(ESPACIO"           |  <|`,.    |       `L._                   `..   _, ,'\n");
    printf(ESPACIO"           `..<|`.___,'        |.  `-.                   Y\"' _.\n");
    printf(ESPACIO"              `L               | `.   `-.._____________,',.-'\n");
    printf(ESPACIO"                `.            .Y   \\      `\"\".\"\"\"\"\".  .\"'\n");
    printf(ESPACIO"                  `.        ,' |\\   `.        `+-._ \\  |\n");
    printf(ESPACIO"                    `,--. -'   | .    `.       `   `.| |\n");
    printf(ESPACIO"                    /    //    |  \\    ``-..___/     | |\n");
    printf(ESPACIO"                   j    .l     |   .    F   \\   `   F  |\n");
    printf(ESPACIO"                   |    ||     |    `   `    .   ` ,  /\n");
    printf(ESPACIO"                   |    ||    F      `-.|     . _,' _'\n");
    printf(ESPACIO"                   |   / |    |       `._`-----'  ,'\n");
    printf(ESPACIO"                   |  /  |   /           `-------'\n");
    printf(ESPACIO"                   l /   \\_,'\n");
    printf(ESPACIO"                    \" \n");

    break;

case 13:
    printf(ESPACIO"               ,`.\n");
    printf(ESPACIO"               L  \\\n");
    printf(ESPACIO"              ,    \\\n");
    printf(ESPACIO"             j      \\\n");
    printf(ESPACIO"             ,       \\\n");
    printf(ESPACIO"            j         `\n");
    printf(ESPACIO"            ,          .__\n");
    printf(ESPACIO"         ,-'Y          `  `-.\n");
    printf(ESPACIO"      .-'    `..___..-'      `-.\n");
    printf(ESPACIO"     /__           ,-.          \\\n");
    printf(ESPACIO"    /(__)         `   '          `.\n");
    printf(ESPACIO"   |               `\"'             L\n");
    printf(ESPACIO"   `.------._                      |\n");
    printf(ESPACIO" ,'          `                     |\n");
    printf(ESPACIO"F             |                    |\n");
    printf(ESPACIO"|             |                    |\n");
    printf(ESPACIO"`._         ,'                     j\n");
    printf(ESPACIO"   `+------'                      /\n");
    printf(ESPACIO"     \\                           /                         |`._\n");
    printf(ESPACIO"      `.                       ,'                          |   \\\n");
    printf(ESPACIO"        `._                _,-'                            |    \\\n");
    printf(ESPACIO"           `-,.________,.-'   `.                           |     L\n");
    printf(ESPACIO"            /                   '                          |     |\n");
    printf(ESPACIO"           /             _,._   |                          ,`---,'\n");
    printf(ESPACIO"         ,'|            /    .  j                        .'      `.\n");
    printf(ESPACIO"         . L            '    | ,                      ,-'\"'`-..   |\n");
    printf(ESPACIO"          .,\\            `--' / `.               ___./       ,.' ,'\n");
    printf(ESPACIO"             \\              ,'    \\__         ,-'     \"-.    | |'\n");
    printf(ESPACIO"              `-._______,.-'  __   | `'-._.,- ._        _`   `\"Y\n");
    printf(ESPACIO"                |           .\"  \\  |     \\      `.    ,'  \\   ,'\n");
    printf(ESPACIO"                |           '    | ;      .       .   `._./.-'\n");
    printf(ESPACIO"                7.           `'\"' / `.--. |   _.. |      j\n");
    printf(ESPACIO"                `.__       `   _-'   |   |j  /   ||     .'\n");
    printf(ESPACIO"                    `-...,_..-'      `--'/   `._, ^----'\n");
    printf(ESPACIO"                         .\\            _'       ,'\n");
    printf(ESPACIO"               `         `._-.______,.'`.___,.-'\n");
    printf(ESPACIO"\n");

    break;

case 14:
    printf(ESPACIO"           _,--'\"\"\"\"\"\"---.._\n");
    printf(ESPACIO"         ,'                 `._\n");
    printf(ESPACIO"       ,'                      `.\n");
    printf(ESPACIO"     ,'                          \\\n");
    printf(ESPACIO"    .                             \\\n");
    printf(ESPACIO"  ,'.                  ,-`.        \\\n");
    printf(ESPACIO" /   \\               ,'    ,        \\\n");
    printf(ESPACIO"|`.  |\\            ,`      |         |\n");
    printf(ESPACIO"L  `.| |         .''     _,'        _'\n");
    printf(ESPACIO" \\    \"'        ,`'_..-''        _,'\n");
    printf(ESPACIO"  `.            '\"\"          _,.' `.\n");
    printf(ESPACIO"    /._                 _..-\"       \\\n");
    printf(ESPACIO"   /   `.          _,.-'             \\\n");
    printf(ESPACIO"  /      \\-.___.--'/                  \\\n");
    printf(ESPACIO" |      ,/.     .-^+.._               F\n");
    printf(ESPACIO"  L..-''.' \\  .'   |   `'--.....___   .\n");
    printf(ESPACIO"  /     /   `/     |               `\"-;\n");
    printf(ESPACIO" /     j    j      '                ,'\n");
    printf(ESPACIO" `.    |    |       L          _.-'Y\n");
    printf(ESPACIO"  ,`._/     |        .    _,.-'     .\n");
    printf(ESPACIO"  `.  '|    |         \\\"\"\"|         |\n");
    printf(ESPACIO"   |   |    |         |   |         |\n");
    printf(ESPACIO"   |   |    |        ,'   |         |\n");
    printf(ESPACIO"   |   L    +      ,'     |         |\n");
    printf(ESPACIO"   |    \\    L    ,\\      j         |\n");
    printf(ESPACIO"   L     \\   |   /  `.   /          j\n");
    printf(ESPACIO"    \\    j\\  |  /    `. /          .\n");
    printf(ESPACIO"     L  .  ` | /       \\          /\n");
    printf(ESPACIO"     +  |   `|/                  /\n");
    printf(ESPACIO"      \\ | _,..._         \\      /\n");
    printf(ESPACIO"       ./'      `-._      \\   ,'\n");
    printf(ESPACIO"        l           `.     ^_/\n");
    printf(ESPACIO"        +             `   /\n");
    printf(ESPACIO"         L-\"\"--.       .,'\n");
    printf(ESPACIO"         |      `.     ,\n");
    printf(ESPACIO"         .        \\  ,'\n");
    printf(ESPACIO"          `       _.'\n");
    printf(ESPACIO"           `....-' \n");

    break;

case 15:
    printf(ESPACIO"                     ,--\"\"+--.\n");
    printf(ESPACIO"                    /     j   /`.\n");
    printf(ESPACIO"                   |     /   |   `.\n");
    printf(ESPACIO"                   |   ,'    '     \\\n");
    printf(ESPACIO"                   j,-'     '`..    \\\n");
    printf(ESPACIO"                  +      _ /    `._/ \\\n");
    printf(ESPACIO"                  |     / '-.     |   .\n");
    printf(ESPACIO"                  |    /     |   /    |\n");
    printf(ESPACIO"                  |   /     j   j     |\n");
    printf(ESPACIO"                  |  j      |   |     |._\n");
    printf(ESPACIO"                  | .'     7    |     |  `.\n");
    printf(ESPACIO"  ___      _.._   | j      |    +     '    `.\n");
    printf(ESPACIO" |.---=-.,'+-. `. |/       F     L  ,'    ,'`.\n");
    printf(ESPACIO" ||,==--'|_' |  j  \\      /      |,'   ,`'    L\n");
    printf(ESPACIO" 'Y'   | |  '/ ',.-.\\    j     ,,^  _,' \\     |\n");
    printf(ESPACIO"`.||   |  `.'  '    `.   / _,-'   `'     L   F\n");
    printf(ESPACIO"  ||   `     .  ,-.   `,--'              |   |\n");
    printf(ESPACIO"  `'    `.  /_,' ,'     `--------------\"\"\"\"'Y\n");
    printf(ESPACIO"         _:\"'_.-'       /_>:-.__           /\n");
    printf(ESPACIO"      `-\".`\"'__,`-.,-._/      `.\"\"`------\"'\n");
    printf(ESPACIO"      `.| `\"'      | | _.--'\"\"'--\\\n");
    printf(ESPACIO"       || /        | '\"  ___,.._  \\\n");
    printf(ESPACIO"      _|||__      / /,.-'       `- .\n");
    printf(ESPACIO"    ,'   `. .    /,'/'  _.,-\"\"\"--._F\n");
    printf(ESPACIO"    7     | |  .',L'|_-'           |\n");
    printf(ESPACIO"    +     | | / / ',\"'  ,.-'\"\"'`-._|\n");
    printf(ESPACIO"     L    ' |. /  .-.`\"'           |\n");
    printf(ESPACIO"     |   j j   \\  `-.'\\           j\n");
    printf(ESPACIO"     +   | | \\  `.   ` `.  _.... ,\n");
    printf(ESPACIO"      L  | |  \\   .   `  \\\"     /\n");
    printf(ESPACIO"      | ,' |   L  ,'    \\ `    .\n");
    printf(ESPACIO"      | || |   '  |      L `   |\n");
    printf(ESPACIO"      `./|j     `. .     `. \\ j\n");
    printf(ESPACIO"       |  '       ` .     | '\\`\n");
    printf(ESPACIO"                   \\ '.   | \\\n");
    printf(ESPACIO"                    | |  /,-'\n");
    printf(ESPACIO"                    j l  \"\n");
    printf(ESPACIO"                  _/_,'\n");
    printf(ESPACIO"                 ',' \n");

    break;

case 16:
    printf(ESPACIO"                   .,\n");
    printf(ESPACIO"            , _.-','\n");
    printf(ESPACIO"          \"\"|\"    `\"\"\"\".,\n");
    printf(ESPACIO"         /'/       __.-'-\"/\n");
    printf(ESPACIO"        ','  _,--\"\"      '-._\n");
    printf(ESPACIO"    _...`...'.\"\"\"\"\"\".\\\"\"-----'\n");
    printf(ESPACIO" ,-'          `-.) /  `.  \\\n");
    printf(ESPACIO"+---.\"-.    |     `.    .  \\\n");
    printf(ESPACIO"     \\  `.  |       \\   |   L\n");
    printf(ESPACIO"      `v  ,-j        , .'   |\n");
    printf(ESPACIO"     .'\\,' /        /,'      -._\n");
    printf(ESPACIO"    ,____.'        .            `-.\n");
    printf(ESPACIO"        |         /                `-.\n");
    printf(ESPACIO"       /          `.                  `-.\n");
    printf(ESPACIO"      /             `. |                 `.                  _.\n");
    printf(ESPACIO"     .                `|                 ,-.             _.-\" .\n");
    printf(ESPACIO"    j                  |                 |  \\         _.'    /\n");
    printf(ESPACIO"    .                  |               .'    \\     ,-'      /\n");
    printf(ESPACIO"    |                  |            ,-.\\      \\  ,'      _.-\n");
    printf(ESPACIO"    |                . '  `.       |   `      `v'  _,.-\"/\n");
    printf(ESPACIO"    ||    \\          |  ` |(`'-`.,.j         \\ `.-'----+---.\n");
    printf(ESPACIO"    |'|   |L    \\  | |   `|   \\'              L \\___      /\n");
    printf(ESPACIO"    ' L   |`     L | |     `.                 | j   `\"\"\"-'\n");
    printf(ESPACIO"       `-'||\\    | ||j       `.       ._    ` '.\n");
    printf(ESPACIO"          `\\ '\"`^\"- '          `.       \\    |/|\n");
    printf(ESPACIO"            `._                  `-.     \\   Y |\n");
    printf(ESPACIO"    __,..-\"\"`..`._                  `-._  `\\ `.|\n");
    printf(ESPACIO"   +.....>+----.' \"\"----.........,--\"\"\" `--.'.'\n");
    printf(ESPACIO"       ,' _\\  ,..--.-\"' __>---'  |\n");
    printf(ESPACIO"      --\"\"  \"'  _.\" }<\"\"          `---\"\"`._\n");
    printf(ESPACIO"               /...\"  L__.+--   _,......'..'\n");
    printf(ESPACIO"                 /.-\"\"'/   \\ ,-'\n");
    printf(ESPACIO"                     .' ,-\"\"'\n");
    printf(ESPACIO"                    /.-' \n");

    break;

case 17:
    printf(ESPACIO"                        |\n");
    printf(ESPACIO"                   ____ A,\n");
    printf(ESPACIO"               _,-'\\  || /`'`.\n");
    printf(ESPACIO"              /-.   '.'|    ,'-.\n");
    printf(ESPACIO"            .'   `. |/j | ,'    ..\n");
    printf(ESPACIO"           .\"\"|._  \\` | ,'  _.,\\--.\n");
    printf(ESPACIO"           '/ |  |\"\\\\,| |,\"| |  |  \\\n");
    printf(ESPACIO"           |.'_..|().\\../()|_/\\ |\\ |'\n");
    printf(ESPACIO"           | |     ,'   `    L \\| Y\n");
    printf(ESPACIO"           | '    /.-\"\"-.`    |||  \\\n");
    printf(ESPACIO"           . |   |_,-----.|   j||  `\n");
    printf(ESPACIO"           | .   . .     ,'  /,'/\n");
    printf(ESPACIO"         __|  \\   \\ \\__,'/  // j\n");
    printf(ESPACIO"     _,'\" ,'   `._ `.__.'  ,'  |---._\n");
    printf(ESPACIO"   ,'    .        `\"----\"\"'    .     `.\n");
    printf(ESPACIO"  ,     .                       `      `\n");
    printf(ESPACIO" /     /    ,-\"\"\"\"\"\"\"\"\"\"\"\"\"--._  \\      '\n");
    printf(ESPACIO" |    j   ,'                   `. `     |\n");
    printf(ESPACIO"|'.'  |  /                       `.|    |\n");
    printf(ESPACIO"| `.  /.'                          \\  | |\n");
    printf(ESPACIO"L  `'v'/                            . |,|\n");
    printf(ESPACIO" \\   '|                             | 'j\n");
    printf(ESPACIO"      |                             ./ /\n");
    printf(ESPACIO"  `   '                             j /\n");
    printf(ESPACIO"   `  `                            / /\n");
    printf(ESPACIO"    `. .                          / /\n");
    printf(ESPACIO"      `.`.                       /,'\n");
    printf(ESPACIO"         \\`.                   ,',\n");
    printf(ESPACIO"          . `                 .-\n");
    printf(ESPACIO"           `.  +.       _,.- ,'\n");
    printf(ESPACIO"            |`-| `\"--\"\"' `,'-|\n");
    printf(ESPACIO"           ,'  | _      _ |  |\n");
    printf(ESPACIO"   ,--...-'    `' |> <(\"     |-..__,..\n");
    printf(ESPACIO" ,'    _.+- ,  +..'    --.  .  `.___  '\n");
    printf(ESPACIO"`-\"\"--:-' ,' |  `.       |   `..   .||_\\\n");
    printf(ESPACIO"     /\"|_'   `.,-|       | _.|  `-.'_\\ `\n");
    printf(ESPACIO"     .'        | |        ` ||\n");
    printf(ESPACIO"                '          V' \n");

    break;

case 18:
    printf(ESPACIO"                   ..-`\"-._\n");
    printf(ESPACIO"                 ,'      ,'`.\n");
    printf(ESPACIO"               ,f \\   . / ,-'-.\n");
    printf(ESPACIO"              '  `. | |  , ,'`|\n");
    printf(ESPACIO"             `.-.  \\| | ,.' ,-.\\\n");
    printf(ESPACIO"              /| |. ` | /.'\"||Y .\n");
    printf(ESPACIO"             . |_|U_\\.|//_U_||. |\n");
    printf(ESPACIO"             | j    /   .    \\ |'\n");
    printf(ESPACIO"              L    /     \\    .j`\n");
    printf(ESPACIO"               .  `\"`._,--|  //  \\\n");
    printf(ESPACIO"               j   `.   ,'  , \\   L\n");
    printf(ESPACIO"          ____/      `\"'     \\ L  |\n");
    printf(ESPACIO"       ,-'   ,'               \\|'-+.\n");
    printf(ESPACIO"      /    ,'                  .    \\\n");
    printf(ESPACIO"     /    /                     `    `.\n");
    printf(ESPACIO"    . |  j                       \\     \\\n");
    printf(ESPACIO"    |F   |                        '   \\ .\n");
    printf(ESPACIO"    ||  F                         |   |\\|\n");
    printf(ESPACIO"    ||  |                         |   | |\n");
    printf(ESPACIO"    ||  |                         |   | |\n");
    printf(ESPACIO"    `.._L                         |  ,' '\n");
    printf(ESPACIO"     .   |                        |,| ,'\n");
    printf(ESPACIO"      `  |                    '|||  j/\n");
    printf(ESPACIO"       `.'    .             ,'   /  '\n");
    printf(ESPACIO"         \\\\    `._        ,'    / ,'\n");
    printf(ESPACIO"          .\\         ._ ,'     /,'\n");
    printf(ESPACIO"            .  ,   .'| \\  (   //\n");
    printf(ESPACIO"            j_|'_,'  |  ._'` / `.\n");
    printf(ESPACIO"           ' |  |    |   |  Y    `.\n");
    printf(ESPACIO"    ,.__  `; |  |-\"\"\"^\"\"\"'  |.--\"\"`\n");
    printf(ESPACIO" ,--\\   \"\"\" ,    \\  / \\ ,-     \"\"\"\"---.\n");
    printf(ESPACIO"'.--`v.=:.-'  .  L.\"`\"'\"\\   ,  `.,.._ /`.\n");
    printf(ESPACIO"     .L    j-\"`.   `\\    j  |`.  \"'--\"\"`-'\n");
    printf(ESPACIO"     / |_,'    L ,-.|   (/`.)  `-\\.-'\\\n");
    printf(ESPACIO"    `-\"\"        `. |     l /     `-\"`-'\n");
    printf(ESPACIO"                  `      `- \n");

    break;

case 19:
    printf(ESPACIO"                                      ,'\"\"`--.\n");
    printf(ESPACIO"                                     |     __ `-.\n");
    printf(ESPACIO"                                     |    /  `.  `.\n");
    printf(ESPACIO"                                      \\        ,   `.\n");
    printf(ESPACIO"                                       `.      \\_    `.\n");
    printf(ESPACIO"                                         `.    | `.    \\\n");
    printf(ESPACIO"                                           `--\"    `.   `\n");
    printf(ESPACIO"                                                     `.  `\n");
    printf(ESPACIO"                 ,.._                                  \\  `\n");
    printf(ESPACIO"               /_,.  `.                                 \\  `\n");
    printf(ESPACIO"              j/   .   \\                  ___            \\  \\\n");
    printf(ESPACIO"              |    |   `____         _,--'   `.           .  L\n");
    printf(ESPACIO"               L  /`--\"'    `'--._ ,'   ,-`'\\ |            . |\n");
    printf(ESPACIO"                |-                /  ,''     ||            | |\n");
    printf(ESPACIO"     -v._      /                   ,'        ||            | |\n");
    printf(ESPACIO"       `.`-._,'               _     \\        |j    _,...   | |\n");
    printf(ESPACIO"         `,.'             _,-. \\     |      /,---\"\"     `- | |\n");
    printf(ESPACIO"        .'              ,\".   ||     `..___/,'            `' |\n");
    printf(ESPACIO"        |   ,         _/`-'  /,'                            `|\n");
    printf(ESPACIO"        |-.__.-'\"''\"\"' \"\"\"\"\"\"\"\"--`_,...-----''''--...--      `.\n");
    printf(ESPACIO"         `.____,..              \"\"   __,..---\"\"\"              |\n");
    printf(ESPACIO"          |       `              --\"'.                        `\n");
    printf(ESPACIO"          |     ,' `._                \\'                       `\n");
    printf(ESPACIO"          | |  .^.    `.             /                          `.\n");
    printf(ESPACIO"         ,'_]__|  \\   / `.          /          /____._            `._\n");
    printf(ESPACIO"       ,'          \\ j    '        /          /       `.             `.\n");
    printf(ESPACIO" ___,.' `._       __L/    |     __'          /     _, / \\             |\n");
    printf(ESPACIO"`-._       L,.-\"\"\"  .    ,' _.-','          /-----'-./   `--.         |\n");
    printf(ESPACIO"   '   / ,'         '..'\"_,'    /         F /  .\"'_,'        |.__     '\n");
    printf(ESPACIO"  / ,.\\,'              \"\"      /         / (,'\\ .'        ,.-\"'  `.  j\n");
    printf(ESPACIO"  -'   '                      /        ,'     `\"         / __/' .- ,'\n");
    printf(ESPACIO"                           __.'\"`.    /                 `-' | _,L,'\n");
    printf(ESPACIO"                         .',      `\"\"'                      '/,--\n");
    printf(ESPACIO"                          / _..' _,,'\n");
    printf(ESPACIO"                          ,' `-\"' \n");

    break;

case 20:
    printf(ESPACIO"                        |.     .|\n");
    printf(ESPACIO"                      `.  `._.' |,'Y'     _.......\n");
    printf(ESPACIO"      +--------..  _\\\"'  \"\"\"\"\"\"'--.=-_ ,-'  ,.-- '     .\n");
    printf(ESPACIO"       |  '\"\"`.  `.`-._           .-\" |   .'    (      |`\n");
    printf(ESPACIO"       j       \\  |..'-- ,-----. ,.]..|  /       `.    L .\n");
    printf(ESPACIO"  ____(___     |      _.' -  , `--..    | __.....-/-..__|L\n");
    printf(ESPACIO".'._______\"\"\"\"----  ,'   _____._    ` ,-':,...------\"\"\"\"i .\n");
    printf(ESPACIO"         |\"\"\"\"-.  -'    '.     /`    ' -------.j__      | |\n");
    printf(ESPACIO"     .,--------        / \\    j  L      `=..-\"\"----'    | |\n");
    printf(ESPACIO"           ,-_,.-     j   L | |   .     `-..:-.__       | |\n");
    printf(ESPACIO"        ,++-.  |      |   /-+-|   |       | `\"-._`._    | |\n");
    printf(ESPACIO"      .+\"\" '- .'      L  j  | L   j       | L    `-.`.  F-|\n");
    printf(ESPACIO"    ,'    .-) `,       \\_/     \\ /        j  \\       ` /-.|\n");
    printf(ESPACIO"   '        |  .        `.......-        /   j_       j  j\n");
    printf(ESPACIO"         .--|  ,\\_                      ,'\". / )     ,^-.|\n");
    printf(ESPACIO"          `.`,-                        /  / / ,`._  ,.   F\n");
    printf(ESPACIO"       \"\"\"| '  .'`.'                   `-'\\ \"'  \\ \\,  \\ /\n");
    printf(ESPACIO"      | j`.    |     . ,. .,..  ,_  .     `...-.| |.  ,'\n");
    printf(ESPACIO"      `-'  /\"\"/    ,' .' \\ '  `/. `-       Y   |`\"  `/\n");
    printf(ESPACIO"          j  /'                             .  | \\ ,'\n");
    printf(ESPACIO"           \\ \\                              |  | ,'\n");
    printf(ESPACIO"           ' '                              j j-'\n");
    printf(ESPACIO"            `.\\                            ,.'\n");
    printf(ESPACIO"            _+.`.                       _.,---.._    _\n");
    printf(ESPACIO"   ,-\"\"--.,'   `--.._              ,::`\"-        '\"\"' -.\n");
    printf(ESPACIO" .'  _..--          ,`\"`--------\"\"'  `._    ....<\"\"`-\",.'\n");
    printf(ESPACIO" `-\"'   _,-\"\"'  _,-'                    `-..__   v._  `.\n");
    printf(ESPACIO"   / ,-'/  _,-`'                              `-. \\ `-.|\n");
    printf(ESPACIO"   -'  |_,'                                      \"' \n");

    break;

case 21:
    printf(ESPACIO"               _,\n");
    printf(ESPACIO"             .'.'  _.\n");
    printf(ESPACIO"           ,' ._,-'_\"'\n");
    printf(ESPACIO"        _,'   '  ------\"\"'`._\n");
    printf(ESPACIO"      ,'                 _,.--\"'              ___        __,..\n");
    printf(ESPACIO"      |    _,..       ,-'             _,.--\"\"'   7_,.--\"'    ,'\n");
    printf(ESPACIO"      j. .'D  |       |            ,'\"       _.-'       _.-\"\"'.  _,..-\"'\n");
    printf(ESPACIO" ,---'  `+----'       |`._      _.'         '                '.-'      /\n");
    printf(ESPACIO"j         `.       ,-'    `'--,\"                           ,'       ,-'\n");
    printf(ESPACIO"|    __    |      '-.._,    .'                           ,'     ,.-'\n");
    printf(ESPACIO"`. ,' ('T--'        .\"     /                          _.'  _,--\"\n");
    printf(ESPACIO"  `   `,  /         _`.   j                         _', ,-\"__,..,-.\n");
    printf(ESPACIO"      `-\"`.        \\   `-.|                        _,'\"\"\"\"'       l\n");
    printf(ESPACIO"           `.,      \\     L                     _.'      __,...--'\n");
    printf(ESPACIO"            ` '-    .`     `._             _,.-' ,--'\"\"\"\"\n");
    printf(ESPACIO"             '  \\`.,\\         `+------,--\"'     /\n");
    printf(ESPACIO"                 \\ )`'      ,-'      /         /\n");
    printf(ESPACIO"                  `     _,-'       ,'         /\n");
    printf(ESPACIO"                   `+\"\"'         ,'     ,.  ,'\n");
    printf(ESPACIO"                     `.        ,'     ,'   .\n");
    printf(ESPACIO"                       `-._.,-'      /. _.,j\n");
    printf(ESPACIO"                           \"\"`-----.'  '  /\n");
    printf(ESPACIO"                                / /   /  /\n");
    printf(ESPACIO"                    _.......__,' /__,' ,'\n");
    printf(ESPACIO"                  ,\\  ,--..--------\"_  ...._\n");
    printf(ESPACIO"                 '--\"(_,`|  ,..-' _,....__  |.\n");
    printf(ESPACIO"                        '-./...-'\"        `\"\"\"- \n");

    break;

case 22:
    printf(ESPACIO"    ,---...__     ,.._\n");
    printf(ESPACIO"  .\"\"\"_...   \"\"---\\.,_`\"-._                    __,..._\n");
    printf(ESPACIO" ,--   \"\"\"\"\"\":--..    \"-   `-._ _,.        ,-\"\" ..----'\"\"\",\n");
    printf(ESPACIO"`---........_____ ._     `-._  `. |       / /'      '\"\"\"\"-----.\n");
    printf(ESPACIO"\\\"'\"\"\"\"\"\"''\"\"\"'\"-`           `-. `.      / j     .\\ |\\   -.,:,- .\n");
    printf(ESPACIO" `-.......___     `._           \\  \\  \\ |   . |L ||/\\   `. ` .`.\n");
    printf(ESPACIO"         __,..==--'/ '           \\  L  A|,'|    \\| |||||  ` .`.. -._\n");
    printf(ESPACIO"    .--\"\"          `.             L | j  /'\"-.__\\V '/|||   | `. `._ `.\n");
    printf(ESPACIO"      `....----_..-`\"`/.          | | | j   __ `._   | |'_`.\\  `.  `. |\n");
    printf(ESPACIO"            -\"'       \\           | `_|.   l  `.  `.   |||   ` | `   \\'\n");
    printf(ESPACIO"            `-._,...-\"\"\\-         |        |    .   /`.  \\  ..Y   `.  \\\n");
    printf(ESPACIO"               `-..,'  .`         '         L \\  .  `--\"`.`.`|  .   \\  |\n");
    printf(ESPACIO"                  \\  ,'  `|     ,'          .\\ +-'-...-^._`. | |..  ,\\ '\n");
    printf(ESPACIO"                   `\\     `.._ j             /\"       \\  |\\ `..- `.'- `\n");
    printf(ESPACIO"                    `. ,' | .  |           .'          \\ | `._`.\n");
    printf(ESPACIO"                      +   | | j           /             `'    `.`.\n");
    printf(ESPACIO"                       `.+._j_'      __..)                      `..\n");
    printf(ESPACIO"                        _,-'   .,   j ` .'\"\"`--.                  `\n");
    printf(ESPACIO"                     _.' .-'  /,'`\"-.  ,` .\\ \\` `\n");
    printf(ESPACIO"                   ,'  .' / /`,'    ||'` ,'`T|.`-|\n");
    printf(ESPACIO"                 ___,'/_,._/        L|   . |'-'\\\"\n");
    printf(ESPACIO"                                    `-   ||    ' \n");

    break;

case 23:
    printf(ESPACIO"        _,--\"\"'\"\"\"-.\n");
    printf(ESPACIO"      ,'   .,-.     `.\n");
    printf(ESPACIO"     '`...( |  |      \\\n");
    printf(ESPACIO"    |      `--'        .\n");
    printf(ESPACIO"    '_,...__,'          `\n");
    printf(ESPACIO"     `._                 `\n");
    printf(ESPACIO"        `..______         |\n");
    printf(ESPACIO"             |.          ,|\n");
    printf(ESPACIO"             | `-.....,-\" |\n");
    printf(ESPACIO"             |            j\n");
    printf(ESPACIO"             ^.         _F\n");
    printf(ESPACIO"            /  `-.....-'/\n");
    printf(ESPACIO"           /          ,'\n");
    printf(ESPACIO"          /          /\n");
    printf(ESPACIO"         /          /\n");
    printf(ESPACIO"        j       _.-- .\n");
    printf(ESPACIO"        |      /     ,+---....___\n");
    printf(ESPACIO"        L     /     /            \"\"`-.._\n");
    printf(ESPACIO"         \\   j     j                    `-.\n");
    printf(ESPACIO"          `. |     |            .'         `\n");
    printf(ESPACIO"            `+...__|__       .,+-..         |\n");
    printf(ESPACIO"                      \"\"`._.l      `.       j\n");
    printf(ESPACIO"                      ,.-\"   \"-.     L    ,'\n");
    printf(ESPACIO"                    ,'          L    : _.'\n");
    printf(ESPACIO"                   /            |   _:'\n");
    printf(ESPACIO"                  .            .|,-'\n");
    printf(ESPACIO"                   .            `.._\n");
    printf(ESPACIO"   '\\               `-.             `\"-.\n");
    printf(ESPACIO" ,`.'                  `-.              L\n");
    printf(ESPACIO" |  )                     `-. _...__     |\n");
    printf(ESPACIO".'-'                         )      `.   j\n");
    printf(ESPACIO"|  |_                      _,'\"\"`.    \\ /\n");
    printf(ESPACIO" .-' `+._               _,\"       `.  |/\n");
    printf(ESPACIO"  \\   |  \"`,,,,,....---'           | .'\n");
    printf(ESPACIO"   `-.'   /                        |+\n");
    printf(ESPACIO"      `--+                     _.-'\n");
    printf(ESPACIO"          `--.___       __.---'\n");
    printf(ESPACIO"                 `\"\"\"\"\"\" \n");

    break;

case 24:
    printf(ESPACIO"                   _,.----'\"\"\"'---..._\n");
    printf(ESPACIO"              _,-'\"                   `-..\n");
    printf(ESPACIO"           _,'                            `-.\n");
    printf(ESPACIO"         ,'                                  `-.\n");
    printf(ESPACIO"       ,'                                _,..._ `.\n");
    printf(ESPACIO"      /                               ,.\"     `:- L\n");
    printf(ESPACIO"    ,'                             |.'         / ||\n");
    printf(ESPACIO"   /            _,.-._             L        .-' -,'\n");
    printf(ESPACIO"  /        _,.-\"      `.            `     __   .'\n");
    printf(ESPACIO" j      _,\"           ||\\|           `. ,-  _.'\n");
    printf(ESPACIO".     ,' `-..________.-' |            |' ,-'\n");
    printf(ESPACIO"|   .' `--,.___       _,'| /`.        ` '\n");
    printf(ESPACIO"|   |     `._  '\"\"\"\"\"'   . `_Y.        Y_\n");
    printf(ESPACIO"`._          `-...__      `.`-'        | `-,...___\n");
    printf(ESPACIO"   ``-,.._          `\"\"--.._`.         |  /     _,+`-._\n");
    printf(ESPACIO"    .'    '--._             `-+      _ |./    ,\"       \\\n");
    printf(ESPACIO"   ,  _,...._  `..             `-.:L_,v-'\"`-./_____     L\n");
    printf(ESPACIO"  .,-\"       `-.| `,                )/       \\     \"`   |\n");
    printf(ESPACIO"  j             |  \\`\\       _,......|       |       `  |\n");
    printf(ESPACIO"  |       _,.---^.v[\\_   _,-'        |       |        \\ '\n");
    printf(ESPACIO"  |     ,\"       _>.. \"\"\"            |       |        _V\n");
    printf(ESPACIO"  '    .        /  |'`\\              |.._   ,'     _,'\n");
    printf(ESPACIO"   .  j       ,'    |  `._           |   `\"\"-----\"'\n");
    printf(ESPACIO"    \\ |      j      '     `--..,,,..j\n");
    printf(ESPACIO"     Y       |       \\             /\n");
    printf(ESPACIO"      `.     |        \\           /\n");
    printf(ESPACIO"        `.   `         `.      _,'\n");
    printf(ESPACIO"          `._ `.         `--..'\n");
    printf(ESPACIO"             `---...,,,...-\"' \n");
    printf(ESPACIO"\n");

    break;

case 25:
    printf(ESPACIO"                                             ,-.\n");
    printf(ESPACIO"                                          _.|  '\n");
    printf(ESPACIO"                                        .'  | /\n");
    printf(ESPACIO"                                      ,'    |'\n");
    printf(ESPACIO"                                     /      /\n");
    printf(ESPACIO"                       _..----\"\"---.'      /\n");
    printf(ESPACIO" _.....---------...,-\"\"                  ,'\n");
    printf(ESPACIO" `-._  \\                                /\n");
    printf(ESPACIO"     `-.+_            __           ,--. .\n");
    printf(ESPACIO"          `-.._     .:  ).        (`--\"| \\\n");
    printf(ESPACIO"               7    | `\" |         `...'  \\\n");
    printf(ESPACIO"               |     `--'     '+\"        ,\". ,\"\"-\n");
    printf(ESPACIO"               |   _...        .____     | |/    '\n");
    printf(ESPACIO"          _.   |  .    `.  '--\"   /      `./     j\n");
    printf(ESPACIO"         \\' `-.|  '     |   `.   /        /     /\n");
    printf(ESPACIO"         '     `-. `---\"      `-\"        /     /\n");
    printf(ESPACIO"          \\       `.                  _,'     /\n");
    printf(ESPACIO"           \\        `                        .\n");
    printf(ESPACIO"            \\                                j\n");
    printf(ESPACIO"             \\                              /\n");
    printf(ESPACIO"              `.                           .\n");
    printf(ESPACIO"                +                          \\\n");
    printf(ESPACIO"                |                           L\n");
    printf(ESPACIO"                |                           |\n");
    printf(ESPACIO"                |  _ /,                     |\n");
    printf(ESPACIO"                | | L)'..                   |\n");
    printf(ESPACIO"                | .    | `                  |\n");
    printf(ESPACIO"                '  \\'   L                   '\n");
    printf(ESPACIO"                 \\  \\   |                  j\n");
    printf(ESPACIO"                  `. `__'                 /\n");
    printf(ESPACIO"                _,.--.---........__      /\n");
    printf(ESPACIO"               ---.,'---`         |   -j\"\n");
    printf(ESPACIO"                .-'  '....__      L    |\n");
    printf(ESPACIO"              \"\"--..    _,-'       \\ l||\n");
    printf(ESPACIO"                  ,-'  .....------. `||'\n");
    printf(ESPACIO"               _,'                /\n");
    printf(ESPACIO"             ,'                  /\n");
    printf(ESPACIO"            '---------+-        /\n");
    printf(ESPACIO"                     /         /\n");
    printf(ESPACIO"                   .'         /\n");
    printf(ESPACIO"                 .'          /\n");
    printf(ESPACIO"               ,'           /\n");
    printf(ESPACIO"             _'....----\"\"\"\"\" \n");

    break;

case 26:
    printf(ESPACIO"                                        _,--\"\"`---...__\n");
    printf(ESPACIO"                            _.---\"\"\"\"`-'.   .-\"\"\"'`-.._`-._\n");
    printf(ESPACIO"                _,.-----.,-\"         .\". `-.           \"---`.\n");
    printf(ESPACIO"             _,' _,.-..,'__          `.'  ,-`...._      ,\"\"''`-.\n");
    printf(ESPACIO"           ,' ,-'     / (  .   ,-.       |    `.  `-._  .       `.\n");
    printf(ESPACIO"         ,',-\"       /   `\"    `\"'       '      .    _`. \\\n");
    printf(ESPACIO"       ,','       ,-'7--.                 `.__.\"|   ( ` `j\n");
    printf(ESPACIO"      '.:--.    ,'   |   .       |\\             '    `--'\n");
    printf(ESPACIO"     /.     | ,'     |   |       `'            .\n");
    printf(ESPACIO"    '       |',\".    |._,'                     `      _.--\"\"\"\"\"-._\n");
    printf(ESPACIO"'.          `-..'    `.                      ,  \\  ,-' _.-\"\"\"\"\"-. `.\n");
    printf(ESPACIO"` `                   F  -.                 /    ,' .-'          `  `\n");
    printf(ESPACIO" \\ `                 j     `.              ,-.   . /               . `\n");
    printf(ESPACIO"    `.               |     .-`.           .  '-.  V                 . `\n");
    printf(ESPACIO"  `   `.      .      | .    \\  \\         j      \\/|                  ' .\n");
    printf(ESPACIO"   .    `.    |`.    |-.`._/`   .        |    ,'  A                  | |\n");
    printf(ESPACIO"    \\     `. F   \\   |--`  \"._  |        `-.-\"   / .                 | |\n");
    printf(ESPACIO"     \\      -'    `. |        `\"'                  |                 F '\n");
    printf(ESPACIO"      \\             `+`.                           |                / .\n");
    printf(ESPACIO"       \\              .-`                     .    j               / ,\n");
    printf(ESPACIO"        \\              \\   `.               .'    /               ' .\n");
    printf(ESPACIO"         \\       |`._   \\    `-.._        ,'    ,'              ,'.'\n");
    printf(ESPACIO"          '      |   `.  `.       `<`\"\"\"\"'    .'             _,'.'\n");
    printf(ESPACIO"           `     |     `-. `._      )   `.     .          _.'_.'\n");
    printf(ESPACIO"            `    |        `--/     /`-._  .     `.___..--'_.\"\n");
    printf(ESPACIO"             `   |          /     /._   `\"\"`.     `. _,.-\"\n");
    printf(ESPACIO"              `  |         /     /   `--.....`.     `._\n");
    printf(ESPACIO"               ` |       ,'     /              .\"\"\"\"'  `.\n");
    printf(ESPACIO"                `'      , `-..,7                `    . `.`.\n");
    printf(ESPACIO"                       .       '                 `.   \\  `v\n");
    printf(ESPACIO"                      j.  ,   /                    `.._L_.'\n");
    printf(ESPACIO"                      || .   /\n");
    printf(ESPACIO"                      `\"-'__/ \n");
    printf(ESPACIO"\n");
    printf(ESPACIO"\n");

    break;

case 27:
    printf(ESPACIO"          _...-----'`._\n");
    printf(ESPACIO"      _,-'   _`. .\"\". \\`._\n");
    printf(ESPACIO"    ,'    ,-'   ` ` |  \\/--.\n");
    printf(ESPACIO"  ,:_  ,-'       ` `|  |`.  `.\n");
    printf(ESPACIO" /   `'-..        `  .-'  `   \\\n");
    printf(ESPACIO"j         `.--,    \\       `   :\n");
    printf(ESPACIO"|         '--' |    \\       `._'-.\n");
    printf(ESPACIO"|___     |     |     L      .'    `.\n");
    printf(ESPACIO"|   `-. /|___.' `.   |    .'.       .\n");
    printf(ESPACIO"|     ,'          .  j.  /   `.      \\\n");
    printf(ESPACIO".  _,'            |,'  `.      \\   ,<`.\n");
    printf(ESPACIO" .'             _.-      `      j.'  \\ \\                          ,.\n");
    printf(ESPACIO"  `       ,v-\"\"'   \\      )__,+'      . \\                       ,' |\n");
    printf(ESPACIO"   `.    / |  /  _,'`.  ,'  \\  \\       /`.                   _.:   |\n");
    printf(ESPACIO"     `,-'-`  / ,'     \\'    j,  \\   ,.'   L               ,-'   . F\n");
    printf(ESPACIO"     / ,. | / .        \\  .'     \\.-\\     |         _,.-\"`.     `,'\n");
    printf(ESPACIO"     (_\\/|'|   \\        .'   _,-\"    `    +....---+'       `     '\n");
    printf(ESPACIO"     . \\ |.     \\    ,.^---`<_        | ,'||       \\        \\   /\n");
    printf(ESPACIO"      `.'| \\_    :v-'         `.      |-  | \\ __..--\\     _,'\\,'\n");
    printf(ESPACIO"        `'/`----'/              '.  ,'    |  Y       L_,-'  ,'\n");
    printf(ESPACIO"          \\     /            ___,.'\\     j   |       |    .'\n");
    printf(ESPACIO"           \\   .\"`\",\"\"'\"\"\"'\"`     | .   .'   |       |  ,'\n");
    printf(ESPACIO"            \\  |   |         |    | | .' j,.-|       j-'\n");
    printf(ESPACIO"             `. ___|________/.....|_Y'  /    |   _.-'\n");
    printf(ESPACIO"          __,-' \\                 |    /    _j,-'\n");
    printf(ESPACIO"         '--.    .                `...+---\"\"\n");
    printf(ESPACIO"        `_____\\  _`..__    __,..-\"'\n");
    printf(ESPACIO"              .-'_|._  `\"\"\"       \\\n");
    printf(ESPACIO"             , -'    .          __/\n");
    printf(ESPACIO"             \"------------\"\"\"\"\"\" \n");
    printf(ESPACIO"\n");

    break;

case 28:
    printf(ESPACIO"                    ,\\\n");
    printf(ESPACIO"                _,-'.+..----\"/_____\n");
    printf(ESPACIO"             _,'---,        /      `\"\",\n");
    printf(ESPACIO"           .'    ,'  __..../_     _,-'\n");
    printf(ESPACIO"          /    ,' ,-\"       ,'---+--...__\n");
    printf(ESPACIO"        ,'   ----'        ,'             `\"\n");
    printf(ESPACIO"       '                ,'     ______  ,-\"`-._\n");
    printf(ESPACIO"      /  ,+\"\"\",   ....-^--..<\"\"      ``-._    `-.\n");
    printf(ESPACIO"    ,' .'-'  /      |        `._          `-.   _`-\n");
    printf(ESPACIO"   /    `\"\"\"'       `           `.           `,\"\n");
    printf(ESPACIO"  |                  `.           `.      ,-'\"--.\n");
    printf(ESPACIO"  '               ,-   `._ ,-\"\"\"`.__:---\"\"'-._   `._\n");
    printf(ESPACIO"   `-----..__  _,'     .-\".       `._         `.    `.\n");
    printf(ESPACIO"   /________.'\"/      /  j         | `-._       `.    `.\n");
    printf(ESPACIO"\\`-.`.__    )_/__    ._,-|         |     `.       `.\"\"\"'\n");
    printf(ESPACIO" .      `\"\"\"\"j   `\"\"`'   |         |       `.       `.\n");
    printf(ESPACIO" \\`._       /            L         '         `.....---\n");
    printf(ESPACIO"  `  `..___'              \\      ,\"            .   `.\n");
    printf(ESPACIO"   `.     `              _.\\ _.-\" `-._          `.   `.\n");
    printf(ESPACIO"     `-._  \\         _,-\"-. '|        .`-.-\"\"\"\"``\\     `.\n");
    printf(ESPACIO"         `\"-^'   _.-'        |         \\  `.      `---...-\n");
    printf(ESPACIO"              \\.\"            |          L   `.     `.\n");
    printf(ESPACIO"              /              `          |     \\      `.\n");
    printf(ESPACIO"             j                `.        |      `,....__`\n");
    printf(ESPACIO"             |                  \\       |       `   \\\n");
    printf(ESPACIO"              .                  .      F        \\   `.\n");
    printf(ESPACIO"      _,...,---`.                 `.   j `.       L--..`\n");
    printf(ESPACIO"    ,\",.--\"'-.   -.                _`. |   `._    .\n");
    printf(ESPACIO"    ,'        \\_.--`._     ,----.-<.  V       `-._ ._\n");
    printf(ESPACIO"   /.---\"\".-\"\"\" )     `\"\"\"'      `. `-.._         `' `._\n");
    printf(ESPACIO"        ,' _.-\"\"\"\"`.               |     `\"-..__        `-.\n");
    printf(ESPACIO"        '\"\"         \\         _,..-'            `\"\"----...-'\n");
    printf(ESPACIO"         '-----------+---\"\"\"\"\" \n");
    printf(ESPACIO"\n");
    printf(ESPACIO"\n");

    break;

case 29:
    printf(ESPACIO"        .'-.                            ,.. _,._\n");
    printf(ESPACIO"  ,--\"\".`.  `.                        ,'  /'    `-.._\n");
    printf(ESPACIO"  \\__   `-`   \\                     ,'  ,' _____     `-.\n");
    printf(ESPACIO"     | ,-.._   \\                  ,'    _,'     \\   ___.'\n");
    printf(ESPACIO"     j |    `   L               .'    ,'        |  |\n");
    printf(ESPACIO"    . j      \\  |              /    ,'  ___     |  |\n");
    printf(ESPACIO"    | |  .\"\"\"|  `    _,.--....'|   /-'\"\"   `.   |  '\n");
    printf(ESPACIO"    |j  j    `   `-\"\"          '  '         |   | F\n");
    printf(ESPACIO"    ||  |    ,'                   `         |   | |\n");
    printf(ESPACIO"    |`. |   /      ,\"\".       .    \\        |   ' |\n");
    printf(ESPACIO"    `  `.  /,\\     |   \\     / `    \\       |,-' F\n");
    printf(ESPACIO"     `.  `/ | \\    '    .   /.  |    \\   _,-   ,-'\n");
    printf(ESPACIO"       `-. j  |\\       \"   /.|  |     `\"\"__..-'\n");
    printf(ESPACIO"        .' |_ |(`        ,' )|__'      `._____\n");
    printf(ESPACIO".-------'.   `-'-`       `--\"\"      \"\"\"\"\"__..-'\n");
    printf(ESPACIO" \"\"\"\"\"\"--.                           \"\"\"(\n");
    printf(ESPACIO"     ___.'        .                 -----..._\n");
    printf(ESPACIO"   .\"____..       '   -'              \"\"`----`_\n");
    printf(ESPACIO"          `.     . _._   _,             ,. `./ |\n");
    printf(ESPACIO"            >     `.  .\"\".              \\ |  \\ j\n");
    printf(ESPACIO"           j       `.,'  /               \"'   Y\n");
    printf(ESPACIO"          /          `..'                     |\n");
    printf(ESPACIO"                                              |\n");
    printf(ESPACIO"         .                             ,\"-.   |\n");
    printf(ESPACIO"         |                             |   \\  |\n");
    printf(ESPACIO"         |                             .   /  |\n");
    printf(ESPACIO"         |                              `-'   |\n");
    printf(ESPACIO"         |   `.                           ,   '\n");
    printf(ESPACIO"         L     \\                      _  /   /.\n");
    printf(ESPACIO"          \\     \\             |      ( `/  .'  `.\n");
    printf(ESPACIO"           L     `.           |       \"/ _/    _|\n");
    printf(ESPACIO"         _,|       -,_        |       j-'_._  ,  `.\n");
    printf(ESPACIO"        '..|       (_.'--.._  L       |-+_  ..`.,.`\n");
    printf(ESPACIO"           |      j         \"\" .    __|   `\"'\n");
    printf(ESPACIO"           |,..__<             |\"`,\"  \\\n");
    printf(ESPACIO"           | _,x..)            '-' --.'\n");
    printf(ESPACIO"            \" \n");

    break;

case 30:
    printf(ESPACIO"                           _            _\n");
    printf(ESPACIO"                          / )  _  _,.-\"\" )\n");
    printf(ESPACIO"                        ,' /..' /\"   _,+'--\"`.\n");
    printf(ESPACIO"                       /     / j_.-\"'     ,-\"\n");
    printf(ESPACIO"                     ,'    ,'       _____  `\n");
    printf(ESPACIO"                   _+__   .     _.-'     \\  `...._\n");
    printf(ESPACIO"              ,'\"\"\"    \"\"/  _.-'          .       \\\n");
    printf(ESPACIO"            ,'          '  ',--'\"\"`-.      L   ,-\"\n");
    printf(ESPACIO"          .\"              .'         \\     |  /\n");
    printf(ESPACIO"        ,' _                          \\    | j      _\n");
    printf(ESPACIO"       / ,'   _,+-'                 _,'   ,' /_,.-\"\" |\n");
    printf(ESPACIO"    _.' '  .+'.  \\               ,-\"___..\"  -'      ,'\n");
    printf(ESPACIO" ,-\"     ,'-' |  |           .,-\"\"''___,..-'       /\n");
    printf(ESPACIO"j        `\"\"\"\"---'             '\"'\"\"       ._    , _.--\".\n");
    printf(ESPACIO"\\   ,                                        `- ' `._  ,'\n");
    printf(ESPACIO" \\                            _.-'            .\"`.   `-. ____...----\"\"`\n");
    printf(ESPACIO"  `.-\"-._,..---+ +          ,'       `         `.'      `.             |\n");
    printf(ESPACIO"      `.        \\/        ,'          |            ,.---. \\           .\n");
    printf(ESPACIO"        `._               +__,...__   |     ,     |     |  L        .'\n");
    printf(ESPACIO"           `--...-\"\"`-._   /       `,\"    ,'      `     |  |      ,'\n");
    printf(ESPACIO"                     /  `./        /    ,'         \\    j  '    .'\n");
    printf(ESPACIO"                    /    j        /    .       _    `._'     ,-'\n");
    printf(ESPACIO"                   j     '       /     |     .\" `         ,-'\n");
    printf(ESPACIO"                   |, .<(       '      `      \\_/       ,'\n");
    printf(ESPACIO"                   |-...+.___,./`.______\\             ,'\n");
    printf(ESPACIO"                   `.'`.' \\/  V /_/.___  `.  _     _,'\n");
    printf(ESPACIO"                                `....\\_`,-\",' |,-./\n");
    printf(ESPACIO"                                        `\"\"..-'---` \n");

    break;

case 31:
    printf(ESPACIO"                                          .\"\n");
    printf(ESPACIO"                                        ,'  |\n");
    printf(ESPACIO"                                      _,... '.___\n");
    printf(ESPACIO"                             +--._  ,'.-\"+.      \"`-.\n");
    printf(ESPACIO"                         _,---\\   `\" / |p|.'     \"'   \\\n");
    printf(ESPACIO"                       ,- _.---\".   |_,'      ,-\"\"\"\"-._|\n");
    printf(ESPACIO"                     ,' ,.'    .'          ,-'        ,'\n");
    printf(ESPACIO"                   ,' ,' |    .          .^---._      |\n");
    printf(ESPACIO"            |. _  `. /   .    |   ,---.+'       `.    |\n");
    printf(ESPACIO"           ,| | `/\\|.    `    |  .      `-.       .  /\n");
    printf(ESPACIO"       .---. \"`-`.,\\ \\    `-.,'  |         `-._   | '\n");
    printf(ESPACIO"        `.-'        , \"\"\"\"--'..-  \\            `--'.L\n");
    printf(ESPACIO"          .          |`.     `     `._             _,'   .\n");
    printf(ESPACIO"           `.        |  `.    |_,..   `-..______.-'  _,-| |. ,\"\\\n");
    printf(ESPACIO"             -.     /     +--'/    `.            -,\"'   `\"  \".-'\n");
    printf(ESPACIO"               `-+-'      |  /       `.        '\\ |           .L_\n");
    printf(ESPACIO"           -\"--.,-`._..._,' j          `.     / | '           (_,'\n");
    printf(ESPACIO"          `.    j.-'     `- |            \\   j  |  `.  _...___'\n");
    printf(ESPACIO"            `. /__ ,...._  \\|             |  |  |...-`\"\n");
    printf(ESPACIO"              j|  `      ,-/`.           /   `  ;.._\n");
    printf(ESPACIO"          ,-. ||   |\"\"-.'  |  `..__,...-'     \\'    `.\n");
    printf(ESPACIO"          `   |/`--    .  /|                  /----.__\\\n");
    printf(ESPACIO"           \\  .         `' /                 /         \\\n");
    printf(ESPACIO"            . |           ,`.              ,'     ___..+--.\n");
    printf(ESPACIO"            +-|          /   `-..______..-\"     ,\"  `.   /___\n");
    printf(ESPACIO"          ,'  |         j               .'    ,'      `\"|    /\n");
    printf(ESPACIO"       ,-+    .         |`._          ,+_    /          `-..'\n");
    printf(ESPACIO"   _.-'  |     `.      /    ``-----:='   `.,'         _,..'\n");
    printf(ESPACIO",-'      L       `-.--'         ,,'        |       ,-'\n");
    printf(ESPACIO"\\_        \\         `._    _,.-'           `.___..'\n");
    printf(ESPACIO"  `.._     `._      __.+'\"'\n");
    printf(ESPACIO"      `---... +---\"\" \n");

    break;

case 32:
    printf(ESPACIO"                  .\"\\                            _\n");
    printf(ESPACIO"                  | |  ,.                    _,-\" /\n");
    printf(ESPACIO"                  j `-' /                 _.'   /..\n");
    printf(ESPACIO"                ,'     |                ,'   _..  |\n");
    printf(ESPACIO"               /       `.          .\"','  ,-'   \\ `...\n");
    printf(ESPACIO"             .'          \\       ,' ,' ,-'      |   _/\n");
    printf(ESPACIO"            /             \\     /    ,'         |  |\n");
    printf(ESPACIO"           /               `.  /    /           |  '\n");
    printf(ESPACIO"          |                  `/    /            | `.\n");
    printf(ESPACIO"       .-.`                  /   ,'            j   |        _\n");
    printf(ESPACIO"       \\                   /V   /              |  ,'     ,-' |\n");
    printf(ESPACIO"        .                _/    /               | /    ,-'   /\n");
    printf(ESPACIO"        |               |    ,'               j / _.-'    ,'\n");
    printf(ESPACIO"        |               |   /                 ' \"\"       /\n");
    printf(ESPACIO"     `\"--               |  /                  |        ,'  _,..-.\n");
    printf(ESPACIO"      \\                 | j                  .'       ---\"'     /\n");
    printf(ESPACIO"       \\               j  |                  /                ,'\n");
    printf(ESPACIO"        \\       __...--.  |                 /_..-----.       /\n");
    printf(ESPACIO"         \\   ,\"\"       |  |   _.           /        /      ,'\n");
    printf(ESPACIO"          . /          |  |  /  |        ,'        /      /\n");
    printf(ESPACIO"           Y           |  |.'   F    _,-'         /__,._ `.......\n");
    printf(ESPACIO"        _,'               '    / _.+'   ,-\"\"-.        .'       ,'\n");
    printf(ESPACIO"    _.-'                      `-'| |   ,      .       -._   ,-'\n");
    printf(ESPACIO"_.-'                  .\"\\        | |    ._   ,'         / .'\n");
    printf(ESPACIO" `\"\"\"---...._        /D  |       | |      \"\"' .     __  `--.\n");
    printf(ESPACIO"       / |  ,      ,`  `-|       ` |  /`    ,'    /\"  \\     `.\n");
    printf(ESPACIO"      .  `_/      /  `-..|         |  .'   /      `.  |       \\\n");
    printf(ESPACIO"      `          '-......'         |      .         `-'        L\n");
    printf(ESPACIO"       \\                          ,'     j                     |\n");
    printf(ESPACIO"        `                      _.'       |                    .-.\n");
    printf(ESPACIO"        /    ,            _,.-'          |                    '  \\\n");
    printf(ESPACIO"       j._            ,-+'             __|                  ,^.   \\\n");
    printf(ESPACIO"      | | `+\"\"-.....,' .'           ,-'   `._           _.-'\"\"\"`\"\"\n");
    printf(ESPACIO"      |,|  _`. |     ,+          _,'         `\"-------\"'\n");
    printf(ESPACIO"      '  \"\"   \"     | ,\"\"-.   _,'\n");
    printf(ESPACIO"                    |,` _.+--'\n");
    printf(ESPACIO"                    ' \"' \n");

    break;

case 33:
    printf(ESPACIO"    `._\n");
    printf(ESPACIO"     \\ `.\n");
    printf(ESPACIO"      \\  `.\n");
    printf(ESPACIO"       .   `.\n");
    printf(ESPACIO"       j     :-----+...-.\n");
    printf(ESPACIO"       /  _,'   /\"\"_     `.     _,..._\n");
    printf(ESPACIO"     ,'  '      .-\"c|\"`+- -+--\"'      `-.._\n");
    printf(ESPACIO"   ,'            \"\"\"+_ |       _,--\"\"--.._ `---..\n");
    printf(ESPACIO"  '     _             \"'      '\\          `--._  `.\n");
    printf(ESPACIO" |    -'                      _.'              `-. `.\n");
    printf(ESPACIO" (     __   ,.----.._        \\``-.                |  `._\n");
    printf(ESPACIO"  `.  /_ \"\"\"   ___.| ,.      j  `.`.   ,          `.    `.\n");
    printf(ESPACIO"    `'| |    ,'    '.'/'\"\"'\"'   j`. \\,'|  _________||\"\"`-'`.\n");
    printf(ESPACIO"      `_.\\   j       j      __-'|_/'\"._:.\"  __       .    \"\n");
    printf(ESPACIO"          | /        /      \\ `/        |`.   .   ..._`.\n");
    printf(ESPACIO"          ||        /       | /         | |    :.'    -/\n");
    printf(ESPACIO"          |'    _,-'        |.`.       ,' |   | |\\_\n");
    printf(ESPACIO"    _     | `--'     _,-    . `.`--- ,'   /   |  .\\`-..\n");
    printf(ESPACIO"    |`v,-'\"\"\"'`-.,.-'        `._``--'  _,'    |  | \\  ,'\n");
    printf(ESPACIO",--'`- _       \\ \\              '\"\"''`'       `_,'  +-\n");
    printf(ESPACIO" -.'    \\       . |                        /`     ,---.\n");
    printf(ESPACIO" -`\\    |       | L                        `-'     '\"\"'`\\\n");
    printf(ESPACIO" '---...:_      / \\                          |   ,.-\"\"\".|\n");
    printf(ESPACIO"          '---+'   \\                         ' ,'       `\n");
    printf(ESPACIO"               '`''\".                       / /          `.\n");
    printf(ESPACIO"                     \\                     j |            '.\n");
    printf(ESPACIO"                      `.                   | |              \\\n");
    printf(ESPACIO"                        \\ _                |/             /\\|\n");
    printf(ESPACIO"                         / \"-   --\"\"----+--'             / ||\n");
    printf(ESPACIO"                        `v'\"\"\"\"\"-..     |      `..__.,.-'-.,,\n");
    printf(ESPACIO"                         |         `-.,'           .`.J     /\n");
    printf(ESPACIO"                         |            |             '---...'\n");
    printf(ESPACIO"                         |     .     /\n");
    printf(ESPACIO"                         |    | `,  j\n");
    printf(ESPACIO"                        ..--+'\"--_  /\n");
    printf(ESPACIO"                         `-.|     \\'\n");
    printf(ESPACIO"                             `----' \n");

    break;

case 34:
    printf(ESPACIO"                  _.___.._              ,'            ,. ____\n");
    printf(ESPACIO"                   \\      '-.._      |: | '       __,- _ ... )\n");
    printf(ESPACIO"                   j-\"\"\"|\"`-._ `.'.  | \\| |    ,\"'_,--.     `.\n");
    printf(ESPACIO"                  |     |     `. `.\\-' j   .-.'  '     `.    |\n");
    printf(ESPACIO"     _.           `     |       \\  \"  /    \\   .'       |    |\n");
    printf(ESPACIO"    /  |           \\    L       j           )   \\       j   j\n");
    printf(ESPACIO"   /   |            \\    `.   ,'_ ..   .__,. ,   `     /   ,'\n");
    printf(ESPACIO"  /   j              `-._  `./  /`. \\       / /\"| \\ .-'  ,'\n");
    printf(ESPACIO" .  ,.|                _`+..    |.)`       ' (| |  ``._.'\n");
    printf(ESPACIO" |-'  |              ,'    /,     \"`'       '--\"   |   '`.\n");
    printf(ESPACIO"j     |             '        \\ './.             |\\-'      `\n");
    printf(ESPACIO"|     |            |          \\  `/, . . . _-|./ |        _\\\n");
    printf(ESPACIO"| ,-\"\".            `-\"\"-.     |`-._`| \\--|'/|, ,,'    _.-' /\n");
    printf(ESPACIO"|/     \\        __(      \\   ,+..._`---...-'_.--\"\". .'     \\\n");
    printf(ESPACIO"|       `   ,-\"'   `._   | _.      `\"-....-'       `.    ,.---.\n");
    printf(ESPACIO"|    ,-'\"  '\"'\\       L,-|'            `v           |  ,'      `\n");
    printf(ESPACIO"L   /    .\"`--'       |  |              |           |||         `'\n");
    printf(ESPACIO" | /     `..        ,.|  |.             |          ,' '|       .\"\".\\\n");
    printf(ESPACIO" `'      | /        . `. | `.       _,--+--._    ,',-''|        `-'|\n");
    printf(ESPACIO"  `     .,\"`. ,..  / `  `|   `-...-'         `\"-' / ,.-\\         /\"\".\n");
    printf(ESPACIO"   \\   j    |`. |.-   `/. `.     __.-----...__   ,`/    `.___    \\  |\n");
    printf(ESPACIO"    .  |    |  \\|      | \\\\ `- -'             `.. |       |  `,\"\" `.'\n");
    printf(ESPACIO"     ` |   j .         | | \\                   |  |       |,-| \\\n");
    printf(ESPACIO"      `'   | \".      ,-' `. L                  .-' `        ,'  |\n");
    printf(ESPACIO"        `. |   \\    /     .'`.               ,'     `      /    |\n");
    printf(ESPACIO"          `.    `\"\"'      /   `-._       __.' .'\\    `....'    /\n");
    printf(ESPACIO"           ,'             \\ _____ `\"\"\"\"\"\"  _.'  /             '\n");
    printf(ESPACIO"           ' ,--'\"\"`--.___,'     \"\"------''    '_    _,...__ /`.\n");
    printf(ESPACIO"            `-........'                          `-.'       `,\"\n");
    printf(ESPACIO"                                                     `\"\"\"---' \n");

    break;

case 35:
    printf(ESPACIO"                    __.._\n");
    printf(ESPACIO"                ,--'     \"`-._    _,.-,--------.\n");
    printf(ESPACIO"    ________ ,-'              `-\"'   /     _.-'|\n");
    printf(ESPACIO" ,-'  '     :                       .    ,'    '\n");
    printf(ESPACIO"|    '     j      _.._              |  ,'     j\n");
    printf(ESPACIO"L   /      |    .'    `.            |.'      /\n");
    printf(ESPACIO" \\ j       |    `.,'   |           ,'       /    _\n");
    printf(ESPACIO"  .|      ,'\\         /           '.___    / _.-\" |\n");
    printf(ESPACIO"   `    .'   `-.....-'                 `- +-'    /\n");
    printf(ESPACIO"    `. ,'                                `.     <__\n");
    printf(ESPACIO"      `.             .\\ \\                 |   ___ ,'\n");
    printf(ESPACIO"      |     | #      || |                  ,\"\"   \"`.\n");
    printf(ESPACIO"      |     | #      `'_/                   .       `.\n");
    printf(ESPACIO"     ,'     `.         ,-\"\".                L         `.\n");
    printf(ESPACIO"    /     (__)       _  \"\"\"                  :\"\"-.      .\n");
    printf(ESPACIO"   /             \\\"'u|         |/            |    \\     |\n");
    printf(ESPACIO"  .               \\  |         |           | |     |    |\n");
    printf(ESPACIO"  |     _          `-'        j           /  |     '    |\n");
    printf(ESPACIO"  L      `.                   |          /   |   ,'     '\n");
    printf(ESPACIO"   \\       `.                ,'         /    |_,'      /\n");
    printf(ESPACIO"    `.   ,.<'                `+--.    ,'     /       ,'\n");
    printf(ESPACIO"      `./`._'                 '_.`._,'      j      _,\n");
    printf(ESPACIO"        /\"'                      \"          |   _,'\n");
    printf(ESPACIO"       /   `._              .              '..-'\n");
    printf(ESPACIO"      j       `-._           `            /\n");
    printf(ESPACIO"      |        _,'`\"--........+.         /\n");
    printf(ESPACIO"      ,\"-.._,-'                 `.  .-._/\n");
    printf(ESPACIO"      '---'                       `+__,' \n");

    break;

case 36:
    printf(ESPACIO"                                       __,......._\n");
    printf(ESPACIO"    _............___          ____....<__         `\"._\n");
    printf(ESPACIO"   '._      `\",     `'--._,.-'   ___     `\"-.    ___..>---,---------..\n");
    printf(ESPACIO" ____ -.,..--\"            `-  ,-'   `       .`-\"'       .'_         ,-'\n");
    printf(ESPACIO"'._  \"\"'-.                  .'     _.._                    `-._ ,.-'\n");
    printf(ESPACIO"   `-._   `._              .     ,'    `.                    ,-'----.._\n");
    printf(ESPACIO"       _>.   -.            `     |      |                _,-'          )\n");
    printf(ESPACIO",..--\"\"`--\"\"\"\"\"`-.          \\    `-.    |             ,.+.__   _,;---\"\"\n");
    printf(ESPACIO"\\_ |              `.         `.       _.'         _,-`      `\"\"   `.\n");
    printf(ESPACIO"  \"\\                `       / _`\"----'           '                 /-.\n");
    printf(ESPACIO"   `.____                  |  #      #' \\                         `,..'\n");
    printf(ESPACIO"       ,-\"--...__          `--        --'                   ___,..'\n");
    printf(ESPACIO"      '-.---\"'  |           -.,........,            ,.---\"\"\" .\n");
    printf(ESPACIO"                |            |        \\'             \\\"\"--..._`\n");
    printf(ESPACIO"                |             \\       /              |\n");
    printf(ESPACIO"                .              `.    /               |\n");
    printf(ESPACIO"                 ,               `--'                j\n");
    printf(ESPACIO"                j \\                                 /\n");
    printf(ESPACIO"                |  .                               '`.\n");
    printf(ESPACIO"                 L._`.                           .' ,|\n");
    printf(ESPACIO"                 |  `.:-._                    _,' ,' |\n");
    printf(ESPACIO"                 `.,'| \"\"\"`.__            _,< _..-   '\n");
    printf(ESPACIO"                     `...-'   `----------'   `-.__|`' \n");

    break;

case 37:
    printf(ESPACIO"               _,.+-----__,._\n");
    printf(ESPACIO"              /  /    ,'     `.\n");
    printf(ESPACIO"     ,+._   ./...\\_  /   ,..   \\\n");
    printf(ESPACIO"     | `.`+'       `-' .' ,.|  |\n");
    printf(ESPACIO"     |  |( ,    ,.`,   |  `-',,........_       __......_\n");
    printf(ESPACIO"      \\ |..`/,-'  '\"\"\"' `\"\"'\"  _,.---\"-,  .-+-'      _.-\"\"`--._\n");
    printf(ESPACIO"       .\"|       /\"\\`.      ,-'       / .','      ,-'          \\\n");
    printf(ESPACIO"      .'-'      |`-'  |    `./       / / /       /   ,.-'       |\n");
    printf(ESPACIO"     j`v+\"      `----\"       ,'    ,'./ .'      /   |        ___|\n");
    printf(ESPACIO"     |                      |   _,','j  |      /    L   _.-\"'    `--.\n");
    printf(ESPACIO"      \\                     `.-'  j  |  L     F      \\-'             \\\n");
    printf(ESPACIO"       \\ .-.               ,'     |  L   .    /    ,'       __..      `\n");
    printf(ESPACIO"        \\ `.|            _/_      '   \\  |   /   ,'       ,\"    `.     '\n");
    printf(ESPACIO"         `.             '   `-.    `.__| |  /  ,'         |            |\n");
    printf(ESPACIO"           `\"-,.               `----'   `-.' .'   _,.--\"\"\"'\" --.      ,'\n");
    printf(ESPACIO"              |          ,.                `.  ,-'              `.  _'\n");
    printf(ESPACIO"             /|         /                    \\'          __.._    \\'\n");
    printf(ESPACIO"   _...--...' +,..-----'                      \\-----._,-'     \\    |\n");
    printf(ESPACIO" ,'    |     /        \\                        \\      |       j    |\n");
    printf(ESPACIO"/| /   |    j  ,      |                         ,._   `.    -'    /\n");
    printf(ESPACIO"\\\\'   _`.__ | |      _L      |-----\\            `. \\    `._    _,'\n");
    printf(ESPACIO" \"\"`\"'     \"`\"---'\"\"`._`-._,-'      `.              `.     `--'\n");
    printf(ESPACIO"                       \"`--.......____:.         _  / \\\n");
    printf(ESPACIO"                               `-----.. `>-.....`,-'   \\\n");
    printf(ESPACIO"                                      `|\"    `.  ` . \\ |\n");
    printf(ESPACIO"                                        `._`..'    `-\"'\n");
    printf(ESPACIO"                                           \"' \n");

    break;

case 38:
    printf(ESPACIO"        ,-\"\"'-.._\n");
    printf(ESPACIO"   .---'\"\" \">` - `--\n");
    printf(ESPACIO"   `.      `-._  .`-.\n");
    printf(ESPACIO"     `-.       \\ .` : -.\n");
    printf(ESPACIO"      _.>._     / ` `:..,\n");
    printf(ESPACIO" ,.../...._`\"-./    '.|, `\n");
    printf(ESPACIO"`---.._\"'-.`-._    |    \"'--.\n");
    printf(ESPACIO"       `--.\\`. `._,'         `.---------------.._\n");
    printf(ESPACIO"            \"-'--.___          \\`'\"-..__         `-._\n");
    printf(ESPACIO"                     `.\"`-\\     ` `\"--..\"`-.-..__    `\".\n");
    printf(ESPACIO"                       `.  `.     |``._ `--. `-..`\"-._`.\\-.\n");
    printf(ESPACIO"                         \\   -....' `-.`-.  `-._ `-.  `-.\\ `.\n");
    printf(ESPACIO"                          `-.__  `.`-. `. `._   `._ `-.  `.  `.\n");
    printf(ESPACIO"                               `-..`` `. `.  `.    `.  `-.     \\\n");
    printf(ESPACIO"                                   \\`.` `  `.  `.    `.   `-.   `.\n");
    printf(ESPACIO"                                    `.`-'`.  \\   .     `.    `.   \\\n");
    printf(ESPACIO"                                      `..  \\  \\   \\      `.    `.,_`.\n");
    printf(ESPACIO"                                         \\` \\  .   `.     '\\     `.`.`._\n");
    printf(ESPACIO"                                          \\``.  \\    \\     \\`.    |\n");
    printf(ESPACIO"                                           ' '.  \\    \\     \\ \\   L\n");
    printf(ESPACIO"                                             \\ \\  '    `    '. `.  \\\n");
    printf(ESPACIO"                                              ` `. \\    `    '.  `. `.\n");
    printf(ESPACIO"                                               `. `,`.   `.   `.   `._.\n");
    printf(ESPACIO"                                                 `-  \\._   `.  `.     \"`\n");
    printf(ESPACIO"                                                      ` `.   `.  .\n");
    printf(ESPACIO"                                                          `-. ``-.:-.\n");
    printf(ESPACIO"                                                              -.`. '\"-'\n");
    printf(ESPACIO"                                                                 `\"-. \n");

    break;

case 39:
    printf(ESPACIO"   ,..__\n");
    printf(ESPACIO"  |  _  `--._                                  _.--\"\"\"`.\n");
    printf(ESPACIO"  |   |._    `-.        __________         _.-'    ,|' |\n");
    printf(ESPACIO"  |   |  `.     `-..--\"\"_.        `\"\"-..,-'      ,' |  |\n");
    printf(ESPACIO"  L   |    `.        ,-'                      _,'   |  |\n");
    printf(ESPACIO"   .  |     ,'     ,'            .           '.     |  |\n");
    printf(ESPACIO"   |  |   ,'      /               \\            `.   |  |\n");
    printf(ESPACIO"   |  . ,'      ,'                |              \\ /  j\n");
    printf(ESPACIO"   `   \"       ,                  '               `   /\n");
    printf(ESPACIO"    `,         |                ,'                  '+\n");
    printf(ESPACIO"    /          |             _,'                     `\n");
    printf(ESPACIO"   /     .-\"\"\"'L          ,-' \\  ,-'\"\"\"\"`-.           `\n");
    printf(ESPACIO"  j    ,' ,.+--.\\        '    ',' ,.,-\"--._`.          \\\n");
    printf(ESPACIO"  |   / .'  L    `.        _.'/ .'  |      \\ \\          .\n");
    printf(ESPACIO" j   | | `--'     |`+-----'  . j`._,'       L |         |\n");
    printf(ESPACIO" |   L .          | |        | |            | |         |\n");
    printf(ESPACIO" |   `\\ \\        / j         | |            | |         |\n");
    printf(ESPACIO" |     \\ `-.._,.- /           . `         .'  '         |\n");
    printf(ESPACIO" l      `-..__,.-'             `.`-.....-' _.'          '\n");
    printf(ESPACIO" '                               `-.....--'            j\n");
    printf(ESPACIO"  .                  -.....                            |\n");
    printf(ESPACIO"   L                  `---'                            '\n");
    printf(ESPACIO"    \\                                                 /\n");
    printf(ESPACIO"     ` \\                                        ,   ,'\n");
    printf(ESPACIO"      `.`.    |                        /      ,'   .\n");
    printf(ESPACIO"        . `._,                        |     ,'   .'\n");
    printf(ESPACIO"         `.                           `._.-'  ,-'\n");
    printf(ESPACIO"    _,-\"\"\"\"`-,                             _,'\"-.._\n");
    printf(ESPACIO"  ,'          `-.._                     ,-'        `.\n");
    printf(ESPACIO" /             _,' `\"-..___     _,..--\"`.            `.\n");
    printf(ESPACIO"|         _,.-'            `\"\"\"'         `-._          \\\n");
    printf(ESPACIO"`-....---'                                   `-.._      |\n");
    printf(ESPACIO"                                                  `--...' \n");

    break;

case 40:
    printf(ESPACIO",-.                                                 .\n");
    printf(ESPACIO".` `.                                             .'|\n");
    printf(ESPACIO"` `. `-._                     _,.--._            /  |\n");
    printf(ESPACIO" `  ..   `.                  /       `.        ,' , '\n");
    printf(ESPACIO"  `  ` `.  `-._              | '\".     \\      /  / .\n");
    printf(ESPACIO"   `. `   `.   `.          ,\"'---'      .   ,' ,'' |\n");
    printf(ESPACIO"     ` `.    `.  `.       .             |  /  / /  F\n");
    printf(ESPACIO"      `. .     `.  \\ ,..--|             |,'  / /  /\n");
    printf(ESPACIO"        \\ `.     .  |      \\           ,.   / /  /\n");
    printf(ESPACIO"         `._`._   j   .----.`._     _,` | ,\" / ,'\n");
    printf(ESPACIO"            `._`\"`  ,',\"\"\"\"-.`.\"\"--' ,-\":+.-'.'\n");
    printf(ESPACIO"            ,'     . |`._)   . L     ||_7\\+-'\n");
    printf(ESPACIO"           /       | |       | |     .\\   \\.\n");
    printf(ESPACIO"          /        |  .      | |      \\\\_,'j\n");
    printf(ESPACIO"         .          ._ `----' /        `--\" '\n");
    printf(ESPACIO"        j             \"--..--'              |\n");
    printf(ESPACIO"       ,|                        ,-\".       |\n");
    printf(ESPACIO"     ,' |                       /   |       '\n");
    printf(ESPACIO"    /   '                       `..'    ,'   \\\n");
    printf(ESPACIO"   /   j                               /      L\n");
    printf(ESPACIO"  j    |                              .       |\n");
    printf(ESPACIO"  |  _.'                              |     , |\n");
    printf(ESPACIO"  `-' .                               |   ,'  '\n");
    printf(ESPACIO"      |                               `.-'     .\n");
    printf(ESPACIO"      |                                        |\n");
    printf(ESPACIO"      |                                        j\n");
    printf(ESPACIO"      '                                       .\n");
    printf(ESPACIO"       `                                     /\n");
    printf(ESPACIO"        `.                                  /\n");
    printf(ESPACIO"     ______.                              ,'\n");
    printf(ESPACIO"   ,'       `-._                     _,.'\"\"`--..\n");
    printf(ESPACIO"  .         ___,+ -...._________,...<_          \\\n");
    printf(ESPACIO"   .___,.-\"'                          `-._      |\n");
    printf(ESPACIO"                                          `-....' \n");

    break;

case 41:
    printf(ESPACIO"                                        `\"--.._\n");
    printf(ESPACIO"                                         '  ,__`-._\n");
    printf(ESPACIO"                                          ` |   `-.`._\n");
    printf(ESPACIO"                                           |`       `._`.\n");
    printf(ESPACIO"                                    ./\"\\   | `.        `.`.\n");
    printf(ESPACIO"                                  .'/   .  | _ `.        `.`.\n");
    printf(ESPACIO"     /|                          / /    |  || `-.`.         `..\n");
    printf(ESPACIO"    / |                         . /     |  ||    `.`.         `.`\n");
    printf(ESPACIO"   /  '        _.,.____      _,.'._     '  j       `.`          `..\n");
    printf(ESPACIO"  j ,-.`       . \"\"--._`-. ,',.-++.`. ,'  //         `..          `..\n");
    printf(ESPACIO"  / '  \\`       \\      `. '.'|  ''  \\`   //            ``.          `.\n");
    printf(ESPACIO" j /    \\`.      \\       || `'       |\\ //              `..    __,....`.\n");
    printf(ESPACIO" |.      `.`.     `.     ||         [|'//                 \\\\_,\"        `\n");
    printf(ESPACIO" ||       |,.`._    `----.`_\"\\   _.-\"  .        ___........\\|\n");
    printf(ESPACIO"jj        || `-.`-.______ `/`--'\"       \\   _.-'\n");
    printf(ESPACIO"|.        ||     `--..___\"\"              .,'\n");
    printf(ESPACIO"||        ||             \"\"|             Y\n");
    printf(ESPACIO"||        ||               \\            /\n");
    printf(ESPACIO"||        ||           _....\\.         ,\\\n");
    printf(ESPACIO"||        '|        ,-'       `,.___,.-. .\n");
    printf(ESPACIO"||         L      ,'           `  /     ` .\n");
    printf(ESPACIO"||         '`    /              ||       ` .\n");
    printf(ESPACIO"||          \\| ,'               ||        `.`\n");
    printf(ESPACIO"||        ___|/                 '|          .`.\n");
    printf(ESPACIO"||    _,-'    |                  L           ` .\n");
    printf(ESPACIO"||  ,'                           ||           ` .\n");
    printf(ESPACIO"` ./                             ||            ` .\n");
    printf(ESPACIO" `V                              ||             ` .\n");
    printf(ESPACIO"                                 ||              ``\n");
    printf(ESPACIO"                                 ||               ``\n");
    printf(ESPACIO"                                 ||                `\\\n");
    printf(ESPACIO"                                 ||                 `'\n");
    printf(ESPACIO"                                 ||\n");
    printf(ESPACIO"                                 ||\n");
    printf(ESPACIO"                                 !|\n");
    printf(ESPACIO"                                 _/ \n");

    break;

case 42:
    printf(ESPACIO"                           ---..__\n");
    printf(ESPACIO"_____                          `._\"`._\n");
    printf(ESPACIO"  `._`\"--_._                      `.  `._._\n");
    printf(ESPACIO"     `._   `-._._                   `.   `.`._\n");
    printf(ESPACIO"        `.     `-._.                  `.    `.`._\n");
    printf(ESPACIO"          `.       `-`._                `.    `-.`.\n");
    printf(ESPACIO"            `.        `-`._               \\      `.`.\n");
    printf(ESPACIO"              \\          `.`.              \\       `-.`.\n");
    printf(ESPACIO"               \\            `..             \\         `.`.\n");
    printf(ESPACIO"                \\             `..            \\          `.`\n");
    printf(ESPACIO"                 \\             _:`.           |           `..\n");
    printf(ESPACIO"                  L       _,-\"\" jj            |     ___......:\n");
    printf(ESPACIO"                  |     ,'      ||            |  ,.\"        .'\n");
    printf(ESPACIO"                  |   ,'        ||            |\"'           / \\\n");
    printf(ESPACIO"                  |  /         /|L       ,\". `.         /   L\n");
    printf(ESPACIO"                  |,'         . ` \\      /  \"\"\"  \"`.      j    |\n");
    printf(ESPACIO"                  /_          |  `.\\    (\\  <.)|    \\     |    |\n");
    printf(ESPACIO"                    `-.       |    \\`.  |_____..     \\   j     |\n");
    printf(ESPACIO"                       `,     |     `.`.\\|    V \\   .'\\  |     |\n");
    printf(ESPACIO"                         \\    |       `._|       | <  ` j     j\n");
    printf(ESPACIO"                          `.  |          `.      |  \\  |      |\n");
    printf(ESPACIO"                            \\ |           |L      L  L |__    |\n");
    printf(ESPACIO"                             \\|           ||      |  |  __`. j\n");
    printf(ESPACIO"                              Y           ||.-.   |  | |   \\ |\n");
    printf(ESPACIO"                               \\,--\"\"\"\"\"`-.|`. \\  |  |/|    `\n");
    printf(ESPACIO"                                '          |  \\ `.'    j\n");
    printf(ESPACIO"                                          (|  | ,.`.  /\n");
    printf(ESPACIO"                                      _.-\"_`._| | `' /\n");
    printf(ESPACIO"                              ,....../ ,'\" `.__.'_,-'\n");
    printf(ESPACIO"                              `-----._`..      \"\"\n");
    printf(ESPACIO"                                      `.J \n");

    break;

case 43:
    printf(ESPACIO"                           .-\"--.__\n");
    printf(ESPACIO"          _                / '+.--'\n");
    printf(ESPACIO"           \\.-._          j / |\n");
    printf(ESPACIO"            \\`-.`._      . j  |\n");
    printf(ESPACIO"             \\  `. `.    | |  L                        _,,--+='\n");
    printf(ESPACIO"              L   `. `-. | |   \\                  _.-+'    /\n");
    printf(ESPACIO"              |     \\   j  |    \\            _,-'\" .'    ,'\n");
    printf(ESPACIO"              .      \\  |  |     \\         ,'   _,'    ,'\n");
    printf(ESPACIO"               \\      `j   |      \\      .'   ,'      /\n");
    printf(ESPACIO"                `.     |   |       \\   ,'   ,'       /\n");
    printf(ESPACIO"                  \\    |   |        \\ /    /        /\n");
    printf(ESPACIO"  _,-''\"\"\"\"'\"\"'\"\"`--. j    |         V    /      _,+............._\n");
    printf(ESPACIO"-=`...-----...__     `|    |         .   /   _.-'        _,.--\"\",..=.\n");
    printf(ESPACIO"      `-.       `._   |    |          L,'  ,'       _,.-'    ,-'\n");
    printf(ESPACIO"         `.        `. |    |          |  .'     _.-'       ,'\n");
    printf(ESPACIO"            .        \\|    '          L/    _,-'          /\n");
    printf(ESPACIO"             `._      `.    L        /   _,'            ,'\n");
    printf(ESPACIO"                `-._    \\   `       ,' ,'             ,'\n");
    printf(ESPACIO"                    `-.. `   \\     /,-'           _.-'\n");
    printf(ESPACIO"                      ,'\"-..  .   /_,..---\"`+'\"\"\"\"\n");
    printf(ESPACIO"                     /           '           `.\n");
    printf(ESPACIO"                    j                          .\n");
    printf(ESPACIO"                   .                           |\n");
    printf(ESPACIO"                   |   .-.       ,.            |\n");
    printf(ESPACIO"                   |    -'       `.'           |\n");
    printf(ESPACIO"                   `                           '\n");
    printf(ESPACIO"                    `.      .--.             ,'\n");
    printf(ESPACIO"                      `.    `._|          ,-'\n");
    printf(ESPACIO"                    _.-`   ,..______.. .  `-.\n");
    printf(ESPACIO"                  ,'       |          |      `.\n");
    printf(ESPACIO"                ,'         '          |        `.\n");
    printf(ESPACIO"               /         ,'            .         .\n");
    printf(ESPACIO"               \\     _,-'               `._      |\n");
    printf(ESPACIO"                `---'                      `-....' \n");

    break;

case 44:
    printf(ESPACIO"                            ,.--\"\"+`-,\n");
    printf(ESPACIO"                    ___,..-'  C'  `.' `-.\n");
    printf(ESPACIO"                 .\"|      `-,...._   ___:.\n");
    printf(ESPACIO"                /'\"|   _,..^..__ _'\"'     `-.\n");
    printf(ESPACIO"               ' `\" ,-`c.   ..  `.     ,\"\".  `.\n");
    printf(ESPACIO"              /,  ,'       `._'   `.|)  \"'    /\\           .\n");
    printf(ESPACIO"          _,.|'- /  .-.             \\         `\".          |\\\n");
    printf(ESPACIO"      _.-'   |  |   '-        _     |           |          | \\\n");
    printf(ESPACIO"    ,'       |  |            \\.'    |           |          |  .\n");
    printf(ESPACIO"   ,          . |                   |           j          j  |\n");
    printf(ESPACIO"  /_.-'\"\"\"'\"':.+|                   |          /         ,'   |\n");
    printf(ESPACIO" /'       ,-'    \\                 /        _,'-..___,..'     j\n");
    printf(ESPACIO"j|       /        `.             ,^.......-+                 /\n");
    printf(ESPACIO"||      /     _,-.\"\"'-..____,..-'-._        \\               /\n");
    printf(ESPACIO"| \\   ,|    ,' .'   ,'    .         `.       \\__         ,-'\n");
    printf(ESPACIO" . `-'.|   /  /  _.'       `.         \\       . `---+.-'|\n");
    printf(ESPACIO"  `._, ' j   j '\"            `--..     `.     |.     `. |\n");
    printf(ESPACIO"        .|   |                           .    ||       `|\n");
    printf(ESPACIO"        `'   |,----......__...._         '    ||        |\n");
    printf(ESPACIO"             |`._=-=====___''-. `-.      |   / |        '\n");
    printf(ESPACIO"          _,.L   `\"\"\"------|  .---'      |  /`-+_\n");
    printf(ESPACIO"     ,'\"`/    \\            |  |          |.'.    `\"\"'-.\n");
    printf(ESPACIO"     |   \\__,.'`           | j              _+-._     |\n");
    printf(ESPACIO"     |    `     `._        | |             ,     `---\"\n");
    printf(ESPACIO"      .    `...,-' +._      `|            /\n");
    printf(ESPACIO"       `.       -'\"   `-...________,..--.  `.,..\n");
    printf(ESPACIO"         \\     |                         `.     |\n");
    printf(ESPACIO"          `._  |                          '    /\n");
    printf(ESPACIO"             `'                      _,.-'    /\n");
    printf(ESPACIO"                                  ,-'        /\n");
    printf(ESPACIO"                                 `.       _,'\n");
    printf(ESPACIO"                                   `'----' \n");

    break;

case 45:
    printf(ESPACIO"                        _..--------..__\n");
    printf(ESPACIO"                    ,-\"'    __         `-.\n");
    printf(ESPACIO"                 ,-'    .-\"'  |   .--.    `. ____\n");
    printf(ESPACIO"               ,'  _..   `\"\"\"'    `-'  _.-'\"'    `\"--._\n");
    printf(ESPACIO"             .'   `..'  _           _,' ,\"\"`,        __`._\n");
    printf(ESPACIO"      _.--\"\"\"`\"---.._  '.\"   ___..,'__   `\"'        `. `. `.\n");
    printf(ESPACIO"    .'__       .-,   `'-+.--\"-------..`-.   `=`       `\"'   \\\n");
    printf(ESPACIO"  ,'(__,'   _   \"       |( ,-'\"\"'\"\"'`-.`,|  _.----\"\"'\"`--.../\n");
    printf(ESPACIO" /         |_)          | `-...______,.' |-'        `-'      `-.\n");
    printf(ESPACIO"j                      .'_,..........__,'     c.          .-.   `.\n");
    printf(ESPACIO"|        _,..  `+' _,.-'\"        .,    `-._               \\__'    `\n");
    printf(ESPACIO"|       `___,'   ,'   .:\"',     '\"    .-,  `-.     ,--.      _     |\n");
    printf(ESPACIO" \\             ,'       \"\"             `      `.   `--'    ,' |    |\n");
    printf(ESPACIO"  `.         ,'  .'\"\"`.          :\",       __   \\          `..'    '\n");
    printf(ESPACIO"    `._     .    `---'            \"       |  `.  \\               ,'\n");
    printf(ESPACIO"       `\"--+                   __          `\"'    .           _,'\n");
    printf(ESPACIO"           |                 ('  )                |...,,...-'\"\n");
    printf(ESPACIO"            `.                 \"'                ,'\n");
    printf(ESPACIO"              `-..__                          _,'\n");
    printf(ESPACIO"                    `+---.=,---------+.----+\"'\n");
    printf(ESPACIO"                ,'\"`/     \"          \"   ,-.\\\n");
    printf(ESPACIO"                \\    \\         _        /  | +.\n");
    printf(ESPACIO"               .`.            '/       /   | | \\\n");
    printf(ESPACIO"             ,'   A   '               /    j |  `.\n");
    printf(ESPACIO"            '    / \\   \\             j    / /`.   \\\n");
    printf(ESPACIO"             `--'   \\   \\            |   j,'   `.,'\n");
    printf(ESPACIO"                      . |-.........,.|   .\n");
    printf(ESPACIO"                       `'            `,.' \n");

    break;

case 46:
    printf(ESPACIO"           ____                               ____\n");
    printf(ESPACIO"      ,-\"|\"    \"\",._                    _,--\"' |  ``-.\n");
    printf(ESPACIO"     /   \\.   _,'   `-.               ,'  \\   ,'    ,-\".\n");
    printf(ESPACIO"    /      `\"'        |              /     \\.'      |   L\n");
    printf(ESPACIO"   /_     .-..    ,'\"\"|             |   _,.    ,--. `.__|\n");
    printf(ESPACIO"  j  \\   /    |  /    |     _____   `  j   \\  |    \\     L\n");
    printf(ESPACIO"  |  |   `    L  \\   / _.\"\"|    .\"'--._|    |  `.__/     |\n");
    printf(ESPACIO"  |  '    `-./    `.+-'    `..-'       |-.  |        ,\"`.|\n");
    printf(ESPACIO"  `-'            ,'  )   __,...__       ` `-._      /   ||\n");
    printf(ESPACIO"   `,---.      ,'  .'_,-'        ``-._   `-.__|-.../_...'\n");
    printf(ESPACIO"    `-..,\\.--'/..-`.'  ..-------..._ ,-.\"'`-.    `.\n");
    printf(ESPACIO"            ,\"`.__  `.'    `'  `-' .(   ).   \\     . ,--._\n");
    printf(ESPACIO"         ,\"|`._)  `. |  _      ,.  |`-,'  `. |     |'     `.\n");
    printf(ESPACIO"        / _|  .    | | `-'     -'  |  .   ,' |,-\"\"-`.,--.   `.\n");
    printf(ESPACIO"       /\"\" `.  `\"-'  '    ___       `. `\"'  .'       .   I-.  `.\n");
    printf(ESPACIO"     ,'      `-..,.-' ,-'\"   `-.      `\"--'\"/         \\   \\ `.  `\n");
    printf(ESPACIO"    /         |      /         |\"-.        /           `.  `. `. \\\n");
    printf(ESPACIO"   /          |.    | `. ___ ,.'  |       j            \\ `   `. \\ .\n");
    printf(ESPACIO"  j           | `. (`._ \\  .\"   _,{      ,'             L `.   . \\|\n");
    printf(ESPACIO"  |           |,' `-.  `\\   \",-'  |_,..-'|              |   L  |  '\n");
    printf(ESPACIO"  |           |      `-..'  '__,.-'      |              |    . |\n");
    printf(ESPACIO" /|            L        `\"\"\"'           j               |    | |\n");
    printf(ESPACIO"j |            |                        |              j     | |\n");
    printf(ESPACIO"| |             L                       |              .     ' j\n");
    printf(ESPACIO"| [             |                       |             /       '\n");
    printf(ESPACIO" - `.           |                       |            /\n");
    printf(ESPACIO"    `.   ,'\"\"`-,                        |.--..__    /\n");
    printf(ESPACIO"      `.'      \\                        '       `.,'\n");
    printf(ESPACIO"        `.      \\                     ,'      _,-'\n");
    printf(ESPACIO"          `.     `.                 ,'    _,-'\n");
    printf(ESPACIO"            `-..__ \\              <___..-\" \n");

    break;

case 47:
    printf(ESPACIO"                                       _______\n");
    printf(ESPACIO"                                   _,\"\"|      `-._\n");
    printf(ESPACIO"                                 ,\"  _.'          `.\n");
    printf(ESPACIO"                                ,'\"\"'               `.\n");
    printf(ESPACIO"                              ,'       ,.----._  .--. \\\n");
    printf(ESPACIO"                             /        `____    \\  \\_ ) \\\n");
    printf(ESPACIO"                           ,'              \"\"`-'    \"   L\n");
    printf(ESPACIO"                         ,'                             |\n");
    printf(ESPACIO"                       ,'.'                              L\n");
    printf(ESPACIO"                     ,'-'    _,...._             .\"\"`.   |\n");
    printf(ESPACIO"                  _,'     ,-'       `.       ,.   `.  `. '\n");
    printf(ESPACIO"              _.-'      .'     ______/       `_)    `._;  \\\n");
    printf(ESPACIO"           ,-'           `-\"'\"\"                            \\\n");
    printf(ESPACIO"         ,'   ,.---,                                        \\\n");
    printf(ESPACIO"        /   .'   _,                    ,\"\"\"`-._         .\"`-.'\n");
    printf(ESPACIO"        7-\"'-+--'     ___               `-.__  `.       `.   `\n");
    printf(ESPACIO"      ,'      \\_____.'   `.--.'\"\"`.          `-.'         `-..\\\n");
    printf(ESPACIO"     /         `.`._|     | |      |`--...,.---.               `.\n");
    printf(ESPACIO"   ,'      . `  |    \\    ,-|     ,'..,-'       `.,_             \\\n");
    printf(ESPACIO"  /     \"       |.,.._\"'\"'   `-..'  .'            \\ `\"-.._      __\\\n");
    printf(ESPACIO" /              | '-..\"\"..________./              |..-\"\". `+.  (  ,\n");
    printf(ESPACIO"j               | L\"`--._....___  /               |_...  `/  \\  -.'\n");
    printf(ESPACIO"|             | | |      `--._  \"/                j__..`  `.  `.-'\n");
    printf(ESPACIO"|          /  j ' |           \"./       ,.'    \" /_..-\"'\\   \\.  `.\n");
    printf(ESPACIO"|         /' / /| |            /         ' \"    /'       \\   \\`.  `.\n");
    printf(ESPACIO" L       / |V j | |           /               ,'          \\   \\ \\   `.\n");
    printf(ESPACIO" |      j  |  | |  L         j              ,'            /    | \\   |\n");
    printf(ESPACIO"  L     |  |  | `.  \\        |            ,'             j    /   \\  |\n");
    printf(ESPACIO"  .    j   `. L   `._`.     j          _,'               '   '     . |\n");
    printf(ESPACIO"   \\   |     `.\\     `\"`    |       _.'                 /   /      | |\n");
    printf(ESPACIO"    \\  |       `           /   _,.-'                   /   /       j .\n");
    printf(ESPACIO"     \\ |                  /.-\"'                    _,-'  ,'       /,'\n");
    printf(ESPACIO"      '                                           '----\"' \n");

    break;

case 48:
    printf(ESPACIO"                                           _.----.\n");
    printf(ESPACIO"                                       __,'   _,-'\n");
    printf(ESPACIO"                                  _..\"_..---\"'\n");
    printf(ESPACIO"                               _.'_,-'_____________,......\n");
    printf(ESPACIO"                    `. .   ._,_.-',--',.-...........    __;\n");
    printf(ESPACIO"                 __  `/ ),`','_.'..,--'_,.---;      `\"\"\"\n");
    printf(ESPACIO"              `.,..`\"'  ,.'.-_.-',..-'\"   ,-'\n");
    printf(ESPACIO"            _,..        ___-'           ,'\n");
    printf(ESPACIO"         ,-'    |     ,'   `-.         '----..\n");
    printf(ESPACIO"       ,'       |   ,'        \\             \\.\n");
    printf(ESPACIO"      /         '  /           L            `-\n");
    printf(ESPACIO"     |        ,'  j            |        ,     `.\n");
    printf(ESPACIO"     |    _,+----.|            |       . `.    .-.\n");
    printf(ESPACIO"     |   /\\    ,..\\L           '       |   .   |`---\n");
    printf(ESPACIO"     |`-| ,\\___|  | \\.        /        |   |  .--            .,|\n");
    printf(ESPACIO"     |   V     / ,   '-.....'\"         |   |   `.           ,.-'`'\n");
    printf(ESPACIO"     |\\       `-'                      `._,     _\\\n");
    printf(ESPACIO"     '|                                         ` _   .-.--\".-\n");
    printf(ESPACIO"  _,.. |                                       ,./`.,/   ,.-'\n");
    printf(ESPACIO".' .   |,                            ,---,     \"._      /\n");
    printf(ESPACIO"|  `     `.                         /   `.     ,--     /.----...,\n");
    printf(ESPACIO" \\         \\                        \\   .\"    '.._             |\n");
    printf(ESPACIO"  `.        L                        `...'  `..--. -\"\"_..    _.'\n");
    printf(ESPACIO"    `.      '.,`.                          ..'-.`,_      `-\"'\n");
    printf(ESPACIO"      \\       \\` ',-                     .'     \\\n");
    printf(ESPACIO"       `.      L  `.  .             ,.-'\"\\       \\\n");
    printf(ESPACIO"         \\     |    '`.`. .-. .-..,..'.   \\       \\\n");
    printf(ESPACIO"          `-._,'         `\". `-..          \\       `.\n");
    printf(ESPACIO"                                            `. -.   |\n");
    printf(ESPACIO"                                              '-.+--' \n");

    break;

case 49:
    printf(ESPACIO"                      ,-\"\"-.                _ _,....._\n");
    printf(ESPACIO"                    ,'     |            _,-\"_..----\"\"-\"\\\n");
    printf(ESPACIO"              .   ,      ,'|         _,\"_.-'            |\n");
    printf(ESPACIO"            ,'/  /|    ,'  |      ,-'_,'                |\n");
    printf(ESPACIO"           / /  /j    /    |   ,-'_,'            __,..--'\n");
    printf(ESPACIO"          / /  / '   /    j  ,' ,'          _.--'      /\n");
    printf(ESPACIO"         / /  / /   /     |,' .'         ,-'          /\n");
    printf(ESPACIO"        / /  j /   /     /' .'        ,-'            /\n");
    printf(ESPACIO"       / /   |j   /  __.' ,'       _,'             ,'\n");
    printf(ESPACIO"      / /  ,\",|  /,-\".' ,'       ,:_______________/\n");
    printf(ESPACIO"     / , ,','j  /\", /,\"/|      ,'                /\n");
    printf(ESPACIO"    /  |' /  |_/ / / .' |    ,'                 /\n");
    printf(ESPACIO"   /   |,'  ,' .' / /  j   ,'                _,`\n");
    printf(ESPACIO"  j   '/ ,-' .'  / /   | ,'              _.-\" |\n");
    printf(ESPACIO" .'   j.'  ,'|  / /    ,'          _,.--'     j\n");
    printf(ESPACIO" | _.-_,../| | / /    |      _,,-'\"        _./\n");
    printf(ESPACIO" j  ,( )__ `.// /   ,'|  _.-'          _.-'  |\n");
    printf(ESPACIO".   | `(  ) |/ /   /  ,`+        _,..-'      '\n");
    printf(ESPACIO"|   |   \"'  | /  ,'_,'   `.  _,-'           .\n");
    printf(ESPACIO"|   .`.___,'--. /,'       ,+\"               |\n");
    printf(ESPACIO"|  | `/         \\     ,-'\"\"'\"\"-.._         .'\n");
    printf(ESPACIO" .,j /           \\ ,-'         \\  `-.      /\n");
    printf(ESPACIO"  `|'      /`.    Y-\"'\"\"\"---.._|     `.   /\n");
    printf(ESPACIO"   |     ,' / 7   |            |`-.    \\ /\n");
    printf(ESPACIO"   |___,'  / /`.  |_           |   `.  ,'\n");
    printf(ESPACIO"   `.___..' / /  /  .,.__      |     `.\n");
    printf(ESPACIO"     `.____/,' _'   /`.  '`-.._|      Y\n");
    printf(ESPACIO"       `-+----'   ,'   7-..   j -.     .\n");
    printf(ESPACIO"         |  __.,-'    -|   `-.+   `-.  |\n");
    printf(ESPACIO"         |\"'      ,.'` ',   /  `._   `.|\n");
    printf(ESPACIO"         |_  _,,.'      |`..      `.   |\n");
    printf(ESPACIO"          .'\"          ,'  \\.       `. \"-.\n");
    printf(ESPACIO"          `        ,./\"|\\   \\|        `.  |\n");
    printf(ESPACIO"           `v.^.,`.    | \\   )     ,    `.|\n");
    printf(ESPACIO"             `._     .'   `./_\\.--' .     `.\n");
    printf(ESPACIO"                `---'               '      /\n");
    printf(ESPACIO"                                     `. _,'\n");
    printf(ESPACIO"                                       \" \n");

    break;

case 50:
    printf(ESPACIO"                     _,.---'\"\"'\"--.._\n");
    printf(ESPACIO"                   ,\"                `-.\n");
    printf(ESPACIO"                 ,'                     `.\n");
    printf(ESPACIO"                /     _       ,.          `.\n");
    printf(ESPACIO"               /     ||      |\"|            \\\n");
    printf(ESPACIO"              /      ||      | |             \\\n");
    printf(ESPACIO"             /       .'      `_'              L\n");
    printf(ESPACIO"            j                                 |\n");
    printf(ESPACIO"            |        __,...._                 |\n");
    printf(ESPACIO"            |      .\"        `.               |\n");
    printf(ESPACIO"            |      '           )              |\n");
    printf(ESPACIO"            |       `-...__,.-'               |\n");
    printf(ESPACIO"            |                                 |\n");
    printf(ESPACIO"            |                                 |\n");
    printf(ESPACIO"         ...|                                 |\n");
    printf(ESPACIO"      _,'   |                                 |\n");
    printf(ESPACIO"  _,-'  ___ |                                 |.-----_\n");
    printf(ESPACIO"-' ,.--`.  \\|                                 |     . \\\n");
    printf(ESPACIO",-'     ,  |--,                               |  _,'   `- -----._\n");
    printf(ESPACIO"      ,' ,'    - ----.            _,..       _|.',               \\\n");
    printf(ESPACIO" ,-\"\"' .-             \\  ____   `'  _-'`  ,-'     `.              `-\n");
    printf(ESPACIO" .--'\"`   ,--:`.       --    ,\"'. ,'  ,'`,_\n");
    printf(ESPACIO"        _'__,' |  _,..'_    ,:______,-     --.         _.\n");
    printf(ESPACIO"        -__..--' '      ` ..`L________,___ _,     _,.-'\n");
    printf(ESPACIO"                                              '\" ' \n");

    break;

case 51:
    printf(ESPACIO"                                        _..-----._\n");
    printf(ESPACIO"                                     ,-'__      __`-.\n");
    printf(ESPACIO"                                   ,'  '  `    /  |  \\\n");
    printf(ESPACIO"                   _____          /   ,...            \\\n");
    printf(ESPACIO"              _.-\"\"     `-.      |   /    `. ,-\"\"`.    \\\n");
    printf(ESPACIO"             /             `.    |  |   `  || .    |    .\n");
    printf(ESPACIO"            j             _. \\   |  `..__.' '      |    |\n");
    printf(ESPACIO"           .     __     ,'--. \\ j       ,....`....-'    |\n");
    printf(ESPACIO"           |     .---. .     | \\|      (__    )         |\n");
    printf(ESPACIO"           |   .'   . || '   |  Y         \"\"\"'          |\n");
    printf(ESPACIO"           |   |      | `-..-'  |                       |\n");
    printf(ESPACIO"           |    `-...',.--.     |      ,--,.--\"\"'\"-.._ j\n");
    printf(ESPACIO"           |        .\"    _|    |      .-\" |    ,\"\"\"`.`|\n");
    printf(ESPACIO"           |        `---\"'      `.    /    '   /     |  `\n");
    printf(ESPACIO"           |                     L   /,-\"\"-.   _,...     \\\n");
    printf(ESPACIO"       _._  L                    |  j|    _ | /     `.    L\n");
    printf(ESPACIO"     ,'   `-|                     L ||      | |  '   |    |\n");
    printf(ESPACIO" ,--\"     _||                     |j  `----'  `      |    |\n");
    printf(ESPACIO"\"       ,',:|                     .     ,-\"\"--.`-- -'     | _\n");
    printf(ESPACIO"     ,-._'  '.                    |     `-...__)         j'\" `-.\n");
    printf(ESPACIO"    :,.._:.   `.               ,-'|                      |_,.._ ---.\n");
    printf(ESPACIO"               _:......--.,..-'   |                      |     `.  ,`.\n");
    printf(ESPACIO"          `\"\"\"' ..../__,  \"----.\"'-\\  _,-'\"`._           | .   __\n");
    printf(ESPACIO"                                '-..- .....- .`-...,-\"\"`-,|___.\n");
    printf(ESPACIO"                                                '\"-----\"'. \n");

    break;

case 52:
    printf(ESPACIO"                                        .\n");
    printf(ESPACIO"                         |              |\n");
    printf(ESPACIO"                         |             ,|\n");
    printf(ESPACIO"                ,_       |\\            F'   ,.-\"\"`.\n");
    printf(ESPACIO"               /  `-._   |`           // ,-\"_,..  |\n");
    printf(ESPACIO"              |   ___ `. | \\ ,\"\"\"`-. /.-' ,'    ' |_....._\n");
    printf(ESPACIO"              |  /   `-.`.  L......|j j_.'      ` |       `._\n");
    printf(ESPACIO"              | |      _,'| |______|' | '-._     ||  ,.-.    `.\n");
    printf(ESPACIO"               L|    ,'   | |      | j      `-.  || '    `.    \\\n");
    printf(ESPACIO"___            | \\_,'     | |`\"----| |         `.||       |\\    \\\n");
    printf(ESPACIO" \"\"=+...__     `,'   ,.-.   |....._|   _....     Y \\      j_),..+=--\n");
    printf(ESPACIO"     `\"-._\"._  .   ,' |  `   \\    /  ,' |   \\     \\ j,..-\"_..+-\"  L\n");
    printf(ESPACIO"          `-._-+. j   !   \\   `--'  .   !    \\  ,.-\" _..<._  |    |\n");
    printf(ESPACIO"              |-. |   |    L        |   !     |  .-/'      `.|-.,-|\n");
    printf(ESPACIO"              |__ '   '    |        '   |    /    /|   `, -. |   j\n");
    printf(ESPACIO"        _..--'\"__  `-.___,'          `.___,.'  __/_|_  /   / '   |\n");
    printf(ESPACIO"   _.-_..---\"\"_.-\\                            .,...__\"\"--./L/_   |\n");
    printf(ESPACIO" -'\"\"'     ,\"\"  ,-`-.    .___.,...___,    _,.+\"      \"\"\"\"`-+-==++-\n");
    printf(ESPACIO"          / /  `.   )\"-.._`v \\|    V/  /-'    \\._,._.'\"-. /    /\n");
    printf(ESPACIO"          ` `.  )---.     `\"\"\\\\__  / .'        /    \\    Y\"._.'\n");
    printf(ESPACIO"           `\"'`\"     `-.     /|._\"\"_/         |  ,..   _ |  |\n");
    printf(ESPACIO"                        `\"\"\"' |  \"'           `. `-'  (_|,-.'\n");
    printf(ESPACIO"                               \\               |`       .`-\n");
    printf(ESPACIO"                                `.           . j`._    /\n");
    printf(ESPACIO"                                 |`.._     _.'|    `\"\"/\n");
    printf(ESPACIO"                                 |    /\"\"'\"   |  .\". j\n");
    printf(ESPACIO"                                .`.__j         \\ `.' |\n");
    printf(ESPACIO"                                j    |          `._.'\n");
    printf(ESPACIO"                               /     |\n");
    printf(ESPACIO"                              /,  ,  \\\n");
    printf(ESPACIO"                              \\|  |   L\n");
    printf(ESPACIO"                               `..|_..' \n");

    break;

case 53:
    printf(ESPACIO"\n");
    printf(ESPACIO"         ,-\"\"--.\n");
    printf(ESPACIO"        /       \\\n");
    printf(ESPACIO"        | ,\"`.   L\n");
    printf(ESPACIO"        |     |  |\n");
    printf(ESPACIO"        \\_   /   |\n");
    printf(ESPACIO"          `-' |  |\n");
    printf(ESPACIO"              |  |\n");
    printf(ESPACIO"              |  |\n");
    printf(ESPACIO"              j  j\n");
    printf(ESPACIO"             .  .\n");
    printf(ESPACIO"             j  j\n");
    printf(ESPACIO"            .  .\n");
    printf(ESPACIO"            |  |\n");
    printf(ESPACIO"            |  |\n");
    printf(ESPACIO"            |  |\n");
    printf(ESPACIO"            L  |\n");
    printf(ESPACIO"             \\_|._\n");
    printf(ESPACIO"       _.-,-\"     `\".\n");
    printf(ESPACIO"     ,' .'           \\\n");
    printf(ESPACIO"    /  /              \\\n");
    printf(ESPACIO" _,'  /  /             \\\n");
    printf(ESPACIO"<    /  /              |\\\n");
    printf(ESPACIO"<+-'|  j               |/\n");
    printf(ESPACIO" `--+  |    ___        `    ..-.\n");
    printf(ESPACIO"     \\ |  ,\"--.`.       \\__/,\"\".|\n");
    printf(ESPACIO"      `-\\||    `.\\--\"\"\"\"' //    |\n");
    printf(ESPACIO"         |`    / `          \\  ,'\n");
    printf(ESPACIO"          \\|. / ,.  ,-.  _.. \\'___..\n");
    printf(ESPACIO"      _____| Y |  `.`./ /  | ;.=\"\n");
    printf(ESPACIO"         \"-+=+.|  ! \\  /_! / |_____\n");
    printf(ESPACIO"          _|_L, `\"\"\" ._. \"\"  .---------\n");
    printf(ESPACIO"       _+==+-`\\. .__,.|...,-=+\\._\n");
    printf(ESPACIO"     ,\"\"   | .+-+ \\     )/.'   \\\"-+\n");
    printf(ESPACIO"           ,+'  |` \\    // \\    \\\n");
    printf(ESPACIO"          '|    | `.\\..'/   \\    \\\n");
    printf(ESPACIO"           |    |   `\"\"'     \\    L\n");
    printf(ESPACIO"           |    |             \\   |,._\n");
    printf(ESPACIO"           |    `             _j .'  '>\n");
    printf(ESPACIO"           |  ,..\\           /        /-.\n");
    printf(ESPACIO"          ,^.' _  |          `.  .--.'  j\n");
    printf(ESPACIO"        ,'  | |/  |-\"`.       |'-'\"\"``-|/\n");
    printf(ESPACIO"        |_   .,---.  |\\\n");
    printf(ESPACIO"        |/_,`-...-^..`' \n");

    break;

case 54:
    printf(ESPACIO"                              ,-'   ,\"\",\n");
    printf(ESPACIO"                             / / ,-'.-'\n");
    printf(ESPACIO"                   _,..-----+-\".\".-'_,..\n");
    printf(ESPACIO"           ,...,.\"'             `--.---'\n");
    printf(ESPACIO"         /,..,'                     `.\n");
    printf(ESPACIO"       ,'  .'                         `.\n");
    printf(ESPACIO"      j   /                             `.\n");
    printf(ESPACIO"      |  /,----._           ,.----.       .\n");
    printf(ESPACIO"     ,  j    _   \\        .'  .,   `.     |\n");
    printf(ESPACIO"   ,'   |        |  ____  |         | .\"--+,^.\n");
    printf(ESPACIO"  /     |`-....-',-'    `._`--....-' _/      |\n");
    printf(ESPACIO" /      |     _,'          `--..__  `        '\n");
    printf(ESPACIO"j       | ,-\"'    `    .'         `. `        `.\n");
    printf(ESPACIO"|        .\\                        /  |         \\\n");
    printf(ESPACIO"|         `\\                     ,'   |          \\\n");
    printf(ESPACIO"|          |                    |   ,-|           `.\n");
    printf(ESPACIO".         ,'                    |-\"'  |             \\\n");
    printf(ESPACIO" \\       /                      `.    |              .\n");
    printf(ESPACIO"  ` /  ,'                        |    `              |\n");
    printf(ESPACIO"   /  /                          |     \\             |\n");
    printf(ESPACIO"  /  |                           |      \\           /\n");
    printf(ESPACIO" /   |                           |       `.       _,\n");
    printf(ESPACIO".     .                         .'         `.__,.',.----,\n");
    printf(ESPACIO"|      `.                     ,'             .-\"\"      /\n");
    printf(ESPACIO"|        `._               _.'               |        /\n");
    printf(ESPACIO"|           `---.......,--\"                  |      ,'\n");
    printf(ESPACIO"'                                            '    ,'\n");
    printf(ESPACIO" \\                                          /   ,'\n");
    printf(ESPACIO"  \\                                        /  ,'\n");
    printf(ESPACIO"   \\                                      / ,'\n");
    printf(ESPACIO"    `.                                   ,+'\n");
    printf(ESPACIO"      >.                               ,'\n");
    printf(ESPACIO"  _.-'  `-.._                      _,-'-._\n");
    printf(ESPACIO",__          `\",-............,.---\"       `.\n");
    printf(ESPACIO"   \\..---. _,-'            ,'               `.\n");
    printf(ESPACIO"          \"                '..,--.___,-\"\"\"---' \n");

    break;

case 55:
    printf(ESPACIO"                ,|\n");
    printf(ESPACIO"              ,' |         .',\n");
    printf(ESPACIO"             /   |    /\\_,' j\n");
    printf(ESPACIO"            /    |  ,' |    |\n");
    printf(ESPACIO"          ,'     |,'   |   .\n");
    printf(ESPACIO"         /       '    j   j    _,.-/\n");
    printf(ESPACIO"        /      ,'     |   |..-\"  ,'\n");
    printf(ESPACIO"       /              |         /                      `\n");
    printf(ESPACIO"      /               |       ,'\n");
    printf(ESPACIO"    ('  (                 ,\"\"`-.                        /|\n");
    printf(ESPACIO"     | | .              ,'      \\                      / |\n");
    printf(ESPACIO"     | |p'             /        |                     /  |\n");
    printf(ESPACIO"     |.`              '       ,'|-.                 ,'   '\n");
    printf(ESPACIO"     /`\"`\"\"\"'\"`-.    /       .  |. `.___           /    /\n");
    printf(ESPACIO"    /      ,-\"'_|._,'        |  | `.    `\"--..    /    j\n");
    printf(ESPACIO"  ,'     ,',-\"',-'           |,'    `-.       | ,'     |\n");
    printf(ESPACIO" /     .'.'   /  ,-'|       \\'         `.    ,'/      j\n");
    printf(ESPACIO"|    .','    /  /   |   ,-.  \\           `+-','       '\n");
    printf(ESPACIO"|  .''      .._/   /   /   \\  \\           `.'        /\n");
    printf(ESPACIO" \\/         | /`\"-.'  /_,..\"\\,\\                     /\n");
    printf(ESPACIO"            '/    |\"|(       \\ .                  ,'\n");
    printf(ESPACIO"                   .| \\       `'                 /\n");
    printf(ESPACIO"                    ' _\\       ,.----\"\"-\\      ,'\n");
    printf(ESPACIO"                 ,-'\"\"  \\    ,'          `   ,'\n");
    printf(ESPACIO"                |        `-.'              ,'\n");
    printf(ESPACIO"                .           \\           _.'\n");
    printf(ESPACIO"                 \\        ___\\         `.\n");
    printf(ESPACIO"                  `.    \"\" `. \\          \\\n");
    printf(ESPACIO"            ,-/\"\"\"\"'._       \\_`.         `.\n");
    printf(ESPACIO"`         _.`-'\"\"            /_`.\\          \\\n");
    printf(ESPACIO"         /.-n+==`       _,,-'\"    \\          \\\n");
    printf(ESPACIO"           ,\\ __.-\"\"\"\"'\"           )          `..__\n");
    printf(ESPACIO"          (,.'                   _/         .._   _\\_\n");
    printf(ESPACIO"          '                    ,\"  _,.-._   -. `_/__ \\\n");
    printf(ESPACIO"                              / ),+....._\\ ,--.\"    `'\n");
    printf(ESPACIO"                             `\"'          `.._ \\\n");
    printf(ESPACIO"                                              `' \n");

    break;

case 56:
    printf(ESPACIO"                                ,.-\"\".\n");
    printf(ESPACIO"                               ,| .   `.\n");
    printf(ESPACIO"   ,-\"\"\"\"'\"`.                 '/ |   /  \\\n");
    printf(ESPACIO"  ,'     _.  \\           ,.  (/ ,'  `    .               ,-\"\"--.\n");
    printf(ESPACIO".'j ,  ,\"\"`.  \\         /  \\  -.\\   |\\   L             ,'  ,..  `.\n");
    printf(ESPACIO"|( |   |    \\  \\|`-.  ,//\"  \\   `\"--' \\   \\           j   /---.   .\n");
    printf(ESPACIO"`-\\|_..'     \\  ||. `/`/  \\  \\---,    `.   \\          |  '.    |  |\n");
    printf(ESPACIO"              \\ || \\    `-.|  ` '`\"-,  |    .         '   |    |__|\n");
    printf(ESPACIO"               `||/        `       `.. |    |          `--'    |  |\n");
    printf(ESPACIO"               ,'                 __.-\"     |                  |  |\n");
    printf(ESPACIO"              /                ,'\"       ,-\"'                  '  |\n");
    printf(ESPACIO"             /   ,'           '        ,'L                    /   '\n");
    printf(ESPACIO"            /. .'.                   .'   |                  /   /\n");
    printf(ESPACIO"           |/ /|||               __,'     L                 /   /\n");
    printf(ESPACIO"          .-.'|L|'__            --         \\               '   /\n");
    printf(ESPACIO"         | . \\                             `.           _,'   /\n");
    printf(ESPACIO"         ` ' ,                              .`       _,'    ,'\n");
    printf(ESPACIO"          `-+                              /--------'    _,'\n");
    printf(ESPACIO"            \\             .               {         _,.-\"\n");
    printf(ESPACIO"           ,\"\\            \\       .     ,-\"-----\"\"\"'\n");
    printf(ESPACIO"       _,.'   `.           )      |  __,.\n");
    printf(ESPACIO"      /        __.        /       |-'\n");
    printf(ESPACIO"      .   ..--+.  `/`v  ./     ,-\"\"\"-.\n");
    printf(ESPACIO"       `-\"`.    \\     `/ \\           '\n");
    printf(ESPACIO"            `-.  \\        `\"\"\"\"--.._  `.\n");
    printf(ESPACIO"               )  \\___              `._ `.\n");
    printf(ESPACIO"             _/       `-.               _ `._\n");
    printf(ESPACIO"     .'\"\"\"--' ,  ,-\"\"`..'           ,\"\"``    `.\n");
    printf(ESPACIO"     \\ _.,--.' ,'                   ( ,-.    __'\"\"\"`.\n");
    printf(ESPACIO"      \" '.___./                      '  |  '\"  `-.   '.\n");
    printf(ESPACIO"                                        |   -.    `-._/\n");
    printf(ESPACIO"                                        |   /\n");
    printf(ESPACIO"                                        '--.' \n");
    printf(ESPACIO"\n");

    break;

case 57:
    printf(ESPACIO"                                       _.-\"\"'-.\n");
    printf(ESPACIO"     _______                        ,-'        `.\n");
    printf(ESPACIO"   ,\" .  ,  `.                  ,. .             \\\n");
    printf(ESPACIO"  / ,.-\"\"     \\      ,v\\       / '\\|              `'.\n");
    printf(ESPACIO" /  |     _    |__  j   \\  /| / .  |               |.\\\n");
    printf(ESPACIO"j   `._,.+.. ,-'  \\ |.\\ ,`,`'/ /|   \\         ,\"\"- '/ |\n");
    printf(ESPACIO"'        |  / _.,_/ || \\,'  / / `    \\_    _.:-...+'  |\n");
    printf(ESPACIO" `-._    `-| /.\"  \\ |''      `. _\\   '.`---..|`-\"'  _/\n");
    printf(ESPACIO"     `---' `.L\\    /'   | \\_.  ' `           '--.--'  \\\n");
    printf(ESPACIO"               \\ ,-    .'  ,                    |      \\\n");
    printf(ESPACIO"                V ,-   -. l            __       |       .\n");
    printf(ESPACIO"              ,','    , '              ..+.....'        |\n");
    printf(ESPACIO"             /.'    .|                 `,              /\n");
    printf(ESPACIO"            | '   .' |                 .'           _.'\n");
    printf(ESPACIO"            | . ,'!  |                 `--....,...-'--.. _\n");
    printf(ESPACIO"           _|_`-..--\"                   -'             <__\n");
    printf(ESPACIO"          /,  `.                                       ,.'\n");
    printf(ESPACIO"          \\'   |                                    _,'\n");
    printf(ESPACIO"           ._ ,'                                   <\n");
    printf(ESPACIO"             \\                                    ,-`\n");
    printf(ESPACIO"              \\                                  <\"`\n");
    printf(ESPACIO"              .\\                                  \\\n");
    printf(ESPACIO"           _,'  \\                     _     ___ ,--\"\n");
    printf(ESPACIO"         .'      \\              ,.'--`|:._.._`. `\n");
    printf(ESPACIO"         |       _\\'.,_        '| `\"- | `--. `\"`\n");
    printf(ESPACIO"          \\         ) `...|`-`,-|      `.._\n");
    printf(ESPACIO"           `\"-.     \\-.   `.    '          `,\n");
    printf(ESPACIO"               j__._,-'|         `---.       \\ _\n");
    printf(ESPACIO"              |-.-'   _'              ` _      )|.\n");
    printf(ESPACIO"              `.__..-' `-.               +.__.,'  |\n");
    printf(ESPACIO"               ,'         /              \\..-'   ,`.\n");
    printf(ESPACIO"       ,-\"----'      ,.--'                \\___,-'   `.\n");
    printf(ESPACIO"       /  .-\"'    ,-'                        `.       `.._\n");
    printf(ESPACIO"       `-..L____,'                            j __        |\n");
    printf(ESPACIO"                                             |    `.      |\n");
    printf(ESPACIO"                                              `___,'--....' \n");

    break;

case 58:
    printf(ESPACIO"\n");
    printf(ESPACIO"\n");
    printf(ESPACIO"\n");
    printf(ESPACIO"                   _,\n");
    printf(ESPACIO"                 .',_..,\n");
    printf(ESPACIO"               ,'     /,--\n");
    printf(ESPACIO"             .'       ,./.__\n");
    printf(ESPACIO"             |_,.----/,,'`.  _\n");
    printf(ESPACIO"            .'__     //    `...>\n");
    printf(ESPACIO"       ____//|) |    `      /.'\n");
    printf(ESPACIO"      (/    `-.-'.._     _,|                 ,.-------.._\n");
    printf(ESPACIO"      .             `.  '   \\               /            `-._\n");
    printf(ESPACIO"      `..---._       |       `.            j                 `.\n");
    printf(ESPACIO"        >-,-\"`\"\"'    |        |`\"+-..__    |              -. `-.\n");
    printf(ESPACIO"       ( /|         /____     |  |  |  \\\"\"|+-.._     ___    `.  `.\n");
    printf(ESPACIO"        \" `-..._     \"--,_    |  |  `   | |   | `.-.\"   \"-._  |  -`\n");
    printf(ESPACIO"             ,'        '_>_   j ,'  '. ,` |,  |   `. `.-v.' `-+..._`.\n");
    printf(ESPACIO"            '.         >       '     | |  ' \\ L     ..`.  '        `._\n");
    printf(ESPACIO"             '.       /              '|`     \\|      '^,         ..,{ `.\n");
    printf(ESPACIO"            / /      /                '       v          |__    ___,'\"\"\n");
    printf(ESPACIO"          ,'  >---+-+.        |   __,..--\"`-._          /.-'`\"----'\n");
    printf(ESPACIO"         /`.       `. '.      |-\"'            `\"--....-'._\n");
    printf(ESPACIO"       .'___'        `._`,    j             ___,-','      `-..._\n");
    printf(ESPACIO"  _ _.'    '/.-          '  ,'       __..<\"\"__,.-'              `.\n");
    printf(ESPACIO" `.)         |'---\"\"`.+-.--'-------\"\"-...__  ,-'/ .\"\\          _  |\n");
    printf(ESPACIO",\"\\ ,--.  _,-          ` `'                `'\"\"\"'`\"'\"\"\"`--._  . `/\n");
    printf(ESPACIO" `-`.___.'                                                  `\"-\"'\n");
    printf(ESPACIO"\n");
    printf(ESPACIO"\n");
    printf(ESPACIO"\n");
    printf(ESPACIO"\n");

    break;

case 59:
    printf(ESPACIO"            /  ,'(\n");
    printf(ESPACIO"           /`-'   \\__.,\n");
    printf(ESPACIO"         ,'     .-\"\\ `---/                     /\n");
    printf(ESPACIO"      |`'      /,'||    '.               ,`. ,(,_. _,\n");
    printf(ESPACIO"  __  |  ,--+--.  ||     `'/  .     _.-\"'   `    \"\"`.\n");
    printf(ESPACIO".\" ,'-'.\"d__|  `.'_'    _,-    ,.  /        ._      `\\_\n");
    printf(ESPACIO"|,'     `-..-----\"._     `.     ` |           `.     \\.\n");
    printf(ESPACIO" `\"V\"--._           `.   `._    ' |             \\     \\,\n");
    printf(ESPACIO"  \\      `----      '. _,-'    ,' |              \\     .\n");
    printf(ESPACIO"   `._             .--`       `.  |               .    |\n");
    printf(ESPACIO"      `-.          `,.       ,--  |               L    '\n");
    printf(ESPACIO"        /   [-,=.---' `.__`,`     `.              |     \\\n");
    printf(ESPACIO"    _.-'    `.._'--.._   - `--+\"\"\"\" '._           |      `._,\n");
    printf(ESPACIO"    \\        _  ---..__`--._'-.`,  ,' ,`._       j         -,'\n");
    printf(ESPACIO"   .'        ,-..     ,'    `. `  . ,'  / `._   /`._    ___,-'_\n");
    printf(ESPACIO"   l        .|_  `,  -' . .-\"      v   /   _.`.'`   7\",',-,.-\" --,\n");
    printf(ESPACIO"    \\      `.  .,  -..',')'\"\",   .    /  .'    |  ,'.',/| ,.     >\n");
    printf(ESPACIO"     V-.    '    -._,-\"    _,  .,'   j ,^    ,'/`--' `    -..,   `...\n");
    printf(ESPACIO"     '  \\/\\|.     :/       './`'|    |/    ,' /            `___    ,'\n");
    printf(ESPACIO"           | `. ,'`-.        /  |    ' _.-'  |               ,'  .\"\n");
    printf(ESPACIO"           L._`.'   |       Y,.'|    ,-    ,-'          __.,'  .'\n");
    printf(ESPACIO"            \\ \\  /`.|     _,.',''.  .`-,../         ,.-/,...-`'\n");
    printf(ESPACIO"             \\ ,|| |/_.-\\\" .+'    \\._  _,'       _.'\"  |\n");
    printf(ESPACIO"              '  ' L| | `,' |      `.\"\"          ,.    |\n");
    printf(ESPACIO"              )    `|\"      |        `>.. _,..--\" j    |\n");
    printf(ESPACIO"           ,-'      |____,..'       ,',-\"'       /   _,'\n");
    printf(ESPACIO"          /\"'    _,.'               |(      _..-' `\"\"\n");
    printf(ESPACIO"          `----\"'                    `'\"\"'\"\" \n");
    printf(ESPACIO"\n");
    printf(ESPACIO"\n");

    break;

case 60:
    printf(ESPACIO"  _..__                                    ___\n");
    printf(ESPACIO" /     `._                          ,--\"\"\"\"   `\"-.\n");
    printf(ESPACIO"|         `.                    _.'\"\"/`.        |/`-.\n");
    printf(ESPACIO"|           `.                ,+ `..' | |       |'...+.\n");
    printf(ESPACIO"|     \\       \\              / /\\____,' '    __ `.`._,\".\n");
    printf(ESPACIO"|      ..      \\           ,'  \\      .' ,-\"'  `. `.._,'`.\n");
    printf(ESPACIO"|       .`.     \\         /     `-..-'  .  _.... |._      \\\n");
    printf(ESPACIO"'        ' `     \\       /          ,-\"\"`.____...'  `.     \\\n");
    printf(ESPACIO" `        `.`.    \\     '         ,'   _,--------.`.  `.    L\n");
    printf(ESPACIO"  `         ` `.   \\   j         /  .,' ,\"_.....`.`.`   \\   |\n");
    printf(ESPACIO"   `.        `. `.  \\  |        / ,'/ .','..... `.\\ \\|   .  |\n");
    printf(ESPACIO"     `.        `. .  \\ |       j . / ..'.,-\"\". \\ || ||   |  |\n");
    printf(ESPACIO"       `.        `.`. \\'.      | | | |||.   .,.','/ /'   |  |\n");
    printf(ESPACIO"         `-.       `. .:\\      | | | ||'`..___.'.','/   j   |\n");
    printf(ESPACIO"            `-._     `-._\\      \\'.`.`..`..__....','   ,   /\n");
    printf(ESPACIO"                `--......-\\      \\ `.`.`.......-\"'   ,'   /\n");
    printf(ESPACIO"                           `.     `. `-..____,.-\" _.'   ,'\n");
    printf(ESPACIO"                             >.     '--...___,..-'   _.\"\n");
    printf(ESPACIO"                           ,'  `--,__            _,-\"  `-.\n");
    printf(ESPACIO"                       _.-'      '   `'--------\"' `.      `-.\n");
    printf(ESPACIO"                     .'        ,'                   \\        `.\n");
    printf(ESPACIO"                    .        .'                      `.        .\n");
    printf(ESPACIO"                    |      ,'                          `._     |\n");
    printf(ESPACIO"                     `----'                               `\"--\" \n");
    printf(ESPACIO"\n");
    printf(ESPACIO"\n");

    break;

case 61:
    printf(ESPACIO"             ___   _,-'\"\"-.\n");
    printf(ESPACIO"           /`.  `./,\\`.    `.\n");
    printf(ESPACIO"          /'. |  / || |      .\n");
    printf(ESPACIO"         . `|,+-'| `| |       `._\n");
    printf(ESPACIO"         `,-'    `. | '          `.\n");
    printf(ESPACIO"        ,' -'      `\"'             `.\n");
    printf(ESPACIO"       /\"`-.                         `.\n");
    printf(ESPACIO"      :`.   \\                          .\n");
    printf(ESPACIO"     ' `.\\   \\                          `\n");
    printf(ESPACIO"    .`.  .`   `           `.             .\n");
    printf(ESPACIO"   / `.'  .`   .      .     \\             \\\n");
    printf(ESPACIO"  /``  .`  `\\   .      \\     .             .\n");
    printf(ESPACIO" j  .\\  .:  .'  :       .    '             |\n");
    printf(ESPACIO" |`. .. ||  :|  |        ,..--`._          |\n");
    printf(ESPACIO" |:| |: :|  |:  |      ,'        |         |\n");
    printf(ESPACIO" ||| :: |:  |:  |      |         |         |\n");
    printf(ESPACIO" :'j '| :|  :|  |      |         |         |\n");
    printf(ESPACIO" `/ .j  ,:  :|  |     ,'         `         |\n");
    printf(ESPACIO"  \\/ / . '  ',  |   .'            \\        '\n");
    printf(ESPACIO"  ` , /,'  /.  j   |               .      /\n");
    printf(ESPACIO"   `.'/   /'   '   |  .             .   ,'\n");
    printf(ESPACIO"     .  .'/   /    `._/             '  /\n");
    printf(ESPACIO"      `.,'   /       |          __,' .'\n");
    printf(ESPACIO"        `-._,         `.   _,.-\" _,-'\n");
    printf(ESPACIO"            `+..____    `\"'    .'\n");
    printf(ESPACIO"           _/    |  `\"\"\"''\\    '\n");
    printf(ESPACIO"     _,.-\"'      \\        |     \\\n");
    printf(ESPACIO" _.-'             .       |      `\n");
    printf(ESPACIO",                 |       |       `.\n");
    printf(ESPACIO"`_          __,,-'        '         `.\n");
    printf(ESPACIO"  `'\"\"'\"'\"''             .            .\n");
    printf(ESPACIO"                         |            |\n");
    printf(ESPACIO"                         '            /\n");
    printf(ESPACIO"                          `.        ,'\n");
    printf(ESPACIO"                            `-..,.-' \n");

    break;

case 62:
    printf(ESPACIO"                               __,.-\"\"\"'\"--..._.,---.\n");
    printf(ESPACIO"                           _,-'               /      `.\n");
    printf(ESPACIO"                        _.'                 ,'   ,-\"\"`.|\n");
    printf(ESPACIO"                      ,'                        / ,+\"`.;\n");
    printf(ESPACIO"                    ,'   ____                  . |_/  /\n");
    printf(ESPACIO"                   /  .\"'    `-.               ` `..-/`.  _\n");
    printf(ESPACIO"                  '  /                     .    `---'   `: `.\n");
    printf(ESPACIO"                 /  .    ,-\"\"`.           .'             \\`-.`+\"\"`\"`.\n");
    printf(ESPACIO"                /   |  .' ,\"\".|               _,...,._    L |  `     `.\n");
    printf(ESPACIO"               /    |  | ._)  /     \\    _.-\"'        \"`. | j          .\n");
    printf(ESPACIO"              j     `  ' |  ,'        ,-'   ___......_   .|\"           |\n");
    printf(ESPACIO"              |         `-+'        ,'  _,\"__.---\"\"\"`-.`.||            |\n");
    printf(ESPACIO"              '                   ,'  ,'.-'    _______ `.`|\\           |\n");
    printf(ESPACIO"            .\"                   /  ,\",'   _,\"+.------+`.`:|           |\n");
    printf(ESPACIO"          ,'     .             ,' .,-'   .\".-'  _..._  ` \\''    .      ;\n");
    printf(ESPACIO"       _,+      /             ,  ,/    ,'.' .-\",.----.+ `7  `.   `._,.'\n");
    printf(ESPACIO"      /  '    ,'             .  '.   ,\".\" .:,-'__     :|j     `-.-'\n");
    printf(ESPACIO"     j    \\  /|`            ,  //   .,' ,'.' .\"__`.   ||'\n");
    printf(ESPACIO"   ,-+     `\" | \\             /.   //  /,\" ,'.'  \\ \\  |'\n");
    printf(ESPACIO"  /           '  \\         : j '  //  //  .,'     || ,\"\n");
    printf(ESPACIO" /           /    \\        | :|  j.' j/   ||_.\") , ;<_\n");
    printf(ESPACIO".            `-.   `.      : ||  || |.    `..-'.'.'   `'-._\n");
    printf(ESPACIO"|              |     `.    | |:  :| |'        _,'          `.\n");
    printf(ESPACIO"|              |      /`-._`.`:. \\' `.`..__.-'+              `\n");
    printf(ESPACIO"`          .   F     ,     /\"`+-+.^+--`\"\"\"     `._            |\n");
    printf(ESPACIO" `.       |   /     /     .                       `._         /\n");
    printf(ESPACIO"   `._   _,..'    ,'      '                          `\"-....-'\n");
    printf(ESPACIO"      `\"\"        /       j\n");
    printf(ESPACIO"               ,'        |\n");
    printf(ESPACIO"              /          |\n");
    printf(ESPACIO"             j           '\n");
    printf(ESPACIO"             |          /\n");
    printf(ESPACIO"             |         /\n");
    printf(ESPACIO"             '        /\n");
    printf(ESPACIO"              `.___,.' \n");

    break;

case 63:
    printf(ESPACIO"                                                        _\n");
    printf(ESPACIO"                                                   _, -\"'|\n");
    printf(ESPACIO"                                               _.-'   ,'j\n");
    printf(ESPACIO"                       ____           _,.....-'      /  |\n");
    printf(ESPACIO"                      `.   `'--..,--\"'              .   |\n");
    printf(ESPACIO"                       `.                           |   |\n");
    printf(ESPACIO"                        .`.                         \\  j\n");
    printf(ESPACIO"                _.,     '  .                         ` |\n");
    printf(ESPACIO"              .','       . |                            \\\n");
    printf(ESPACIO"            ,\" /         `./                             \\\n");
    printf(ESPACIO"           /  /           /                    ,-'        \\\n");
    printf(ESPACIO"         ,'  j           j  .._              ,'            L._\n");
    printf(ESPACIO"        /    |           |     `.          ,'             ,'  `-.\n");
    printf(ESPACIO"       .     |           |       `.       .            _,'       `.\n");
    printf(ESPACIO"       |     |           `.        `               _,-'            \\\n");
    printf(ESPACIO"       |     `           / `-.                  ,\"/                `.\n");
    printf(ESPACIO"       |    _.\\         j     `-.._       ,   .' |                  ;\n");
    printf(ESPACIO"       '  ,'   \\        |        _,'.    '  ,'    `.              .'\n");
    printf(ESPACIO"        +'   ,.-^.      `-..,..-'/ _,^-----+.       `._       _,-'\n");
    printf(ESPACIO"        .+--`._   `-._     L_   j-\"          `-.  _,-\\ `..,--'\n");
    printf(ESPACIO"          \\    `      `\"-+'  `-.'               \"\" ,.'/ ` |      ,\n");
    printf(ESPACIO"_____      L    `       /       `.._.----.._   _.-'  /   F     ,'|\n");
    printf(ESPACIO"`.   `.    |     \\     '.           `\"\"\"-+.-`\"'     '    |`. ,'  |\n");
    printf(ESPACIO"  `.   `.  |      L   _,+\\__              `          \\   |/ /    |\n");
    printf(ESPACIO"    \\    +,'      |  '     `.`._           `.         |  |.,     |\n");
    printf(ESPACIO"    `.  '         |,\"        \\  `.          |.      _,|         /\n");
    printf(ESPACIO"      `           |           |   +.       / | _,-+'  |        /\n");
    printf(ESPACIO"       \\          |          '    |\\.     /-',\"  /    |       j\n");
    printf(ESPACIO"        \\         |         /_    | \\`..,-\".\"   |     j       |\n");
    printf(ESPACIO"         \\         \\ _   _,'  `-.  `-,|/___.\\,-.|    /        '\n");
    printf(ESPACIO"         `         `' \"\"\"        `\"\"'            \\  |        .\n");
    printf(ESPACIO"          `. ,\"\"'   |                             `-+`./     |\n");
    printf(ESPACIO"            `.     '                                  |      F\n");
    printf(ESPACIO"              )   |                                    \\    /\n");
    printf(ESPACIO"             /__,.'                                     \\,.' \n");

    break;

case 64:
    printf(ESPACIO"                       .-\n");
    printf(ESPACIO"                       | \\               _,\n");
    printf(ESPACIO"                      j   \\           ,-' |\n");
    printf(ESPACIO"                      |    \\       ,''   .'\n");
    printf(ESPACIO"                      |     \\    ,'   .  |\n");
    printf(ESPACIO"         .-`.        .|    __\\_,'    ,  ,\n");
    printf(ESPACIO"       ,'   |        ||  \"\"        .'  /\n");
    printf(ESPACIO"      .     +.      ,\"'           .   /   ___\n");
    printf(ESPACIO"    ,-.\\ _,`.'     ,  __._        `. ,  ,'   |\n");
    printf(ESPACIO"    .  `'   /     /  <   ,'    _    \\`.'     `-,._\n");
    printf(ESPACIO" ,\\_|`.,-`.'     /`. `-^-'  _.|    .-\"||     .'   `-.\n");
    printf(ESPACIO"` `. //`.`      j \\`.     ,'|)|   ,\\  |`.    |  ,.--'\n");
    printf(ESPACIO" `. `'`//       |  `|   .:,-'     |`.'   `.___`\" '\n");
    printf(ESPACIO"  `.|>,'\\       |`..|  /     ____.' |    `-. >    \\,_..._\n");
    printf(ESPACIO"  // `   \\     ,',-'| /  \"'-\".  ` `.`.    ,-\"\"\\  ,'      `\".\n");
    printf(ESPACIO" (/   :  `-._,/ /,'`./  '\"-._ `. `. ``--..\\_,-' ,'          \\\n");
    printf(ESPACIO"      '.    .',' /'|     /|  `. `. ._.__ _,'.\"|'             \\\n");
    printf(ESPACIO"        .   `,' /  |  ` /-'    \\  `. ` -..-'  |\"`.            '\n");
    printf(ESPACIO"         `--'/ /    `+-'        \\  ``.       .    `.          `\n");
    printf(ESPACIO"            ' .       `-.  ,-\"--.+  \\ .    .' `.    `    .   | \\\n");
    printf(ESPACIO"           '| |          `.\\,\" ,. ` ' '_.-'     \\    \\   |   ' |\n");
    printf(ESPACIO"           |' |    __,.-\"' .| '|`. . \\`.   \\     \\    .  | ,'  |\n");
    printf(ESPACIO"           || |  ,'\\        .`. V  | |     |      .   |  '   /.'\n");
    printf(ESPACIO"           `| | /   `._     `. _|  | ||    |      |   | /..-' /   .\n");
    printf(ESPACIO"            ' . '      /`---'.`.`._| '|,--.|      |   |'     /    '|\n");
    printf(ESPACIO"             . . \\    ,'      ` \\/ '/ `    `._    '  ,'     |   ,' |\n");
    printf(ESPACIO"              `.\\ `.  \\        `. .'   |      `.,' ,'|      '+-'   '\n");
    printf(ESPACIO"            _.--`.-j   `-.-..    `-.   `-.     | ,/  `.       `  .'\n");
    printf(ESPACIO"          .'_.'+\"\"' _   _,.'-`      `-..._,\\   |-'     `-...__..'\n");
    printf(ESPACIO"          ' /_..|/-' `\"'                ,_.`'   `..__\n");
    printf(ESPACIO"                                          `.  `-._  ,-'\n");
    printf(ESPACIO"                                           `,..`. `/  |\n");
    printf(ESPACIO"                                            :  /    `.'\n");
    printf(ESPACIO"                                             `.' \n");

    break;

case 65:
    printf(ESPACIO"                                               _,'|\n");
    printf(ESPACIO"                                             .'  /\n");
    printf(ESPACIO"                    __                     ,'   '\n");
    printf(ESPACIO"                   `  `.                 .'    '\n");
    printf(ESPACIO"                    \\   `.             ,'     '\n");
    printf(ESPACIO"                     \\    `.          ,      /\n");
    printf(ESPACIO"                      .     `.       /      ,\n");
    printf(ESPACIO"                      '       ..__../'     /\n");
    printf(ESPACIO"                       \\     ,\"'   '      . _.._\n");
    printf(ESPACIO"                        \\  ,'             |'    `\"._\n");
    printf(ESPACIO"                         |/               ,---.._   `.\n");
    printf(ESPACIO"                       ,-|           .   '       `-.  \\\n");
    printf(ESPACIO"                     ,'  |     ,   ,'   :           '__\\_\n");
    printf(ESPACIO"                     |  /,_   /  ,U|    '            |   .__\n");
    printf(ESPACIO"                     `,' `.\\ `./..-'  __ \\           |   `. `.\n");
    printf(ESPACIO"                       `\",_|  /     ,\"  `.`._       .|     \\ |\n");
    printf(ESPACIO"                      / /_.| j  ---'.     `._`-----`.`     | |\n");
    printf(ESPACIO"                     / // ,|`'  `-/' `.      `\"/-+--'    ,'  `.\n");
    printf(ESPACIO"                 _,.`,'| / |.'  -,' \\  \\       \\ '._    /     |\n");
    printf(ESPACIO" .--.      _,.-\"'   `| L \\ \\__ ,^.__.\\  `.  _,--`._,>+-'  __,-'\n");
    printf(ESPACIO":    \\   ,'          |  | \\          /.   `'      '.  `--'| \\\n");
    printf(ESPACIO"'    | ,-.. `'   _,--' ,'  \\        `.\\            7      |,.\\\n");
    printf(ESPACIO" `._ '.  .`.    .>  `-.-    |-.\"\"---..-\\        _>`       `.-'\n");
    printf(ESPACIO"    `.,' | l  ,' ,>         | `.___,....\\._    ,--``-.\n");
    printf(ESPACIO"   j | .'|_|.'  /_         /   _|         \\`\"--+--.   ` ,..._\n");
    printf(ESPACIO"   |_`-'/  |     ,' ,.._,.'\"\"\"'\\           `--'    `-..'     `\".\n");
    printf(ESPACIO"     \"-'_,+'\\    '^-     |      \\                    /         |\n");
    printf(ESPACIO"          |_/         __ \\       .                   `.`.._  ,'`.\n");
    printf(ESPACIO"                  _.:'__`'        `,.                  |   `'   |\n");
    printf(ESPACIO"                 `--`-..`\"        /--`               ,-`        |\n");
    printf(ESPACIO"                   `---'---------'                   \"\"| `#     '.\n");
    printf(ESPACIO"                                                       `._,       `:._\n");
    printf(ESPACIO"                                                         `|   ,..  |  '.\n");
    printf(ESPACIO"                                                         j   '.  `-+---'\n");
    printf(ESPACIO"                                                         |,.. |\n");
    printf(ESPACIO"                                                          `. `;\n");
    printf(ESPACIO"                                                            `' \n");

    break;

case 66:
    printf(ESPACIO"                        ,.\"--.\n");
    printf(ESPACIO"                   _.../     _\\\"\"-.\n");
    printf(ESPACIO"                 //  ,'    ,\"      :\n");
    printf(ESPACIO"                .'  /   .:'      __|\n");
    printf(ESPACIO"                || ||  /,    _.\"   '.\n");
    printf(ESPACIO"                || ||  ||  ,'        `.\n");
    printf(ESPACIO"               /|| ||  ||,'            .\n");
    printf(ESPACIO"              /.`| /` /`,'  __          '\n");
    printf(ESPACIO"             j /. \" `\"  ' ,' /`.        |\n");
    printf(ESPACIO"             ||.|        .  | . .      _|,--._\n");
    printf(ESPACIO"             ||#|        |  | #'|   ,-\"       `-.\n");
    printf(ESPACIO"            /'.||        |  \\.\" |  /             `\n");
    printf(ESPACIO"           /    '        `.----\"   |`.|           |\n");
    printf(ESPACIO"           \\  `.    ,'             `  \\           |\n");
    printf(ESPACIO"            `._____           _,-'  `._,..        |\n");
    printf(ESPACIO"              `\".  `'-..__..-'   _,.--'.  .       |\n");
    printf(ESPACIO"               ,-^-._      _,..-'       `.|       '\n");
    printf(ESPACIO"           _,-'     |'\"\"'\"\"              `|  `\\    \\\n");
    printf(ESPACIO"       _.-'         |            `.,--    |    \\    \\\n");
    printf(ESPACIO"  _,.\"\"'\"\"'-._      '      `.     .      j      '    \\\n");
    printf(ESPACIO" /            `.___/.-\"    ._`-._  \\.    |      |     L\n");
    printf(ESPACIO"/  ____           /,.-'    . `._ '\"\"|`.  `      |     |\n");
    printf(ESPACIO" `.    `\"-.      / _,-\"     `._ `\"'\".  `. \\     '     '\n");
    printf(ESPACIO"   \\       `-   .\"'            \"`---'\\   ` `-._/     /\n");
    printf(ESPACIO"    `-------.   |                     \\   `-._      /\n");
    printf(ESPACIO"             \\ j                      .       `...,'\n");
    printf(ESPACIO"              `|                       \\\n");
    printf(ESPACIO"               '                        \\\n");
    printf(ESPACIO"                .                      / \\\n");
    printf(ESPACIO"                |`.                   /   `._\n");
    printf(ESPACIO"                |    `.._____        /|      `-._\n");
    printf(ESPACIO"                |        |   Y.       |.         `.\n");
    printf(ESPACIO"                |       j     \\       '.`\"--....-'\n");
    printf(ESPACIO"             _,-'       |      |        \\\n");
    printf(ESPACIO"          .-'           |     ,'         `.\n");
    printf(ESPACIO"         '              |     |            `.\n");
    printf(ESPACIO"         `.        __,..'     '.             \\\n");
    printf(ESPACIO"           `-.---\"'             `-..__      _/\n");
    printf(ESPACIO"                                      `'\"\"\"' \n");

    break;

case 67:
    printf(ESPACIO"           ,-\"\"\",.--\n");
    printf(ESPACIO"         ,:-'_.--\"\"\"\\\n");
    printf(ESPACIO"       ,\"/,-'  _,..--+-.\n");
    printf(ESPACIO"      .,'/ _.-'         \\\n");
    printf(ESPACIO"      |||,'_.-.          \\ ____\n");
    printf(ESPACIO"      |.','U| |         .-'    `-.\n");
    printf(ESPACIO"    ,\"   |_L:/        ,'          `.\n");
    printf(ESPACIO"   j                 /              .\n");
    printf(ESPACIO"   \\_______...-7    j           ___ |\n");
    printf(ESPACIO"    V V/     _.'    |    _,.---- ,_`\"-.\n");
    printf(ESPACIO"     ,/_...-\"   __.-|  -\"    `,.   ``.'`.\n");
    printf(ESPACIO"     `..,......\"    `.  | \\    `+`. `  \\ .\n");
    printf(ESPACIO"       j /            `./ \\\\    ` .  \\\\ . .\n");
    printf(ESPACIO"       | |               ` `\\     \\'  \\' \\|\n");
    printf(ESPACIO"       | |              | `.`+. /         \\\n");
    printf(ESPACIO"       ` '              |   `\".',  `\\  `|  )\n");
    printf(ESPACIO"        \\ \\           .'     . ||   || ||.'\n");
    printf(ESPACIO"         `>`.,.....-----\"'\"\"\"\"\\`|   |' |||\n");
    printf(ESPACIO"         / .||D.\\\\|.'\\ () (_) (\\|  j|  j/|\n");
    printf(ESPACIO"        / +,|| ||||_____........|  || / .'\n");
    printf(ESPACIO"     _,'.\"'_|\\.'/|   _,---._    |  .' ,'\n");
    printf(ESPACIO"  .\"' .   '\"j-...' ,' ,     `. .'  '  |\n");
    printf(ESPACIO" /  ,/  ,'.'`     /  /       ,'       `.\n");
    printf(ESPACIO" | /| ,`./   \\   / .'        |         |.\n");
    printf(ESPACIO" | ||_|./ .   `.j /          `.        | )\n");
    printf(ESPACIO" `-'`.+' /      | `          ,'`.__     Y\n");
    printf(ESPACIO"     .' /       | `.       .'   /  `\"\"'\"\n");
    printf(ESPACIO"     |  '      /|    .___.'   ,'\n");
    printf(ESPACIO"      `.   / -' `.        ,   `.\n");
    printf(ESPACIO"       |  /       `+.     |     `.\n");
    printf(ESPACIO"       |  \\        | `    `       \\\n");
    printf(ESPACIO"        \\  `.      |`.`.   `.      |\n");
    printf(ESPACIO"         \\   `.    |  `..    `.    '\n");
    printf(ESPACIO"         /     `-. |    `.     `  /\n");
    printf(ESPACIO"  ____.-'          `.  _,'      --\\\n");
    printf(ESPACIO",' .'_.,_.         __:\"            `.\n");
    printf(ESPACIO"| ( | (         ,-\" ,-'.\" ,'_.      |\n");
    printf(ESPACIO"`-`-^--`--------'__|__(  | /   _,--\"\n");
    printf(ESPACIO"                       \"\"--'..' \n");

    break;

case 68:
    printf(ESPACIO"                 __.\"`. .-.                    ,-..__\n");
    printf(ESPACIO"              ,-.  \\  |-| |               ,-\"+' ,\"'  `.\n");
    printf(ESPACIO"              \\  \\  \\_' `.'             .'  .|_.|_.,--'.\n");
    printf(ESPACIO"               \\.'`\"     `.              `-' `.   .  _,'.\n");
    printf(ESPACIO"                \\_     `\"\"\"-.             .\"--+\\   '\"   |\n");
    printf(ESPACIO"                | `\"\"+..`..,'             `-._ |        |\n");
    printf(ESPACIO"               j     |                       '.       _/.\n");
    printf(ESPACIO"              /   ,' `.      _.----._          `\"-.  '   \\\n");
    printf(ESPACIO"             |   |     |   ,'  ,.-\"\"\"`.           |  .    \\\n");
    printf(ESPACIO"    __       |   '    /-._.  ,'        `.         |   \\    \\\n");
    printf(ESPACIO"   (  `.     `.     .'    | /  _,.-----. \\       j     .    \\\n");
    printf(ESPACIO"    `. |.  __  `,         |j ,'\\        `|\"+---._|          ,\n");
    printf(ESPACIO" .-\"-|\"' \\\"  |   \". '.    ||/d |_-\"\"`.    /     ,'.          )\n");
    printf(ESPACIO" `._. |  '.,.'     '  `  ,||_.-\"      |  j     '   `        .\n");
    printf(ESPACIO".\"'--:' .  )        `.  (     _.-+    |  |                  |\n");
    printf(ESPACIO"`-,..'  ` <_          `-.`..+\"   '   ./,  ._         |      |\n");
    printf(ESPACIO" `.__|   |  `-._     _.-\"`. |   /  ,'j      `. `....' ____..'\n");
    printf(ESPACIO"   `-.,.'    \\  `. ,'     ,-|_,'  /  |        `.___,-'   )\n");
    printf(ESPACIO"      `.      `.  Y       `-..__.',-'    __,.'           '\n");
    printf(ESPACIO"        `         '   ,--.    |  /            `+\"\"       `.\n");
    printf(ESPACIO"         `.       ,--+   '  .-+-\"  _,'   ,--  /     '.    |\n");
    printf(ESPACIO"           `-..   \\     __,'           .'    /        `.  |\n");
    printf(ESPACIO"               `---)   |  ____,'      ,....-'           `,'\n");
    printf(ESPACIO"                  '                 ,' _,-----.         /\n");
    printf(ESPACIO"                   `.____,.....___.\\ _...______________/\n");
    printf(ESPACIO"                                  __\\:+.`'O O  O O  O |\n");
    printf(ESPACIO"                              ,-\"'  _,|:;|\"\"\"\"\"\"\"\"\"\"\"\"|\n");
    printf(ESPACIO"                            ,'   ,-'  `._/    _.\"  .`-|\n");
    printf(ESPACIO"                         .-\"    '      \\    .'      `.`.\n");
    printf(ESPACIO"                        :      .        \\   |        / |\n");
    printf(ESPACIO"                         .      \\.__   _,`-.|       /  |\n");
    printf(ESPACIO"                         `.      \\  \"\"'     `.         `....\n");
    printf(ESPACIO"                           .     |            \\             `.\n");
    printf(ESPACIO"                          .'   ,'              \\              |\n");
    printf(ESPACIO"                  ,------'     `.               `-...._  '\"-. '.\n");
    printf(ESPACIO"                 / ,'\"'\"`        |                  `--`._      `.\n");
    printf(ESPACIO"                 `\"......---\"\"--'                         \\       .\n");
    printf(ESPACIO"                                                          |        `.\n");
    printf(ESPACIO"                                                         (   -..     .\n");
    printf(ESPACIO"                                                          `\"\"\"' `....' \n");

    break;

case 69:
    printf(ESPACIO"                _.--\"'\"\"\"--._\n");
    printf(ESPACIO"              .\"             `.\n");
    printf(ESPACIO"             /                 .\n");
    printf(ESPACIO"            j                   .\n");
    printf(ESPACIO"            |                   |\n");
    printf(ESPACIO"            |                   |\n");
    printf(ESPACIO"            | (')              j\n");
    printf(ESPACIO"            `                 ,`.\n");
    printf(ESPACIO"             \\               ,^. `.\n");
    printf(ESPACIO"              .             /   \\  .\n");
    printf(ESPACIO"              |            /     . |\n");
    printf(ESPACIO"              |          ,'      | |\n");
    printf(ESPACIO"             ,'---..___ /        | |\n");
    printf(ESPACIO"            ' `--..___ \"`.      .  |\n");
    printf(ESPACIO"             `\"--....___.'     /  j__.....__\n");
    printf(ESPACIO"                              /   |         `.\n");
    printf(ESPACIO"                             / _,------._     `.\n");
    printf(ESPACIO"                            /,+_         `.     `.\n");
    printf(ESPACIO"                          ,'    `-.        \\      .\n");
    printf(ESPACIO"                         .         `.       \\      \\\n");
    printf(ESPACIO"                         |           `.     |       \\\n");
    printf(ESPACIO"                         |             `.   |_,..__  .\n");
    printf(ESPACIO"                         |\\              \\  |      `.|\n");
    printf(ESPACIO"                         | `.,--------._  \\ |        `\n");
    printf(ESPACIO"                         |  |           `. \\|\n");
    printf(ESPACIO"                         |  |             `.|\n");
    printf(ESPACIO"                         |  |\n");
    printf(ESPACIO"                         |  |\n");
    printf(ESPACIO"                         |. '\n");
    printf(ESPACIO"                        .' \\ `.\n");
    printf(ESPACIO"                     _,' ,' `. ._\n");
    printf(ESPACIO"   ---====+,______,.\"_.-'     .  `.\n");
    printf(ESPACIO"   _,..==`'_.+'-\"\"\"\"'         / ^.\\`:._\n");
    printf(ESPACIO" ,=\"/    ,\"            ....==+ /  `\\  `:.\n");
    printf(ESPACIO"'  /    / |               _+:-'    .|   ``.\n");
    printf(ESPACIO"       '  `.           --\"\"        |'     `\\\n");
    printf(ESPACIO"                                   ' \n");

    break;

case 70:
    printf(ESPACIO"                                    _...._\n");
    printf(ESPACIO"                                  ,'   __ `.\n");
    printf(ESPACIO"                                .'   ,'  `. |\n");
    printf(ESPACIO"                               .   .'      .|\n");
    printf(ESPACIO"                              /   .        ||\n");
    printf(ESPACIO"                          .-\"'\"\"\"-'        ,'\n");
    printf(ESPACIO"                      _,'\"\"\"'\"--._ `.\n");
    printf(ESPACIO"                    .'            `.:\n");
    printf(ESPACIO"                  ,'                `.\n");
    printf(ESPACIO"                 /     _              \\\n");
    printf(ESPACIO"   ..--._       /     ._;              \\\n");
    printf(ESPACIO" ,'      `.    j                        .\n");
    printf(ESPACIO".          `.  |                        |\n");
    printf(ESPACIO"|           ,+-' ,-\"\"-.       _.-\"'\"\"\"`\"`._\n");
    printf(ESPACIO"|          : |/ /`.    |    ,'             `.\n");
    printf(ESPACIO"|          |// :  |    |   ,                 '.\n");
    printf(ESPACIO"'    .     |/  '-\"     |  /                    `.\n");
    printf(ESPACIO" `    \\   ,'    `-...,'  j                       `\n");
    printf(ESPACIO"  '._/_\\.'               |                        `\n");
    printf(ESPACIO"  .'   `\"-._             |                         \\\n");
    printf(ESPACIO"  |         `.           |                          \\\n");
    printf(ESPACIO"  | --+.      `.          .                 ___      .\n");
    printf(ESPACIO"  '   | `.      `.         .           _.-\"\"   `\"._  |\n");
    printf(ESPACIO"   .  '    .      `.        `-.____,.-' /          `.|\n");
    printf(ESPACIO"    .  `    `.      .                  /             `\n");
    printf(ESPACIO"     `. `.    `.     \\                ,\n");
    printf(ESPACIO"       .  .     .     .             ,'\n");
    printf(ESPACIO"        `  `.    `.    .           .\n");
    printf(ESPACIO"         `.  `.    .   |        _,'\n");
    printf(ESPACIO"           `    `. |   |      ,'\n");
    printf(ESPACIO"            `.    `'   |  _.-'\n");
    printf(ESPACIO"              `-.      ;-'\n");
    printf(ESPACIO"                 `--..\" \n");

    break;

case 71:
    printf(ESPACIO"                                       ___\n");
    printf(ESPACIO"                                    ,\"\" __\"`.\n");
    printf(ESPACIO"                                   / .'\"   `-`.\n");
    printf(ESPACIO"                                  / /        ` .\n");
    printf(ESPACIO"                            _,.__. /_,...._   \\ \\\n");
    printf(ESPACIO"                         ,-'     |j        `-._\\ \\\n");
    printf(ESPACIO"                      _,'        ||            `._\\\n");
    printf(ESPACIO"                    ,'_,..,.      |        .----._`.\n");
    printf(ESPACIO"                  _,\"'   / /     `'         `.   :`-'\n");
    printf(ESPACIO"                        / j               ,_  \\   `|\n");
    printf(ESPACIO"                       j ,'-._      _..-\"\"' | `.  ||\n");
    printf(ESPACIO"                       | |    `'-.,'        |  |  ||\n");
    printf(ESPACIO"                       | |  _.              ' j   ||\n");
    printf(ESPACIO"                       ' '.'.'         \\\"-./ ,    |'\n");
    printf(ESPACIO"                        ` `/_           \\_/ /     | L\n");
    printf(ESPACIO"                         `._ `-..___,.-'\"_,:      | |\n");
    printf(ESPACIO"                          | `._      _,-' ||      | |\n");
    printf(ESPACIO"                          |`..,+----`.__,\" |      | |\n");
    printf(ESPACIO"                          |                |      | |\n");
    printf(ESPACIO"         _.--\"\"\"\"--._     |               _'    _.+-'\"\"\"'`-._\n");
    printf(ESPACIO"       ,'            `-.  |.-.           , `\\ ,'             `.\n");
    printf(ESPACIO"     ,'                 \\j |  |          `./ /                 `.\n");
    printf(ESPACIO"    / _.--\"\"\"--._        | `-\"               |    _,.-------.._  \\\n");
    printf(ESPACIO"   /.'           `-.    j                    | ,-'             `-.\\\n");
    printf(ESPACIO"  ,'                `-. |                    |'                   '.\n");
    printf(ESPACIO" /   __                \\|                    /                      `\n");
    printf(ESPACIO"j .'\"  \"-..             |  _         ,\"`.    |           _,.--'\"\"'-. .\n");
    printf(ESPACIO"|/:        `._          / | \\        |  |    |        _,:           \\|\n");
    printf(ESPACIO"` '           `-._    ,'| `.,'       '.-'    `..__,..' '`.   __\n");
    printf(ESPACIO" '                `\"\"'  '                    ;          `.`.'  \"'--...,'\n");
    printf(ESPACIO"                         .  Y.          /\"','             '-..____,.-'\n");
    printf(ESPACIO"                          `-._         _`-'\n");
    printf(ESPACIO"                              `\"------\" \n");

    break;

case 72:
    printf(ESPACIO"                             _,--'\"\"\"`\"--._\n");
    printf(ESPACIO"                           ,'            _.-+._\n");
    printf(ESPACIO"                       ,-.'            ,'      `.\n");
    printf(ESPACIO"                     .'  |            .          `.\n");
    printf(ESPACIO"                    /    '            |            \\\n");
    printf(ESPACIO"                   /    /             |             L\n");
    printf(ESPACIO"                  /    /            . |             |\n");
    printf(ESPACIO"                 j    /             | '             |\n");
    printf(ESPACIO"                 |   /              '  .            |\n");
    printf(ESPACIO"                 |  j  .             \\  .           |\n");
    printf(ESPACIO"                 '  | /               `  `.       .''\n");
    printf(ESPACIO"                  \\ |j                 `.  `-....\" j\n");
    printf(ESPACIO"                  |`'|   ,',..           `.._      |\n");
    printf(ESPACIO"                  `. `   |/   \\              `     |\n");
    printf(ESPACIO"                    `.   `.   |                    |\n");
    printf(ESPACIO"                     |     `__'                    |_,..---..\n");
    printf(ESPACIO"                   __|                            ,'         |\n");
    printf(ESPACIO"                .\"\"  '     .    '               ,'           |\n");
    printf(ESPACIO"                |     .    |     \\   ____     ,'             |\n");
    printf(ESPACIO"                .      `-..L      `,'u   `:-./              j\n");
    printf(ESPACIO"                '        |u \\     /    _,-'  |             /\n");
    printf(ESPACIO"                 `.   ,./`\"\"`\\_ ,'`\"--'      |            /\n");
    printf(ESPACIO"                   `./  \\..._  |    _,..._   |.---+.    ,'\n");
    printf(ESPACIO"                    / ,'     `.|  ,'      `--'-.   \\`--'\n");
    printf(ESPACIO"                   j .         `.'              `.  .\n");
    printf(ESPACIO"                   | |                           |  |\n");
    printf(ESPACIO"                   | |                           |  |\n");
    printf(ESPACIO"                  j j                            |  |\n");
    printf(ESPACIO"                 ,' |                            |  |\n");
    printf(ESPACIO"           ___.-'  ,'                            |  |          _,-..\n");
    printf(ESPACIO"    _,.-'\"\"   __,.-'                             |  |       ,-' ,--\"'\n");
    printf(ESPACIO" ,-',.-' _,.-'                                   |  '     ,'  .'   /\n");
    printf(ESPACIO". ,' _,-'                                         .  `---'  ,'  _,'\n");
    printf(ESPACIO"|/ .'                                              `.    _,' _,'\n");
    printf(ESPACIO"`-'                                                  `\"-`.,-' \n");

    break;

case 73:
    printf(ESPACIO"                                      _.._,-\"\"-.._     \n");
    printf(ESPACIO"                             _....\"\".'_,./        `.\n");
    printf(ESPACIO"                           .'  ,|   ,'   |          `.\n");
    printf(ESPACIO"                          ' _,'\"'\"\"'      `.          |\n");
    printf(ESPACIO"                         .,' ___            `--....__ |\n");
    printf(ESPACIO"                        ,|.\"\"   `-.____,.--'\"\"\"\"`-._ `'.\n");
    printf(ESPACIO"                      ,','            _,.--         `.._`.._\n");
    printf(ESPACIO"                    ,.,'          _.-\"   /'\"\"-._        `\"'-`.\n");
    printf(ESPACIO"                   /      ,-\"\"\"-,'-.._,.'       `.           |\n");
    printf(ESPACIO"                  (      |`.__,' `.      ,-.      |         (\n");
    printf(ESPACIO"                   `._   |_.'     |  /|  ` |,\" .  |          |\n");
    printf(ESPACIO"                     /`  |       .'  |`   `.'.`\\`/          ,'\n");
    printf(ESPACIO"                    '._ j       /   .` .    .``.`.`-._ _,.-'\n");
    printf(ESPACIO"                       `/      /    ||`.`    `..``.`-.`.._\n");
    printf(ESPACIO"       _              ,'      /,.___'|  ``.,..-\\`-\\`/ `._.+,------._\n");
    printf(ESPACIO"      \\ `\"-.__      ,+      .'|| | j |+-+-`._`+.\\+--\"\"\"\"            `-.\n");
    printf(ESPACIO"       `._    \"'\"'\"'/|     j| |' . | |\\`.`.  |+---+--+-+--.....__      \\\n");
    printf(ESPACIO"     __..-`--------+-|     || | \\ / / \\\\ \\ \\ | `.\\ \\. \\ \\   `. `.`-.___/\n");
    printf(ESPACIO"   .'       _,.-',','`     || |  /,\\  ` \\ ' \\|   `\\ \\`.\\ '    \\  \\\n");
    printf(ESPACIO" ,'     _,-'    / . .'\\    || |,'/\\ \\  \\ \\ \\ |    | |-. L`+._  \\  |\n");
    printf(ESPACIO"/    ,/'       . j  | |\\   '.-'.'  \\ `. \\ \\ .|    / `  `| |  `-.`-'\n");
    printf(ESPACIO"|   ,'        j  | j  | `.  `.\"\\    `  \\ . .|'   /|  \\  | |`.   .\n");
    printf(ESPACIO"`..'          .  | |  `.  /. `. `    `. `| |/   / |  |  |  . `-.'\n");
    printf(ESPACIO"              |  | `.  | /  +. \\ `.    \\ |,'  ,'\\ |  |  |  |\n");
    printf(ESPACIO"              |. |  `..' | .' `\".  .   _\\+  _.| | |  '  '  '\n");
    printf(ESPACIO"              .`.'       `-'    `--'  '--+\"'| `.' `-'  `..'\n");
    printf(ESPACIO"                                         `--' \n");

    break;

case 74:
    printf(ESPACIO"                                            _,.---.\n");
    printf(ESPACIO"                                        _,-'       `.\n");
    printf(ESPACIO"                                     _,'  ,          \\\n");
    printf(ESPACIO"                                   ,'  _,'   .        `.\n");
    printf(ESPACIO"                                  /  ,'     ,'          `.\n");
    printf(ESPACIO"         __                       .,'    _,'              `.\n");
    printf(ESPACIO"    _,..'  `-....___              :    ,'     '             \\\n");
    printf(ESPACIO"  ,'   /            :             /`.,'      /               `\n");
    printf(ESPACIO" /    /  ._         |         __..|  `.    .'       ,         `.\n");
    printf(ESPACIO" |   |   ,'\"--._    |      ,-'    `-._`.,-'       ,:            .\n");
    printf(ESPACIO".'\\   \\     _,'.    `'___.'           `\"`.     _,' /            |\n");
    printf(ESPACIO"|  \\   \\---'       ,\"'  .-\"\"'\"----.       `.  '  ,'             |\n");
    printf(ESPACIO" `. `-.'          /    /                    `-..^._             '\n");
    printf(ESPACIO"   |._|    _.    /    /                            `._           .\n");
    printf(ESPACIO"   `...:--'--+..'   ,'                              /            |\n");
    printf(ESPACIO"       '._  `|   ,-'       _..._                   j     \\       |\n");
    printf(ESPACIO"         |` |   /       ,-'     `-.__              |      L      |\n");
    printf(ESPACIO"         |  |  /      ,'                           |      |      |\n");
    printf(ESPACIO"         |_,'        /         _,-                  .     |      |\n");
    printf(ESPACIO"        ,'  ,   |  ,'        ,|            ,..._     \\    |      '\n");
    printf(ESPACIO"       ,     \\ j  '       _.\" |           /     `-.__'    '    ,'\n");
    printf(ESPACIO"        +._   '|       ,'|    |          /        ,'    .'    /\n");
    printf(ESPACIO"        |  `._  `-' .:|  |    '.       -'        '           j\n");
    printf(ESPACIO"        '    |`    ' |'  |     |                             |\n");
    printf(ESPACIO"         `.  |       |--'     _|        .                    |\n");
    printf(ESPACIO"           \\ |       '----'\"\"\"           \\      __,....-+----'\n");
    printf(ESPACIO"           | '                            `---\"\"      .'\n");
    printf(ESPACIO"           `. `.                                     ,\n");
    printf(ESPACIO"             `\" \\_...-\"\"\"'--..         _+          ,'\n");
    printf(ESPACIO"                  '            -.'  `-'  `.  .\"-..'\n");
    printf(ESPACIO"                   `-..._            _____,.'\n");
    printf(ESPACIO"                         `--.....,-\"' \n");

    break;

case 75:
    printf(ESPACIO"               __..  ,..--+'\"\"--.._\n");
    printf(ESPACIO"            ,-'    \\_|_...'        |\n");
    printf(ESPACIO"     ,'\\  ,'`.,----\"    '          |.._\n");
    printf(ESPACIO"    /  _\\_'   `.                _,.+.  `-.___\n");
    printf(ESPACIO"    |          |           ,.--'     \\       `.\n");
    printf(ESPACIO"  /'|          |\\,-.       |          `\"--.    `.\n");
    printf(ESPACIO" |  |          |/   \\                      :     |\n");
    printf(ESPACIO" |  '          /    '                      |     |\n");
    printf(ESPACIO" `.|         ,'    /                       '     `\n");
    printf(ESPACIO"|\"j               _,\\                             \\\n");
    printf(ESPACIO"| /  ,          -'   \\                             \\\n");
    printf(ESPACIO" |  '/     _.-       |            _,.               `..\n");
    printf(ESPACIO".'| /   ,-'/     --- `         -\"'   `.                |\n");
    printf(ESPACIO" `| `--d  |         __        __       |        __     |\n");
    printf(ESPACIO" /    /...'   .  ,\"'  .         `.    .'          \\    |\n");
    printf(ESPACIO"'..-----.._ ,'   |    '           \\    `           |   |\n");
    printf(ESPACIO"   |/  _,.-'     '                      \\          /  ,'\n");
    printf(ESPACIO"  /'\"\"'                      .\"\\         \\       ,'   |\n");
    printf(ESPACIO"   -...--.__                 `  \\        _\\..     \\   `.\n");
    printf(ESPACIO"    `.                        \\\"        :   |     |   /\n");
    printf(ESPACIO"     |    _..-.    ,..-.       `.    ..\"    `     /  .'\n");
    printf(ESPACIO"   ,-|   |     `---;             |           `.  '   |\n");
    printf(ESPACIO"   \\  `. `---._ '\"\"`---.         |             | __.-'\n");
    printf(ESPACIO"   |..\"|+.\"`-'        /         j.            /  |\n");
    printf(ESPACIO"    `. | \\          \"'      _.' '|           /  /\n");
    printf(ESPACIO"     |\"\"`.`\"'          __,\"\"  __.-          j ,'\n");
    printf(ESPACIO"     .--- \\ `--------\"'      ,              +'\n");
    printf(ESPACIO"     |__,' `+.          .    |.            |\n");
    printf(ESPACIO"   ,'  |     \\`-.___,-' `.__.' `.          |\n");
    printf(ESPACIO"   |._,'   | |   |         |   ,'\\    '.   '\n");
    printf(ESPACIO"   |\"`.--|-+.' _.'         |`..  /`--/ :.-.|\n");
    printf(ESPACIO"   '  |  \\  |,'.. _     .-' _ .-'   /.-'  /\n");
    printf(ESPACIO"    `-'   `.|_(._|______|_ /  '.__,' \\,...'\n");
    printf(ESPACIO"                          `\"-------'\" \n");

    break;

case 76:
    printf(ESPACIO"                            _____   ____\n");
    printf(ESPACIO"                       _,.,|     `\"`-.._`--._\n");
    printf(ESPACIO"                    _,\" ,j |            `\"-. `-,\n");
    printf(ESPACIO"                 _,\"_,-' ' |._              `.  \\`.\n");
    printf(ESPACIO"               ,' ,',.....L   `-._            \\  . `.\n");
    printf(ESPACIO"             .' ,\"'\"`.__  |       `-.._        | |   \\\n");
    printf(ESPACIO"   ,.._     ,'-/     '  `.|..'\"\"|`._   `-.___.-','-._ `.\n");
    printf(ESPACIO" ,' . _>-.._/ /     /    /   `-.' \\ `-._  |   ,'     `-..\n");
    printf(ESPACIO"/,..|`._'  / /     /   ,'   _ _\\   `.   `-:..'          `\\\n");
    printf(ESPACIO"''  | .--./ /     /   / ,'\"\"|/ .'\"\"'\\`.._ |  \\            |\n");
    printf(ESPACIO"  /'`.   / |`...+.   /.' _.`+._ `._/ \\'| `|\\  `.____      |\n");
    printf(ESPACIO" /,..:.-+ _|.-\"'\"\"`./__.\"      `.|    j   `.\\  /---._\"---.|`.\n");
    printf(ESPACIO" '     _:\"    ____  | |          `+---'     `\\/       \"-._| |\n");
    printf(ESPACIO"     ,'    ,+\"  |   ' '.           \\`.       |            `.|\n");
    printf(ESPACIO"    .     d |  /     \\  \\          |  \\      |             ||\n");
    printf(ESPACIO"    |   _/..+.'       \\  \\      __,^.  '._   |            j |\n");
    printf(ESPACIO"   ,'_,'        ___    \\  `----\" ,.--`+..,.-'+`-.._       | |\n");
    printf(ESPACIO"  ',\"     ____,'/     / +...--'_,.--\"'||       '._ `-..__/ /\n");
    printf(ESPACIO"   `...--\"'|  .'   _,'| / ..-'\"       ||          `.    / |\n");
    printf(ESPACIO"          ,'./ ,.-'   |j |          __||          .'`,\"__.'\n");
    printf(ESPACIO"          \\__.'\\     j | |        ,'    `-.     ,\" ,'.\" .'\n");
    printf(ESPACIO"              \\|     | 'j       ,'         `. ,' .',' .'\n");
    printf(ESPACIO"             . `.____|/ |__    :            |`,-'.'_.\"\n");
    printf(ESPACIO"             '.  `._ _.\"-._`-._|            +----'\"\n");
    printf(ESPACIO"               `.   `\"\"-.._`-._|            |\n");
    printf(ESPACIO"                |          `<\" `.           |\n");
    printf(ESPACIO"                /            `.  `.         '\n");
    printf(ESPACIO"           ,.\":\"_,-           |,..'          `._\n");
    printf(ESPACIO"          '.__|' ,--.    __,.\"'> .             /`.\n");
    printf(ESPACIO"              '\"\"`---`'\"\"  \\_.' _|-\":__,....--'\"''\n");
    printf(ESPACIO"                             `-',..-' \n");

    break;

case 77:
    printf(ESPACIO"                    .' .\n");
    printf(ESPACIO"                   .| '\\\n");
    printf(ESPACIO"           _...___/`'   .\n");
    printf(ESPACIO"         ,'             |\n");
    printf(ESPACIO"     ,|,\"             )/|                             , .\n");
    printf(ESPACIO"    / |              / , .                            \\` \\\n");
    printf(ESPACIO"   /            ...-'  ',                              .  \\\n");
    printf(ESPACIO"  .           ,>      .                                |   |\n");
    printf(ESPACIO"  |          .'   ___`,                  .'  ,--.._,.-'/  ,'\n");
    printf(ESPACIO"..|          |.-\"', /                  ,' | /       .\"'   '.\n");
    printf(ESPACIO"\\ '          |  ,'//                   .'  \"    __,._'    |\n");
    printf(ESPACIO" \\ `         /.\"_/'_,                 '.       /         _'\n");
    printf(ESPACIO"  `.\\     _,'   \\.`  ) ,^.              `     '       ,-\"\n");
    printf(ESPACIO"    |.  .'  _   | `. '-  `,            , \\     `.    ,-\n");
    printf(ESPACIO"    | `w  ,\" |  |   \\   .'   _,_ :\"'. / 7 . ,`..'   .'\n");
    printf(ESPACIO"    '|    `.'  /     \\   `-'\"   `   _:_,.}|  :  _. ,'\n");
    printf(ESPACIO"     \\       .'       `-.      _,.-\"       `-+-`  '\n");
    printf(ESPACIO"     |       |           ``--\"'               `.\n");
    printf(ESPACIO"     \\   .- .                                   \\\n");
    printf(ESPACIO"      `.._,\":                                    \\\n");
    printf(ESPACIO"            '                                    `.  '-7\n");
    printf(ESPACIO"             \\                                  .'`-\"  :\n");
    printf(ESPACIO"              \\                        .        `      `-'\n");
    printf(ESPACIO"             j \\                       `.        `.     |\n");
    printf(ESPACIO"             |  `.  |      .^,'.       ,.+        :    _'\n");
    printf(ESPACIO"             |   |`.|      |    \\,  ,-'  :`.       \\  /_.,\n");
    printf(ESPACIO"            /    |  |     /     .,-'.     `.`.      \\   /\n");
    printf(ESPACIO"           /    .' j     / _._,\"     `      ':`.     . (\n");
    printf(ESPACIO"          /    /,-\"|    j  `.         `-.    |  .    |/\n");
    printf(ESPACIO"          .   `'   |    |    7           |   |   |   |\n");
    printf(ESPACIO"           `.   .  |    |  v'            |  .'   |   |\n");
    printf(ESPACIO"             `.  `.|   j'.'              |  |    |  j\n");
    printf(ESPACIO"               \\   |   |                j   |   j   |\n");
    printf(ESPACIO"                `.j   /\\                |_,j    |  j\n");
    printf(ESPACIO"                  /  /`\"              ,\"   |    '  |\n");
    printf(ESPACIO"                 /  j                 '_,.-'   /.-'|\n");
    printf(ESPACIO"                |   |                         /__.-'\n");
    printf(ESPACIO"               .'`-.'\n");
    printf(ESPACIO"              /    |\n");
    printf(ESPACIO"              `----' \n");

    break;

case 78:
    printf(ESPACIO"                     :`./\n");
    printf(ESPACIO"                    _|  ,-\n");
    printf(ESPACIO"               ,'\"\"'    ,`\n");
    printf(ESPACIO"             ,'.\\       `.    __  ,.-.\n");
    printf(ESPACIO"          . ./ `'    __  '. ,'  \\ `.|\n");
    printf(ESPACIO"          \\\\  \\   .\"'  L   \"     `\" `\\                          _,-.\n");
    printf(ESPACIO"           \\` |\\.`      7     .,   :._|   --'`.                 ` |\n");
    printf(ESPACIO"          ` \\`+ `'\\      \\^--\"  `. |    ,'     `.            ,..' |\n");
    printf(ESPACIO"           | ,.    |              ` `.  |    ..  '.          |    /\n");
    printf(ESPACIO"           ':P'     '.    ,..      \\  `-+`\"-'  `._ \\     -`,- ..,'\n");
    printf(ESPACIO"          /        / `-,-'  ,'`.    `.   ; .--'   `+    '.   | ,\n");
    printf(ESPACIO"         /     _..     .   `-.  \\,.   `-'  '.  `.^  `\".__|   ' |\n");
    printf(ESPACIO"        '   , / |       `.   \\    |        ,'     \\           /\n");
    printf(ESPACIO"         `\"' \" .         \\   |  __ \\    ,-'       `----.   _,'\n");
    printf(ESPACIO"              /           |  `\"' _} `\"\"'                `-'\n");
    printf(ESPACIO"             /.'         /     .-.         ,\".\n");
    printf(ESPACIO"     .._,.  /           /     '-.,'    ,'-. .'.\n");
    printf(ESPACIO"    /  `. \\/             `-.      `.   /`.  :\n");
    printf(ESPACIO"   /  __ `.'                '-.     `-+_.'  .'          ,__\n");
    printf(ESPACIO"  / .'  `.___                  `,..__      <__          \\ (\n");
    printf(ESPACIO" / /       \"..   /                   `-.     .' .-'\"`--.'  \\\n");
    printf(ESPACIO"/  |       /-'  /                       \\ ,._|  |          /'\n");
    printf(ESPACIO"\\.'|+.+.  (`..,'                         \\`._ _,'           \\__\n");
    printf(ESPACIO" \\ |||| \\ _`.^ `.            .            |  \"    .'`\"-.       `.\n");
    printf(ESPACIO"  `+'|/ `( \\'    `-....__    |            |._,\".,'     `,        |\n");
    printf(ESPACIO"                         `:-.|            `           ..'   ,'`.,-\n");
    printf(ESPACIO"                          |  |            |`.        '-..    . /\n");
    printf(ESPACIO"                          '  |           /  /           `.   |\n");
    printf(ESPACIO"                           ` '          /  ',.         ,     `._\n");
    printf(ESPACIO"                            \\|        ,'   \\'|         :  __    '\n");
    printf(ESPACIO"                             `,     ,`     .._`..       `'  `-,.`.\n");
    printf(ESPACIO"                       _`'`\".  `.   ``-._ /   F   )        ,._\\ `\n");
    printf(ESPACIO"                      '-\"'`, \\   \\ ,. ).-'-.^,|_,'         `  '.\n");
    printf(ESPACIO"                          '.. \\___j  `\"'               ,..  | .'\n");
    printf(ESPACIO"                             \\            ___       ,. `\\ \\,+-'\n");
    printf(ESPACIO"                              7.._   .--+`.  |_    |  `,'\n");
    printf(ESPACIO"                           _,'  .'`--'  '    7 ` v.-\n");
    printf(ESPACIO"                         .\"._  /-.  -.   \\.^-`\n");
    printf(ESPACIO"                       .'  __+'...`'  `--'\n");
    printf(ESPACIO"                        `\"\" \n");

    break;

case 79:
    printf(ESPACIO"                                  _.---\"'\"\"\"\"\"'`--.._\n");
    printf(ESPACIO"                             _,.-'                   `-._\n");
    printf(ESPACIO"                         _,.\"                            -.\n");
    printf(ESPACIO"                     .-\"\"   ___...---------.._             `.\n");
    printf(ESPACIO"                     `---'\"\"                  `-.            `.\n");
    printf(ESPACIO"                                                 `.            \\\n");
    printf(ESPACIO"                                                   `.           \\\n");
    printf(ESPACIO"                                                     \\           \\\n");
    printf(ESPACIO"                                                      .           \\\n");
    printf(ESPACIO"                                                      |            .\n");
    printf(ESPACIO"                                                      |            |\n");
    printf(ESPACIO"                                _________             |            |\n");
    printf(ESPACIO"                          _,.-'\"         `\"'-.._      :            |\n");
    printf(ESPACIO"                      _,-'                      `-._.'             |\n");
    printf(ESPACIO"                   _.'                              `.             '\n");
    printf(ESPACIO"        _.-.    _,+......__                           `.          .\n");
    printf(ESPACIO"      .'    `-\"'           `\"-.,-\"\"--._                 \\        /\n");
    printf(ESPACIO"     /    ,'                  |    __  \\                 \\      /\n");
    printf(ESPACIO"    `   ..                       +\"  )  \\                 \\    /\n");
    printf(ESPACIO"     `.'  \\          ,-\"`-..    |       |                  \\  /\n");
    printf(ESPACIO"      / \" |        .'       \\   '.    _.'                   .'\n");
    printf(ESPACIO"     |,..\"--\"\"\"--..|    \"    |    `\"\"`.                     |\n");
    printf(ESPACIO"   ,\"               `-._     |        |                     |\n");
    printf(ESPACIO" .'                     `-._+         |                     |\n");
    printf(ESPACIO"/                           `.                        /     |\n");
    printf(ESPACIO"|    `     '                  |                      /      |\n");
    printf(ESPACIO"`-.....--.__                  |              |      /       |\n");
    printf(ESPACIO"   `./ \"| / `-.........--.-   '              |    ,'        '\n");
    printf(ESPACIO"     /| ||        `.'  ,'   .'               |_,-+         /\n");
    printf(ESPACIO"    / ' '.`.        _,'   ,'     `.          |   '   _,.. /\n");
    printf(ESPACIO"   /   `.  `\"'\"'\"\"'\"   _,^--------\"`.        |    `.'_  _/\n");
    printf(ESPACIO"  /... _.`:.________,.'              `._,.-..|        \"'\n");
    printf(ESPACIO" `.__.'                                 `._  /\n");
    printf(ESPACIO"                                           \"' \n");

    break;

case 80:
    printf(ESPACIO"                   ,-'\"-.\n");
    printf(ESPACIO"             __...| .\".  |\n");
    printf(ESPACIO"        ,--+\"     ' |   ,'\n");
    printf(ESPACIO"       | .'   ..--,  `-' `.\n");
    printf(ESPACIO"       |/    |  ,' |       :\n");
    printf(ESPACIO"       |\\...-+-\".._|       |\n");
    printf(ESPACIO"     ,\"            `--.     `.     _..-'+\"/__\n");
    printf(ESPACIO"    /   .              |      :,-\"'     `\" |_'\n");
    printf(ESPACIO" ..| .    _,....___,'  |    ,'            /\\\n");
    printf(ESPACIO"..\\'.__.-'  /V     |   '                ,'\"\"\n");
    printf(ESPACIO"`. |  `:  \\.       |  .               ,'         ,.-.\n");
    printf(ESPACIO"  `:       |       |  '             .^.        ,' ,\"`.\n");
    printf(ESPACIO"    `.     |       | /               _.\\.---..'  /   |     ,-,.\n");
    printf(ESPACIO"      `._  A      / j              .\"       /   /    |   .',' |\n");
    printf(ESPACIO"         `. `...-' ,'             /        /._ /     | ,' /   |\n");
    printf(ESPACIO"           |\"-----'             ,'        /   /-.__  |'  /    |\n");
    printf(ESPACIO"           | _.--'\"'\"\"`.       .         /   /     `\"^-.,     |\n");
    printf(ESPACIO"           |\"       ____\\     j             j            `\"--.|\n");
    printf(ESPACIO"           |  _.-\"\"'     \\    |             |                j\n");
    printf(ESPACIO"         _,+.\"_           \\   |             |                |\n");
    printf(ESPACIO"        '    . `.     _.-\"'.     ,          |                '\n");
    printf(ESPACIO"       |_    | `.`. ,'      `.   |          |               .\n");
    printf(ESPACIO"       | `-. |  ,'.\\         .\\   \\         |              /\n");
    printf(ESPACIO"       |\\   ;+-'   \"\\      ,'  `.  \\        |             /\n");
    printf(ESPACIO"       '\\\\.\"         \\ _.-'     ,`. \\       '            /\n");
    printf(ESPACIO"        \\\\\\           :       .'   `.`._     \\          / `-..-.\n");
    printf(ESPACIO"         ``.          |    _.\" _...,:.._`.    `._     ,'   -. \\'\n");
    printf(ESPACIO"          `.`.        |`\".'__.'           `,...__\"--`/  |   / |\n");
    printf(ESPACIO"            `.`.     _'    \\|             ,'       ,'_  `..'  |..__,.\n");
    printf(ESPACIO"              `._`--\".'     \\`._      _,-'       ,' `-'  /    | .  ,'\n");
    printf(ESPACIO"                 `\"\"'        `. `\"'\"\"'   ,-\" _,-'    _ .'     '  `' `.\n");
    printf(ESPACIO"                               `-.._____:  |\"       _,\" .\"  ,'__,..\"'\n");
    printf(ESPACIO"                                         `.|-...,.<'    `,_\"\"'`./\n");
    printf(ESPACIO"                                             `.'   `\"--'\" \n");

    break;

case 81:
    printf(ESPACIO"                                  _,._,._\n");
    printf(ESPACIO"                                 '-\"._,\"--,\n");
    printf(ESPACIO"                                  `\"..-+-'\n");
    printf(ESPACIO"                                  :'==-:\n");
    printf(ESPACIO"                                  :`=-\":\n");
    printf(ESPACIO"                                 _.\"-..|\n");
    printf(ESPACIO"     _____                  _.-'\"  `\"\"' `-._\n");
    printf(ESPACIO"    |  |  `\"\"'----._      ,'                `.\n");
    printf(ESPACIO"    |__|            `.  ,'                    '.\n");
    printf(ESPACIO"    '..|\"\"'---._     | /                        \\    _.......______\n");
    printf(ESPACIO"          `\"\"\"--:    |/         ,.---._          \\ .'.------.....__`-...\n");
    printf(ESPACIO"                |    j        ,'       `.         . '              |\"--|\n");
    printf(ESPACIO".'\"\"|\"---......-'   .|       /           \\        |'     ______    |   |\n");
    printf(ESPACIO"|   |              / |      .      .      .       |    .'      `\"\"`--..'\n");
    printf(ESPACIO":\"\"'|---.....___.-'.'|      |             |       |    :\n");
    printf(ESPACIO" `\"`+---....____,.'  `      `.           /       /|    '_\n");
    printf(ESPACIO"                      \\ _,..  `.       ,'       / `      `\"\"'--....,._\n");
    printf(ESPACIO"                      .'::__:   `-...-'        ,   `._            '   |\n");
    printf(ESPACIO"                      |-..--|          ,-\"-. ,'       \"--.....___:   j\n");
    printf(ESPACIO"                      `.::_,          |.-''-:                     `\"'\n");
    printf(ESPACIO"                            `\"-...____' \" :.'\n");
    printf(ESPACIO"                                       `\"\"' \n");
    printf(ESPACIO"\n");
    printf(ESPACIO"\n");
    printf(ESPACIO"\n");
    printf(ESPACIO"\n");
    printf(ESPACIO"\n");
    printf(ESPACIO"\n");

    break;

case 82:
    printf(ESPACIO"                                 _\n");
    printf(ESPACIO"                              ,\"'_\\\n");
    printf(ESPACIO"                         ,\"\\  `.\"  \\       ,..._\n");
    printf(ESPACIO"                        '.' \\   \\   .     ('\"\"`.\\     _\n");
    printf(ESPACIO"                         \\   \\  `.  |      /=.:.'  ,:`.`.\n");
    printf(ESPACIO"                          \\   \\.';  |\"\"\"\"\"`-./   .'   .`\n");
    printf(ESPACIO"                           \\   `\"   '         `.'   ,' ,\"`.\n");
    printf(ESPACIO"                            `.___..'            `. `..:'`./\n");
    printf(ESPACIO"                            /             _,.._   \\    _.'\n");
    printf(ESPACIO"                 _....__   /            ,\"     `.  ._,'\n");
    printf(ESPACIO"             ,-\"'       `\"+.           :         . |\n");
    printf(ESPACIO"+'\"|\"\"'-.  ,'               `.         |      \"  | |\n");
    printf(ESPACIO"\\\\_|__   `:                   \\         \\       /  |          _,-.\n");
    printf(ESPACIO"      :)  |        ,.-----.    \\         ._   .'   '._    _,-'`\\  j\n");
    printf(ESPACIO"  ...,'   |       /        \\    . __ _ _,\".`\"'   ,'   `.,\"    _.`\"\n");
    printf(ESPACIO"  \\\\ |  _,'      .          .   || |I ' -'|    _, _     `   ,\"'  _.\".\n");
    printf(ESPACIO"  `\"\"'':         '     \"    |   |`\"'^\"`\"| /  ,`:://\\     \\  `..-' \\  '\n");
    printf(ESPACIO"       '          \\        /   ,\"\"`--..`\"\"-\"`\"\"':{.|      .      _,+\"\n");
    printf(ESPACIO"        .          `-....-'   :`:'-|            |l,'      |.__.-\"\n");
    printf(ESPACIO"         \\,.                  '. :/                       |\n");
    printf(ESPACIO"     .-.\":`.`.              ,'  \"'     ,\"-.   _       _,._|\n");
    printf(ESPACIO"     \\`. \\`,\"`._        __,:      .    `.'/`,'.`.   .'    '\n");
    printf(ESPACIO"      '.`.;     \"--+--'\"_  `       `     `.` \"' ; ,'  .  /\n");
    printf(ESPACIO"        `\"         ||  :|.  :       `.     \\_:.' :    _.'\n");
    printf(ESPACIO"                   ||  |||__|         `._        `...\"\n");
    printf(ESPACIO"                   ||__||| _|            `\"-....-\"\\\\,\\\n");
    printf(ESPACIO"                   || _| `\"                  \\\\  \\ \\\\'\n");
    printf(ESPACIO"                   `\"'                        \\`.-\\\n");
    printf(ESPACIO"                                               \\\\.' \n");

    break;

case 83:
    printf(ESPACIO"        .\n");
    printf(ESPACIO"      ,' \\\\\n");
    printf(ESPACIO"     /   ' \\\n");
    printf(ESPACIO"  _  \\    \\ \\\n");
    printf(ESPACIO" / \". \\    ` \\                                        ,.\n");
    printf(ESPACIO"j    \\ \\    ` \\                \"\"\"'-. ..          .. :| \\\n");
    printf(ESPACIO"|     `.\\    ` `              __ `.  \\: \\         \\ `||  .    ___\n");
    printf(ESPACIO" `.     `\\    `.`.            \\ `\"-`. \\ |          \\ `|  |   //  |\n");
    printf(ESPACIO" _ '.     `     . `.           `-.,    `'-.._       \\    |  //   |\n");
    printf(ESPACIO"| `._`.          `. `         .-'   --._  || `.      \\   | //   j\n");
    printf(ESPACIO"|    `.`           . `.      /     .\"\"-.`._|.\".\\      \\,-|'/    |\n");
    printf(ESPACIO"'       `.          `. `.   /      | '::|  '|:| .      : |,     '\n");
    printf(ESPACIO" `._                  .  \\ :       |  ::|.-\"\"\"'.|___...+-+-..  /\n");
    printf(ESPACIO"    `-.                \\  `:       '__.,'               _,..-)/\n");
    printf(ESPACIO"   .\"`-`.               \\   .       .'_....__    __..-\"' _.-'/\n");
    printf(ESPACIO"    \\                    \\   \\      :\"       `'\"\"  __.-\": |,\":\"`.\n");
    printf(ESPACIO"     \\                    \\   \\ .,\"--`.       _..-\",'   | |.\"   |\n");
    printf(ESPACIO"      `._                  \\    j      `\"'\"\":'  ,'      |,'     |\n");
    printf(ESPACIO"         `.                 .   /           |_,'      ,-'       |\n");
    printf(ESPACIO"      \\`._ `.                `\"'            '       ,'          |\n");
    printf(ESPACIO"       .  `-.:._                           j       /          _.'\n");
    printf(ESPACIO"        `.     .`.._                       |      :.......--\"\" '\n");
    printf(ESPACIO"          `. '`   `.`-._                  .      .'           /\n");
    printf(ESPACIO"            `:      `                    ,       \"-..._____..'\n");
    printf(ESPACIO"        `\"\"\"-.--.....__                .'         _.' /  /\n");
    printf(ESPACIO"        _.`--         .`,           _,'----....--'   /  /\n");
    printf(ESPACIO"       \"---..,.  __,--`-........,.-\"                /  /\n");
    printf(ESPACIO"            /..-\"_..---\"'   _.-'                   /  j\n");
    printf(ESPACIO"               --.,..    _,'                      /   |\n");
    printf(ESPACIO"                 .','_,-'                         '--\"\n");
    printf(ESPACIO"                 `\"-' \n");

    break;

case 84:
    printf(ESPACIO"                                  _.---.._\n");
    printf(ESPACIO"                                ,'       ,.\n");
    printf(ESPACIO"                               :    _    '_|\n");
    printf(ESPACIO"             _,-\"'--._         :  :'|\\      :\n");
    printf(ESPACIO"           .'         `.       |  `--'  .\"\".;\n");
    printf(ESPACIO"           |     __     .      `.       `. '.\n");
    printf(ESPACIO"           |    :_'|    :        `.    _.'`. `.\n");
    printf(ESPACIO"           ,\"'. `--'    .          |\"''     `. '.\n");
    printf(ESPACIO"          '  ,'        /           | |        `. `._\n");
    printf(ESPACIO"        .' ,'`.   __,-\"            | |          `.  `.\n");
    printf(ESPACIO"      .' .'    `|\" |              j .             `.  \\\n");
    printf(ESPACIO"    ,' .'       |  | _   ._      .  '               `.'\n");
    printf(ESPACIO"  ,' ,'         '  |' `-'  `..\"',  j\n");
    printf(ESPACIO".' .'         .\"'  '          ,'  .'\n");
    printf(ESPACIO"`-'         .'   `  `.      .\"  ,'  \\\n");
    printf(ESPACIO"           <      `   \\      `-'     .\n");
    printf(ESPACIO"            :      `  .'             ,\n");
    printf(ESPACIO"           j        `\"         .-   :\n");
    printf(ESPACIO"           :                  .  \"   `\n");
    printf(ESPACIO"           |               .  `       '\n");
    printf(ESPACIO"          `.                         7\n");
    printf(ESPACIO"           ,                        '\n");
    printf(ESPACIO"            '.                    .'\n");
    printf(ESPACIO"              ,-.               ,'\n");
    printf(ESPACIO"                 '..        _.-:\n");
    printf(ESPACIO"                    `|\".-.-' | |\n");
    printf(ESPACIO"                     | |     | |\n");
    printf(ESPACIO"                     | |     | |\n");
    printf(ESPACIO"                     ' .     ' '\n");
    printf(ESPACIO"                    . .       , .\n");
    printf(ESPACIO"                      |       | |\n");
    printf(ESPACIO"                   :  '       | |\n");
    printf(ESPACIO"          ,-\"`----\"'  .___    | |\n");
    printf(ESPACIO"         '-'..--\",    ___:_`.\"'  -..____\n");
    printf(ESPACIO"             _.-'_,.  ._\\_,.      _____:_\\\n");
    printf(ESPACIO"           ,\"  ,'   : `    / ,-.  \\\n");
    printf(ESPACIO"          ,'.,'     |  : ,' /   '  \\\n");
    printf(ESPACIO"         '.-\"       `.\"\": ,'     `  `.\n");
    printf(ESPACIO"                      '/`.        `.\"|\n");
    printf(ESPACIO"                       .'           \\' \n");

    break;

case 85:
    printf(ESPACIO"                            .\n");
    printf(ESPACIO"                          .'/   .\n");
    printf(ESPACIO"                        .\" / ,\".'    _.--:'`-......___\n");
    printf(ESPACIO"                     , / ,-\"_,' ___.\"   ,.`-.....-\"\"\n");
    printf(ESPACIO"                   // //_.-'   /.._\"\"\". |_'  : `-...\n");
    printf(ESPACIO"                 ,/.-'`'  `.  '  '._..-.     '\n");
    printf(ESPACIO"               ..','   _,   :      `.,'    .'\n");
    printf(ESPACIO"             .'/-.: |,'|_   :       /\\__ ,'\n");
    printf(ESPACIO"           ,'_,   _'_ \"     ;       j,| |\"`--,\\_\n");
    printf(ESPACIO"          :_`.'_,\"_,+\\   ,^.`.     '/ | |      '.\n");
    printf(ESPACIO" ,.------\"...,\".-\" '/`\"'`   `.`.  ,'  ` l       `.    _.---._,.-..\n");
    printf(ESPACIO"'-...-\"' .\",.____./`.\"-._     `.`...   `_\\       '_.-'_,.-'       \\\n");
    printf(ESPACIO"       .','      :/  `-._`\"---..`.._|            : ,-\" __..--\"\"'`.-'\n");
    printf(ESPACIO"      +\"'        /       `\"'\"\"----.              ;,.-\"'          _|\n");
    printf(ESPACIO"                /                 :_     '.   _;\"'+.,--\"'\"''\"'\"\"\"\n");
    printf(ESPACIO"                                  ' `-:.,' `'\"     /-..\n");
    printf(ESPACIO"                                      |     .-----'--..`.\n");
    printf(ESPACIO"                                      ;___,'           `.`.\n");
    printf(ESPACIO"                  _.,....---------...' ,'                `.`.\n");
    printf(ESPACIO"            _.--\"',     ____,.....----\"                    `.`-._     ,\n");
    printf(ESPACIO"           :-'.,-' .-._'.                                    `._ `----')\n");
    printf(ESPACIO"          '._\".  .'    \"'                                       `. `.__\n");
    printf(ESPACIO"         `' ',.-'                                                `.-...' \n");

    break;

case 86:
    printf(ESPACIO"                            _,.--\"\"\"'--._\n");
    printf(ESPACIO"                          ,\"             `.         _,.--'\"\"\"\"--.._\n");
    printf(ESPACIO"                         /                 `.     ,\"               `.\n");
    printf(ESPACIO"                        |  ,                 \\   '                   `.\n");
    printf(ESPACIO"                        '.'                   \\ /                -..   .\n");
    printf(ESPACIO"                         j                     '                    \\  |\n");
    printf(ESPACIO"                         |                                    .._    . |\n");
    printf(ESPACIO"                         .    .       _...         _,..._        `.  :'\n");
    printf(ESPACIO"                          `-./      ,'    `.      /      \"`.      |  ;\n");
    printf(ESPACIO"                             '.   ,'       |     (          \\     .-'\n");
    printf(ESPACIO"                               `\"'         |      \\          `-..'\n");
    printf(ESPACIO"                                          /        \\\n");
    printf(ESPACIO"                                        ,'          \\\n");
    printf(ESPACIO"                                     _,'             `.\n");
    printf(ESPACIO"                                 _,-'                  \\\n");
    printf(ESPACIO"                               ,'                       \\\n");
    printf(ESPACIO"                              /  /\\                      \\\n");
    printf(ESPACIO"                             /  /  \\                      \\\n");
    printf(ESPACIO"                            /  /    \\                      l\n");
    printf(ESPACIO"                         _,.-\"/      '--._                 |\n");
    printf(ESPACIO"                       ,'      `.  '      `.               |\n");
    printf(ESPACIO"                     ,' _..          _      `.             |\n");
    printf(ESPACIO"                    ,   _  `       ,' `.      \\            |\n");
    printf(ESPACIO"                   .  .\".`          ...        \\           '\n");
    printf(ESPACIO"  _.--\"\"`--....--\"'|  |`' |       .(_) |        .         /\n");
    printf(ESPACIO",'  _              |  `../        `.__.'        |        /\n");
    printf(ESPACIO"| ,'              ,'-\"'--._,...  ______         |    _  /\n");
    printf(ESPACIO"|/  _.           .  .      \\_,'\"'      `-.      '     `'..__,...----._\n");
    printf(ESPACIO"' ,'             | | \\               ,'|  \\    /                      `\n");
    printf(ESPACIO" `|          _,-\"'.|  \\ .---,-._    /  |   | .' __                \"\"`-.\\\n");
    printf(ESPACIO"  `.     _.-'      |  .:   j    `-.j   |  /.'--'  `.           .       |\n");
    printf(ESPACIO"    `'\"\"'           `-''   '     ,'|   | ,'         `.          \\      |\n");
    printf(ESPACIO"                        `-......'--...`-'             \\          .    ,'\n");
    printf(ESPACIO"                                                       `-._      |_,.'\n");
    printf(ESPACIO"                                                           `\"---\"' \n");

    break;

case 87:
    printf(ESPACIO"             /\\\n");
    printf(ESPACIO"        _.--'  `\"-.\n");
    printf(ESPACIO"       ' ,.        `\n");
    printf(ESPACIO"     ,' '_.'        \\\n");
    printf(ESPACIO"    |                .\n");
    printf(ESPACIO"    \"..+--.,-        :\n");
    printf(ESPACIO"       ||'           '\n");
    printf(ESPACIO"       `._            `.\n");
    printf(ESPACIO"          |             `._\n");
    printf(ESPACIO"          |                `.._\n");
    printf(ESPACIO"          |  .                 `\"--.._\n");
    printf(ESPACIO"          | /   . .                   `-._\n");
    printf(ESPACIO"          `/    |  .                      `.\n");
    printf(ESPACIO"          /    j   |                        `.\n");
    printf(ESPACIO"        ,'    '|   |                          \\\n");
    printf(ESPACIO"      ,' .\"  / |   |                           \\\n");
    printf(ESPACIO"    .' ,'  ,'  '   |                            \\\n");
    printf(ESPACIO"   /          '    ._                            .\n");
    printf(ESPACIO"   `\"\"-.          /  `-._                         .\n");
    printf(ESPACIO"        `\"'-....-'       `\"--...__                |\n");
    printf(ESPACIO"                                  `\"-.._          |\n");
    printf(ESPACIO"                                        `.        |\n");
    printf(ESPACIO"                                          `.      '\n");
    printf(ESPACIO"     ,-._                                   .    .\n");
    printf(ESPACIO"    /    `-._                               |    '\n");
    printf(ESPACIO"   j         `-._                           |   /\n");
    printf(ESPACIO"   |    ___      `-.                       ,'  /\n");
    printf(ESPACIO" ,'        `\"--..__ `-._                _,'  ,'\n");
    printf(ESPACIO"|                  `\"--.``---........--'    /\n");
    printf(ESPACIO"`                               _..-      ,'\n");
    printf(ESPACIO" `.                    __...--\"' _,'    .'\n");
    printf(ESPACIO"  |     '\"\"'\"-----\"'`\"\"      _.-'    _,'\n");
    printf(ESPACIO" /                    __,.-\"'  _. _,'\n");
    printf(ESPACIO" `.    _______....--\"'      _,'_.'\n");
    printf(ESPACIO"   `.                   _,.'_.'\n");
    printf(ESPACIO"    |           ___,..-'_,-'\n");
    printf(ESPACIO"    `._          __..-\"'\n");
    printf(ESPACIO"       \"'`._...-\" \n");

    break;

case 88:
    printf(ESPACIO"                                        _.---.\n");
    printf(ESPACIO"              __             _____  _.-'      |\n");
    printf(ESPACIO"    .\"\"\"--._,'  \\          .\"     \"\"          |\n");
    printf(ESPACIO"    '.    `.`._ /          |                 / `.\n");
    printf(ESPACIO" .---'      `._|  _,....._  `.___          .`   /\n");
    printf(ESPACIO"|     ...._   .`\"'    __  `\"-. ` `.     _.'___,'\n");
    printf(ESPACIO"`._      `.`.'\\     ,\"  `.    `.)`.`-\"\"'_.\" .'\n");
    printf(ESPACIO"   |.____.,'. |   _/ .    ;__  ,   ``\"\"\"     `.\n");
    printf(ESPACIO"   |,-.  /    ' .\" |     ,__ `.'           . ,'\n");
    printf(ESPACIO"   '   `j`---'.',-\"`----'   `\"| \\ __       | |\n");
    printf(ESPACIO"    `.  |   `'\"'            .  \\ `._\"..__.'  .\n");
    printf(ESPACIO"     |  '                  /:  |\"`--',..\"     |\n");
    printf(ESPACIO"     |`. `.___...----.....' '  `    |  |     .'\n");
    printf(ESPACIO"     |-.`.__,--|          |\"   :    |  |    /(\n");
    printf(ESPACIO"    .   `-.___.|   ,--.,-\"|    ``.  |  |   . .'\n");
    printf(ESPACIO"    `          |  /       |   . `.`.`--' ,'.'  `-\n");
    printf(ESPACIO"     '.        | /        |   |   `.`...-,'      |\n");
    printf(ESPACIO"      '`-._  _/|j        /  ,.'     '---\"   _..-\"|\n");
    printf(ESPACIO"       `._.`\" |||       / .','            .' _..'|\n");
    printf(ESPACIO"        |  `..||\\     ,'.\".-     ``.    .' .'    `.\n");
    printf(ESPACIO"        |     \\`\"-..-'  :|         \\`\"\"' .'     .'.`.\n");
    printf(ESPACIO"       ,'      `-----.-\".'   '`._   `\"--'     .','   \\\n");
    printf(ESPACIO"      .               `\"      `..-'     .\"\"`-','.'   |\n");
    printf(ESPACIO"      |.__..        ___       .        /.'\"\"\" .'     '.\n");
    printf(ESPACIO"      '___.--..__.-\"_..`.    ,..___  ,'  `\"'\"'       _.'.\n");
    printf(ESPACIO"        '---. `.__,\"`._`-._,' `----`'              .'  ,-'\\\n");
    printf(ESPACIO"     _,'  ___`--\"                      ,-'\"`..___.' .-'   |\n");
    printf(ESPACIO"   ,\"   ,..-.`\"._  ___..._    .\"\"..__,'.'\"\"`-......'       `._\n");
    printf(ESPACIO"  /    _____ `.__`\" _.-\"'       `-..--\"       _...._  _....__ `.\n");
    printf(ESPACIO"  | .\"'----.`._  `\"\"       ,.\"\"--._         _.....,_`\"_.----...'\n");
    printf(ESPACIO"  `------'\"\"`._`.      _,.--\"''\"\"--......-\"'        \"\"\n");
    printf(ESPACIO"               `\"-----\" \n");

    break;

case 89:
    printf(ESPACIO"                             _,..-------.._\n");
    printf(ESPACIO"                         _,-'              `-._\n");
    printf(ESPACIO"                       ,\"               .---.._`.\n");
    printf(ESPACIO"                      /----.       _._,.._\"\"\":\"`\"`.\n");
    printf(ESPACIO"                     /`--\"\"     _.'.'  / .`-.'-\"'\"`\\_\n");
    printf(ESPACIO"                    /\"\"-._`----\" .'  .' '   _.`     \\\"-._\n");
    printf(ESPACIO"                   .      `.___.'   / ,' . |   |  ._  . .``-._\n");
    printf(ESPACIO"                 _,' _.            .,' ,\"| |   |   .`.|'.' ,--\".\n");
    printf(ESPACIO"               ,'    ||`._..____..\"' ,'--'.|   |    `.|'  .'\"-._|\n");
    printf(ESPACIO"              /___...'|   :._     _,'      `'-. |     |  _,.._  |.\n");
    printf(ESPACIO"             |,--.._|j  ,'   `'\"\"'         ||  `|     '.'_..._` | )\n");
    printf(ESPACIO"            ,'      /  /                   ||   |    /',\"     ` '/|\n");
    printf(ESPACIO"         ,-'   .,-./  /      _,..----..___,':`_'    /.'        `.' ._\n");
    printf(ESPACIO"        /  __.._ `-\\.'-----\"'  _,...__      '\"     /.\"\"-..-\"\"\"-. |_  `._\n");
    printf(ESPACIO"   __..:--\"_.--.`.  `---....-`\"..__.\" `-...      _.\"'\"''`---..__`._`\"\"__\\\n");
    printf(ESPACIO".-'  `\"\"''\"       `..--\"\"-.   _.--.._   _.-\"\"-_,'              _.._`-._  '_\n");
    printf(ESPACIO"|\"\"-.    __.-----._ '....`._-\" _,-\"'`-..._,..`__...\"\"\"-.__  _.'_.._`-..:'\"-)\n");
    printf(ESPACIO" `\"\"`..-\"_...----..___)     `\"\"              `....------._\"\",-'    `..-'`\"\"\n");
    printf(ESPACIO"      `\"                                                  `\" \n");

    break;

case 90:
    printf(ESPACIO"               _,.-'\"\"\"''--..._\n");
    printf(ESPACIO"           _,-'               `.\"-.._\n");
    printf(ESPACIO"         .\"     _..-'\"'\"\"--._   `.   `-._\n");
    printf(ESPACIO"       ,'   _.-'             `._  `.     `-._\n");
    printf(ESPACIO"      /   .`                    `.  \\        `.\n");
    printf(ESPACIO"     /  .'                        `. `.        `.       _,..\n");
    printf(ESPACIO"   .'  /                            `. `.        `...-\"'    \\\n");
    printf(ESPACIO"  /   /                               _. `.               ,-'\n");
    printf(ESPACIO" j   /                   ,-\"\"'`.   ,\"'  `. `.           .'\n");
    printf(ESPACIO" |  .     _..------...__'  \"   |  |   \"   |  `.       ,'\n");
    printf(ESPACIO" `._...-'\"_,.-\"'        `..__,\"    `._ _,.'`.  `    .'\\\n");
    printf(ESPACIO"   ,\"  _,'             __..-\"\"'`\"'.  ,'    `..  `.     .\n");
    printf(ESPACIO" ,'  .\"        _..-''\"\"            \\/        `.   \\    '\n");
    printf(ESPACIO":         _..+'----\"'               `.         `.  \\    \\\n");
    printf(ESPACIO":      _,'    `-._                               \\  \\    \\\n");
    printf(ESPACIO" `...-'           `.                              \\  \\\n");
    printf(ESPACIO"                    \\                              \\  \\   .\n");
    printf(ESPACIO"                     \\                              .     '\n");
    printf(ESPACIO"                    / \\                    .        '  `  :\n");
    printf(ESPACIO"                  ,'   \\               .    \\        \\  \\  `-,._\n");
    printf(ESPACIO"                ,'    __\\               \\    \\        \\  \\  /._ `.\n");
    printf(ESPACIO"               .  _.\"'   \\               \\    \\        `._'/._ \"-.\\\n");
    printf(ESPACIO"                `\"        `.              `._.'        ,'.-.. `-._ `\n");
    printf(ESPACIO"                            `-._                    _.'.  `,\"`-._ `.`\n");
    printf(ESPACIO"                                `--...__     ___..-\"  \\ `. '     `._`|\n");
    printf(ESPACIO"                                        `\"'\"\" \\   :    \\  `.`.      \"\n");
    printf(ESPACIO"                                               \\  :     `   `.`.\n");
    printf(ESPACIO"                                                '\":      `.__,.'\n");
    printf(ESPACIO"                                                  `-.....' \n");

    break;

case 91:
    printf(ESPACIO"                                                          _\n");
    printf(ESPACIO"                                                       ,\"  '\n");
    printf(ESPACIO"                                                     ,'   /\n");
    printf(ESPACIO"                                                    /    /\n");
    printf(ESPACIO"                                                  ,'    /\n");
    printf(ESPACIO"                                                ,'     .\n");
    printf(ESPACIO"                                     _...      /       '\n");
    printf(ESPACIO"                                  ,'\"'\"\".`.   |_..    /\n");
    printf(ESPACIO"                        ,-\"'\".   /       \\\\  ,'   `.\"'\n");
    printf(ESPACIO"                       .\"\"\"'. |,'         .`\".    /.\n");
    printf(ESPACIO"                      /     | |           `...`\".',___\n");
    printf(ESPACIO"                     /      | `.            _.-' /.___`\".\n");
    printf(ESPACIO"                   .'       `-._`-.._____,-'    /     \\ |\n");
    printf(ESPACIO"             ,..    \\           `. . ,'.'      /       .|\n");
    printf(ESPACIO"           .'   `.   \\   /        .||.'       '.`.._   ||--.\n");
    printf(ESPACIO"           \\      `...`-'         ||||      .'  `-.._`.||_ |\n");
    printf(ESPACIO"       _,.--`\"'-..\"'              ||``. ,-\"\"\"\"`'\"--._`\"-._`-.\n");
    printf(ESPACIO"  _,-\"'           `.              ' .\\`'             `.   `. \\......\n");
    printf(ESPACIO",'                 '               || .|              |`.   \\ \\   .'\n");
    printf(ESPACIO"`.._____________ ,'\"`+-\"\"'''       || ||              |  \\  `. .-'\n");
    printf(ESPACIO"               |    .    _..-'    j | ||              |  |    ||\n");
    printf(ESPACIO"               |    |   .         |. j |              |_'|.   ||\n");
    printf(ESPACIO"               |    '    `-.._    || | |  .........      | |  ||\n");
    printf(ESPACIO"               |     `._          || ' '   \\  __.-\"  _,' '.. , '\n");
    printf(ESPACIO"               `._      `..       ' . `..   \"\"_,..-\"'  .'  \\/.'\n");
    printf(ESPACIO"                  ``.    /         \\`.  ``-._`-....\"_,'   .,'|`._\n");
    printf(ESPACIO"                     `..'           `.`._  `.`--\"'      .,'\\ :   `.\n");
    printf(ESPACIO"                      /     _.-   .    `-.:-._ ` '._    :   . `--..'\n");
    printf(ESPACIO"                    ,'  _,-' `.   :    __  `-.` `.._`. /,  ,','\n");
    printf(ESPACIO"                  .'  .'       `-. `-'\"       \\`.   ` ',  ','\n");
    printf(ESPACIO"                  `--' `--..     | `-._____   `._:---.| .'/\n");
    printf(ESPACIO"                            \\    |     .'  \"-.____`\". |-\"'\n");
    printf(ESPACIO"                             `.__|    /           `\"'\"\n");
    printf(ESPACIO"                                 |   /\n");
    printf(ESPACIO"                                 '._' \n");

    break;

case 92:
    printf(ESPACIO"                             _\n");
    printf(ESPACIO"                          .\"' `..._\n");
    printf(ESPACIO"                         '         `.\n");
    printf(ESPACIO"                       .'      ___..'\n");
    printf(ESPACIO"                 _   .\"       '   .__,-.,\"\", ,----.\n");
    printf(ESPACIO"      ,.-\"\"''-..\" :  :        `--'        ' :      :\n");
    printf(ESPACIO"    .'            :_,'                    `._`\"--. ;\n");
    printf(ESPACIO"    :              _,.--'\"'\"\"`--._           `.  `\"\n");
    printf(ESPACIO"   j             ,'               `-.      ,._.'  ,\"\".\n");
    printf(ESPACIO"   :           ,'                   ,-.   .   __  `..'\n");
    printf(ESPACIO"   `--.    .'.'                   ,'   `. :_,\"  `.\n");
    printf(ESPACIO" ,.   ;   .   \\                 ,'      |         `.\n");
    printf(ESPACIO"' :  :    |    `.             ,'        |\\         `.  _\n");
    printf(ESPACIO" `.   ._  |      \\         _.'          | .      ___ `\" :\n");
    printf(ESPACIO"        : '     . \\      ,'  .          ' |     :   `...'\n");
    printf(ESPACIO"       ,'  \\       `.   .             ,'  |     '  __\n");
    printf(ESPACIO"      .    `.       |    \\          .'    '    .  (  `.\n");
    printf(ESPACIO"    .'      \\`.___,'      `-.____.-'     '     :   `-.'\n");
    printf(ESPACIO"     .   ,\". \\ ..___              _     /      :    .\n");
    printf(ESPACIO"     :   . :  \\|/\\  `\"'--------+\"|,'  ,'       `-..' :\n");
    printf(ESPACIO"      `-\" .'   `: `\"-.._______,.\\|  .'               '\n");
    printf(ESPACIO"          `--. _ `._             _,'        ,\"\"-.__,'\n");
    printf(ESPACIO"              \" :   `\"--.....--\"'     __   .\n");
    printf(ESPACIO"              ,-'                 ,.-\"  `-'\n");
    printf(ESPACIO"             :   ,..             .    ,\"\".\n");
    printf(ESPACIO"            .'   .  :   __..._   `\"-. :   :\n");
    printf(ESPACIO"            `.._  : ' ,'      `\"--..' `--\"\n");
    printf(ESPACIO"                `-' `\" \n");

    break;

case 93:
    printf(ESPACIO"               -._                                   _.\n");
    printf(ESPACIO"                \\ `-.._                           _,' |\n");
    printf(ESPACIO"                 \\     `-._    _,.--------.._  _.\"    '\n");
    printf(ESPACIO"                  \\        `--'              ``.     /\n");
    printf(ESPACIO"                   \\                                j    __\n");
    printf(ESPACIO"__         __       \\                               |.-\"' /\n");
    printf(ESPACIO" `.`-.`-.__`.`'\"----\"\\                              |    /\n");
    printf(ESPACIO"    `.       `.       '        ._                       /\n");
    printf(ESPACIO"    `..        \\               | `.               /|   /\n");
    printf(ESPACIO"      `.        `.             |   `._          .' |  /\n");
    printf(ESPACIO"        `.  .-----`            |      `.       /   ' '\"\"''\n");
    printf(ESPACIO"          `. `.            .    ._      `_    /  ,'    .'\n");
    printf(ESPACIO"            `. `.           `._   `'\"\"'\"'     \"\"' ,  ,'\n");
    printf(ESPACIO"              `. `.          `.`.              ,-/ ,'       _..\n");
    printf(ESPACIO"                `. `.          \\|,---..  ,--\"./ / ,--------\".  \\\n");
    printf(ESPACIO"                  `._           `.     `/ , .`.',:           \\  \\\n");
    printf(ESPACIO"                     `._          `..\".,./ ' _.' :            \\  `.\n");
    printf(ESPACIO"                   ,-'\" `-._              _.\"     .   |.-\"`.   \\  |\n");
    printf(ESPACIO"                  .         `-..........-'        |   `..   \\   |_'\n");
    printf(ESPACIO"                  |           `\".                 `.._   .  '  ,'\n");
    printf(ESPACIO"                  |         |   |                     `\"'    .'\n");
    printf(ESPACIO"                  |   /\\    |'  '\n");
    printf(ESPACIO"                  '  /  \\   ||   .\n");
    printf(ESPACIO"                 '   \\  '   |'   ;\n");
    printf(ESPACIO"                  \\  '  \\   `...'\n");
    printf(ESPACIO"                   `\"\"   `,' \n");

    break;

case 94:
    printf(ESPACIO"                 |`._         |\\\n");
    printf(ESPACIO"                 `   `.  .    | `.    |`.\n");
    printf(ESPACIO"                  .    `.|`-. |   `-..'  \\           _,.-'\n");
    printf(ESPACIO"                  '      `-. `.           \\ /|   _,-'   /\n");
    printf(ESPACIO"              .--..'        `._`           ` |.-'      /\n");
    printf(ESPACIO"               \\   |                                  /\n");
    printf(ESPACIO"            ,..'   '                                 /\n");
    printf(ESPACIO"            `.                                      /\n");
    printf(ESPACIO"            _`.---                                 /\n");
    printf(ESPACIO"        _,-'               `.                 ,-  /\"-._\n");
    printf(ESPACIO"      ,\"                   | `.             ,'|   `    `.\n");
    printf(ESPACIO"    .'                     |   `.         .'  |    .     `.\n");
    printf(ESPACIO"  ,'                       '   ()`.     ,'()  '    |       `.\n");
    printf(ESPACIO"'-.                    |`.  `.....-'    -----' _   |         .\n");
    printf(ESPACIO" / ,   ________..'     '  `-._              _.'/   |         :\n");
    printf(ESPACIO" ` '-\"\" _,.--\"'         \\   | `\"+--......-+' //   j `\"--.. , '\n");
    printf(ESPACIO"    `.'\"    .'           `. |   |     |   / //    .       ` '\n");
    printf(ESPACIO"      `.   /               `'   |    j   /,.'     '\n");
    printf(ESPACIO"        \\ /                  `-.|_   |_.-'       /\\\n");
    printf(ESPACIO"         /                        `\"\"          .'  \\\n");
    printf(ESPACIO"        j                                           .\n");
    printf(ESPACIO"        |                                 _,        |\n");
    printf(ESPACIO"        |             ,^._            _.-\"          '\n");
    printf(ESPACIO"        |          _.'    `'\"\"`----`\"'   `._       '\n");
    printf(ESPACIO"        j__     _,'                         `-.'-.\"`\n");
    printf(ESPACIO"          ',-.,' \n");

    break;

case 95:
    printf(ESPACIO"                                                       _\n");
    printf(ESPACIO"                                       ___            | |\n");
    printf(ESPACIO"                                   .-\"'   `...._      | |\n");
    printf(ESPACIO"                      _,--\"'-.   ,' .           `.    | |\n");
    printf(ESPACIO"                    .'       ,`,'    \\            `.  | |\n");
    printf(ESPACIO"                  ,'.      .','       \\            | j  |\n");
    printf(ESPACIO"           __,..,'   `----\"  `         \\       _..-+.`  |..\n");
    printf(ESPACIO"        ,'\"     .             '._  ___...-._ ,'     |   |  `--.\n");
    printf(ESPACIO"       /       _|              | `\"        .'       |   |      `.\n");
    printf(ESPACIO"      /`  _.-`'  ._..----\"\"`._ |         ,'         |   |        .\n");
    printf(ESPACIO"     | .-\"         `-._    _,.' `.     .'          j    |         `.\n");
    printf(ESPACIO"  ,-\"\"\"--..._       |  '`\"\"       `-../\\     _,\"''\"|    |.._       ,|\n");
    printf(ESPACIO" /    '.     `\"----,'                 ` '._,'      |   j    `.   .' |\n");
    printf(ESPACIO"/_.-'\"  `-.___..-.\"                    \\ ,'   \\    |   '    | `.'   '\n");
    printf(ESPACIO"`                |                    _.'          |  |,_   '   `. /\n");
    printf(ESPACIO" .        _______|                 .-'    |.       `. '           |\n");
    printf(ESPACIO"  `...---\"     .-'               .'       | `.                 ,  '\n");
    printf(ESPACIO"  ,'._     _,-\"                  `        |  ,`.  ,  .    _.-'|    `.\n");
    printf(ESPACIO" .    `\"\"-'    `.                 \\       `.....`.     .-',   |      .\n");
    printf(ESPACIO" |             _,|                 ._ --.        |     '\"--...       '\n");
    printf(ESPACIO"  `.--\"`.....-\" ,                    /\".`        |   |        _____,'\n");
    printf(ESPACIO"    .       | .'_                   /   \\        |  j       \"'_,..'\n");
    printf(ESPACIO"     /`-...-+\"   `.                 '   .'.__ -..'  |_,..   ,'  |\n");
    printf(ESPACIO"    '          ____.                 \\  |    \"`-..___,....-.    '\n");
    printf(ESPACIO"     .     _.\"\"'   |                  `. .                 / .-'\n");
    printf(ESPACIO"      `. .'       .._                   \\ \\               / /\n");
    printf(ESPACIO"        `-._   _.'   `.                  \\.--......____ .' /\n");
    printf(ESPACIO"          .'`\"\"    .'  .                  .            '_.'\n");
    printf(ESPACIO"          |       /    |____               `\"._     _,-\"      ,-'\"'\n");
    printf(ESPACIO"           `. _.,'     |    `.                 `--\"'       _.--,.'\n");
    printf(ESPACIO"             `'--.__,.\"       |                          ,' .' |\n");
    printf(ESPACIO"                   |   ,.._   |\"--._                  ,-+-.'  /\n");
    printf(ESPACIO"                   `..'    ``.'   ,.`.     _..__.-\"\"\"-.__.'\\\"'\n");
    printf(ESPACIO"                     `----.,\"    '   .--..'   _..`-../:  _,'\n");
    printf(ESPACIO"                           .    /  .'  _.'\\.-\"  |     '-\"\n");
    printf(ESPACIO"                            \"--+--\"`..'   |.   ,^.__,'\n");
    printf(ESPACIO"                                     `---\"  `-\" \n");

    break;

case 96:
    printf(ESPACIO"                        .\"'`-._,........_.------..\n");
    printf(ESPACIO"                       / _.-'          ,' ,---\"\"/\n");
    printf(ESPACIO"                      /.'                /   ,.'\n");
    printf(ESPACIO"                    .'                      `-.\n");
    printf(ESPACIO"                  ,'                           `.\n");
    printf(ESPACIO"                 /          _..                  \\\n");
    printf(ESPACIO"        ______,..         .',\"\"\"\"\\)               `.\n");
    printf(ESPACIO"   .\"\"\"\"        |.-----           -                 \\\n");
    printf(ESPACIO"  /.' .   _     |______                              \\\n");
    printf(ESPACIO".'/   | ,'      '        _.....-         _,---.       \\\n");
    printf(ESPACIO" \\  ,\"'/-._      \\----  /-..____.   _,.-\"              .\n");
    printf(ESPACIO"  `.|      `\"-.._ \\____/        ,---..._               '\n");
    printf(ESPACIO"                 `            .' .      `.              \\\n");
    printf(ESPACIO"                  |           |  |  |  |/       ,        .\n");
    printf(ESPACIO"                  |           './|  |`.'.._   .'         |\n");
    printf(ESPACIO"                  |               `.'      `\"\"           |\n");
    printf(ESPACIO"                  |--.      ___       _,...    _.'\"`-...'|\n");
    printf(ESPACIO"                ,/    `---\"'   `-....'     `--\"          |\n");
    printf(ESPACIO"              .'.                         _...           |\n");
    printf(ESPACIO"             /  |                      ,-'               |\n");
    printf(ESPACIO"            /   |                    ,'                 j\n");
    printf(ESPACIO"           .     \\                  /                   |\n");
    printf(ESPACIO"           |      \\                .                    |\n");
    printf(ESPACIO"           '       `               |                    |\n");
    printf(ESPACIO"            `.      `._            '                    '\n");
    printf(ESPACIO"              `.       `._          \\                  /\n");
    printf(ESPACIO"            ,.\".          `.-........'.               /\n");
    printf(ESPACIO"          ,.-'  `.____....-'           `.            '\n");
    printf(ESPACIO"          '...--\"'                       )           `.\n");
    printf(ESPACIO"                                       .',.-,----.    |\n");
    printf(ESPACIO"                                       `.  |      \\_.'\n");
    printf(ESPACIO"                                         `-+----\"\"' \n");

    break;

case 97:
    printf(ESPACIO"                  .\\\n");
    printf(ESPACIO"                 .  \\\n");
    printf(ESPACIO"                     \\              _,|\n");
    printf(ESPACIO"                j    _\\____      _.\" ||\n");
    printf(ESPACIO"                |  -'      `\"-.-',---.|_\n");
    printf(ESPACIO"               /                /j      `.\n");
    printf(ESPACIO"              /                . |    |   `.\n");
    printf(ESPACIO"             ,                 | |    |     \\\n");
    printf(ESPACIO"            /|.                ' `    |  / ,'|\n");
    printf(ESPACIO"          ,' |\\`.               `.`.__|_/.',`\n");
    printf(ESPACIO"         :   | `|      ,.--..     ||\\   '\"   `.\n");
    printf(ESPACIO"        .'   | /      |`'-\"\"'     '| \\         `.\n");
    printf(ESPACIO"        )    `j       `.         / |  \\          .\n");
    printf(ESPACIO"       ,`-'   |       .'        /  | `.\\         |\n");
    printf(ESPACIO"      / |   _ |     ,'       _,'  _|_ | \\        '\n");
    printf(ESPACIO"  _,-'  `. /  \\   ,'......--'   .\" _ `.  `      /\n");
    printf(ESPACIO".\" ---._ ,'|   --`              | . `. |------\"'\n");
    printf(ESPACIO"|       |  '    .       .       `.`-' .'\n");
    printf(ESPACIO"|       |   `.  |        |      _/:--'\n");
    printf(ESPACIO"|       |    \\`-|        | _..-'  |\n");
    printf(ESPACIO"|       |  _,.\\  `\"--..-\"'`      ,^.\n");
    printf(ESPACIO"|       `.'    `                    `-.\n");
    printf(ESPACIO"`         `\"-.                         `.\n");
    printf(ESPACIO" \\       .---'                           \\\n");
    printf(ESPACIO"  \\\\\\  . `.         __....._              \\\n");
    printf(ESPACIO"   \\\\\\__\\__'    _,-'        `-.            .\n");
    printf(ESPACIO"   |          ,+             .'`.         .'\n");
    printf(ESPACIO"   '.     _.-'  \\            '            \\\n");
    printf(ESPACIO"  ,-\"`-...     ,'             \\     _ '\"-. `.\n");
    printf(ESPACIO" / ,'   .-    /                `.    `.   \\.'\n");
    printf(ESPACIO" \\_|  .'    ,'                   `-...'--\"\n");
    printf(ESPACIO"   `--'---'\" \n");

    break;

case 98:
    printf(ESPACIO"            ,-\"'\"'\"--.                       ,-\"\"\"\"'`-.\n");
    printf(ESPACIO"           '          `.                   /           \\\n");
    printf(ESPACIO"          '             \\                 ' __          \\\n");
    printf(ESPACIO"         /       .+\"\"`'`-                `-'  `\",        \\\n");
    printf(ESPACIO"        /       , |                             |\\        .\n");
    printf(ESPACIO"       .       .  |          ,.    ,-.       .  | .       |\n");
    printf(ESPACIO"       '       |  |.\".       | .   | |      ' `.| |       |\n");
    printf(ESPACIO"        \\      |_.'  '      .' .  .  |       `  `.|       '\n");
    printf(ESPACIO"        .    _,'    /    ,\"\"-. `-.' ,-\"\"-.    |    `.    .\n");
    printf(ESPACIO"        j-..'      / ,-.'  .  \\    |  .   .--.'      `...'.\n");
    printf(ESPACIO"        | `-`._.--'.'  `._     |   |   __.'   \\`--...'-'  |\n");
    printf(ESPACIO"        `....'     | /\\___`'--'     `\"\"_....\"\\ \\     `...'\n");
    printf(ESPACIO"         | |-\"-._,`.'     `\"-._     _.\"       \\|\". ,^.|  |\n");
    printf(ESPACIO"         | `..,\"_,'            `---'           \\  `-..'  |\n");
    printf(ESPACIO"         `._|_.\\ `._____                 _...__.`._,_' _.|\n");
    printf(ESPACIO"         /  '`-.`-._|.  `-._           ,\"     .','_,\"'`\\ \\\n");
    printf(ESPACIO"        ' .'    `-._`.`.    `.       ,'     ,' _.'      . `\n");
    printf(ESPACIO"  ____.'  |         `\"  `\"---+------'-----\" `\"'         |  `.____\n");
    printf(ESPACIO",'_,.-`._,'                                             '.--...._`\n");
    printf(ESPACIO"`\".--..__'                                               `._.---`\"` \n");

    break;

case 99:
    printf(ESPACIO"                                 _,.._\n");
    printf(ESPACIO"                            _,-'\"     `.\n");
    printf(ESPACIO"                       _,.-'            `._\n");
    printf(ESPACIO"                     .'                    `-._\n");
    printf(ESPACIO"                    .       /                  `-.\n");
    printf(ESPACIO"                    |      /                      |\n");
    printf(ESPACIO"                    |   _,'                       |\n");
    printf(ESPACIO"  ,'\"\"'\"`-._        |`\"\"                          |\n");
    printf(ESPACIO" /          `-.     |       _,....._              |\n");
    printf(ESPACIO"/...._         .    '    ,-'| | |`-.`.            '\n");
    printf(ESPACIO"     ``.       '  _  `./\\`\\ | | | | `.`.   _,.---- `.\n");
    printf(ESPACIO"  ,.  | .       \\ ``.    ._\\|_| | | / \\ \\._          `.\n");
    printf(ESPACIO"  | `.| |        . `.`.  |\\   `-'.|/_,.-\"  `          |\n");
    printf(ESPACIO"  \\    `._       |   `.`-' `.              |         ,'\n");
    printf(ESPACIO"   \\      `.   ,'     _\\,.'\"\"`.            |        .\\\n");
    printf(ESPACIO"    `.     |  /   ||.'./ /.   |`.          |       / |\n");
    printf(ESPACIO"      `-._.'_.    |||,' ._...-' .`-.._____.'    _,' .'\n");
    printf(ESPACIO"          \\\" |   ,'|'   _ _   ,'   | .-\". `-..-'  ,|\n");
    printf(ESPACIO"           . |   \\  `..' \" `-'     '/|   `._`\".    |.\n");
    printf(ESPACIO"           | `:\"-'`.                `+.._   `\"|    .'\n");
    printf(ESPACIO"           `._|_,\".\"`.   ........_   ,\"  `-._ '.    )|\n");
    printf(ESPACIO"                  ' /.`-._        `\"'...-\"_.'`._\\_,' '\n");
    printf(ESPACIO"              __.' j  /`..`..__      _.:-'    | |  \\  \\\n");
    printf(ESPACIO"            ,__/   |-`.,'      `\"`'\"\"         | |   \\  \\\n");
    printf(ESPACIO"               `--\"'-.'                       |  \\   .  `___\n");
    printf(ESPACIO"                                              `./\"\"\"-`./\"'__`\n");
    printf(ESPACIO"                                                `..--.|`-'  `' \n");

    break;

case 100:
    printf(ESPACIO"                         __...--------...__\n");
    printf(ESPACIO"                    _.--'                  `\"-..\n");
    printf(ESPACIO"                _.-'                  ,.        `-._\n");
    printf(ESPACIO"             _,'                    .'  \\           `._\n");
    printf(ESPACIO"           ,\"                     ,'     .             `.\n");
    printf(ESPACIO"         ,'                      /        `.             `.\n");
    printf(ESPACIO"        /                       .           \\              `.\n");
    printf(ESPACIO"      ,'                         `.._        .               .\n");
    printf(ESPACIO"     /                               `-._    /`               \\\n");
    printf(ESPACIO"    /                                    `-._  \\               \\\n");
    printf(ESPACIO"   /    __,........----...__                 `\"-'               \\\n");
    printf(ESPACIO"  /.--\"\"                    `'--.._                 ...........\n");
    printf(ESPACIO" j                                 `\"-._            `. /      |  `\n");
    printf(ESPACIO" '                                      `._           `.      .   .\n");
    printf(ESPACIO".                                          `._          `.    '   |\n");
    printf(ESPACIO"|                                             `.          \\  /    |\n");
    printf(ESPACIO"|                                               `.         `'     |\n");
    printf(ESPACIO"|                                                 `.              |\n");
    printf(ESPACIO"|                                                   `.            |\n");
    printf(ESPACIO"'                                                     `.          |\n");
    printf(ESPACIO" .                                                      .         |\n");
    printf(ESPACIO"                                                         \\        '\n");
    printf(ESPACIO"  '                                                       \\      '\n");
    printf(ESPACIO"   .                                                       \\    /\n");
    printf(ESPACIO"    \\       ____                                            .  /\n");
    printf(ESPACIO"     \\    .\"    `\"\"-._                                       '/\n");
    printf(ESPACIO"      `   '           `-.                                   ,'\n");
    printf(ESPACIO"       `.  `.            `.                               ,'\n");
    printf(ESPACIO"         `.  .             `.                           .'\n");
    printf(ESPACIO"           `._`-.            \\                        .'\n");
    printf(ESPACIO"              `._`._          '                    _,'\n");
    printf(ESPACIO"                 `._`\"-._     |                 _.\"\n");
    printf(ESPACIO"                     \"-.._`--'           __,.-\"'\n");
    printf(ESPACIO"                          `\"\"----------\"' \n");

    break;

case 101:
    printf(ESPACIO"\n");
    printf(ESPACIO"                         _,.--\"'\"\"\"''\"\"\"''--..__\n");
    printf(ESPACIO"                    _.-\"'                       `-._\n");
    printf(ESPACIO"                 _.'                                `-._\n");
    printf(ESPACIO"              _,'                     ._                `.\n");
    printf(ESPACIO"            ,'                          `._               `.\n");
    printf(ESPACIO"          .'                               `._              `.\n");
    printf(ESPACIO"         /                                    `.              \\\n");
    printf(ESPACIO"       ,'                             .         `.    |        `.\n");
    printf(ESPACIO"      /                               |           `.  |   |      .\n");
    printf(ESPACIO"     /                                |             \\ |   |       \\\n");
    printf(ESPACIO"    /                                                `    | ,.-\"'  \\\n");
    printf(ESPACIO"   /                                                                \\\n");
    printf(ESPACIO"  j                                                        |         .\n");
    printf(ESPACIO"  |                  __...--'\"''\"\"'\"'\"\"\"'`--..__           |         '\n");
    printf(ESPACIO" j             _.--\"'                           `-.._                 .\n");
    printf(ESPACIO" |         _,-'                      .\"\"'`--..__     `\"-._            |\n");
    printf(ESPACIO" |     _.-'                          |          `\"-._     `._         |\n");
    printf(ESPACIO" |  _.'                              |               `-._    `._      |\n");
    printf(ESPACIO" |,'                                 |    |              `-._   `.    |\n");
    printf(ESPACIO" |                                   |    |                  `-.  `._ |\n");
    printf(ESPACIO" |                                   '    |     |               `.   `'\n");
    printf(ESPACIO" |                                    `\"--'.....+................'   j\n");
    printf(ESPACIO" '                                                                   |\n");
    printf(ESPACIO"  .                                                                  '\n");
    printf(ESPACIO"   .                                                                /\n");
    printf(ESPACIO"    `                                                              /\n");
    printf(ESPACIO"     '                                                           ,'\n");
    printf(ESPACIO"      `.                                                        .\n");
    printf(ESPACIO"        .                                                      /\n");
    printf(ESPACIO"         `.                                                  ,'\n");
    printf(ESPACIO"           `.                                              .'\n");
    printf(ESPACIO"             `._                                        _.'\n");
    printf(ESPACIO"                `._                                 _.-'\n");
    printf(ESPACIO"                   `-._                         _,-\"\n");
    printf(ESPACIO"                       `\"--..__           __..-'\n");
    printf(ESPACIO"                               `\"\"\"''\"'\"\"\" \n");

    break;

case 102:
    printf(ESPACIO"                       __.__._\n");
    printf(ESPACIO"                     .\"   ) `.`\".\n");
    printf(ESPACIO"                    /     `.../  \\\n");
    printf(ESPACIO"                   |   _.'   \\    .\n");
    printf(ESPACIO"                   |  '       `.  |\n");
    printf(ESPACIO"                   '            `.'\n");
    printf(ESPACIO"                    \\          _,..---..._\n");
    printf(ESPACIO"         _,.._       `._     ,'           |.\n");
    printf(ESPACIO"      ,\"\\  `. `\".       `\"\".'             | `.\n");
    printf(ESPACIO"     /   \\ _|_  _\\       .'               |   `.\n");
    printf(ESPACIO"   ,'     `...' `.\\    ,'                 |     \\         _......_\n");
    printf(ESPACIO"  .        ,' ___. .  /                  j    _,'\\      .'   |    `.\n");
    printf(ESPACIO"  |       .        | /                   |.--\"    \\    /     |      /.\n");
    printf(ESPACIO"  |       |        |.                    |            /      |     /  \\\n");
    printf(ESPACIO"  '       |        '                     '         ' j       |`  .'    .\n");
    printf(ESPACIO"   `.  ,`.|       /|     `.                         .|`-._   .--,      |\n");
    printf(ESPACIO"     `/   |    _.' |      |`._             _,       || `--` '--'       '\n");
    printf(ESPACIO"       `\"-+---\"    |      `   `-._     _.-'  |      | .   ----        /\n");
    printf(ESPACIO"      _.......__   |       `.....'   -.______'      |  \\            ,'\n");
    printf(ESPACIO"    ,'         `\"--|_            ____               '   `-._    __.'\n");
    printf(ESPACIO"   /                 |.         -....-\"            /        `\"\"\"\n");
    printf(ESPACIO"  /         '   -._  | `.                         /\n");
    printf(ESPACIO" /         / \\     `.|   \\                      .'\n");
    printf(ESPACIO".         / .'       '._  \\                   ,'\n");
    printf(ESPACIO"|        /.\"            '--._                .__..._\n");
    printf(ESPACIO"'  .....,               |  | `-.._     __..-\"\"      `\".\n");
    printf(ESPACIO" . |  .'  _.-           |  |      `'\"\"'.\"              `.\n");
    printf(ESPACIO" `. `\" .-'              |  '          /                  \\\n");
    printf(ESPACIO"   .                    ' .          /                    .\n");
    printf(ESPACIO"    `.                .' /          |                     |\n");
    printf(ESPACIO"      `.              |.'           |                     |\n");
    printf(ESPACIO"        `-._       _,-'             `.     '-.        _,- '\n");
    printf(ESPACIO"            \"'---\"'                   \\     `..`.  ....' /\n");
    printf(ESPACIO"                                       \\                /\n");
    printf(ESPACIO"                                        `._   --==-. _,'\n");
    printf(ESPACIO"                                           `---...--' \n");

    break;

case 103:
    printf(ESPACIO"\n");
    printf(ESPACIO"                              .'\n");
    printf(ESPACIO"                              | \\\n");
    printf(ESPACIO"                              |  .\n");
    printf(ESPACIO"              '._             |   .\n");
    printf(ESPACIO"              `. `._          |   |        .             __...\n");
    printf(ESPACIO"                `.  `.        |   '      .'        _,.-\"'_.'\n");
    printf(ESPACIO"                  .   `.      |    .    / '    _,-'   _,'\n");
    printf(ESPACIO"                   `.   `.    |        / /  _,\"    _,\"\n");
    printf(ESPACIO"           `+.._     `    `.  '     . / / .\"     ,\"\n");
    printf(ESPACIO"              `._`-._ `.    `. .    |/ /,'     .'\n");
    printf(ESPACIO"    _,..---\"\"\"\"--`.  `-.`.    \\|    | ./     ,'  _,.---,________\n");
    printf(ESPACIO" -`=..__                `-.    |    |.'    .'_..+---\"\"\"         `\"-..\n");
    printf(ESPACIO"        `\"\"---..___        `.  |    |'   .'-\"          ___,.....---\"\"`'\n");
    printf(ESPACIO"               _,.-\"\"__,.._  `   ___'  .'  ____..---\"\"'\n");
    printf(ESPACIO"         _,.-\"\"    .'  ,.  \\ .-\"'   `-.  \"\"-------...__\n");
    printf(ESPACIO"      .-\"    __.-.'   '-\"'  / -='   `\"'\\......__       `\"-..._\n");
    printf(ESPACIO"    .\" _,.--\"\"  / .\"\"\"|    /            \\  _  ..`.-.....______`_\n");
    printf(ESPACIO"   '.-' .'_.-\"\".  | _.|   .   `.-----\"'  .'\"  __  `             '\n");
    printf(ESPACIO"       -\"'     '  |'  |   |              | '\"\"     .\n");
    printf(ESPACIO"                \\  ...'   |              '         |`-.\n");
    printf(ESPACIO"                 `._      ,.            /          '\"--'\n");
    printf(ESPACIO"                    `\"\"\".'  `._     _,\"`.       _,'\n");
    printf(ESPACIO"                       /.....__`\"\"\"'     \\--..-\"\n");
    printf(ESPACIO"                      /        `'\"\"'----...\n");
    printf(ESPACIO"                .    /____                |\n");
    printf(ESPACIO"               | |  j----.`\"\"---..__      |\n");
    printf(ESPACIO"         '`-.,-`.'--|`-.  `.        `'\"--.|\n");
    printf(ESPACIO"          `./   ___ `.  .  |              '\n");
    printf(ESPACIO"           ' ,\"'   `. . |  |             /\n");
    printf(ESPACIO"           . |      | | | .'          .'j\n");
    printf(ESPACIO"            \\`.     | '-'`..._____..-'  |\n");
    printf(ESPACIO"             `.`.__.'/     ,'`._       ,'\n");
    printf(ESPACIO"               `\"--`'     . \\   `-.__ /\n");
    printf(ESPACIO"                          |  `...___.'\n");
    printf(ESPACIO"                          /\"`__.._'\".\n");
    printf(ESPACIO"                          `\"'     `\" \n");

    break;

case 104:
    printf(ESPACIO"                                             ..\n");
    printf(ESPACIO"                                           .'  |\n");
    printf(ESPACIO"                                           |   '\n");
    printf(ESPACIO"                                           '    \\\n");
    printf(ESPACIO"                                          /      `-._\n");
    printf(ESPACIO"                                  _...--\"'           `\"-._\n");
    printf(ESPACIO"                                ,'                        `-.______\n");
    printf(ESPACIO"                               j                                   |\n");
    printf(ESPACIO"                               |                                  ,'\n");
    printf(ESPACIO"                               |           _                    ,'\n");
    printf(ESPACIO"                              /          ,':\"\"\"\"\"-.           .'\n");
    printf(ESPACIO"                             .___..  __,'\"       `.`.         |\n");
    printf(ESPACIO"                               |       ||        `.\\ .        |\n");
    printf(ESPACIO"                             ,'|      _||  `-._   | ||        |\n");
    printf(ESPACIO"                  .\"`-------'  `-..,-\" ||...._()`-  '|        '\n");
    printf(ESPACIO"                  `.               \\.-\"       `.__,','       /\n");
    printf(ESPACIO"                    \\            .\"            |_.-'        .\n");
    printf(ESPACIO"                     /                    _...-'            |\n");
    printf(ESPACIO"                    /                   .'.                 |\n");
    printf(ESPACIO"                  ,'                  .'   |        __      '\n");
    printf(ESPACIO"                 ,                  ,'     |      .'  `      `.\n");
    printf(ESPACIO"                /                  '       |___   |   /    .--'\n");
    printf(ESPACIO"               .        ____                 | `. `..'   ,'\n");
    printf(ESPACIO"               |            `\"-.             |   \\     .'\n");
    printf(ESPACIO"            _,\"j'               `.           |    `--+\"-._\n");
    printf(ESPACIO"          ,\"  /                   \\          |       |    `.\n");
    printf(ESPACIO"       _,'   .                     .         |       '.     `.  _,.\n");
    printf(ESPACIO"     ,\"      |                     |         '      /  |    ,\"._  '\n");
    printf(ESPACIO"  _,'        |_,...._              |       ,'      /__.'  ,'    `/\n");
    printf(ESPACIO",'           |   _.' `\".          .     _,'\"--.._,'     .'      /\n");
    printf(ESPACIO"`._          `--'       \\        /_,.-\"'  __,.-'       '      ,'\n");
    printf(ESPACIO"   `\"'\"\"------`.        .\"`----\"\"     _.-\"..__________      ,'\n");
    printf(ESPACIO"                `._     |          ,-'                `\"--'\"\n");
    printf(ESPACIO"                   `-..-`._       /\n");
    printf(ESPACIO"                           `.   ,'\n");
    printf(ESPACIO"                             `\"' \n");

    break;

case 105:
    printf(ESPACIO"      ,.                           __     ,\"`.\n");
    printf(ESPACIO"     / |                      _.-\"'  `\"--'   |\n");
    printf(ESPACIO"    /  |              .\"--..,'               |\n");
    printf(ESPACIO"   j   |              `                      |\n");
    printf(ESPACIO"   '    `-.            `.                    |\n");
    printf(ESPACIO"  .       .'            '                    |\n");
    printf(ESPACIO"  |    ,-\"               .                   '\n");
    printf(ESPACIO"  |     \\                |                    ,\"\"`.\n");
    printf(ESPACIO"  |      \\               |                   ||    `\n");
    printf(ESPACIO"  |       \\             j     `-.           .||     `.\n");
    printf(ESPACIO"  |        \\            |       |`.         |||      |\n");
    printf(ESPACIO"  |         \\         __|       |  |`.      |'|\\   .'\n");
    printf(ESPACIO"  |          `.  _.-\"'   `-.._  `._'  `.    | | `-\"\n");
    printf(ESPACIO"  |          _,+\"             `.   `\"\"--\\     |\n");
    printf(ESPACIO"  '        .'                   `.            |\n");
    printf(ESPACIO"  '      ,'                      |`.       .  '\n");
    printf(ESPACIO"   \\   .'                        `. `.     , /\n");
    printf(ESPACIO"    \\,'             _,.-+\"\"'.      `  `.   .'\n");
    printf(ESPACIO"    /            .-'     `-. '      `.  `\"'\n");
    printf(ESPACIO"  ,'           ,'\\          `.`.      `\n");
    printf(ESPACIO" '            /.  `.         ,\\ \\      `._\n");
    printf(ESPACIO".            /  \\   `._    .'  \\ .        `\".\n");
    printf(ESPACIO"|           /._  `-._  `,-'    ,' `.         \\\n");
    printf(ESPACIO"|          /   `\"-+---\"'      |    |         ,-.._\n");
    printf(ESPACIO"|..____,.-'       |`.         '   ,'         |    `\"-._        __\n");
    printf(ESPACIO"`---'\"            |  \\         `.'  `-.._   ,|      `._`\"-._.\"'  `.\n");
    printf(ESPACIO"                  |`._`.        |        `.  `-._      \"-          .\n");
    printf(ESPACIO"                   `.,' `.___..'           `\"    `._                |\n");
    printf(ESPACIO"                                                    `.              |\n");
    printf(ESPACIO"                                                      `._         .'\n");
    printf(ESPACIO"                                                         `        |\n");
    printf(ESPACIO"                                                          .       |\n");
    printf(ESPACIO"                                                           \\      |\n");
    printf(ESPACIO"                                                            `..,.' \n");

    break;

case 106:
    printf(ESPACIO"                                                   __           ,-\"\".\n");
    printf(ESPACIO"                                                 .'  `.       ,'     .\n");
    printf(ESPACIO"                                            _____|     \\    ,'       |\n");
    printf(ESPACIO"                                      _,-'\"\"     |      `..'     _,-'\n");
    printf(ESPACIO"                                    ,\"           `.            ,'\n");
    printf(ESPACIO"                                   /       /|   ,\"'`,        ,'\n");
    printf(ESPACIO"               _,..__             /      ,'.|  .  .',`.     `.\n");
    printf(ESPACIO"            .\"'      `'--\"\"-._  .'     .' ,'/  |  | |' |      `.\n");
    printf(ESPACIO"        __.'             `.   `.       |`'.'      ` '.`|        `\n");
    printf(ESPACIO"   .-\"\"'   |               `\"-.' ,\"`.  '-'         `---'.        \\\n");
    printf(ESPACIO"  `-.      '             ____   '.`\"\"/               .'  `\"-.     .\n");
    printf(ESPACIO"     `-.__/            ,'    `\".  `./._              |       '    |\n");
    printf(ESPACIO"       _,.            j        |   |  |`\"-._         '      .     '\n");
    printf(ESPACIO" _,.-\"'   \\           |        |   |  |   | `+-.\"\"-.  .     |    .\n");
    printf(ESPACIO"'._       |           |        |   '  |   '  |  |.    |     `..-'\n");
    printf(ESPACIO"   `\"-....'           `.      ,'  '  ,'  ,   |  ' .   '\n");
    printf(ESPACIO"         .._            `-...'  ,'--+---+--.'_.'  |  .\n");
    printf(ESPACIO"       .'   `                _.'      `.     `-..'  /\n");
    printf(ESPACIO"     ,'     _\\         __..-\",'         `     \\    /\n");
    printf(ESPACIO"     \"'`\"'\"'  `\"----'\"\"/.-+\"             `     `  /\n");
    printf(ESPACIO"                    ,-'---|               \\      .\n");
    printf(ESPACIO"                   /      |                `.__..'\n");
    printf(ESPACIO"                 .'    .' `.                \\    /.\n");
    printf(ESPACIO"               ,'  ,..\" ..  `.               \\-\"'  \\\n");
    printf(ESPACIO"               '._'  |  | `-.'                \\  _,`.\n");
    printf(ESPACIO"                     |  '                      \\'   /.\n");
    printf(ESPACIO"                     `.  )                      . ,'  '+-._\n");
    printf(ESPACIO"                       `'                        `. .' ||.\"`.\n");
    printf(ESPACIO"                                                   `._,'||   |\n");
    printf(ESPACIO"                                                    |._,' `-.|\n");
    printf(ESPACIO"                                                    `.       |\n");
    printf(ESPACIO"                                                     '       |\n");
    printf(ESPACIO"                                                      .__ _ .|\n");
    printf(ESPACIO"                                                       | | | |\n");
    printf(ESPACIO"                                                       '.`.'.' \n");

    break;

case 107:
    printf(ESPACIO"                                            __\n");
    printf(ESPACIO"                                          ,'  `\".\n");
    printf(ESPACIO"                                    _    /      '\n");
    printf(ESPACIO"                                .-\"' | ,'      /\n");
    printf(ESPACIO"                             ,.j     |/       /   _,\".\n");
    printf(ESPACIO"                           ,' ||     |       j _,\"    `.\n");
    printf(ESPACIO"                          |   ||             '\"      .'\n");
    printf(ESPACIO"                          |    |                   ,\"\n");
    printf(ESPACIO"                          |                      .' _..-.\n");
    printf(ESPACIO"           _______        |   \\                  `'\"     \\\n");
    printf(ESPACIO"      _,-\"'       `-._    |  | \\                      _.\"\n");
    printf(ESPACIO"    .'                `.  |  | b`       _..+-      _,'  ___......\n");
    printf(ESPACIO"   ,                    \\ `. `-     -'\"d   |   _,.---'\"\"         |\n");
    printf(ESPACIO" ,.                      \\  `.----.._  ---'_.-'                  |\n");
    printf(ESPACIO"| |                       ',-\"`._    `-.,-'                    .'\n");
    printf(ESPACIO"`.|                       |      `\"---.'  _..,.-\"\"\"\".      _.-'\n");
    printf(ESPACIO"  `.                      |\\        ,'. .\"    |    __...-\"'\n");
    printf(ESPACIO"    `.                   ,'/`\"-.__,'  ,'    __|.-'\"    /\n");
    printf(ESPACIO"      `-._            _,\\.'         `.  _,-\"\\`-._____,'._\n");
    printf(ESPACIO"          `\"-...----'\"   \\---...____.'\"\"_.'  `-..,'   `  `-.\n");
    printf(ESPACIO"                          `\"'\"`\\   `._.'     .' /      '    \\\n");
    printf(ESPACIO"                                `._,'      ,'  /       |     \\\n");
    printf(ESPACIO"                                    `\"-.  .   /        |      \\\n");
    printf(ESPACIO"                                  ,'   ,'\"'`-+...-'\"\"'/__..--\"'\n");
    printf(ESPACIO"                              _,.'   .'        |     /\n");
    printf(ESPACIO"                            ,\"     ,'          |    .\n");
    printf(ESPACIO"                          ,'      .            |    '.__\n");
    printf(ESPACIO"                        .'      .'             `.       `.\n");
    printf(ESPACIO"                     _.'|    _,'                 `.       `.\n");
    printf(ESPACIO"                   .\"   `-..'7                     `.       `.\n");
    printf(ESPACIO"                 .'         /                        \\        \\\n");
    printf(ESPACIO"                 |        .'                          \\        ,\".\n");
    printf(ESPACIO"                 `--....-\"                          ..-`'\"\"`--'   \\\n");
    printf(ESPACIO"                                                   /              '\n");
    printf(ESPACIO"                                                   `._      _...-'\n");
    printf(ESPACIO"                                                      `\"--\"' \n");

    break;

case 108:
    printf(ESPACIO"             _____                       ,\".\n");
    printf(ESPACIO"        _.-\"'     ``.                  .'   `\n");
    printf(ESPACIO"      ,'             .               ,'      |\n");
    printf(ESPACIO"    .'               |            _,'        |\n");
    printf(ESPACIO"  ,'                 '          ,'           |\n");
    printf(ESPACIO" ,               / ,'         .'             '---.._\n");
    printf(ESPACIO" '              /.'         ,'              /       `-.\n");
    printf(ESPACIO".              ,\"          /               '           `.\n");
    printf(ESPACIO"|      |      .           .                              \\\n");
    printf(ESPACIO"|      |      |           |                               \\\n");
    printf(ESPACIO"|      |      |           |                                .\n");
    printf(ESPACIO"|      |      |           `\n");
    printf(ESPACIO"'      |      |            `.             _,.._             .\n");
    printf(ESPACIO" \\     |      '    __...._   `.__     _,-'     \"-.          |\n");
    printf(ESPACIO"  \\    '      ' ,\"'       ``./   `'\"\"'            `.        |\n");
    printf(ESPACIO"   \\    .      '.       ___  `.                     \\       '\n");
    printf(ESPACIO"    \\    \\      \\       ,..`                         \\     /\n");
    printf(ESPACIO"     `.   \\      \\     ( \" )          ,......--'\"\"`.  \\   /\n");
    printf(ESPACIO"       .   \\      \\     `\"'                   ,\".   |  `.'\n");
    printf(ESPACIO"    ,..|`.  \\      `.                         `\"'   |    \\\n");
    printf(ESPACIO"   |    . `.-`\"''\"\"\"`--._                        _.'      \\\n");
    printf(ESPACIO"   ,\".   `.|             `-..    /`. .._      _,\"          \\\n");
    printf(ESPACIO"   `\"'._   '                   ,'  | |  `\"+\"\"' ,-'\"\"''-.    .\n");
    printf(ESPACIO"        `\"--`._             _.\"    | |   |    .  ,...   .   |\n");
    printf(ESPACIO"              |`+..____,..-'       ' |   |    | .    |  |   |\n");
    printf(ESPACIO"              |/  ,..\\           ,'  '   |    | `.__,'  |  ,'\n");
    printf(ESPACIO"              '  |   |`.___   _.'   /    `.   `._     _.' ,-.\n");
    printf(ESPACIO"               \\ `--'   /._'\"\"   _,'     .'`._   `\"--\"  .'   `.\n");
    printf(ESPACIO"                `-..,.-'   `---\"'     _,'_,.--`\".___,.-'      |\n");
    printf(ESPACIO"                   /-----\"'   ,`\"\"''\"\"           |   _....._ .'\n");
    printf(ESPACIO"                  ,-'\"\"--._,-'                   '.\"'      .\"\n");
    printf(ESPACIO"                   -..---'                         `\"-----' \n");

    break;

case 109:
    printf(ESPACIO"                               ,----.\n");
    printf(ESPACIO"                              '      |\n");
    printf(ESPACIO"                             /       '\n");
    printf(ESPACIO"                       __,..'         \"-._        _\n");
    printf(ESPACIO"                  _.-\"\"                   `-.   ,\" `\".\n");
    printf(ESPACIO"         ,-._  _.'                           `\"'      '\n");
    printf(ESPACIO"       ,'    `\"                                       |\n");
    printf(ESPACIO"      .                                               .\n");
    printf(ESPACIO"       `.          _.--..               ____          '\n");
    printf(ESPACIO"       /         ,'    . `           ,\"' .  `.         `.\n");
    printf(ESPACIO"      /         .         |         /         \\          \\\n");
    printf(ESPACIO"     /          `------...'        ._____      .          \\\n");
    printf(ESPACIO"    .                                    `'\"\"\"'            \\\n");
    printf(ESPACIO"    '                    ________                           .\n");
    printf(ESPACIO"   j           `.\"\"/'\"\"\"`        '\"\"\"'\"'--....,-            |\n");
    printf(ESPACIO"   |             `/.                      ,\\ /              `.\n");
    printf(ESPACIO"   |                `-._               _.'  '                 `-.\n");
    printf(ESPACIO"   |                    `\"-----------\"'                         |\n");
    printf(ESPACIO" .\"                         ____                                |\n");
    printf(ESPACIO"|                      ,-\"\"'    `\".                            ,'\n");
    printf(ESPACIO"|                     .   .----.   `.                        .\"\n");
    printf(ESPACIO"`.._                  |  '.____,'   |                        '\n");
    printf(ESPACIO"    |             ,\". `.           ,' _                     /\n");
    printf(ESPACIO"    '            '   `._`.'._\".__,' .' .                   /\n");
    printf(ESPACIO"     .            `'-._ `._     _.-'  _.'                 /\n");
    printf(ESPACIO"      `.               `.  `--'\" _,.-'                    `\n");
    printf(ESPACIO"        .               ,'     .\"                          '\n");
    printf(ESPACIO"         '        .-..-' _,.--._`\"-..,-.                 ,'\n");
    printf(ESPACIO"        /         \\    ,'       `-.    |           .-'\"-\"\n");
    printf(ESPACIO"        \\          `-.'            `..'         _,'\n");
    printf(ESPACIO"         `.,.-\"`._                           ,-'\n");
    printf(ESPACIO"                  `\"-.                       |\n");
    printf(ESPACIO"                      \\       ,..----.     _.'\n");
    printf(ESPACIO"                       `\"\"---\"        `..-\" \n");

    break;

case 110:
    printf(ESPACIO"                  __....____,'  `-.\n");
    printf(ESPACIO"         ,\"\"-..-'\"          \"-    |       ..      _.._\n");
    printf(ESPACIO"         |        _, .,           '._    /  `'\"\"\"'    |\n");
    printf(ESPACIO"        .'         _____             `.,'     ____     `.\n");
    printf(ESPACIO"     _,\" _.'      \\  |  '\"--..        '       \\__ `\"-.   `.\n");
    printf(ESPACIO"    | ,'\"|/        `-.______,'      `     ' |\\_  `'\"\"'  .  \\\n");
    printf(ESPACIO"    .'---'      _____             . '   `   |,'\"\"\"-._  ' \\  .\n");
    printf(ESPACIO"   /   __..--\"\"|___/ \"-.._/|         ,'       ___    `. \\ \\ '_\n");
    printf(ESPACIO"  . .'...-----'\"\"----.._.' |-.      |        | ,.`\".   \\ `'   |\n");
    printf(ESPACIO"  | `\"                  \"-.'-'      `.        \\`._`.\\   |.  .-'\n");
    printf(ESPACIO".\"        _..._                 .              `._  ,   `.' |\n");
    printf(ESPACIO" `.    ,\"'_....`\".               |                \"\"       .\n");
    printf(ESPACIO"  |    | |     | |             -'   `,                    /\n");
    printf(ESPACIO"  `,.  `._`---'_,'  ,-.    '        ' `-.             _   |\n");
    printf(ESPACIO"  ,\\ `._  |___|  _,'  |  `    \\        . /-.__     _.' `-\"\n");
    printf(ESPACIO"  \\ `.._`-._ _.-'_,.--'        |        `.    |  ,'\n");
    printf(ESPACIO"   `-\"\\ `-. ' ,'_         `-..'       .-'    /  /\n");
    printf(ESPACIO"       `._.---._ `\"----.        .   ,'.   _.'  /\n");
    printf(ESPACIO"         `.     `'-.._/       -\" ,-\" `.`-'      `.\n");
    printf(ESPACIO"           `.,       .-\"    _    |     | .     ) |\n");
    printf(ESPACIO"             '._  ,\"`----\"\"`.    |     ' `'       .\n");
    printf(ESPACIO"                \"\"           `--'       \\`      ,\"'\n");
    printf(ESPACIO"                                         `-._,-' \n");
    printf(ESPACIO"\n");
    printf(ESPACIO"\n");
    printf(ESPACIO"\n");
    printf(ESPACIO"\n");
    printf(ESPACIO"\n");
    printf(ESPACIO"\n");
    printf(ESPACIO"\n");
    printf(ESPACIO"\n");

    break;

case 111:
    printf(ESPACIO"\n");
    printf(ESPACIO"                                        '\"-.\n");
    printf(ESPACIO"                                       //   .\n");
    printf(ESPACIO"                            .,.       '/    `\n");
    printf(ESPACIO"                           |   \\     /.      \\        ,.\n");
    printf(ESPACIO"                           |    `.  / '       \\     ,' |\n");
    printf(ESPACIO"                          .|      `\"-'         \\  ,'   |\n");
    printf(ESPACIO"                          ||                    \\'     '\n");
    printf(ESPACIO"                   ,--.   ||             _,.     `\"-.   `.\n");
    printf(ESPACIO"                __.  ,.`.j '    _.-'\"\"','  |__ ..    |    `.\n");
    printf(ESPACIO"               .  |  |/  `.   ,'    .'     ' .'  `. ,_...   \\\n");
    printf(ESPACIO"               '  '        \\-+.._,.'      .,'      `    .'   .\n");
    printf(ESPACIO"              .  /      '  |     .-'      /           ./     |\n");
    printf(ESPACIO"             /  /     .'   |             .'         ,'_|,..   .\n");
    printf(ESPACIO"            /  '     /     '             |        _.-\"   .'   |\n");
    printf(ESPACIO"           /  '    .' _.'   `.        __ |    _,-'      /      .\n");
    printf(ESPACIO"          / ,'    / .'        `.    ,'. ||_,-'         /       |\n");
    printf(ESPACIO"         /,'     /.'           `._,',\"  '|           ,'        '\n");
    printf(ESPACIO"       ,+'      .'            .'\".'    / '          .           .\n");
    printf(ESPACIO"      |         '           .','      |,`.         j            |\n");
    printf(ESPACIO".\"\"'--+--     .'           | /        '   .        |            |\n");
    printf(ESPACIO" \\          ,_|             \\'         `._|        |            '\n");
    printf(ESPACIO"  `._     .'    ______      .+---.        `--..    |             .\n");
    printf(ESPACIO"     `. ,'   _.\" |    `-. ,'      `.          |    |             |\n");
    printf(ESPACIO"      |    .' /\\ |    ,' /         |        ,'     '.            |\n");
    printf(ESPACIO"       `--'  /,'\"    /  /          |      ,'        /            |\n");
    printf(ESPACIO"            /.     .' .'           |    ,:    ___  /             |\n");
    printf(ESPACIO"           . |    /  /.  ,---.    j    /. `..'   \"           ,-. |\n");
    printf(ESPACIO"           | |  .'  / |.'     `.  |   / ,\"-..__,...--._     /   \\|\n");
    printf(ESPACIO"           |`-\"' _.' .'|      . .' `-'.'        /     |`..-'     |\n");
    printf(ESPACIO"           `..-\"'--\"/  |    .'| |    '_.-. _.--'     .'.    /\\   |\n");
    printf(ESPACIO"                    ..-'----' |,          '          |.`._ . | _,'\n");
    printf(ESPACIO"                             `                       '    `| ,'\n");
    printf(ESPACIO"                                                            \" \n");

    break;

case 112:
    printf(ESPACIO"            ,\".\n");
    printf(ESPACIO"            |--\\\n");
    printf(ESPACIO"            | .'\\   |.\n");
    printf(ESPACIO"            |'  _\\  |' ,.\n");
    printf(ESPACIO"            |,.._ \\_| `.|    .-\"|\n");
    printf(ESPACIO"          .'      .--   `. ,',\" '\n");
    printf(ESPACIO"         '_..._   ..|`    \\ '  /\n");
    printf(ESPACIO"         `     `.       .  /  /\n");
    printf(ESPACIO"          .     ``.     ,' `./\n");
    printf(ESPACIO"          |      `|`.   `-._ `\"\"\".\n");
    printf(ESPACIO"          '       |.'`.     '   '\n");
    printf(ESPACIO"           \\           \\  .'     `__,..\n");
    printf(ESPACIO"            `.                ,.-'    '\n");
    printf(ESPACIO"        _..-' `.     _.'   \"-.|      /\n");
    printf(ESPACIO"    _.-'    |  ,`\"'\"\"   _       `.  .-..\n");
    printf(ESPACIO"  ,\"   |    | .       .'  `     | `.  /  _,..\n");
    printf(ESPACIO" |     '    ' |      /     |    |   `.`'\"   '                _,..__\n");
    printf(ESPACIO".'.     `.__..| |\\  /      '    |     \\    /             _,'\\    _.'\n");
    printf(ESPACIO"|,'     ,' _..|.-'\".            |      \\  .            .'.   \\,-'\n");
    printf(ESPACIO" \\\",  .'  ,`-.      `.          |       \\ `\".       _,'   \\ .'\n");
    printf(ESPACIO"  `\"\"'    ` ._\\      |   _,.'   '        \\ /___,.--\"`.    .'\n");
    printf(ESPACIO"          .`         |,-\"     .+       _  V    `.     \\  /\n");
    printf(ESPACIO"           `-._    _,' `\"-...' ,\\ .\"    `.|      .     \\'\n");
    printf(ESPACIO"              ,`.            .'  /        `.     |    /\n");
    printf(ESPACIO"            ,'   \\\"--.....-\"'   .        .  \\    |  ,'\n");
    printf(ESPACIO"           .    .\"\\           _,|        |   .   |.'\n");
    printf(ESPACIO"           |  ,'   `-.____..-\"  |        '   |_..'\n");
    printf(ESPACIO"           | |       /`._      _|         \\  |\n");
    printf(ESPACIO"          ,. .       \\   `-.-'\"  .         \\ |\n");
    printf(ESPACIO"        .' |,-`     _/       `'\"\"-`.        `.\n");
    printf(ESPACIO"       -'\".'  \\_,-\"\"                |.     .. |\n");
    printf(ESPACIO"         ''\"'\"\"                     ' |  ,'  \\|\n");
    printf(ESPACIO"                                   | .'..|    |\n");
    printf(ESPACIO"                                   '\"     `... \n");

    break;

case 113:
    printf(ESPACIO"\n");
    printf(ESPACIO"                    _,.-''\"\"\"`-._\n");
    printf(ESPACIO"                  ,\"             `._\n");
    printf(ESPACIO"                ,'   ..     .       `.\n");
    printf(ESPACIO"              .'     ||     ||        `._\n");
    printf(ESPACIO"   ,.....---'\"                         `._`-..._\n");
    printf(ESPACIO"   `._  _,.-\"/        `\"--'         `  `. `._   `\"'-.\n");
    printf(ESPACIO"  __..-'   ,' /                      \\   `.  `-.__.-'\n");
    printf(ESPACIO"`._    __,'  ,                        `.   `.    \"--.\n");
    printf(ESPACIO"   `\"'.'   .'       _,.+..              `.   `.-...-'\n");
    printf(ESPACIO"    ,'  _,'     _.-\"   A  `-._            `._  `-.\n");
    printf(ESPACIO"    `\"+'       '     ,' `     `-             \"''-'\n");
    printf(ESPACIO"      '            ,' ___`.                   |\n");
    printf(ESPACIO"     .            ' .`   `.`.                 |  _,.\n");
    printf(ESPACIO"     |            ,'       `                  |,\" ,'\n");
    printf(ESPACIO"     |           /          \\                 |  /\n");
    printf(ESPACIO"     |          j            '                | /\n");
    printf(ESPACIO"     '          |'`\"\"''\"`'\"\"\"|                |/\n");
    printf(ESPACIO"      .         `            '               ,'\n");
    printf(ESPACIO"       `.        \\          /              ,'\n");
    printf(ESPACIO"         `._      `._     ,'             .'\n");
    printf(ESPACIO"            `._      `\"\"\"'             .'\n");
    printf(ESPACIO"          _,'  `-.....___________...-'`-.\n");
    printf(ESPACIO"         `...---'               `--.....-' \n");

    break;

case 114:
    printf(ESPACIO"                      _____         ____\n");
    printf(ESPACIO"                   ,\"'     `.   ,-\"'    `\".     ,.\n");
    printf(ESPACIO"                  .  ,---.   |,'   _...    .    | `.\n");
    printf(ESPACIO"             _.---'`'\"-._ |  /   .'.---`.  '    '  |\n");
    printf(ESPACIO"           ,'            `| /...-._____ |  |`\".'   |\n");
    printf(ESPACIO"          /    _,---+-.   ,'       `-. ||  '   `..-.._\n");
    printf(ESPACIO"         .   ,`._    `.`,'.   _...    \\` .  `.   `.   `-.\n");
    printf(ESPACIO"         |_,.-...`---\"'|  ,`.|  .\"`    \\`.`.  `.   \\     \\\n");
    printf(ESPACIO" ,      ,'             |  |  |  |  \\    \\ `.`._ `.  \\`.   .\n");
    printf(ESPACIO"| \\    '     __......-\"|  |  |  |`._\\    '. `\"-`. .  . \\,\"'-._\n");
    printf(ESPACIO"|  `\"'|   .\"'   ___    |  |  '  `-...\\...|_`.._ | |..:-'      `.\n");
    printf(ESPACIO" `-..-|  .    .\"  _`+.,'  |   `._          `-.,'  |     ,+\"|`. |\n");
    printf(ESPACIO" ,'  ,|  |  ,' ,\"'     __,'      `'\"\"\"\"'`-.   .  ,'...-' | | | |\n");
    printf(ESPACIO".   / `  |  | .   ,-'\"'             ____   `. |-'-.| |   ',' `'\n");
    printf(ESPACIO"|  |   \\ |  | | .'   ,-'\"\"'-.    ,'\"    `.  | |.   | |__     ,.\n");
    printf(ESPACIO"'  `.   `|  ' | |  .'        \\  .         | | `.`. '  . `\"-.' |\n");
    printf(ESPACIO" \\ |\\`-..|   .`.|  |    ()    | |   ()    ' `._ ,.' \\  `---' ,\n");
    printf(ESPACIO"  `| `--\"    | |   '          ' '        .    .' |   |.____,' \\\n");
    printf(ESPACIO"   `.       ,' '    `.     _,'   `. ___.'_..,'   |   |  | `.   .\n");
    printf(ESPACIO"     `-...-' .' _...  `---\" _....._  _.'\"    `..'|   |  |  |   |\n");
    printf(ESPACIO"    ,'    _.\" ,'    |    .-' ___   `'   _..    `/|   |`.|  |   '\n");
    printf(ESPACIO"   '    ,'/  /   _,.'  ,' .-'   `\".  \\,'   `.   | .  `  .  '  /\n");
    printf(ESPACIO"  .   ,` ' .'   '    |/  /   ____/ \\  . ,-\"'|   '-.`.__,',' ,'\n");
    printf(ESPACIO"  |   | |  ||  |`-..\"/  /`.'\"   /   . |'  _,'  /.  `. .\"' .'`..__,.\n");
    printf(ESPACIO"  `   `.|_..'  `._  /  /   `._ /   /| | ,'/   /  \\   \\  ,\"._    _,'\n");
    printf(ESPACIO"  ,`.        \\    `-._/ `.    `-.,' | |. /  ,'   /.   \\'  __`--\"\n");
    printf(ESPACIO"  |  |-..,.\"| `-._    `.  `,      \",  '-j  .   ,',`.   `\"'  '\n");
    printf(ESPACIO"  |  |   `. `-../ `-.   `.' `\"+-..' .'  |  |_,'.\"| |`.   _,'\n");
    printf(ESPACIO"  '   `-._ `._.'   / `.  | _,'  |\"'|`-..|  |   | | |  `\"\"\n");
    printf(ESPACIO"   `._    `\"'   _.|__.-| |\" `---|  '.   |  '.,'  `.'\n");
    printf(ESPACIO"      `-.....-\"'  |___,  '       `. \\`+-`.   `.\n");
    printf(ESPACIO"             .'   '  /  /          \"'/    `\"--'-._\n");
    printf(ESPACIO"           _,:  ,'   `-\".           .             `._\n");
    printf(ESPACIO"        ,-'   `\"         |          |                `.\n");
    printf(ESPACIO"      ,'                 |          '                  `.\n");
    printf(ESPACIO"     /                 _,'           `._                |\n");
    printf(ESPACIO"    |               _,\"                 `-..__        _,'\n");
    printf(ESPACIO"    `.        __..-'                          `\"\"\"`\"''\n");
    printf(ESPACIO"      `-----\"' \n");

    break;

case 115:
    printf(ESPACIO"                               |`.\n");
    printf(ESPACIO"                               |  \\\n");
    printf(ESPACIO"                          __   |   `.\n");
    printf(ESPACIO"                        _|  \\  |     .\n");
    printf(ESPACIO"                      .' \\`-.. `     | _____\n");
    printf(ESPACIO"                      ,`-`  `.| \\   ,\"'     `-.     ______\n");
    printf(ESPACIO"                     |        |  \\.'           `.,\"'      `\",'\n");
    printf(ESPACIO"                     `.     __| ,'|             |        _.'\n");
    printf(ESPACIO"                      '    .  :/  |             |......-'\n");
    printf(ESPACIO"                     j      `./  .'\\            | |\n");
    printf(ESPACIO"                    ||      ,/   ' \"'         ,'  |\n");
    printf(ESPACIO"                    ||     . `.   `.|       .'|   |\n");
    printf(ESPACIO"                    '+     `.  `.   '     ,|__'   '\n");
    printf(ESPACIO"                     `    .'    \\`.  `\"-.'      .'_\n");
    printf(ESPACIO"                      \\   `   ,  `.`.    _..-|     `---....-\"-._\n");
    printf(ESPACIO"                       \\ . `.' _..---`.._..-\"|   |              `,\n");
    printf(ESPACIO"                        /    .'          `.  |  ,` ._           /|\n");
    printf(ESPACIO"                      .'    /              \\ `-|     |        ,'|'\n");
    printf(ESPACIO"                     '/    /                .  '    .' ,-----'\"\"'\n");
    printf(ESPACIO"                _ ,.-'    /       _.._      |   \\.-'--'\n");
    printf(ESPACIO"              .\"         /   ,..\"'`\\/ `     |   |\n");
    printf(ESPACIO"             /|         j  _,`/    _| \"`.   |   |\\\n");
    printf(ESPACIO"            j `-.       |,' `.    |.|    .  |   .|\n");
    printf(ESPACIO"            |    |    . |     `._.`-|`.  |  |    '\n");
    printf(ESPACIO"            |    |  _ ` |       `..'\"`\"\"' \\ '     `.\n");
    printf(ESPACIO"         _.-'\"\"\"\"' | `\"\\`                  .       |.\n");
    printf(ESPACIO"      ,-'|   .\"`.  `.   \\`.                '      j  .\n");
    printf(ESPACIO"    _'_..'   |   :-.--.' `.`._           ,'       |  |\n");
    printf(ESPACIO"  .'          `+'_  `.|      _`.._____,-' ,\"`.    `._/\n");
    printf(ESPACIO" /         _____  `-.__..--\"\"         `-.'    \\     |\n");
    printf(ESPACIO".    _,.-\"'     ``\"\"'                    `-..-\"  ___/\\\n");
    printf(ESPACIO"'.,-'                                      .',-.'   |'\n");
    printf(ESPACIO"                                           ,'   `.  |\n");
    printf(ESPACIO"                                                  `\" \n");

    break;

case 116:
    printf(ESPACIO"                          _,..----.._\n");
    printf(ESPACIO" ,\"''-.               _.-'           `\"-._\n");
    printf(ESPACIO".,-.   `._          ,'    ,---.           `.             _,..\n");
    printf(ESPACIO"||  \\     `._     ,'    .' |   .            `.     _,.-\"' _,'\n");
    printf(ESPACIO"||   .       `-._.      |.'|   |            _...-\"'    _,'\n");
    printf(ESPACIO"''   |           '      |  '   |         --'       _,-'\n");
    printf(ESPACIO" \\\\  |                  '.'    |                 ,'\n");
    printf(ESPACIO"  .`.'                   `.    '                (\n");
    printf(ESPACIO"   `.____                  `--'                  `--..__\n");
    printf(ESPACIO"         ``\"-.._                                        ``--..__\n");
    printf(ESPACIO"                |\"                                              ``.\n");
    printf(ESPACIO"                `                             .--\"''\"\"\"'`--------'\n");
    printf(ESPACIO"                 `.                           \\\n");
    printf(ESPACIO"     ,-\"'`-._      `-._                 `._    `.\n");
    printf(ESPACIO"    /        `.     ,._`-.._          _,'  `-.   .\n");
    printf(ESPACIO"   .    _      `.   |  `\"-._`     .-\"'        `-. `.\n");
    printf(ESPACIO"   |     `\"-._   `. |--.._  `._   \\              `. .\n");
    printf(ESPACIO"   |          `-._ `|     `-._ `-. `.              `'\n");
    printf(ESPACIO"   `        ._    `/'         `-. `. .\n");
    printf(ESPACIO"    \\         `\"-.'  .-....__    `. `.`.\n");
    printf(ESPACIO"     .          /    '       `\"-.._   | \\\n");
    printf(ESPACIO"      `.       /------\\            `  |  \\\n");
    printf(ESPACIO"        `.___./        `              '   .\n");
    printf(ESPACIO"             ,          `._        ,-'    |\n");
    printf(ESPACIO"             |.-\"''\"\"'--.._`\"---'\"/       |\n");
    printf(ESPACIO"             |  ______      `\"-../        |\n");
    printf(ESPACIO"             .\"'      `\".       /         '\n");
    printf(ESPACIO"           ,'            .     /         .\n");
    printf(ESPACIO"          .              |   .'         /\n");
    printf(ESPACIO"          |       ,'     |.-'          /\n");
    printf(ESPACIO"          |       |      '            '\n");
    printf(ESPACIO"           .       `-..-\"          _,'\n");
    printf(ESPACIO"            `.                  _,\"\n");
    printf(ESPACIO"              `._          __.-'\n");
    printf(ESPACIO"                 `'------\"' \n");

    break;

case 117:
    printf(ESPACIO"                                .                ,'\n");
    printf(ESPACIO"                               /|               /,\n");
    printf(ESPACIO"                              'j               / |\n");
    printf(ESPACIO"                             / |              / j\n");
    printf(ESPACIO"                            .  |             /  |\n");
    printf(ESPACIO"             .              |  |      _     /  j                _,..\n");
    printf(ESPACIO"   ,         |\\            j   |   _,\",'   /   |           _.-\"',-'\n");
    printf(ESPACIO"   '`        | `.      ,.  |   | ,'  '    /   j        _.-', _.'\n");
    printf(ESPACIO"    \\`.      |   `...-\" '  |   \"'  ,'    /    |    _.-' _.','\n");
    printf(ESPACIO"     \\ \\     |           \\ |      /     /     L_.-'  _,' .'\n");
    printf(ESPACIO"      \\ `. ,\"`            v      `.__  /           ,' _.'\n");
    printf(ESPACIO"       \\  \\   .           |        .' /         _,' ,'\n");
    printf(ESPACIO"        \\  `  '           '      ,'  /        ,'  ,'\n");
    printf(ESPACIO"      .--`.    \\   .     .     .'---/      ,-'   (\n");
    printf(ESPACIO"       `.  \\| | .  |    |`.  .'    /    _,'       `-..__\n");
    printf(ESPACIO"         `. | ' '  |    ' |  |        ,'                `\"---...__\n");
    printf(ESPACIO"          .'`. ` \\ '   ..'|  |    `,              __________......\"\n");
    printf(ESPACIO"          `\"--`.`.\\ ` `---' ,    -.    -'\"'\"\"`''\"\"\n");
    printf(ESPACIO"                |\"\"`      .'     /  .._.'  .  `\"`.\n");
    printf(ESPACIO"       __..--'\"\" `.       |`__|\\.     |  __`     |\n");
    printf(ESPACIO" _,.-\"'            \\      | |     .  .'    |  --.'\\\n");
    printf(ESPACIO"`-----\"`'\"\"''+.  _,'|     |/|      `-'  .  |    |  \\\n");
    printf(ESPACIO"           .' _,\"   |     ' `..'_......._`\"  .  '   .\n");
    printf(ESPACIO"         .'_,\"   _. |    _.'  ,'         `.   `'    |\n");
    printf(ESPACIO"        /.\"  _.-'  '`.--\"   .'             \\  /     |\n");
    printf(ESPACIO"      .''_.-'     .  /     /        __      .'      |\n");
    printf(ESPACIO"    ,'_.'         ' /     .       ,\"  `.    |       |\n");
    printf(ESPACIO"   .-'           / /      |       |    '    |       '\n");
    printf(ESPACIO"                . /       '       '         '      /\n");
    printf(ESPACIO"                ,'         \\       .       /      /\n");
    printf(ESPACIO"                            \\       `-...-'     .'\n");
    printf(ESPACIO"                             `.              _,'\n");
    printf(ESPACIO"                               `._        _,\"\n");
    printf(ESPACIO"                                  `\"----\"' \n");

    break;

case 118:
    printf(ESPACIO"                                            _.--.\n");
    printf(ESPACIO"                                      __  ,'     \\\n");
    printf(ESPACIO"                                    ,'  `\"        .\n");
    printf(ESPACIO"                                   |              |\n");
    printf(ESPACIO"                        ,'`.      ,'              |\n");
    printf(ESPACIO"                  .._  /    \\   .'                |\n");
    printf(ESPACIO"                 /   `'      `. |     .          .'\n");
    printf(ESPACIO"                .   |   _...__ |'    .           |\n");
    printf(ESPACIO"                |   |.\"'      `|     '           .\n");
    printf(ESPACIO"                |  ,'           \\   /            `.\n");
    printf(ESPACIO"         '`.   .| .              \\ j               |\n");
    printf(ESPACIO"          \\ `./ | |               .|              ,\n");
    printf(ESPACIO"           \\  . `.|                .            .'\n");
    printf(ESPACIO"            \\  `.                  '           _|_\n");
    printf(ESPACIO"             \\   `.                 .        .'__ `\n");
    printf(ESPACIO"            / .   |                 |        |\"  | `-...._\n");
    printf(ESPACIO"           .      |       ,.--.     |     _.'    |        `.\n");
    printf(ESPACIO" .-._      |   `  |      /     \\    |.--'\"       '         |\n");
    printf(ESPACIO" |   `'\"\"'\"|    `       .     .'|                 \\        |\n");
    printf(ESPACIO" |        ||            |    /| |                  \\       |\n");
    printf(ESPACIO" '        ||            |  ,d | '                  |       |\n");
    printf(ESPACIO".         :`             .'\"-' /  /`.            _,'`.      `.\n");
    printf(ESPACIO"|          \\.             `..-'  / \\ \\       .\"\"'     `.      |\n");
    printf(ESPACIO"'._         '                   /   \\ `.    /           `    .'\n");
    printf(ESPACIO"   `-.     .'`. .._____        /     \\  \\   |                |\n");
    printf(ESPACIO"    _|     |   \\  ___  '    _,'       .  `  .`-._            '\n");
    printf(ESPACIO"  ,' |     |    `. \"\" / __,\"           `-..'     `.           `.\n");
    printf(ESPACIO"  |  `-----'     |\"''\"'\"                          '            |\n");
    printf(ESPACIO"  '              |                                 .           '\n");
    printf(ESPACIO"   \\          _.'                                  |          |\n");
    printf(ESPACIO"   |     ,-\"''                                      ._   _..  `.\n");
    printf(ESPACIO"   |    /                                             `\"'   `.  '\n");
    printf(ESPACIO"   `...'                                                      `\" \n");

    break;

case 119:
    printf(ESPACIO"                     ,-'\"\"\"--..__  .'\\\n");
    printf(ESPACIO"                    .            `\"   \\\n");
    printf(ESPACIO"                    '                  \\\n");
    printf(ESPACIO"      _____          .                  .\n");
    printf(ESPACIO"  ,\"\"'     `'--.._    \\                 '\n");
    printf(ESPACIO" /                `._  \\  \\    +.     :' .\n");
    printf(ESPACIO".                    `._`. `.            |\n");
    printf(ESPACIO"|                       `-`  .      _ .  |\n");
    printf(ESPACIO"|                      '-._`._\\  \\ ' ||  |\n");
    printf(ESPACIO"`.                         `. `.  . \\||  '\n");
    printf(ESPACIO"  `.                 .  ...  `._`.|  '` .\n");
    printf(ESPACIO"    `._              `   `.:    `.`.   '|\n");
    printf(ESPACIO"       `.                     '`  `.\\  ||  _,...._\n");
    printf(ESPACIO"         `                   -.     ``.'|,\"       `-._\n");
    printf(ESPACIO"          |                \" ._`-._ . -._`._ |  .     `--..  ...\n");
    printf(ESPACIO"          |           ,....    `-.-'    .'  `.  ;       ,'  /   \\\n");
    printf(ESPACIO"          |           `\"\"'   \"' /     .\"_     `.      .'   .     '\n");
    printf(ESPACIO"          |       _       _,.-'/  .      \"\"-.   .   ,'.   j      .\n");
    printf(ESPACIO"          |       +'    ,\"    /     +\"    _,.'  |  /.  \\  | . |  |\n");
    printf(ESPACIO"          '           ,'     j  .'     ._ ...   | /  `. \\ |   '  |\n");
    printf(ESPACIO"         ,.`----...._'`.    /|           _..-'  |/  ,-.  \\|  '   |\n");
    printf(ESPACIO"         \".      __  `-.`. / |     +' _.\"  __....._  `.`._| / ,  '\n");
    printf(ESPACIO"           `.   `\"-'      `-.|      .'_,-'\"        _.-\"'/ |/ '  /\n");
    printf(ESPACIO"             \\         `\"-.._`-.   ,-'         ,-\"'   .`. |,' .'\n");
    printf(ESPACIO"              |          `   `-.`./ _.._      |     ,'__ \\| ,'\n");
    printf(ESPACIO"              |       __  +' -- .'.'.--.`.     \\  .','..`.+'\n");
    printf(ESPACIO"              .      `--' .\"_,.\"  |||  | |      `\" | |  ||\n");
    printf(ESPACIO"              `.         _.\"  /\\  || \"\" ||         || \"\"'|\n");
    printf(ESPACIO"                `-...,-\"' ,' /  \\ `.`..'/          ' `..'\n");
    printf(ESPACIO"                   '        /    `. `--'            `.,'\n");
    printf(ESPACIO"                    \\      /       `=+=  ,--------. .'\n");
    printf(ESPACIO"                     `.___,           `.| `.____.','\n");
    printf(ESPACIO"                                         `-.....-' \n");

    break;

case 120:
    printf(ESPACIO"                                ..\n");
    printf(ESPACIO"                               .  .\n");
    printf(ESPACIO"                                  '\n");
    printf(ESPACIO"                              ' \\/ '\n");
    printf(ESPACIO"                             /  .  `\n");
    printf(ESPACIO"                            .   |   .\n");
    printf(ESPACIO"                            '   |\n");
    printf(ESPACIO"                                |    '\n");
    printf(ESPACIO"                           '    |\n");
    printf(ESPACIO"..__                      /     |     .\n");
    printf(ESPACIO"'   \"-..__               .      |\n");
    printf(ESPACIO" `.       `\"--..____..          |      '                  __..--.\n");
    printf(ESPACIO"   ..            |   |..'       |       ..\"-. ____,..---\"'      /\n");
    printf(ESPACIO"    .`.          |   ' \\        |      .'/   /              .','\n");
    printf(ESPACIO"     `.`.        `    \\ `. _,..-'._   , /   .            _.','\n");
    printf(ESPACIO"       `.`.       \\       \"        `\"' /    '          ,' ,'\n");
    printf(ESPACIO"         . `.      .   '              /    /        _,' .'\n");
    printf(ESPACIO"          `. `.     .   \\            /   .'       .\"  .'\n");
    printf(ESPACIO"            `. `.  /`    \\          /   , \\     .' _,'\n");
    printf(ESPACIO"              `  `/  \\    \\        /   /   \\  ,' ,'\n");
    printf(ESPACIO"             ,\"`./    \\  ,-'\"\"'\"-./   /     \\_.-'\n");
    printf(ESPACIO"             |._ `.    ,',-\"\"'\"\"`-.` '    _,' `.\n");
    printf(ESPACIO"             |  `-._  . /          \\`._.-' _.-\"|\n");
    printf(ESPACIO"              `._   `-|.            .|..-\"'    |\n");
    printf(ESPACIO"              /  \\\"._ ||            ||     _,-\".\n");
    printf(ESPACIO"             .    \\  `.|            ||..-''/   |\n");
    printf(ESPACIO"             '     .   `           .'    ,'    '\n");
    printf(ESPACIO"            .       .  .`._      .'`.  .'       .\n");
    printf(ESPACIO"                   .|,'   /\"----\"\\   `._|.      '\n");
    printf(ESPACIO"           '     ,' `. _,\"-.    ,\"'._  .' `.\n");
    printf(ESPACIO"          /    .'  _.'\"     `..'     `\"-.   \\    .\n");
    printf(ESPACIO"         .   ,' _,'                      `.  `.  `\n");
    printf(ESPACIO"         | .'_,'                           `'. `. .\n");
    printf(ESPACIO"         `\"\"'                                 `. `|\n");
    printf(ESPACIO"                                                `\" \n");

    break;

case 121:
    printf(ESPACIO"             .\"-.._          ____\n");
    printf(ESPACIO"             \\     `-._     /  /\"\"\"-.\n");
    printf(ESPACIO"              .    `\"-.`-_.'`.j      \\\n");
    printf(ESPACIO"     _________'  .,---'\"\",|   |...___.'\n");
    printf(ESPACIO"   .'          \\ `-.._ ,' |  ,      || \\ ____\n");
    printf(ESPACIO"    `.    __,.-+--'\"_.'  ,^./       ||  |____`\"\"---..__\n");
    printf(ESPACIO"   _,.`\"\"\"__....--.'   .\"  `..___   ||_.'  `.\"\"'\"\"`--- '.\n");
    printf(ESPACIO"  /_.--\"'\"       /   ,'      |   |\"\"'\\  \\    `.       .'\n");
    printf(ESPACIO" .'             '  .' ___    |   |`\"--\\  \\ ____`.   ,'\n");
    printf(ESPACIO"  `.             \\,.-'   `.  |  j      \\  \\`.`.   ,'\n");
    printf(ESPACIO"    `-.                 /  \\ |  |       \\  \\ `.`.' `._\n");
    printf(ESPACIO"       `._             /   |j  j  ..--.  \\  \\  `.`.   `-._\n");
    printf(ESPACIO"          `._        ,'    ||  | /  \\  `. '  .   `.`.     `.\n");
    printf(ESPACIO"             >.     /      |'. |'    \\   `._,'     `.`.     `.\n");
    printf(ESPACIO"           .\"  `.  /       |   |      \\               .` _..\"\n");
    printf(ESPACIO"         ,\"    ,'`.         |\".'       \\               `.`.\n");
    printf(ESPACIO"       ,'   _,'   |         | |         \\                `.`.\n");
    printf(ESPACIO"     ,'  _,'      '        j j           \\                 \\ .\n");
    printf(ESPACIO"   ,'  ,\"          .       | |          _.\\....___          \\'\n");
    printf(ESPACIO"  '  .'            '       | '         /`   |     `\"\"`---..__|\n");
    printf(ESPACIO".'_.'               .     j .         '  `.  .\n");
    printf(ESPACIO"|\"                  '     | |       ,'     \\  \\\n");
    printf(ESPACIO" ''\"''\"\"\"\"''---------.    | |      /        `  \\\n");
    printf(ESPACIO"                     '   .' |    .'          \\  \\\n");
    printf(ESPACIO"                      .  | .    ,'.           `. .\n");
    printf(ESPACIO"                      ' j  |   /   `-.          . \\\n");
    printf(ESPACIO"                       .|  | ,'       `-.        . \\\n");
    printf(ESPACIO"                       `|  |.            `._      \\ \\\n");
    printf(ESPACIO"                        `\"-'                \"._    ` .\n");
    printf(ESPACIO"                                               `._  \\|\n");
    printf(ESPACIO"                                                  `-.| \n");
    printf(ESPACIO"\n");
    printf(ESPACIO"\n");

    break;

case 122:
    printf(ESPACIO"               ,---.    ___\n");
    printf(ESPACIO"               |(__)| .',-.`.\n");
    printf(ESPACIO"               `.  j  | \\.'.'\n");
    printf(ESPACIO"               _'  `\"'  ,-'___\n");
    printf(ESPACIO"             ,\"         `\"',--.\\                     _..--.\n");
    printf(ESPACIO"             |           __`..''                _,.-'      `-.\n");
    printf(ESPACIO"   ,-\"\"'`-.. '          (  `\"\"'         _...--\"'        ,.--..'\n");
    printf(ESPACIO" ,'        .' `._____  ,.`-..--\"\"\"'----.               /\n");
    printf(ESPACIO"/   _..._,'   .\"     \\ `..'|            `.        ___.'\n");
    printf(ESPACIO"'.-\"  .'    ,'        '---\"               `.     /\n");
    printf(ESPACIO"     |    .'.._     ,'                      `.  /\n");
    printf(ESPACIO"      \\   `    `._ /      |  !    !  |        |\"\n");
    printf(ESPACIO"       `.  `.     |   __  |          j  ,--. _|..._\n");
    printf(ESPACIO"         \\   `.\"\"\"\"-.'  `. '           /  ,'\"      `-.\n");
    printf(ESPACIO"          `.   `.    `.  |   _____|   |  /            `.\n");
    printf(ESPACIO"          |`....'     |_,'   `.   '    `.              |\n");
    printf(ESPACIO"          |           |---....____....-\"`        .--.  '\n");
    printf(ESPACIO"           .         ,'                  `..._  (    `'\n");
    printf(ESPACIO"            `--..,.-'      _.--\"\"\"'\"'.   |,\"\".`. ,--.. \\\n");
    printf(ESPACIO"                 |       ,'       .\"\"\"`. ``-\" | |(__)|  `.\n");
    printf(ESPACIO"                 |      .         |(__) `-'   '\"   ,\"     |\n");
    printf(ESPACIO"                / `     |          `--.          .'_,..-\"'\n");
    printf(ESPACIO"               /   `._   ._       .\"\"\"`-         ||\n");
    printf(ESPACIO"               '..._  `._  `-....( (__) __    _.','\n");
    printf(ESPACIO"              ,'    `.   `---.....`..-\"'  `\"'\"_,\".\n");
    printf(ESPACIO"         ,-\"\"`. _.---+..-'            `\"---+-'   `\n");
    printf(ESPACIO"        /      `.                       .\" , \\    \\\n");
    printf(ESPACIO"        ._    ,--.                     |  |  |.    \\\n");
    printf(ESPACIO"         _:--'    `.                   |  `._| `..-|\n");
    printf(ESPACIO"     ,-'\"  `.    .' |                  '    `\"--...'-.\n");
    printf(ESPACIO"    .        `\"\"'_.-'                   `.           |\n");
    printf(ESPACIO"    |         ,-'                         `-.______,.'\n");
    printf(ESPACIO"    '.     _.'\n");
    printf(ESPACIO"      `---' \n");

    break;

case 123:
    printf(ESPACIO"           ______\n");
    printf(ESPACIO"       _.-\"______`._             ,.\n");
    printf(ESPACIO"     ,\"_,\"'      `-.`._         /.|\n");
    printf(ESPACIO"   ,',\"   ____      `-.`.___   // |\n");
    printf(ESPACIO"  /.' ,-\"'    `-._     `.   | j.  |  /|\n");
    printf(ESPACIO" // .'   __...._  `\"--.. `. ' |   | ' '\n");
    printf(ESPACIO"j/  _.-\"'       `._,.\"\".   |  |   |/ '\n");
    printf(ESPACIO"|.-'                    `.'/| |   | /\n");
    printf(ESPACIO"'                        '/ | |   |/\n");
    printf(ESPACIO"                         /  ' '   '\n");
    printf(ESPACIO"                   |.   ` .'/.   /\n");
    printf(ESPACIO"                   | `. ,','.  ,'\n");
    printf(ESPACIO"                   |   \\.' j.-'/\n");
    printf(ESPACIO"                   '   '   '. /\n");
    printf(ESPACIO"                  |          `\"-...__\n");
    printf(ESPACIO"                  |             _..-'\n");
    printf(ESPACIO"                 ,|'      __.-7'   _......____\n");
    printf(ESPACIO"                . |    ,\"/   ,'`.'__........___`-...__\n");
    printf(ESPACIO"                 .    '-'_..' .-\"\"-._         `\"\"'-----`---...___\n");
    printf(ESPACIO"                 |____.-','\" /      /`.._,\"\".                 _.-'\n");
    printf(ESPACIO"              ,\"`| ,'   '   |      .,--. ;--|             _,-\"\n");
    printf(ESPACIO"             |   '.| `-.|   `.     ||   /   '`---.....--\"'.\n");
    printf(ESPACIO"             '     `._  |     `+----`._;'.   `-..____..--'\"\n");
    printf(ESPACIO"              `.    | \"'|__...-|,|       /     `.\n");
    printf(ESPACIO"                |-..|`-.7    /   '      /   |  '|\n");
    printf(ESPACIO"                ' |' `.||`--'    |      \\   | . |\n");
    printf(ESPACIO"                        |        |       \\  ' | |\n");
    printf(ESPACIO"                        `.      .'        .   ' '\n");
    printf(ESPACIO"                          `'-+-\"|`.       '  ' /\n");
    printf(ESPACIO"                             |`-'  \\     /  /.'\n");
    printf(ESPACIO"                             `   _ ,.   / ,'/\n");
    printf(ESPACIO"                              ||'.'`.  / /,'\n");
    printf(ESPACIO"                               `      ' .'\n");
    printf(ESPACIO"                                     /.' \n");

    break;

case 124:
    printf(ESPACIO"                _   _,.-.' .-.\n");
    printf(ESPACIO"            _ .' |,'   .\"\".| |.\"\"._\n");
    printf(ESPACIO"           ( || ,',\"\". `._`' `  '  `.\n");
    printf(ESPACIO"           `\\ | `\" .-\"`-..`     .    `.\n");
    printf(ESPACIO"            |     `..--.._       |     \\\n");
    printf(ESPACIO"          _,|      _...'_.'     ,+.     `.\n");
    printf(ESPACIO"     ,\"\"'|   `...-'..\"\"(__.._ -\"   `\"--.. `.\n");
    printf(ESPACIO"    |`._,'  ,'  /\\ .'\"\"` .'\"\"`. `.    |  `. \\\n");
    printf(ESPACIO"    '      / / /  ||    ||    |.`.`.   .   | \\\n");
    printf(ESPACIO"     `.__,'-._'  /|` -\"'  `-.'  \\ \\ \\   `\"-'  \\\n");
    printf(ESPACIO"      ' `.   /  /_| | |'\"\"| | .-\"\"'`'\"`-,.-\"\\  .\n");
    printf(ESPACIO"     . / .\\ .  /  | | `._.' ||        ,'     \\  \\\n");
    printf(ESPACIO"    ' / / |/  /_.-+._`-..--\"-.       .   .    \\  `\n");
    printf(ESPACIO"   / /.'  '  ,'\"\"'-. `\".\"'\"\"'`..     |.        \\  \\\n");
    printf(ESPACIO"  / . |  j  .       . |        |\\__,\" |.  `    '   \\\n");
    printf(ESPACIO" .  | |  |  |       ' |        '|   | ' `  \\    \\   .\n");
    printf(ESPACIO" |    |  |  `.____,'   ..____,' |   |    .       \\\n");
    printf(ESPACIO" |    |  |  | ._  _..---._   _,'    |       .        '\n");
    printf(ESPACIO" |    |  |  | | \"\"  .    |`\"'   \\ `.|     '  '  '     .\n");
    printf(ESPACIO" |    |  |  | |     |    |       `  `      .  .  \\    |\n");
    printf(ESPACIO" |    |  |  | |     '    |        \\  `.    |  |   .   |\n");
    printf(ESPACIO" '    '  |  | |      .   `         \\   \\   |  |   |   |\n");
    printf(ESPACIO"  \\      `  | |      |              .   `. |  |   |   |\n");
    printf(ESPACIO"   \\      \\ ' |      `    '          `    `+..|___|___|_........\n");
    printf(ESPACIO"    \\      \\ \\|       '    .           `.    `.                 |\n");
    printf(ESPACIO"     `.     \\ .        .   `             `.    `-.            .'\n");
    printf(ESPACIO"    _,'`.    \\'         .   \\              `-.._  `._       ,'\n");
    printf(ESPACIO" _.\"     `._ `.`        |    .                       `._   .\n");
    printf(ESPACIO"`._       _,`\"--`.      |     .                         `. |\n");
    printf(ESPACIO"   `-._ ,'              |      `.                         `|_\n");
    printf(ESPACIO"      ,'         |      |        `.                          `.\n");
    printf(ESPACIO"    .'   __...__.|      |          \\ __..._     _,..,.__       `.\n");
    printf(ESPACIO"    `-`\"'        `._..--'-.__      .'      `-..'        ``'\"--..-'\n");
    printf(ESPACIO"                             `\"---' \n");

    break;

case 125:
    printf(ESPACIO"              '\n");
    printf(ESPACIO"             .\n");
    printf(ESPACIO"             | '\n");
    printf(ESPACIO"             | |\n");
    printf(ESPACIO"          .  ` '                              .\n");
    printf(ESPACIO"          '`. . .          .--.              , .\n");
    printf(ESPACIO"       ..  `.`| `....___  '   |            ,_' |\n");
    printf(ESPACIO"      |  |   .    _,   .`-`,-\"          ,.'    '-.\n");
    printf(ESPACIO"      `..`._,'` .'.   '  ,'            /    .....|\n");
    printf(ESPACIO"          `.'  ','      '  `-._      ,'     `----'\n");
    printf(ESPACIO"          ,'| '/               `.  ,'   \\ .-\"\".   \\\n");
    printf(ESPACIO"        |' |`'/ .|               `.     .'  _,'_.\"'\n");
    printf(ESPACIO"       /   `.' /_|  __       _...-'   .' |.' .\"    \\\n");
    printf(ESPACIO"     ,' `-.   '\" .-\"V `-.  ,'       ,'   |    `-'\"\"'\n");
    printf(ESPACIO"    ,--.'. `.   /      / ,' ,      /`.   |          |\n");
    printf(ESPACIO"  .'---'  `./\"\"|'.    / /  /      '   `-.|          |\n");
    printf(ESPACIO" /         /   `-....','  /              `.|    | . |\n");
    printf(ESPACIO".|       .'       .'.'   /      _,        .'   .  | '\n");
    printf(ESPACIO"||       |        |/    /    _,'  7    _,\" `---'--\"'        _.._\n");
    printf(ESPACIO"|`  .   /         |    . _.-\"    /   ,\"     |             ,'    `.\n");
    printf(ESPACIO"`.`-', /          |   '.' ,.    /  ,'     ,-'.          .'       |\n");
    printf(ESPACIO"  `.              |   _.-' |   '  /    _,'   |         .\"\"`.   _,'\n");
    printf(ESPACIO"                  '.-'     '  /  /   ,\"      |        ,\"'.  |.\"\n");
    printf(ESPACIO"                   `      .  /  /  ,'        .       /    |,'\n");
    printf(ESPACIO"                 ,\".`.      .  '_.'        _.-`.    ,\"-.  /\n");
    printf(ESPACIO"               .'`._`.`. '  ' ,'          `_.'\"\".  /\".  |'\n");
    printf(ESPACIO"               |.`._`\" .`-.'           .     ___|.'   |'\n");
    printf(ESPACIO"           ,--'  `-.' `|   `\"--..__..-\"' | .\" __|   ,'\n");
    printf(ESPACIO"         ,' )       _,'            `'\"._.'  \"'   `-'\n");
    printf(ESPACIO"        '\",' )__.-'\"                    `.          |.\n");
    printf(ESPACIO"          '\"\"                             `-.  .    | |\n");
    printf(ESPACIO"                                             `| `.-'`-.\n");
    printf(ESPACIO"                                               `.'\n");
    printf(ESPACIO"                                                 ' \n");

    break;

case 126:
    printf(ESPACIO"\n");
    printf(ESPACIO"                                                 ,--''''-.\n");
    printf(ESPACIO"                                               ..    `'  `\n");
    printf(ESPACIO"                                                '    .'...'\n");
    printf(ESPACIO"                                            '  ,'::     |\n");
    printf(ESPACIO"                                               ,..-Y-'  /--\n");
    printf(ESPACIO"                                    .              |' _.'\n");
    printf(ESPACIO"                                  .' .______ ,-'\"|  ,'\n");
    printf(ESPACIO"                           /,  ,. '-'     .-' .\" | '\n");
    printf(ESPACIO"                          /  \"'  ' -=L;'\\'    `-.'.\n");
    printf(ESPACIO"             ,,          /__     ,L_/'        .'            |\\\n");
    printf(ESPACIO"       |`.  '\\  _,          |         .        ,'          =-. `|\n");
    printf(ESPACIO"       `. ,' |.`            '`-v      `'-.    |             | -,..\n");
    printf(ESPACIO"        _:  \" `\\,.     ___    _'|  ,-,_-  `-..'          .]---> _`'\n");
    printf(ESPACIO"      . ___.   ' /'--.  -.=[----`, |   '-  ,'                | </\n");
    printf(ESPACIO"           ..b--`. -'- , ----`` |'--v -'            __-- ' ,,\n");
    printf(ESPACIO"            .'|    <\\]``,[ -    '\\\\._  |'  '''`- _  _,|    `''|\n");
    printf(ESPACIO"   \\\" ''L     |   X`.  ` /--,    |  -`.:_ `.    ' TX_,.:'..  ,|\n");
    printf(ESPACIO"   `   |       \"` =. ----  _|    |      ` _ `\\ |=:| /   '-\\ --'\n");
    printf(ESPACIO"   |.   `.          '''-..L    _,'      .' `,.``-() Y.-[ .'\n");
    printf(ESPACIO"   '    .            _. _.. -]-,..-,'    v.   \\|  ` '`'\n");
    printf(ESPACIO"`.'       `.        ' ---.'- /-[  .',_   -.   ,)L\n");
    printf(ESPACIO"  |       .'      __,...-`=..__       '   '     '.\n");
    printf(ESPACIO"   ,\"', .'      -`... _-'      `.     ` ,'      | `.\n");
    printf(ESPACIO"       .`            .'          .     '        |   \\\n");
    printf(ESPACIO"         '           |           |             .'    .\n");
    printf(ESPACIO"        \\ `.         '           '            ,'     |\n");
    printf(ESPACIO"         \\  `.        `         /           .'     _.'\n");
    printf(ESPACIO"          '.  `-.     /`__    ,'.._______,-'--...-` `.\n");
    printf(ESPACIO"            `.   `--..'J  \"'.'         ,'       `._\\` ``-...\n");
    printf(ESPACIO"              `.   .'   `'|'        _,'          |    _    \"-.\n");
    printf(ESPACIO"                `.'|  ..  |     _,-'             `-._| '.---.'\n");
    printf(ESPACIO"                / _,_/  |-`---\"'                     `-..|\n");
    printf(ESPACIO"               `-\"   | .'\n");
    printf(ESPACIO"                     -'\n");

    break;

case 127:
    printf(ESPACIO"                        _.-\".\n");
    printf(ESPACIO"                ..-\"\"`.'    '..__,\n");
    printf(ESPACIO"                `-. .'     /  ,.`.\n");
    printf(ESPACIO"                  ,'      '`. .'  `.\n");
    printf(ESPACIO"                 /       .-'        `....\n");
    printf(ESPACIO"              ..'.      .\\             .|\n");
    printf(ESPACIO"              .`./      | `.            '.\n");
    printf(ESPACIO"              |         |  .\\       /|    \\\n");
    printf(ESPACIO"             .'         |)  `\\       '   (_`\n");
    printf(ESPACIO"            ,|          |    `.            |\n");
    printf(ESPACIO"             |          |  _,.-.           |\n");
    printf(ESPACIO"             |          |,'     \\          |\n");
    printf(ESPACIO"             |          |        \\         |\n");
    printf(ESPACIO"             |      \\,  '.        \\        |\n");
    printf(ESPACIO"             '           |         `._     |\n");
    printf(ESPACIO"              \\          |            `-..,+___\n");
    printf(ESPACIO"               \\         |          /       |  `.\n");
    printf(ESPACIO"                \\        '         / ,      '    \\\n");
    printf(ESPACIO"                 \\      ,  _      /.'      /|    `-.\n");
    printf(ESPACIO"                  `.   .    `-.    __     ' |     .'\n");
    printf(ESPACIO"                    `..'   -\"'  .-\"| |  ,'  |    |  '-..\n");
    printf(ESPACIO"                    /`.        (_`.`\" \\'    |_.-'-\"'-. .`.\n");
    printf(ESPACIO"                   .   \\       `._. `\".|    |         `|  .\n");
    printf(ESPACIO"                   |    \\`----\"\"`.`. / |,.-\"'`-.        `. '\n");
    printf(ESPACIO"                   |     \\        `-+-\"   /     \\         \\ \\\n");
    printf(ESPACIO"                  ,'     _\\ ___..-'      .       \\         \\ \\\n");
    printf(ESPACIO"                  j\"._,-\".'`.       _.-\"'|     _  \\         . \\\n");
    printf(ESPACIO"                 / ,'   /    `.._,-'    _| _.-'   `.        |  \\\n");
    printf(ESPACIO"               .' '    ._      `-..__.-\"_|'        |        `..\"`.\n");
    printf(ESPACIO"   _..      _,'\"-/     | `-._   .'   `\"' `.      __|        /|  | \\_\n");
    printf(ESPACIO" .'   `--\"\"' _.-'    .-|     `.'          '._  .`  `.      / |  |.'|\n");
    printf(ESPACIO".  \\ .\"\\ _,-'        `.'..-.-'           /   `.-._   .     `.|./__.'\n");
    printf(ESPACIO"|`.` | /\"               |.'             / _.'     `-.|\n");
    printf(ESPACIO"`_|.'`'                                `-' \n");
    printf(ESPACIO"\n");

    break;

case 128:
    printf(ESPACIO"                                                           .'`.'\n");
    printf(ESPACIO"                                                          `     '\n");
    printf(ESPACIO"                                             ,-'.`.        `    ``\n");
    printf(ESPACIO"            '\"--.                          /'      \\        |    |\n");
    printf(ESPACIO"             \\   `                         '.      `.      ',    '\n");
    printf(ESPACIO"              .   |                          `- _,.\"-._-._   `. /\n");
    printf(ESPACIO"              '   |,`.----.                            \"-.`.  |'\n");
    printf(ESPACIO" ,\".        .'    '       '---.                            \\\\ ||\n");
    printf(ESPACIO" | :     ,-'|    .             '                            ..||\n");
    printf(ESPACIO" |  `._.',||`._.'|              \\.                          ||||\n");
    printf(ESPACIO" `.   / ._| `-...'\\              \\`._                       |. '\n");
    printf(ESPACIO"  _,-'             . `--.         \\  `.                     '.'\n");
    printf(ESPACIO".\" .'             _|     `-`\".     .   `.                 .'.\n");
    printf(ESPACIO" '-....'          |           `-. _.'    `._           _.','\n");
    printf(ESPACIO"  `.             .'                .-       `.       .'_,'\n");
    printf(ESPACIO"    `..__....._ `.               ,'           `-._ .',\"\n");
    printf(ESPACIO"          /    `.|               '                `.'....__\n");
    printf(ESPACIO"         .                   _:.]                   `\"''-._`.\n");
    printf(ESPACIO"         '                 :\"    '                   `.    `. .\n");
    printf(ESPACIO"          \\                |                                 `.`.\n");
    printf(ESPACIO"           .               |                           .       ` .\n");
    printf(ESPACIO"           |               '         |                          ` .\n");
    printf(ESPACIO"           '.             .          |                  '        .|\n");
    printf(ESPACIO"             |`.          |          |                  |        ||\n");
    printf(ESPACIO"             |  `.        '          '                  |       . '\n");
    printf(ESPACIO"             |    \"--.     |        /_                  |     -'   |\n");
    printf(ESPACIO"             |        `.   |       /  `'\"\"`-._          |    ,'    |\n");
    printf(ESPACIO"             '        ,\"'..|      .      '    `.        |    |.    |\n");
    printf(ESPACIO"              .     ,'     '.     |\\    .       `       |      | ,/\n");
    printf(ESPACIO"              |    /        |     | .   |        `.     |      `'\n");
    printf(ESPACIO"              |   .         |    ,' |  .           \\    |\n");
    printf(ESPACIO"              |   |         |    .  | .'            .__ '\n");
    printf(ESPACIO"              '-..|         |___.   '\"              |../\n");
    printf(ESPACIO"             /.-'           \\ .'\n");
    printf(ESPACIO"                             ' \n");

    break;

case 129:
    printf(ESPACIO"\n");
    printf(ESPACIO"\n");
    printf(ESPACIO"                                 __.--.._,-'\"\"-.\n");
    printf(ESPACIO"                              ,-' .' ,'  .-\"''-.`.       .--.\n");
    printf(ESPACIO"                            ,'    |  |  '`-.    \\ \\       `-.|\n");
    printf(ESPACIO"                           /       .   /    `.   \\ \\        ||\n");
    printf(ESPACIO"                          /         `..`.    `.   \\ .       ||\n");
    printf(ESPACIO"                         /        . .    `.    \\   . .      '.\n");
    printf(ESPACIO"                .\"-.    .  ,\"\"'-. | |      \\    \\   `.`.__,'.'\n");
    printf(ESPACIO"                 `. `. .   |     `. |       \\    .    `-..-'\n");
    printf(ESPACIO"       _______     .  `|   |   '   .'        .   |...--._\n");
    printf(ESPACIO"       `.     `\"--.'   '    .      | .        .  |\"\"''\"-._\"-._\n");
    printf(ESPACIO"         `.             \\    `-._..'. .       |  |---.._  `-.__\"-..\n");
    printf(ESPACIO"    -.     `.           |\\           `.`      |  |'`-.  `-._   +\"-'\n");
    printf(ESPACIO"    `.`.     `-.        | `            .`.       | `. `.    `,\"\n");
    printf(ESPACIO"      `.`.      `.      |  '.           ` `      `.  \\  `   /\n");
    printf(ESPACIO"      | `.`.    __`.    |`/  `.     ...  `.`.     |   `.   .\n");
    printf(ESPACIO"      |   \\ .  `._      | `. / `. .'.' |   \\ \\    |     \\  |\n");
    printf(ESPACIO"      |.   ` \\    `-.   |   \\   .'.'/' |    \\ \\   |      ._'\n");
    printf(ESPACIO"      | `.  `.\\      `. |    \\ / , '.  |_    . \\  '-.\n");
    printf(ESPACIO"     ,     .  .\\       `|     . ' / |  | `-...\\ \\'   `._\n");
    printf(ESPACIO"     `.     `.  \\       |.    '/ .  |  |       ' .      `-.\n");
    printf(ESPACIO"      .`._    \\` \\      | `. /'  '  |  |       | |       ,.'\n");
    printf(ESPACIO"       .  `-.  \\`.\\    ,|   //  '   |  |__  .' | |      |\n");
    printf(ESPACIO"       |     `._`| `--' `  //  .    |  '  `\"  /| |   . -'\n");
    printf(ESPACIO"       '        `|       `//   '    |   .    / | |   |\n");
    printf(ESPACIO"      /....._____|       //   .  ___|   |   /  | |  ,|\n");
    printf(ESPACIO"     .         _.'      /, _.--\"'-._ `\".| ,'   | |.'\n");
    printf(ESPACIO"     |      _,' / ___   `-'.        `. _|'     |,\n");
    printf(ESPACIO"     |  _,-\"  ,'.'   `-.._  `.      _,'         `\n");
    printf(ESPACIO"     '-\"   _,','          \"- ....--'\n");
    printf(ESPACIO"    /  _.-\"_.'\n");
    printf(ESPACIO"   /_,'_,-'\n");
    printf(ESPACIO" .'_.-'\n");
    printf(ESPACIO" '\"\n");

    break;

case 130:
    printf(ESPACIO"\n");
    printf(ESPACIO"                            /|\n");
    printf(ESPACIO"                /`     |   / |\n");
    printf(ESPACIO"               . |     |`.'  |  ,          .\n");
    printf(ESPACIO"               | |     |     `\"'/       _,'           ,\"'\n");
    printf(ESPACIO"               | |     |       /      .\" ,'         ,'/_\n");
    printf(ESPACIO"               | |   ,\"| .-\"\"\"''`,`.,'  /      /|  /  ' )\n");
    printf(ESPACIO"     .'.       | |\"\"+._|'   .    '     ,__    / ) /   .'\n");
    printf(ESPACIO"      `.`.   .'| |     '_,\".`     \\     .'   '   '   /  _\n");
    printf(ESPACIO"        `.`./ j  |  _,-'_,'.       `-..'    .        `-'/\n");
    printf(ESPACIO"         _\\' `   |,\" _.' `. `.     _..|     |         ,'\n");
    printf(ESPACIO" .    .\"'  \\._____.-' '    `-|  .-'  ,|    _|   ___  /\n");
    printf(ESPACIO"  \\`._ `-. `|.___,'| /     _.'      / |  ,\" |.-'   `.'.\n");
    printf(ESPACIO"   \\-.`\"-'  _______`'    ,' __.---.' ,^.' _.'_    __ `.`.\n");
    printf(ESPACIO"   |    `-.,...... `.   |,-\"     / .'. |-'    `-.\"  | |` \\\n");
    printf(ESPACIO"   '      ||\\/  |/`.|  .`       (,'   `|         `.'  '.| \\\n");
    printf(ESPACIO"   `-..--.||       || j      ____\\     |       _  |  /     `.---------.\n");
    printf(ESPACIO"      |   ||  ___..|||,.--\"\"'|.      .\"|     ,' | |\"/ `. ,'. .   ,.--\"\n");
    printf(ESPACIO"      |  .||.'      ||.._    ' )  _,'\\ |`'-.'   | |/    ||.' |   `.\n");
    printf(ESPACIO"      |,',|||      . |\"-.`._  `+`\"    \"      `.'  ^,.__,'.   |  ,--'\n");
    printf(ESPACIO"       // |||      |j  |\\\\  \"'  `.     |   ,-` `./ '     |   |`.\\\n");
    printf(ESPACIO"      .'  |||      ||  | .'      |   .\"`..|_ |  .   \\    |  /|\n");
    printf(ESPACIO"      ||  ||`.___.'f   ' ||     ,'--\"`._|,-.`|  '    +.._|,'.|\n");
    printf(ESPACIO"      ||  |`-.....'|    .'`.\"\"'`.       /\\ | `.'     |    |  |\n");
    printf(ESPACIO" .'`  ''   `--....-'    | \\|   ``\\     '  \\|   |     |`._,'-\"'\n");
    printf(ESPACIO" |`..''                 |  '    )|.   /`..|'   '     |   \\  /\n");
    printf(ESPACIO"  `\"\"'                  |   `-..''|  /    |   /    _..\"`.` /\n");
    printf(ESPACIO"                        `         |,'     |  /  ,\"'_,|     \\\n");
    printf(ESPACIO"                         `,_   _.-'.      |,' .'-'\"  '    , \\\n");
    printf(ESPACIO"                          `.\"\"'     `.   .' .'      /   ,' | .\n");
    printf(ESPACIO"                            `._       \\,'  .       /   /   | |\n");
    printf(ESPACIO"                               `\"----\"'     \\  _  /  ,'    | |\n");
    printf(ESPACIO"                                             `\" 7._,`      | |\n");
    printf(ESPACIO"                                                    \\      | '\n");
    printf(ESPACIO"                                                     `-. ,.|/\n");
    printf(ESPACIO"                                                        '  |\n");

    break;

case 131:
    printf(ESPACIO"                                       ,|\n");
    printf(ESPACIO"                                       ||\n");
    printf(ESPACIO"                               ,-\"'\"\"`' `._\n");
    printf(ESPACIO"                              '----.     __`....._\n");
    printf(ESPACIO"                               `    `.  `. ;      `.\n");
    printf(ESPACIO"                                `.    `.  `   ,\"`. |\n");
    printf(ESPACIO"                                  `.  _.`._   |  ' |\n");
    printf(ESPACIO"                                  .','  ,' `.  `--'\n");
    printf(ESPACIO"                                 /.' _,'    | /\n");
    printf(ESPACIO"                                '/_.'       |.\n");
    printf(ESPACIO"                                 `---`\".    ||\n");
    printf(ESPACIO"                                       |    ||\n");
    printf(ESPACIO"                                      ,'    `|\n");
    printf(ESPACIO"                         _           /       |\n");
    printf(ESPACIO"                        ' `.        .'       |\n");
    printf(ESPACIO"                         .  `._  _,'/|       |\n");
    printf(ESPACIO"                        _|     \"'  / |       '\n");
    printf(ESPACIO"                    _,-' |        /  '        .\n");
    printf(ESPACIO"                 |\"'            ,'  '          \\\n");
    printf(ESPACIO"                 |   _        ,'   /            \\\n");
    printf(ESPACIO"                 ;  '        /    j              .\n");
    printf(ESPACIO"            ,\"--'    `.    .      |              |         ________\n");
    printf(ESPACIO"            `.   -.       / '     |              |   _,-\"\"'   __.._\"`-._\n");
    printf(ESPACIO"             ,' ,-.`-.__.' /      '              |.-'  _..--'\"       _.-'\n");
    printf(ESPACIO"             \\.'   `-.___.'      ,               '__.-\"           _.'\n");
    printf(ESPACIO"             /        _..--    . |              /               ,'\n");
    printf(ESPACIO"           ,`      .-'         | |           _,'._          _,-'\n");
    printf(ESPACIO"       _,-'      ,'           .' '       _.-'     \"-.....-\"'\n");
    printf(ESPACIO"     ,'     __ ,'          _.'  /  __..-'\n");
    printf(ESPACIO"   ,' _.-\"\"'  /         _.'  _.'-\"'\n");
    printf(ESPACIO"  '-'\"       /      _.-' _.-\"\n");
    printf(ESPACIO"            /    _.' _.-'\n");
    printf(ESPACIO"           .   .'_.-'\n");
    printf(ESPACIO"           | ,'.'\n");
    printf(ESPACIO"           | .`\n");
    printf(ESPACIO"            `\n");

    break;

case 132:
    printf(ESPACIO"\n");
    printf(ESPACIO"                                           ,--._\n");
    printf(ESPACIO"                                        _,'     `.\n");
    printf(ESPACIO"                              ,.-------\"          `.\n");
    printf(ESPACIO"                             /                 \"    `-.__\n");
    printf(ESPACIO"                            .         \"        _,        `._\n");
    printf(ESPACIO"                            |            __..-\"             `.\n");
    printf(ESPACIO"                            |        ''\"'                     `._\n");
    printf(ESPACIO"                            |                                    `\"-.\n");
    printf(ESPACIO"                            '                                        `.\n");
    printf(ESPACIO"                           .                                          |\n");
    printf(ESPACIO"                          /                                           |\n");
    printf(ESPACIO"                       _,'                                           ,'\n");
    printf(ESPACIO"                     ,\"                                             /\n");
    printf(ESPACIO"                    .                                              /\n");
    printf(ESPACIO"                    |                                             /\n");
    printf(ESPACIO"                    |                                            .\n");
    printf(ESPACIO"                    '                                            |\n");
    printf(ESPACIO"                     `.                                          |\n");
    printf(ESPACIO"                       `.                                        |\n");
    printf(ESPACIO"                         `.                                      '\n");
    printf(ESPACIO"                           .                                      .\n");
    printf(ESPACIO"                           |                                       `.\n");
    printf(ESPACIO"                           '                                        |\n");
    printf(ESPACIO"                         ,'                                         |\n");
    printf(ESPACIO"                       ,'                                           '\n");
    printf(ESPACIO"                      /                                _...._      /\n");
    printf(ESPACIO"                     .                              ,-'      `\"'--'\n");
    printf(ESPACIO"      ___            |                            ,'\n");
    printf(ESPACIO"   ,-'   `\"-._     _.'                          ,'\n");
    printf(ESPACIO"  /           `\"--'             _,....__     _,'\n");
    printf(ESPACIO" '                            .'        `---'\n");
    printf(ESPACIO" `                 ____     ,'\n");
    printf(ESPACIO"  .           _.-'\"    `---'\n");
    printf(ESPACIO"   `-._    _.\"\n");
    printf(ESPACIO"       \"\"\"'\n");

    break;

case 133:
    printf(ESPACIO"\n");
    printf(ESPACIO"                                      |\n");
    printf(ESPACIO"                                     /|\n");
    printf(ESPACIO"                                   ,' |\n");
    printf(ESPACIO"                                  .   |\n");
    printf(ESPACIO"                                    | |\n");
    printf(ESPACIO"                                 ' '| |\n");
    printf(ESPACIO"                                / / | |\n");
    printf(ESPACIO"       _,.-\"\"--._              / /  | |\n");
    printf(ESPACIO"     ,'          `.           j '   ' '\n");
    printf(ESPACIO"   ,'              `.         ||   / ,                         ___..--,\n");
    printf(ESPACIO"  /                  \\        ' `.'`.-.,-\".  .       _..---\"\"'' __, ,'\n");
    printf(ESPACIO" /                    \\        \\` .\"`      `\"'\\   ,'\"_..--''\"\"\"'.'.'\n");
    printf(ESPACIO".                      .      .'-'             \\,' ,'         ,','\n");
    printf(ESPACIO"|                      |      ,`               ' .`         .' /\n");
    printf(ESPACIO"|                      |     /          ,\"`.  ' `-. _____.-' .'\n");
    printf(ESPACIO"'                      |..---.|,\".      | | .  .-'\"\"   __.,-'\n");
    printf(ESPACIO" .                   ,'       ||,|      |.' |    |\"\"`'\"\n");
    printf(ESPACIO"  `-._   `._.._____  |        || |      `._,'    |\n");
    printf(ESPACIO"      `.   .       `\".     ,'\"| \"  `'           ,+.\n");
    printf(ESPACIO"        \\  '         |    '   |   .....        .'  `.\n");
    printf(ESPACIO"         .'          '     7  \".              ,'     \\\n");
    printf(ESPACIO"                   ,'      |    `..        _,'      F\n");
    printf(ESPACIO"                  .        |,      `'----''         |\n");
    printf(ESPACIO"                  |      ,\"j  /                   | '\n");
    printf(ESPACIO"                  `     |  | .                 | `,'\n");
    printf(ESPACIO"                   .    |  `.|                 |/\n");
    printf(ESPACIO"                    `-..'   ,'                .'\n");
    printf(ESPACIO"                            | \\             ,''\n");
    printf(ESPACIO"                            |  `,'.      _,' /\n");
    printf(ESPACIO"                            |    | ^.  .'   /\n");
    printf(ESPACIO"                             `-'.' j` V    /\n");
    printf(ESPACIO"                                   |      /\n");
    printf(ESPACIO"                                   |     /\n");
    printf(ESPACIO"                                   |   ,'\n");
    printf(ESPACIO"                                    `\"\"\n");

    break;

case 134:
    printf(ESPACIO"                                                                                                    \n");
    printf(ESPACIO"                                      ``                                                            \n");
    printf(ESPACIO"                                       o`                                                           \n");
    printf(ESPACIO"                                       -/                                                           \n");
    printf(ESPACIO"                                        /-                                                          \n");
    printf(ESPACIO"                                        ./`                            .-:`                         \n");
    printf(ESPACIO"                                         ::                        `.-:-/`                          \n");
    printf(ESPACIO"                                         .:-                     ..:-. -`                           \n");
    printf(ESPACIO"                                        .-::-....--.`         `...-`   :                            \n");
    printf(ESPACIO"                                   ``...` `:-    :  `....`  .-..-`     :                            \n");
    printf(ESPACIO"                                  :```    ./:-...-.`  `-`---``-.    .-:.                            \n");
    printf(ESPACIO"                                `-` ..`...``-:  `....-- .-` ..   .-..-                              \n");
    printf(ESPACIO"                             `...    --`..  -:  ..`....-` .-` `--` `-                               \n");
    printf(ESPACIO"           `-:://:------.....:.`..` -`.-`.-`    :    `-. -. .-.`   -`                               \n");
    printf(ESPACIO"                `.-.````......``.--/.-.    .-. .-  .-oss/``.`  ``.`/                                \n");
    printf(ESPACIO"                   ..       ``....``:`.::..  `.-  ::+NMd-. `.--.``:.                                \n");
    printf(ESPACIO"                    :.............`---mNd+/o`     hmNds/ :`````` ..                                 \n");
    printf(ESPACIO"                    `..-.`  ``````  :`oydmmd:  `  .--.`` :``````:-                                  \n");
    printf(ESPACIO"                        `-`  `...`  .: .--.`   ..``      :       :                                  \n");
    printf(ESPACIO"                          :-:.``  `..-.      .-...-      /..``  `-                                  \n");
    printf(ESPACIO"                          ```:.`......:.      .-  :    `-`  ``  -`                                  \n");
    printf(ESPACIO"                             ./.`..`   ...     `.-`  `.:.      `.-                                  \n");
    printf(ESPACIO"                             -.        .-......````-.`  `-`   ..`                                   \n");
    printf(ESPACIO"                             ``..`    -.     :`````.-     `  ..                                     \n");
    printf(ESPACIO"                                 ::` ``     `-      .`    ```:                                      \n");
    printf(ESPACIO"                            ````..`/```     ``         `.:.```                                      \n");
    printf(ESPACIO"                      ``.....```.`-..``...``  ``.....`..`..                                         \n");
    printf(ESPACIO"                   ....`` ```...``        `.-.``     ``   :                                         \n");
    printf(ESPACIO"                `..````....``                             :               ```.....```               \n");
    printf(ESPACIO"               .- `..``     `````               `.   ``   :            ``..```   `...-.``           \n");
    printf(ESPACIO"              :` ..`        `````...`   :       ..  .-   `/````````  `.``             `.-/`         \n");
    printf(ESPACIO"             .- .-                 `..  :       -..::-.::::-:::--:---.                `--`          \n");
    printf(ESPACIO"            -. .-                    `-`-    ``-/.---```.............:.              .-`            \n");
    printf(ESPACIO"            : .-                      `::``-.--.``.-.``.        ```.       ``     `.-.              \n");
    printf(ESPACIO"           -. -`       ..````````````.-::::``....`       ``..```   -        `-.```.`                \n");
    printf(ESPACIO"           .-`-`         `````..-:--:-   `...`        `.:.`        -          ..                    \n");
    printf(ESPACIO"           ``:.-`.`   `    ````-.  ```....`        `.-.`:          :           .-                   \n");
    printf(ESPACIO"           `.`--.`.-.......```.``.....          `.:.`  ..          `-           .-                  \n");
    printf(ESPACIO"            -  `......``........`             `-/.:    :            `-.          /                  \n");
    printf(ESPACIO"            `-        ``                   `--. -`:    :              `--`       -.                 \n");
    printf(ESPACIO"             .-                         `::/    `-:    :                 .--`    `:                 \n");
    printf(ESPACIO"               --`                  `.---.+:`    ::  ``:.                   .--` `:                 \n");
    printf(ESPACIO"                 ..-..`        `.--//-``-:- -` .`:/-.:-:`                      .:/.                 \n");
    printf(ESPACIO"                     `..........`     ```    ..-..   \n");

    break;

case 135:
    printf(ESPACIO"XH                             HX               \n");
    printf(ESPACIO"H;XHX                         HXH               \n");
    printf(ESPACIO"H;;;;XH                      XHXH               \n");
    printf(ESPACIO"XXXX;;;H                     HX;H               \n");
    printf(ESPACIO" HXHHX;;H                   HXH;H    XH         \n");
    printf(ESPACIO" HXXHHX;;X                 HXXH;H  HX;H         \n");
    printf(ESPACIO" XXXHHHX;H        X  H     HXHX;HHX;;;X         \n");
    printf(ESPACIO"  HXHHHHX;H       HH HH   HXHH;;X;;;;X       XHX\n");
    printf(ESPACIO"   HXHHHHX;X XH  XXXHHXH  HHHH;XHX;;;H    XHX;;H\n");
    printf(ESPACIO"    HXHHHH;;XHXH HX;XHX;HHXHHX;H;H;;XXXHHX;;;;H \n");
    printf(ESPACIO" HHHXXXHHHX;;HXXXHX;;XHXHXHHH;;;XH;HXXX;;;;;XH  \n");
    printf(ESPACIO"  HXXXXXXHHX;;H;XXX;;;HX;HHHXX;XHHHXX;;;;;;XH   \n");
    printf(ESPACIO"   XHXXXXHHXX;X;;XXX;;;X;XHHXXH;;;HX;;;;;XXH    \n");
    printf(ESPACIO"     HHHXXX;;;;;;;;X;;;;;;XHXH;;;HX;;;;;XXH     \n");
    printf(ESPACIO"      HXHXXX;;;;;;;;;;;;;;HXH;;;;HX;;;;XXH      \n");
    printf(ESPACIO"       XHHX;XHXX ;;;;;;;XXXH;;;;HX;;;;XX;;XHX   \n");
    printf(ESPACIO"       HXXH;;HH X ;;;;;X H;H;;XHHHHHHXX;;;;;;HX \n");
    printf(ESPACIO"     XHX;HX;;XHHHX;;;;XHHX;X;;;;;;;  H;;;;;;HX  \n");
    printf(ESPACIO"  XHX;;;HXHX;;XHHH;;;;HHX;;;H;;;    H;;;;;HX    \n");
    printf(ESPACIO" XH;;;;;XHXH;;;;;;;XH;;;;;;XH      HXX;;HX      \n");
    printf(ESPACIO"   XHX;XHXHXX;H;;;;;;;;;H;XHX    HHXXXXX;;XHHHHX\n");
    printf(ESPACIO"      XH;;;HHXXHHHHHHHHH;XH    ;;  HXXXXXXXX;;H \n");
    printf(ESPACIO"     H;;;;;;XX;XHHXXXXHH;H      H;; HXX;;;;;;H  \n");
    printf(ESPACIO"   XH;;;H;;;;HX;HXXXXXH;X        HHHXX;;;;;;H   \n");
    printf(ESPACIO"    HHHX;;;;;;H;;HHHHH;XH   ;;    HXXX;;;;HX    \n");
    printf(ESPACIO"      H;; ;;;;;HX;;;;;H     HX;;   HX;;;XHH     \n");
    printf(ESPACIO"     H;;   ;;;;;;XHHHX      XHHX;;  H;XH;;H     \n");
    printf(ESPACIO"    H;;    ;;;;              HHHHHHHH;H;;;XH    \n");
    printf(ESPACIO"   H;;   XHX;;;        X;    XHHHHHXXXX;;;;H    \n");
    printf(ESPACIO"  H;;XHHXH;H;;  H;     XX;    HHHHXXXXX;;;;XH   \n");
    printf(ESPACIO" XHHHHHHHXX;;  ; H;     HHX;  XHHHXXXXXX;;;;XX  \n");
    printf(ESPACIO"        HXH;   H; H;    HHHX;  HHXHXXXXXXX;;;H  \n");
    printf(ESPACIO"        HXH   HXH; H;   XHHHHX; H   XHHXXXX;;;X \n");
    printf(ESPACIO"       HXXH  HX  H;HH;   HHXXHHHHX     HHXXX;;H \n");
    printf(ESPACIO"       HXX;HHX   XH;;H;  HHXXXXXHH      HXXX;;H \n");
    printf(ESPACIO"      HXX;;HH   HXX;;;H; H HXXXXXX       HXX;;X \n");
    printf(ESPACIO"     HXXX;;H    HXX;;;XH;H HXXXXXH       HXX;;;X\n");
    printf(ESPACIO"    HXXX;;X     HXX;;;XXHH  HXXXXH       HXX;;;H\n");
    printf(ESPACIO" HHHXX;;;XH    HXX;;;XH  X  HXHXXX       HXX;;;H\n");
    printf(ESPACIO"HXXX;;;;;H     HXX;;;H      XHHHX        HXX;;;H\n");
    printf(ESPACIO"HX;HH;;HH     XXX;;;;H                   HHX;H;H\n");
    printf(ESPACIO"HH;H;XHH      HX;;;;XX                   XHX;H;X\n");
    printf(ESPACIO"  HHHHX      HXX;;;;H                     XHHHX \n");
    printf(ESPACIO"           XHXX;;;;XH                           \n");
    printf(ESPACIO"           HXX;;H;;H                            \n");
    printf(ESPACIO"           XH;;H;;XH                            \n");
    printf(ESPACIO"            XH;H;XH                             \n");
    printf(ESPACIO"              XHHX\n");

    break;

case 136:
    printf(ESPACIO"                         /|     '\n");
    printf(ESPACIO"                        / `.  ,'|,-.____\n");
    printf(ESPACIO"                       /    `'  `       `\"\"----...,\n");
    printf(ESPACIO"             .    ,__.'                        .-'._\n");
    printf(ESPACIO"            / |   ' .'                   ,_         `'`--.._\n");
    printf(ESPACIO"         _.'  . ,'                        `.`-._            `'.\n");
    printf(ESPACIO"        |      `                            .  .`-._,\"'--._    `-.\n");
    printf(ESPACIO"     ,_.'     `                              `. .`._`.     `-._   '\n");
    printf(ESPACIO"      .                                     ..'  `. `.`.       `-. `.\n");
    printf(ESPACIO"      |                                       `.   `. `.`.        `. \\\n");
    printf(ESPACIO"      |                                       ,',.'\"-\\  \\ `.         `\n");
    printf(ESPACIO"    ,-'                                       /     .\"\\  `  \\\n");
    printf(ESPACIO"     .                              '`._ ,.  /      |  '  `. \\\n");
    printf(ESPACIO" ..._)                               |  \"  `.        `-'.  |  .\n");
    printf(ESPACIO"   \\        '.---.._'._  .\"'-._     .'      |            `.|  '\n");
    printf(ESPACIO"    `.         `._ .._ `-'     `.`-.|       '              ` /\n");
    printf(ESPACIO"      `.          `-. `. `-.__   '-  `._     \\              |.\n");
    printf(ESPACIO"       L_            `._ `.   `\"--..__  `\"-../\\             ||-.,\\\n");
    printf(ESPACIO"         `.'            `-.`.         `-._     `-._       .' |`.  \\\n");
    printf(ESPACIO"            .           _..`.`.._       ..`      __`\"-..-'   |.'  '-'\n");
    printf(ESPACIO"            /___     .\"'     `-._`\"----\"'   `  .( )`.          `.  .\n");
    printf(ESPACIO"                -.,./      `\"\"   `\"\"'\"\"'`--.   `._   `.        /    \\\n");
    printf(ESPACIO"                   /        ,               `._   `\"\"'  _____.'      '\n");
    printf(ESPACIO"                             .                 `._      \"...'       /\n");
    printf(ESPACIO"                  .         .'                    `\"\"-----'        ' _\n");
    printf(ESPACIO"                  '         `-.                                    .'\n");
    printf(ESPACIO"                ,'            /                                   _,\n");
    printf(ESPACIO"               /         _..-\"|\"--..                             |\n");
    printf(ESPACIO"              /       .\"'     |  .'.,----,                  ,.-'\"|\n");
    printf(ESPACIO"             .      ,'        |     \\   `--'.        __...-\"`...-'\n");
    printf(ESPACIO"             '     /          '      \\       `-----\"'\n");
    printf(ESPACIO"            /     '            .      \\        \\\n");
    printf(ESPACIO"           .       .           '._,'_.'`.       \\\n");
    printf(ESPACIO"           '._.  ).'                    `        `.\n");
    printf(ESPACIO"              `\"'                        \\         `\n");
    printf(ESPACIO"                                          `.   .   ,'\n");
    printf(ESPACIO"                                            `\"-'--'\n");

    break;

case 137:
    printf(ESPACIO"\n");
    printf(ESPACIO"                                                                                                     \n");
    printf(ESPACIO"                                                                                                    \n");
    printf(ESPACIO"                                 :+///////:--.``                                                    \n");
    printf(ESPACIO"                              .++-       ``.--+hs-                                                  \n");
    printf(ESPACIO"                           `/+:`            .o/` ++                                                 \n");
    printf(ESPACIO"                        `:+/`             `++`    -s.                                               \n");
    printf(ESPACIO"                      -++-              `++`       `o:                              `--.            \n");
    printf(ESPACIO"                   `/+:`      .---::://+s.           /+`                          `++-:ho`          \n");
    printf(ESPACIO"                  .s-         y:..``````/+.           .s.                       `/+. .s`.y          \n");
    printf(ESPACIO"                 :o`          y`   odmd+ `/+.          `o/                     :o.  .s` :o          \n");
    printf(ESPACIO"                +/           `y   `mmmmd`  `++:://///////h                   -o-   .s`  y.          \n");
    printf(ESPACIO"              `o-            `y    :sys.    .s.`        :o                 -o:    .s.  :o           \n");
    printf(ESPACIO"             -s.            .os/           -s`          s.               .o/`    .s.   y.           \n");
    printf(ESPACIO"            /+`           `++` +/     ``.-/o`          `y              `++`     `s.   :o            \n");
    printf(ESPACIO"          `o:            /o.   .y+/////:-.`            +/            `/+`      `s.    y`            \n");
    printf(ESPACIO"         `s+///////::--:o-   -+/`                   `/+.            :o.       `s.    :o             \n");
    printf(ESPACIO"        `s.        ``-yoo:`-o:`                   `oy-`           -o-        `s.     y`             \n");
    printf(ESPACIO"       `s-         `++`  oho`                   .+/`.-://///:-.`.o:         `s.     :+              \n");
    printf(ESPACIO"       o:         :o. `:o- :o.                -o/           `.-:+////:-.`  `s.      y`              \n");
    printf(ESPACIO"      +/        -o: `/+-    `++`            :o:                      `.-://oo/`    :+               \n");
    printf(ESPACIO"     /+       `+/``/+.        .o:     ``.-+o-                                //    y`               \n");
    printf(ESPACIO"    .y`     `/o``++.      ``.-:/yo/////:-./h+.                               .s   :+                \n");
    printf(ESPACIO"     ://////y:.os/:///////ss-.`            y./+-                              y`  y`                \n");
    printf(ESPACIO"           `-:/:-.`      :o`               -o  -+/`                           o- :+                 \n");
    printf(ESPACIO"                      .:oo                  s.   .++.                         :+ y`                 \n");
    printf(ESPACIO"                  .///:+o                   .s     .y                         .y:+                  \n");
    printf(ESPACIO"                `o/`  /+                     +:    s-            `ooo//::--/+//yy`                  \n");
    printf(ESPACIO"               /o`   /s`                     `y`  -s            `s-`:++-..-:///oo/////:-..`         \n");
    printf(ESPACIO"             -o-     -ohs///:.                :+  y`           `o:    `:+/`           `.--++`       \n");
    printf(ESPACIO"           `+/`         -s+-.-/////:.`         y.:+       `-//+h:        `/+:`             .o/`     \n");
    printf(ESPACIO"          :o.          `+/`:+/.    .-/////:.`  .sy`  `-////-` +/            .++-             -o:    \n");
    printf(ESPACIO"        .s:           :o.    `/+/`        `-////hs////.      /+                -++-```......---os   \n");
    printf(ESPACIO"        :y/////:.`  .o:         ./+:`           `y.         :+                   /o:::------...:o   \n");
    printf(ESPACIO"         y.    .-//+s`           .:os+-`         `y.       :o                  `o:             +:   \n");
    printf(ESPACIO"         `:/+/.    .s        .///:.   -++-        .y`     -s                  .s.              y`   \n");
    printf(ESPACIO"             `:++:``y   `-/+/:`          :+/.      .s    .s`                 /o`             `:s    \n");
    printf(ESPACIO"                 ./+h////-`                `-////:-`-o  .s`                `o:            `:+/.     \n");
    printf(ESPACIO"                     `                           `-:/oo+y`                .s.          `/+/.        \n");
    printf(ESPACIO"                                                       y+-.`             :o`        `/+/.           \n");
    printf(ESPACIO"                                                       /o.-://///:-.`  `o/       `/+/`              \n");
    printf(ESPACIO"                                                        y.       `.-://y-     ./+/`                 \n");
    printf(ESPACIO"                                                        -s`            y`  ./+:`                    \n");
    printf(ESPACIO"                                                         -///////:-.`  y-/+:`                       \n");
    printf(ESPACIO"                                                                 `.-://o:`                          \n");
    printf(ESPACIO"                                                                               \n");

    break;

case 138:
    printf(ESPACIO"                                                                                                    \n");
    printf(ESPACIO"                                                                                                    \n");
    printf(ESPACIO"                                                                                                    \n");
    printf(ESPACIO"                                                            `.:+oyhhhhhhhhhhyyso+:.                 \n");
    printf(ESPACIO"                                                       .:oyhyo+/-.``         ``.:/oyy+-             \n");
    printf(ESPACIO"                                                   `:oys+:.                         `:sho`          \n");
    printf(ESPACIO"                                                `/ss/.`                                `/h/         \n");
    printf(ESPACIO"                                              -ss/``..----------.....``                  `oy.       \n");
    printf(ESPACIO"                                            :yy::---.`````````.-----:://///::-`            :h.      \n");
    printf(ESPACIO"                                          -yo-`                            ```-:::.         :d.     \n");
    printf(ESPACIO"                                        `os.                                     `-/-        +h     \n");
    printf(ESPACIO"                                       .y/                                          ./.       y+    \n");
    printf(ESPACIO"                                      :y.    `......```                               /-      .m`   \n");
    printf(ESPACIO"                                     +y---:::---...-------------..`                    +.      d+   \n");
    printf(ESPACIO"                                    os:``                     ````.-----..`            `s     .od   \n");
    printf(ESPACIO"`                                  oo`                                 ```.--..         o     /.N.  \n");
    printf(ESPACIO"`                                 +s`                                        ``:-.      +   `:` m-  \n");
    printf(ESPACIO"`                                :y`                                            `.:.  `-+----`  d:  \n");
    printf(ESPACIO"                                .h.                                                -/--`  +`    d:  \n");
    printf(ESPACIO"                               `y/       ````````                                  `+`    :`    m-  \n");
    printf(ESPACIO"                               +s`..-::--...........--------.....`                `:`     -.    m`  \n");
    printf(ESPACIO"                              `d/.``                        `````.----...        ./       .- `./m   \n");
    printf(ESPACIO"                              ++                                      ``.-:-.   `/        ./..`/h   \n");
    printf(ESPACIO"                             `h`                                           `.:-`+`   -:-  ..   so   \n");
    printf(ESPACIO"                             /+                                               `o-   .. /  :`   d/   \n");
    printf(ESPACIO"`                            h`                                               .+   .-  /  /   `m.   \n");
    printf(ESPACIO"`                           -s     ```.....`````                              +`   :   /  +```+h    \n");
    printf(ESPACIO"`                           o:.-----.....``....------.......``               -/   :`   / `/```d/    \n");
    printf(ESPACIO"`                          `d:.`                      `````...------...`     +`   : `.:` /`  -d`    \n");
    printf(ESPACIO"`                   `.-:/o:++                                       ``..-:.` s    : `:. ./`  so     \n");
    printf(ESPACIO"`                .:++/:-oo`d.                                             .--s   `:    `:.-:-m`     \n");
    printf(ESPACIO"`              -oo:`   /s`+o                                                -s    /   .:   `ho      \n");
    printf(ESPACIO"`            .oo.     .h`+o`                                                `y    --.::`   -h`      \n");
    printf(ESPACIO"`           :y-       y:oo`                                                  h`    /::`.- .h-       \n");
    printf(ESPACIO"`          /y.       `ds/    .-:+//::::-.`              ..-:::::/-..`        o+   :` /  `:y+        \n");
    printf(ESPACIO"`         :h`        `m/   -+/o+-`.-::-..--`         `:+:-.```.-/oo-:/-`     `h.`-`  /  `ho         \n");
    printf(ESPACIO"`        `h-          y   +/`/. .sdNNmN+/..+`      ./y/  .+syy+:` /o``-+-     -y.    : `yo          \n");
    printf(ESPACIO"`        :h           :/ `h ./ `hNNmmmNddy :s-```./::o  +mmmNNyhh` /+   :/`    -o`  -..y/           \n");
    printf(ESPACIO"`        +y            //`y::- .mNNNNmmmms //.-::-` o. -mNmmmNNmm-  y    `+.    .o.`:/s-            \n");
    printf(ESPACIO"`        :d             -+oy++``ymmmmmm.`o`       o` .mmNNNNmmm`  s    `-+.    `syo/              \n");
    printf(ESPACIO"`         h/              .-.`/:.:+oss+:.-:`        ::  +dmmNN:  :-     --+     `y+               \n");
    printf(ESPACIO"`         .h+`                 `---.----.`           /-` .:///-` ./:       /s.     -m`              \n");
    printf(ESPACIO"`          .os-`                                      .::-````.:/:`         ++     .N`              \n");
    printf(ESPACIO"`            `/o/.`                                      `.----.             :+`   oy               \n");
    printf(ESPACIO"`             `.os--.`                                                        `//`+y`               \n");
    printf(ESPACIO"`         `-/++/.    `-`                                     :             .`   .+h:`               \n");
    printf(ESPACIO"`         :y/-....-:/.       .      .                       :.             .:     `:++-``           \n");
    printf(ESPACIO"`           .-:/oy+.       .-`     .:         .        `.  ::              +//.      `:+so-`        \n");
    printf(ESPACIO"`            .so:`    ``.-/.      ./         .y.        .//-              +: `:/-`       .+s+`      \n");
    printf(ESPACIO"`            `:/://:/+sho-       :/        .+o-s-   ``-/o/`             `o/     .:::.`````.:d/      \n");
    printf(ESPACIO"`                  `yy:`       .+-      `/so. ./hooooo/-              `:h/``       `/dsooo+/-.`     \n");
    printf(ESPACIO"`                   .+o+++///+yo` `.-:+oo:`   h+.``                `-+o::ddysoo++++oo:.```````      \n");
    printf(ESPACIO"`                            sy+++o+:-`       `+o/-`          ``-+syo-```.sy``````                  \n");
    printf(ESPACIO"`                                                .:+++++++ossoo+sy:+osssso/`                        \n");
    printf(ESPACIO"`                                                         `:/+++:`                                  \n");
    printf(ESPACIO"`                                                                    \n");

    break;

case 139:
    printf(ESPACIO"\n");
    printf(ESPACIO"                                                +s.                                                  \n");
    printf(ESPACIO"                                              `h`o+                                                 \n");
    printf(ESPACIO"                                              /o  -o-           `-.                                 \n");
    printf(ESPACIO"                                             `d.    +yo++++/::oo/.s-                                \n");
    printf(ESPACIO"                           -/-`         -/+++/s.....:-    ``.:///--h                                \n");
    printf(ESPACIO"                           `h-:///:../oso/:--.-.....`           ./+o+/`                             \n");
    printf(ESPACIO"                            /s   ``:oo.`           `.--..`        ./`.+o-                           \n");
    printf(ESPACIO"                             s/      `s                  .-.       `+  `/o:                         \n");
    printf(ESPACIO"                             `d/    .:-                    `-.      ./   `/s.                       \n");
    printf(ESPACIO"                            .o/::-.............`             ..      +     `y/                      \n");
    printf(ESPACIO"                           /o...---..```````````..-..`        -`     +      /oo                     \n");
    printf(ESPACIO"                    ``.--:oh++::-.                `.-:-.       :     /      /`o+                    \n");
    printf(ESPACIO"                  /yo:--....`````.:`           -//:-s/ ./.     :    `:     --  y-                   \n");
    printf(ESPACIO"                   ./+/`          `/         .o/`  s/   `:-    :..-::/-. .:.  `:h--.`               \n");
    printf(ESPACIO"                     `-+s:.       .-        .y-   -y      --  -:``    `-+. `//:..-/+/               \n");
    printf(ESPACIO"                       :o-/+:-...-.         y.    ++       /.:`  `---.  `:/o.  ./h.`                \n");
    printf(ESPACIO"                       h`   `..--.....-...-:o     :s``     `+-..:/.``-:  /o`  //`y-                 \n");
    printf(ESPACIO"                      -y  ``.--.````       .s      oo...`  :`  -+   ` `: y`  :s` ++                 \n");
    printf(ESPACIO"                      ++...`                +-     `/o:.`../```o.   -  / y   h:--o+                 \n");
    printf(ESPACIO"       ``.``          o+`  `.....``       ``.+:      `-++:-/...s`   /``/ y  .h   o/                 \n");
    printf(ESPACIO"     :+/:::/+:.       o/-:::--...``. `.:+++//+s/`       `/oo`  -:   .-.` s- -s   y.                 \n");
    printf(ESPACIO"    :s-.-..``-o/     :y+-`         .//-.`      -/         `:o/` +-`    `.h- :s  .h                  \n");
    printf(ESPACIO"    `-----:+-  o/    `/h+:-.``     -.   .-----.+-           `+s-..-:-::/+s  /o--s-                  \n");
    printf(ESPACIO"           `y  `h`  `s/`  `---::---`  `:...`  `:-             s+ `..:///-  .s` ++                   \n");
    printf(ESPACIO"            s-  o/  o+   -::-:.      .y` - -    +             :h/:--.`  `.//` /o                    \n");
    printf(ESPACIO"            +/  .s-.+s` :-..``-:`   `/:. `..`   +             oo   `.-:/:-:.`/+                     \n");
    printf(ESPACIO"            .y.  `:/+o//y `.-  :+:---` :.`..-``:-            :h--://oo+/:-.+o:                      \n");
    printf(ESPACIO"          `/oyh+//::::/+//`... :. ``````.-----.`           `/y/:.       `-:o+.                      \n");
    printf(ESPACIO"        `+o:.`    `...`  `-------/..-+.......`            .s/``.-:///+/-.`  .++.            `-.     \n");
    printf(ESPACIO"        s/                   `-.:- `o       ./:`         ..+/+/:.``-/y-.-:/:.`.++-`       .+/oo     \n");
    printf(ESPACIO"       :s   `-::-`           :  `/ -+`````---``/           .s`       :o    `:/:`./++:-..-++-/o`     \n");
    printf(ESPACIO"       +/ `+o:-.-/+.        `+--.:  ------```.:/            .+o/::.   ++`     `:/:.`-:::-./+-       \n");
    printf(ESPACIO"      `:s/o.      -y+-`      /..-:. /+::---..-:               /+-`-/-  /o/---:/. `-::/::::.         \n");
    printf(ESPACIO"     /+os.      `s+` -/s:--+``-..`/ `::` `...`                 `:o:`:+/-.----/s:                    \n");
    printf(ESPACIO"     y. +s-`  `:s.  .+y/  -s    `......:///////:-.`               /s  `.:///:-                      \n");
    printf(ESPACIO"     -s. `:++//-  .o+`h  oy:        -+o+:.`    `.-::///:-`        -y                                \n");
    printf(ESPACIO"      `++-`    .:o+.  s-`m:      `/+:`                 `.:////////-                                 \n");
    printf(ESPACIO"        `:///++:.      ///++/:://:`                                                                 \n");
    printf(ESPACIO"                                                                \n");

    break;

case 140:
    printf(ESPACIO"\n");
    printf(ESPACIO"                                       `--:----------------.`                                        \n");
    printf(ESPACIO"                              `-------.`                  -+++::-.                                  \n");
    printf(ESPACIO"                         `-----`                         .:   -:-.:---                              \n");
    printf(ESPACIO"                     .:::-                                --.`  `o   `---.                          \n");
    printf(ESPACIO"                 `:/o-                                       .---`       `-:-`                      \n");
    printf(ESPACIO"              `:/:``/-                                                      `-:-`                   \n");
    printf(ESPACIO"            -o+..--:`                                                          `:-.                 \n");
    printf(ESPACIO"          :/-`...`                                                                -:.               \n");
    printf(ESPACIO"        -/.                                                                         -/`             \n");
    printf(ESPACIO"      ./.                                                                           .+::            \n");
    printf(ESPACIO"     /:`                  :                                                          :-.:`          \n");
    printf(ESPACIO"   `/-                    :`                     .:oyhdyyo/-`                         +` --         \n");
    printf(ESPACIO"  `+`        -+ydh+-`      /                 `-odNMMMMMMMMMNmh+.                      `+  ./`       \n");
    printf(ESPACIO"  +`      .+hNMMMMMNdo-`   `-.            .:sdNMMMMMMMMMMMMMMMMmy-                     -:  `/`      \n");
    printf(ESPACIO" /.     .sNMMMMMMMMMMMNdy+-.``.      `.:ohmMMMMMMMMMMMMMMMMMMMMMMNy.                    o   `/`     \n");
    printf(ESPACIO" s     /mMMMMMMMMMMMMMMMMMNmmdhysssyhmNMMMMMMNmNNMMMMMMMMMMMMMMMMMMm:                   ::    /`    \n");
    printf(ESPACIO" h    +.dMMMMMMMMMMMmdddmMMMMMMMMMMMMMMMMMms:..../sNMMMMMMMMMMMMMMMMNo`                  :-   `/    \n");
    printf(ESPACIO" s    + yMMMMMMMMNs-`` `./hMMMMMMMMMMMMMMy`        .hMMMMMMMMMMMMMMMMMh:`                 ./.  ./   \n");
    printf(ESPACIO" o    / +MMMMMMMM/        `yMMMMMMMMMMMMm`          .MMMMMMMMMMMMMMMMMMNdo:`                -:` o`  \n");
    printf(ESPACIO" /`   ` .NMMMMMMN          :MMMMMMMMMMMMd           `NMMMMMMMMMMMMMMMMMMMMMmh+:.             `/-.+  \n");
    printf(ESPACIO" `/`     +MMMMMMM/        `yMMMMMMMMMMMMM+         `sMMMMMMMMMMMMMMMMMMMMMMMMMMmy/.`           -/y` \n");
    printf(ESPACIO"  `:-`    sMMMMMMNs-`` `.:hMMMMMMMMMMMMMMMy:.` ``./dMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNd+.          `:/ \n");
    printf(ESPACIO"    .:-``  sMMMMMMMMmdhdmMMMMMMMMMMMMMMMMMMMNdhddNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNs.          s \n");
    printf(ESPACIO"      `.:-`-yNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNmhsooosdMMMMMMMMMN/         o \n");
    printf(ESPACIO"        `+/- -hNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNs:`      `NMMMNNMMMMMo        +`\n");
    printf(ESPACIO"       .+.     -smMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMy.          dd+:--yMMmyy+       o \n");
    printf(ESPACIO"      -+         ./yNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMd            o`     +d`  .:      o \n");
    printf(ESPACIO"      s             +shNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM+            :-      +    --    `+ \n");
    printf(ESPACIO"      o            /:.+-/ymNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM/             +      ./    -`   +` \n");
    printf(ESPACIO"      +`           + ./    -+hmMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMd             o       -+.` :`  ::  \n");
    printf(ESPACIO"      `+           `+o`   `   `yoohmNMMMMMMMMMMMMMMMMMMMMMMMMMMMNm:            o        o.-:s``-/   \n");
    printf(ESPACIO"       -:         `-::---.-/.-+:`-/:/:so++ooooo++osdhhmNNNNmdhs+-+.           /-      `/`   `..     \n");
    printf(ESPACIO"        ./.              `::   ....  .+--.----.----    ````    `+-          `/.      ::             \n");
    printf(ESPACIO"          -:-`         .::`         .+                :/.-------           :/      -/`              \n");
    printf(ESPACIO"             ---::.`.::/:.        `::                 `+-                ::`     -:.                \n");
    printf(ESPACIO"                 .--`    `--.------                     -::.          -:-.--.----`                  \n");
    printf(ESPACIO"                                                           .---.------ \n");

    break;

case 141:
    printf(ESPACIO"\n");
    printf(ESPACIO"                     `...........`        ``                                                         \n");
    printf(ESPACIO"               ``..-..........  -       `  .`                                  ``.                  \n");
    printf(ESPACIO"           ``.-....`         `  :      .    ``.````````        ``....`     ```` ``                  \n");
    printf(ESPACIO"        `.....              ``. :     ``     `        `........``     ..```    `.                   \n");
    printf(ESPACIO"       ....                .`  :`:`   .     `                       ..        `.                    \n");
    printf(ESPACIO"     ...`      `..........-`    : -.  .    ``                     ..         `.                     \n");
    printf(ESPACIO"    ..`     ...`                -` --..    .                    `.          `.                      \n");
    printf(ESPACIO"   ..`   `.-`                    -.:-:     .                  `.`          ..                       \n");
    printf(ESPACIO"  - `  `-.                       ````-    .                  ..           -`                        \n");
    printf(ESPACIO" -   `-.                            `/`   .                .-`          `:.                         \n");
    printf(ESPACIO".`  .-                               `:   -               --           -- `..                       \n");
    printf(ESPACIO"- `-`                                 -`  :`            .:`-         .-.``..-:                      \n");
    printf(ESPACIO"-.-                                    :` --           .::.-       .-.      ``                      \n");
    printf(ESPACIO"..                                      -.`:          -.`.`      `-.`..````````                     \n");
    printf(ESPACIO"                                         `..-        -`      ```.-` `. .     ``....`                \n");
    printf(ESPACIO"                                           `--      -`````````  -    - `          ``-.`             \n");
    printf(ESPACIO"                                             `-..``.`.   .`    `-  `.-  `````````````.:             \n");
    printf(ESPACIO"                                               `..`  `.   ..```.  .....` . ```....`````             \n");
    printf(ESPACIO"                                             `````.`  `...-.`..  ````  - `-``    ``.`               \n");
    printf(ESPACIO"                                         `````  `  ..`     `.`  `-     .` ``..``....`               \n");
    printf(ESPACIO"                                      `.``````..`.` `..-..``...`.-```..      `.`  ```               \n");
    printf(ESPACIO"                                    ..` `.`   .`  ..``.......-```..  -         -``  `.`             \n");
    printf(ESPACIO"                                  `.` `.`      .   ````        .`  . .`        - `....:             \n");
    printf(ESPACIO"                                 `-  .`      ``.  .`           -`   - -        `-  ```              \n");
    printf(ESPACIO"                                 -  -`    ``.``  .             `.--.:`-.        :    ```            \n");
    printf(ESPACIO"                                -  -    `.`      -          ``..``````.:        ..     `.`          \n");
    printf(ESPACIO"                               `. -`   `.        -..`````...``         :         :       `.         \n");
    printf(ESPACIO"                               - ..   ..        .``..-```              -.   ```.`-``       .`       \n");
    printf(ESPACIO"                               - :   .`         .    -                  .-.`-  `/. ````     `.      \n");
    printf(ESPACIO"                              .`..  `.          -   .`                     `-... `-   ```     .`    \n");
    printf(ESPACIO"                              .`:   -          ..  -                        ..    `.     ```   ``   \n");
    printf(ESPACIO"                              `.:  .`          :  -                          `..   .-      `.`  ``  \n");
    printf(ESPACIO"                               :.` .          -` `.                            `-`  `..      `.`  ` \n");
    printf(ESPACIO"                               : ` .         .`  .                               :`   `-       `.```\n");
    printf(ESPACIO"                               -`  .        .`   .`                               :    ..        ``-\n");
    printf(ESPACIO"                                :  .      `..... .`                               `.    -           \n");
    printf(ESPACIO"                                .. -```-`..`.`  ..                                 -    -           \n");
    printf(ESPACIO"                                .:`-.``.`.   -`  .                                 -  `..           \n");
    printf(ESPACIO"                                . -..`   -``.....`                                 ....`.-`         \n");
    printf(ESPACIO"                                  `.`...`                                          :`.````:/`       \n");
    printf(ESPACIO"                                  ..`                                             `-` -  . `--      \n");
    printf(ESPACIO"                                                                                 .`  .-``..`  :     \n");
    printf(ESPACIO"                                                                                 - .`      `-.-     \n");
    printf(ESPACIO"                                                                                  :          .:  \n");

    break;

case 142:
    printf(ESPACIO"                              +H+                       \n");
    printf(ESPACIO"                             H;;+          +HHHHHHHHHHH+\n");
    printf(ESPACIO"                             +;+ +H+   +HH+;;;;;HHHHH+  \n");
    printf(ESPACIO"                            +;;HH;;HHH+;;;;;;+HHH+HH+   \n");
    printf(ESPACIO"                         H  H;+H;;++;;;;+HHHHHH+++H+    \n");
    printf(ESPACIO"                        H;H H;HH;++;;+HHHHHH++++H+      \n");
    printf(ESPACIO"                        +;+HH;HH++HHHHHHH++++++H        \n");
    printf(ESPACIO"                         H;;+;;;HHHHHH++++++++H         \n");
    printf(ESPACIO"                          +HH+;;;HHH+++++++++H          \n");
    printf(ESPACIO"                             H;;+HH+++++++++H           \n");
    printf(ESPACIO"                             +;+HH++++++++++            \n");
    printf(ESPACIO"                            +;;HHH+++++++++H     +HHHHH+\n");
    printf(ESPACIO"                      H+    H;;HHH++++++++H  +HH+;;;;;H \n");
    printf(ESPACIO"                   H+ +HH+  H;+HH+++++++++HH+;;;;;;;;H  \n");
    printf(ESPACIO"                  H;H  +HHH++;HHH++++++++H;;;;;;;;;;H   \n");
    printf(ESPACIO"   +H+           H;++  HHHHH;;HHH+++++++++;;;;;;;;;H    \n");
    printf(ESPACIO"  +;;;H         H;++  H+HHH+;;HHH+++++++H;;;;;;;;;H     \n");
    printf(ESPACIO"  H+;;+    +HHH+;++H H++HH+;;;+HH+++++++H;;;;;;;;+      \n");
    printf(ESPACIO" ++;;;;H+ +;;;;;++HHH++HH+;;;HHHH++++++++;;;;;;;;H      \n");
    printf(ESPACIO" H;;;;;;;H;++H;;;;+HH+HH+;;;+HHHHH++++++;;;;;;;;H       \n");
    printf(ESPACIO"+;;;;;;;;;+   ;;;H+HHHH+;;+HHHHHHHH++++H;;;;;;;H        \n");
    printf(ESPACIO"H;;;;;;;;+  H ;;;H++HH+;;+HHHH+++HHHH+++;;;;;;H         \n");
    printf(ESPACIO"H;;;;;;;;;++H+;;H+++HH;;;HHHH++++++++HH;;;;;;;H         \n");
    printf(ESPACIO"+;+HH+;;;;;;;;;;H++HH+;;+HHH++++++++++H;;;;;;+          \n");
    printf(ESPACIO" +    +HHH++;;;;;++HH;;++HH+++++++++++++;;;;;H          \n");
    printf(ESPACIO"       H+++H++;;;+HHH;++HH+++++++++++++H;;;;;+          \n");
    printf(ESPACIO"      H+H++++;;;H+HH+;+HHH++++++++++HH+;;;;;+           \n");
    printf(ESPACIO"      HH H;;;;;H+++H;++HHH+++++++HH+;;;;;;;;H           \n");
    printf(ESPACIO"    +H H+;;;;H++++++;++HHH+++++H+;;;+H;;;;;;H           \n");
    printf(ESPACIO"   + H+;;;;H+  H++++;;+HHHH+++H+;;;;;;+H;;;;H           \n");
    printf(ESPACIO"   H+;;;;+H     H++;;;;+HHH++H++;;;;;;;;+H;;H           \n");
    printf(ESPACIO"  H;;;;;+H       H++;;;;+HHH+++;;;+HHHH+;;H+H           \n");
    printf(ESPACIO"  +H;;++++        H;;;;;;+HHH++;H+      +HHHH           \n");
    printf(ESPACIO"    H+++H         H;;;;;;;;+H+++            +           \n");
    printf(ESPACIO"     HHH          H;;;;;;;;;;+HH+                       \n");
    printf(ESPACIO"                  +;;;;;;;;;;;+++H                      \n");
    printf(ESPACIO"                   +;;;;;;;;;;;;++H                     \n");
    printf(ESPACIO"                   H;;;;;;;;;;;;;;++H                   \n");
    printf(ESPACIO"           H       +;;+;;;;;;+;;;;;;;H                  \n");
    printf(ESPACIO"          ++H       HHH;;;;;;H;;;;;;;;H                 \n");
    printf(ESPACIO"          H++H       H;;;;;;;H;;;;;;;;;H                \n");
    printf(ESPACIO"          H;++H      +;;;;+++H+;;;;;;;;;H               \n");
    printf(ESPACIO"          H;;++H    +;;;;+++HHH+;;;;;;;;;H              \n");
    printf(ESPACIO"          H;;;++H   H;;;;++H    +H;;;;;;;+              \n");
    printf(ESPACIO"          H;;;;++H  H;;;;+H   +HH H+;;;;;;+             \n");
    printf(ESPACIO"          H;;;;;;;H +;;;;H   H;;+ H++;;;;;H             \n");
    printf(ESPACIO"          H;;;;;+H   H;;;;+HH;;H  ++++;;;;H             \n");
    printf(ESPACIO"          +;;;;;H     +H+;;;;;;+   H+H;;;;H             \n");
    printf(ESPACIO"           +H+;;;H       +HH+;++H+  HH;;;;+             \n");
    printf(ESPACIO"              H;;;H         H;++++H  +;;;+              \n");
    printf(ESPACIO"               H;;;+H+       +;++++H+;;;;H              \n");
    printf(ESPACIO"                +H;;;;+H+    H++++H+;;;;H               \n");
    printf(ESPACIO"                  +H+;;;;+HHHHHH+;;;;;;H                \n");
    printf(ESPACIO"                     +HH+;;;;;;;;;;;;+H                 \n");
    printf(ESPACIO"                         +H+;;;;;+HH+                   \n");
    printf(ESPACIO"                            +HHHHH+\n");

    break;

case 143:
    printf(ESPACIO"      ::                                              \n");
    printf(ESPACIO"      HHH:                   :HH                      \n");
    printf(ESPACIO"      HHHHH:               :HHHH                      \n");
    printf(ESPACIO"      HHHHHH: :HHHHHHHHH: :HHHHH                      \n");
    printf(ESPACIO"      HHHHHHHHHHHHHHHHHHH:HHHHHH                      \n");
    printf(ESPACIO"      :HHHHHHHHHHHHHHHHHHHHHHHHH                      \n");
    printf(ESPACIO"      ,HHHHHHHH:,,,,:HHHH:,,:HHH                      \n");
    printf(ESPACIO"       HHHHHH:,      ,:H:    ,:H                      \n");
    printf(ESPACIO"       HHHHH:,  :HH:  ,:  :H: ,:                      \n");
    printf(ESPACIO"      :HHHH:,,:H             :H,:                     \n");
    printf(ESPACIO"      HHHHH,,,,       :::       H                     \n");
    printf(ESPACIO"      HHHH:,,,,      :::::      :,                    \n");
    printf(ESPACIO"      HHHH,,,,,,    ,:::::,     ,:                    \n");
    printf(ESPACIO"     ,HHHH,,,,,,,   H::,,:H     ,H,                   \n");
    printf(ESPACIO"     :HHHH,,,,,,,,  H: ,, H    ,,HH:,:HHHH:,          \n");
    printf(ESPACIO"     H:::HHHH:,,,,,:HHHHHHHHHHHH:HHHHHHHHHHH:         \n");
    printf(ESPACIO"    ::HHHH:,:H:,:HH::,,         ,:HHH ,HHHHHH:        \n");
    printf(ESPACIO"   :HHHHHHHH:, HH::,,             ,:H :HHHHHHH:       \n");
    printf(ESPACIO"  :HHHHHHHHHHHHH:,,,               ,:HH:,, HHHH:      \n");
    printf(ESPACIO"  HHHHHHHHHHHH:, :,                  :H,,  HHHHH      \n");
    printf(ESPACIO" ,HHHHHHHHHHHHH: H,                   :H  :HHHHH:     \n");
    printf(ESPACIO" :HHHHHHHHHHHHHH:,                     :HHHHHHHHH     \n");
    printf(ESPACIO" HHHHHHHHHHHHHH,,,                      :HHHHHHHH     \n");
    printf(ESPACIO",HHHHHHHHHHHHH:,,,,                     ,:HHHHHH:     \n");
    printf(ESPACIO":HHHHHHHHHHHH:,,,,,,                    ,,HHH: HHH:   \n");
    printf(ESPACIO"HHHHHHHHHHHH:,,,,,,:,                   ,,HHH, HH,H H:\n");
    printf(ESPACIO"HHHHHHHHHHHH,,:,,,H H,                 ,,:HH:,,:, H:,H\n");
    printf(ESPACIO"HHHHHHHHHHH:,: :,:   :,,H:            ,,,H::::H :H:, H\n");
    printf(ESPACIO"HHHHHHHHHHH,,H  HH,  H:H,H,,        ,,,,:H::,,     : :\n");
    printf(ESPACIO"HHHHHHHHHHH,:,  ::,, :H, H,,,,,,,,,,,,,,H::,,      ,: \n");
    printf(ESPACIO":HHHHHHHHHHHH,,:,,:H:,:, :,,,,,,,,,,,,,:H:,,,       H \n");
    printf(ESPACIO",HHHHHHHHHH:,:H,      ,:H,,,,,,,,,,,,,:H::,,        : \n");
    printf(ESPACIO" HHHHHHHHHH,,,,         ,:,,,,,,,,:HHHHH:,,,   ,:,  ,:\n");
    printf(ESPACIO" HHHHHHHHHH,,,           H,,,:HHHHHHHHHH:,,   ,:::,  H\n");
    printf(ESPACIO" HHHHHHHHH:,,,   ,:::,   :::HHHHHHHHHHHH:,,   :::::  H\n");
    printf(ESPACIO" HHHHHHHHH,,,    :::::,  ,HHHHHHHHHHHHHH:,,   :::::  H\n");
    printf(ESPACIO" HHHHHHHHH,,,   ,::::::   HHHHHHHHHHHHHH:,,   ::::, ,:\n");
    printf(ESPACIO" HHHHHHHHH,,,   :::::::   HHHHHHHHHHHHHH:,,   ,::,  : \n");
    printf(ESPACIO" HHHHHHHHH,,,   :::::::   HHHHHHHHHHHHHH:,,    ,,   H \n");
    printf(ESPACIO" :HHHHHHHH,,,   :::::::   HHHHHHHHHHHHHH:,,,       ,: \n");
    printf(ESPACIO" ,HHHHHHHH,,,   ::::::,   HHHHHHHHHHHHHHH:,,      ,:  \n");
    printf(ESPACIO"  HHHHHHHH,,,   ,:::::   ,HHHHHHHHHHHHHHH:,,,,  ,,H   \n");
    printf(ESPACIO"  :HHHHHHH,,,    ,:::,   :HHHHHHHHHHHHHHHH:,,,,,H:    \n");
    printf(ESPACIO"   :HHHHHH:,,,    ,:,   ,HHHHHHHHHHHHHHHHHHHHHH:      \n");
    printf(ESPACIO"    :HHHHHH,,,          :HHHHHHHHHHHHHHHHHH:,         \n");
    printf(ESPACIO"     :HHHHH:,,,        ,HHHHHHHHH:,                   \n");
    printf(ESPACIO"      :HHHHH:,,,      ,:HHHHHH:,                      \n");
    printf(ESPACIO"        H:HHH:,,,    ,:HH:,                           \n");
    printf(ESPACIO"              :HHHHHH:\n");

    break;

case 144:
    printf(ESPACIO"    :--:.                                                                                .--/`      \n");
    printf(ESPACIO"    +   -:.                                                                           .::.  --      \n");
    printf(ESPACIO"    -:    -:`                                                                    .:///.   `/:       \n");
    printf(ESPACIO"     .-    `:-                                                             `-:///-`    .:/:         \n");
    printf(ESPACIO"  ----`-.     -.`                                                     `-///:.``    `-:/:`           \n");
    printf(ESPACIO"  +` `--:/.     -:.                                               .://:.....`` .-://-----:          \n");
    printf(ESPACIO"  `/-    `-//.    -/.                                          -/+:``---`    ..`       .::          \n");
    printf(ESPACIO"`----:.     `.`    `::                                       /+-``::-`             .:::-`           \n");
    printf(ESPACIO"./``.-:/-`           `+`                                   `o: ./:`           `-/++/:---            \n");
    printf(ESPACIO" -:`    `...`      `. ./                                   o: //`         `.---.``   `:/            \n");
    printf(ESPACIO" .-/:.      `       :  o                                  :o -o         ```       `-::`             \n");
    printf(ESPACIO"o``.-:/:--.`        :` o                                  y` s.               `-:::.`               \n");
    printf(ESPACIO"-/-    ```..`       :`.o                                 :+ -o           .--://::----               \n");
    printf(ESPACIO" `.::-.             : +-                                 s. o.         `-.``       -/               \n");
    printf(ESPACIO"    `-://:.`        :`s                                 `y `s                 `--::.                \n");
    printf(ESPACIO"  -::.``           ..+-                                 :+ :/           `..-://:::-                 \n");
    printf(ESPACIO" /-`   `..`        :`s                                  o- +`        `..```    .-:-                 \n");
    printf(ESPACIO" .:::++:.`        ..+-                                  y  /              `--::.`                   \n");
    printf(ESPACIO"  `::.`           .`s                                  `o  -         `.---------                    \n");
    printf(ESPACIO"  +.   `.-..     ``/:         `    `.-`                ::  .              `.--::                    \n");
    printf(ESPACIO"  :::/++:``      ` s        `-/`..-`:.  .:             o` ``        `.--://--`                      \n");
    printf(ESPACIO"   -/-`    `       y       .:`:-`  :-.--/.            `+                   `-:                      \n");
    printf(ESPACIO"  :/`   ...`       s`      / .- `..```./.            `+`       ``...------::-`                      \n");
    printf(ESPACIO"  ./:::/:`         .+.     -`:`-```.-::`           .::`        ``.-:::-.``                          \n");
    printf(ESPACIO"    `-:`  .--`    ```/:     ://:++/`.-          `-:.`        ````    `.-:-                          \n");
    printf(ESPACIO"    -/..-/:.       `.`-/`  :..::..`  /`      `.-.`            ```.::...``./`                        \n");
    printf(ESPACIO"    `..:/.   .`     `..`/. .:--`     :.    .--`              .`    ./:..--:`                        \n");
    printf(ESPACIO"      `o``.:/.        `-`-- /        -:  `-.` ``              .:.`   -/`                            \n");
    printf(ESPACIO"       ::--/`   `      `-.`::        `o .-` `.`             `  `:--...:/                            \n");
    printf(ESPACIO"         `+`  `-` `      -`/          :--  ..           ``   -`  :.```.`  `...---::---..`           \n");
    printf(ESPACIO"         .+..:o` .` `    `:`           `  -`             `.  `/-` +`  `.-:-..`` `````...::-`        \n");
    printf(ESPACIO"          ...::`:` -.   `-`        `-    ..       ``  ``  `/.`:--:/--:-.`  ..-::-.```.----:/-`      \n");
    printf(ESPACIO"             /:+` -/   `/-          /`   `         -   -.  :-.- `-:-`  `-::..`           `.-/+:     \n");
    printf(ESPACIO"             ``--:o  ` :/`          ./     `` `    `+` `/:-/` `-:.  `-:-.`  `..-:::-..---..` `-/`   \n");
    printf(ESPACIO"                ` +-:: .+-           /   `` :` -   `o:::. ` `-:.  `::.` `.-:-..``..........-:-.`/.  \n");
    printf(ESPACIO"                  `.`-`:+`          `/    :-`:--/..+.     `::.  .::. `-::.``.-:/:..::....:/:....-+. \n");
    printf(ESPACIO"                      ``:.-         `/     -/--..--`    .::` `-/-``.:-. `.:-.` `-`  +     -.`.-..:s`\n");
    printf(ESPACIO"                        `//        `:.      -         .:-` .-:. `-:-``.:-.       :  /`     :   `-`-/\n");
    printf(ESPACIO"                          -:-    ..:-      -:      .-:.``-:-` .::. .::.          :  /`     /     - /\n");
    printf(ESPACIO"                           //--.::``       ./ ``.---..-:-. .-:-``-:-`           -.  +     -.     . /\n");
    printf(ESPACIO"                           .: ..-.`.-      `o..--.-:-..`.::-.`.:-.             .:  :-    `/       `:\n");
    printf(ESPACIO"                            :-   `--::`    .+..---.--:---..---.               -:  -:    `/`       :`\n");
    printf(ESPACIO"                             --  `-` `::`  //---:::-----...                 `:- `:-    `/.      `:` \n");
    printf(ESPACIO"                              ::-:`    `/`.+`                             `::` .:.    `/.      `-`  \n");
    printf(ESPACIO"                              :`:`      /--+                           `.:-``.:.     .+.      .-    \n");
    printf(ESPACIO"                             .::`       : -`                       ``-::.`.:-.     ./:`     `-`     \n");
    printf(ESPACIO"                             /`:       .-:`                    ``-::-.`.:-.      ./:`     `..       \n");
    printf(ESPACIO"                      ``` ``:`:`       /--               ```-::--.`.-:-.      `-/:`     `..         \n");
    printf(ESPACIO"                    ...-:::-` ..```   -./`         ```-:::--.`.-:--.`      `-//-     `..`           \n");
    printf(ESPACIO"                   -:.-:..--....../-`.- .-:- ```-:::-:-.-::---.`     ```-:/:-    ``...`             \n");
    printf(ESPACIO"                   .. :-:`:.-`  `.-..   `::/::--..-:---.`    ````.-::::-.`  ``.-:-.                 \n");
    printf(ESPACIO"                       -  /.    ...:..///:-``----.`````.--:::::--.`` ```.-:::-.`                    \n");
    printf(ESPACIO"                                :-::::.``-:--``.:::::-:-..``..-:://:::::-`                          \n");
    printf(ESPACIO"                                /o:.`.::-..::::-..-:///:::::--.`                                    \n");
    printf(ESPACIO"                              `/:``::-.://:://:::-.`                                                \n");
    printf(ESPACIO"                             :/``/:`.+o+/:-.                                                        \n");
    printf(ESPACIO"                           `/. -+``/s/-                                                             \n");
    printf(ESPACIO"                           +. /: -+-                                                                \n");
    printf(ESPACIO"                          :- /: +/                                                                  \n");
    printf(ESPACIO"                          o `o +:                                                                   \n");
    printf(ESPACIO"                          + /.-+                                                                    \n");
    printf(ESPACIO"                          /.+.+-                                                                    \n");
    printf(ESPACIO"                           /://:                                                                    \n");
    printf(ESPACIO"                            -o-o:                                                                   \n");
    printf(ESPACIO"                              --+o/:-.``...`                                                        \n");
    printf(ESPACIO"                                 `-::///::---.                                                      \n");
    printf(ESPACIO"                                              `   \n");

    break;

case 145:
    printf(ESPACIO"\n");
    printf(ESPACIO"                                                                                                .-:o:\n");
    printf(ESPACIO"                       /-                                                                `------:-  \n");
    printf(ESPACIO"/o:--`                 .::-                                         `//             `-----   -:.    \n");
    printf(ESPACIO"  -:`.----.             --`::         :.                          -:/o-o`      .----.     `::`      \n");
    printf(ESPACIO"    -:.   `----- `o/----`:- `:-       :--      `+`             -:- -/`/` `-----`        `:-         \n");
    printf(ESPACIO"      .:-      `---++`  .-+.  `/-     / --    :-/           `::`  :-`o----            -::--         \n");
    printf(ESPACIO"        .:-          .----./`   .:.:` /  :. -: ..         -:.    -/-.               -/-.-:.         \n");
    printf(ESPACIO"          `::             `--    .+y::+   /:`  /  `../..:-                       `::` .:.           \n");
    printf(ESPACIO"       /++---::`                  :-      `   `:..-:/++:..                     .:-  .:.             \n");
    printf(ESPACIO"          ---. ::`                 -:             `.``---                    -:.  .:.               \n");
    printf(ESPACIO"             `---::.                `/.+    :yy`   .--                     ::`  .:.                 \n");
    printf(ESPACIO"                 .-+o.              -. do-/+dh`  --`                    `/:   .:.                   \n");
    printf(ESPACIO"   ./++/-------------:            `+--//--oo     `/                     ..----:--------/+-          \n");
    printf(ESPACIO"       .-----`                      `// `/+: .+--.`:`                           .------`            \n");
    printf(ESPACIO"             .-----                 .o` +- .::/`  .--                    .---://:/:                 \n");
    printf(ESPACIO"                  `-----.           /`-:      -`    `             .------`  .----`                  \n");
    printf(ESPACIO"                        `-----`    /`:+             :       .-----`    .----`                       \n");
    printf(ESPACIO"                              +`  :-: ---       .:. /        :-   -----`                            \n");
    printf(ESPACIO"                          `::/`  .+-`-/++-`    ---`-+        `.//-`                                 \n");
    printf(ESPACIO"                          `o-:/``::--:-  ::`   .+`   :-   `--/  -:`                                 \n");
    printf(ESPACIO"                        `-:`+` o.   --    /.   /:     /---/`-+    ::                                \n");
    printf(ESPACIO"                    `//+--:+./ `/  ./:`   -:   .-.   `:: -- //-`.-:-+:                              \n");
    printf(ESPACIO"                       .----..` .:-`-/---:/.     `+--/`.:+ :.`-/. -+ ./`                            \n");
    printf(ESPACIO"                      `+----`     -:`     :.      :-` ---` ...`---.----/:                           \n");
    printf(ESPACIO"                     -::--------` +      ::         .--/      -----+.. `-`                          \n");
    printf(ESPACIO"                                : /    ::             :.  .--------+-.                              \n");
    printf(ESPACIO"                                .:+  ::              -. --/-                                        \n");
    printf(ESPACIO"                                 :.::`.-:.            o:+` `:.                                      \n");
    printf(ESPACIO"                                 -+:--``/         `    o.-+-..:`                                    \n");
    printf(ESPACIO"                                `:`    +   `/+    o.   ./-./.--o`                                   \n");
    printf(ESPACIO"                                      --  /- ::  ---/   + .--                                       \n");
    printf(ESPACIO"                                      + .//`/`+  /:-+/` `/                                          \n");
    printf(ESPACIO"                                     `/:. ::  :.`: .: :- /                                          \n");
    printf(ESPACIO"                                     -:        //      `:+`                                         \n");
    printf(ESPACIO"                                               /:        `        \n");

    break;

case 146:
    printf(ESPACIO"                                                                                                 `  \n");
    printf(ESPACIO"                                                                                               ``.. \n");
    printf(ESPACIO"       `                                                                                    `.-  -  \n");
    printf(ESPACIO"    ..``.                                ``.`                                          ``.`.``  .   \n");
    printf(ESPACIO" ``:`  `.                              ``. .                         `.              .``.``    `.   \n");
    printf(ESPACIO" :-:   `.``                      `` .`.` `.`          `             `.`.            .``.       .    \n");
    printf(ESPACIO".`  -    .`                    ``. ``    ``          ..``   -`     `.  .          ```.`      -.     \n");
    printf(ESPACIO"``  -    `.`              `` . -`     `.      .``````.` . .:..`   ..  -`      `````-.       --      \n");
    printf(ESPACIO" `` -       .             :::...    ``.      `-         - ..  .`  -   `-````.`  ..-`      ```       \n");
    printf(ESPACIO"  . ```     `.``      ``  `.:     ..-        .`       ``.``   -  `-``...`     `.``        .         \n");
    printf(ESPACIO"  .`  .       `-      :.. ..     `-     `.`   .      `-``..` `.````         ``         `.`          \n");
    printf(ESPACIO"   `. ..`     ..    ...`.`.   ```-      `-`.` .`    `-`.`..          .-```..          -`            \n");
    printf(ESPACIO"    `.``.`     `-``-`   `.    +.-    -`.`.  -`..     ````       ````.``` `            :.            \n");
    printf(ESPACIO"      .. -`      `.-          ``.    -` `   ```     `.`     `..`                   `..`             \n");
    printf(ESPACIO"       .``-.`    -      ```````.     `.          ````     `.-`                ````..                \n");
    printf(ESPACIO"        -  `.-. -.`    `-`` ````   .`-.. ````.``     ` ``.`                 ```````                 \n");
    printf(ESPACIO"        `````` .-.-````:`      ````.::`..````    ```...``                 .`:`                      \n");
    printf(ESPACIO"            `...``:-``-/-   ``   `..`-.`       ``.                      -..``                       \n");
    printf(ESPACIO"               `..``...-``.-``.     -.       ...`                   ````-`                          \n");
    printf(ESPACIO"               `.``..-...`` .` .   .`   ````..`               `-..`.````                            \n");
    printf(ESPACIO"              `.`--``  ``.`` `..       --`.`        ``.`       :` `                                 \n");
    printf(ESPACIO"             ....`        `..  .        `.`..```.`````         :`                                   \n");
    printf(ESPACIO"            `.`              ..`            `.``              -:                                    \n");
    printf(ESPACIO"                              -               ``             :-.`                                   \n");
    printf(ESPACIO"                              .                 .            ` --                                   \n");
    printf(ESPACIO"                              .                  .`          ...                                    \n");
    printf(ESPACIO"                              `.       `          ..``       -                                      \n");
    printf(ESPACIO"                              .`       .           - -      .                                       \n");
    printf(ESPACIO"                              `.       `.          - ````````                                       \n");
    printf(ESPACIO"                               -`  ```` ..         -                                                \n");
    printf(ESPACIO"                                ...```.````.``  ``.`                                                \n");
    printf(ESPACIO"                                 . `.         `.. `.                                                \n");
    printf(ESPACIO"                               `.`.-             .` .`                                              \n");
    printf(ESPACIO"                              .`..`               `. -                                              \n");
    printf(ESPACIO"                         `...```.`                 . ``                                             \n");
    printf(ESPACIO"                       .--..`.``..-               `.` ``.``                                         \n");
    printf(ESPACIO"                       `.`-..     .             `--- ...-.-.                                        \n");
    printf(ESPACIO"                          .`                       -.` .-.                                          \n");
    printf(ESPACIO"                                                   `.   ``                                          \n");

    break;

case 147:
    printf(ESPACIO"                              H  \n");
    printf(ESPACIO"               +             H + \n");
    printf(ESPACIO"  +HHHH+      + H           +; H \n");
    printf(ESPACIO" H+++;;;+H    H +           H; H \n");
    printf(ESPACIO"+HH+++;;;;H   H  +   +HHHHH+;; H \n");
    printf(ESPACIO"+   H++;;;;H  H; H H+;;;;;;;H  H \n");
    printf(ESPACIO"     ++;;;;;+H+;; ++;;;;;;+H;H + \n");
    printf(ESPACIO"     H++;;;;H;;H; H;;;;;;H  H;+ +\n");
    printf(ESPACIO"      ++;;;;+;;;H H;;+H;;+; +;H H\n");
    printf(ESPACIO"      H+;;;;;+;;  H;+  +;;+H;+ +H\n");
    printf(ESPACIO"      H+;;;;;H;;  H;HH H;;;;;H H+\n");
    printf(ESPACIO"      H;;;;;;H;   H;HHHH;;;;;HHH \n");
    printf(ESPACIO"      H;;;;;;H   H+;+HH+;;+HH+H+ \n");
    printf(ESPACIO"      +;;;;;;+  ++;;;++;+H    H  \n");
    printf(ESPACIO"     +;;;;;;;;+H H+;;;+H       + \n");
    printf(ESPACIO"     H;;;;;;;;H  H+;;++;;      H \n");
    printf(ESPACIO"     +;;;;;;;;+   H;;+H;;;;    + \n");
    printf(ESPACIO"    +;;;;;;;;;;+  H+;++;;;;;; +  \n");
    printf(ESPACIO"    H;;;;;;;;;;H  H+;;+H+;;;;+   \n");
    printf(ESPACIO"    H;;;;;;;;;+H  H+;;H;;+HH+    \n");
    printf(ESPACIO"    H;;;;;;;;;+H  H+;+  ;;;H     \n");
    printf(ESPACIO"    H;;;;;;;;;++H H+;H      +    \n");
    printf(ESPACIO"    H;;;;;;;;;++HH+;;+      H    \n");
    printf(ESPACIO"    H;;;;;;;;;+++H;;+       +    \n");
    printf(ESPACIO"    H;;;;;;;;;;+H;;;H        +   \n");
    printf(ESPACIO"    H+;;;;;;;;;H;;;;+        H   \n");
    printf(ESPACIO"    +++;;;;;;;;;;;;H         H   \n");
    printf(ESPACIO"     H++;;;;;;;;;;;+         H   \n");
    printf(ESPACIO"     ++++;;;;;;;;;+          +   \n");
    printf(ESPACIO"      H+++++;;;;;;H         +    \n");
    printf(ESPACIO"      H++++++++++H;;;       H    \n");
    printf(ESPACIO"       H++++++++H;;;;;;    +     \n");
    printf(ESPACIO"        H++++++H;;;;;;;;  H      \n");
    printf(ESPACIO"         H+++H+;;;;;;;;; H       \n");
    printf(ESPACIO"          +HH;;;;;;;;;;H+        \n");
    printf(ESPACIO"             +H;;;;;;H+          \n");
    printf(ESPACIO"               +HHHH+\n");

    break;

case 148:
    printf(ESPACIO"                          H:              \n");
    printf(ESPACIO"                         H H            H:\n");
    printf(ESPACIO"                        :  H           H H\n");
    printf(ESPACIO"                        H  :          H  H\n");
    printf(ESPACIO"              H:        :   :         H  :\n");
    printf(ESPACIO"            H:         : H  H  :HHH: :  : \n");
    printf(ESPACIO"           ::          H  H  H:     :H   :\n");
    printf(ESPACIO"          :H           H     :    :   :  H\n");
    printf(ESPACIO"          HH           :H : H    : :  H H \n");
    printf(ESPACIO"         ::H           H H  :    H H   HH \n");
    printf(ESPACIO"         H H           : H ::    :H:  :H: \n");
    printf(ESPACIO"         H:H            H HH:H:      : H  \n");
    printf(ESPACIO"         HHH             :HHHH :     H H  \n");
    printf(ESPACIO"        ::  :              HHH H     HH:  \n");
    printf(ESPACIO"        H:: H              H:HHH:   ::H   \n");
    printf(ESPACIO"        H:HHH              : :HH:     ::  \n");
    printf(ESPACIO"        :H:  H             H H::       H  \n");
    printf(ESPACIO"         H:::H              : H::      H  \n");
    printf(ESPACIO"         :HH :H             H  H:::   ::  \n");
    printf(ESPACIO"           :H  :H           :   H:::::H   \n");
    printf(ESPACIO"             H   :H:         : H::HHH:    \n");
    printf(ESPACIO"              H     :H       H H::  H     \n");
    printf(ESPACIO"               H::    H      H  :::::     \n");
    printf(ESPACIO"                :::    H     :   :H:      \n");
    printf(ESPACIO"                H:::   :      :  :  :     \n");
    printf(ESPACIO"                H:::    :     H  :  H     \n");
    printf(ESPACIO"      :H:       :::     H     H  :  :     \n");
    printf(ESPACIO"    H:   :H   :H::      H     H  :   :    \n");
    printf(ESPACIO"   H       :H:          H     H  :   H    \n");
    printf(ESPACIO"  H                    :H     H  :   :    \n");
    printf(ESPACIO" HH      :             H:     H  :    :   \n");
    printf(ESPACIO" :H      H:::         ::      :  :    H   \n");
    printf(ESPACIO": :       :::::      : H     H   :    H   \n");
    printf(ESPACIO"H :        :H:::   :H H      :  :     H   \n");
    printf(ESPACIO"H  :         :H:::H  H      H   :     H   \n");
    printf(ESPACIO"H  :           :H:  H      H    :     H   \n");
    printf(ESPACIO":   :            :H:     H:    :      H   \n");
    printf(ESPACIO" :   :              :HHH:      :      H   \n");
    printf(ESPACIO" H    :                       :       H   \n");
    printf(ESPACIO"  H    :                     :        :   \n");
    printf(ESPACIO"   H    ::                  :        H    \n");
    printf(ESPACIO"    H     ::             :::         :    \n");
    printf(ESPACIO"     H:     ::::    :::::           H     \n");
    printf(ESPACIO"       H:       ::::               H      \n");
    printf(ESPACIO"         H:                       H       \n");
    printf(ESPACIO"           :H:                  :H        \n");
    printf(ESPACIO"              :HH:           :H:          \n");
    printf(ESPACIO"                  :HHHHHHHHH:\n");

    break;

case 149:
    printf(ESPACIO"                                                     `-`                                            \n");
    printf(ESPACIO"                    --`                              --`                    `                       \n");
    printf(ESPACIO"                    --             .-.     `        .--                     ` `                     \n");
    printf(ESPACIO"                    :-`          `..`.-....---.....:--`                                             \n");
    printf(ESPACIO"                    ---``....``...-` `-`---:-.....-``                                               \n");
    printf(ESPACIO"                    `.-------:-`` `` ` `-````-`                           ```                       \n");
    printf(ESPACIO"                      ``````.-``             `-`                                                    \n");
    printf(ESPACIO"                         ```-``       `-::`    :`                           `                       \n");
    printf(ESPACIO"                      ``````-/`      `-/yh:    `:          `````              `                     \n");
    printf(ESPACIO"                        ````-o+       -/hdy`    -`         -``......``                              \n");
    printf(ESPACIO"                    ````````.:-`      ``/-.      :         `.:`........`                            \n");
    printf(ESPACIO"                 ````` `  `-``                   :          -:    ```...-`                          \n");
    printf(ESPACIO"                    ``````-`              ``.    :         `-/ `      `...-`                        \n");
    printf(ESPACIO"                         `-`              --`    ..       `-.- `-       `..-`                       \n");
    printf(ESPACIO"                      ``  .-` ``   .`    `:`      -.    ``---   ..        .--.                      \n");
    printf(ESPACIO"                     ``  `-:.-.````````..-:        .-``..-.`     -`        .-:`                     \n");
    printf(ESPACIO"                        `-:`  --.`.-..-..`-.        `::.`         -         .-:                     \n");
    printf(ESPACIO"            `   `.      -:`   -    :```  ``/          ..          .`         --.                    \n");
    printf(ESPACIO"           `:.-.::``   `/.`   -    :....```..          `-`         -          -:                    \n");
    printf(ESPACIO"           `/.-`...-.``-:`    :   ..        :            ..        ..         -:                    \n");
    printf(ESPACIO"          `-``   ````../:````.-.../` `    `.-.   -        `-`       -         -:                    \n");
    printf(ESPACIO"          -::`          `...`    ..`.`       -   -`         --      `.   `..  -:                    \n");
    printf(ESPACIO"           --                   `-      `....-`   -`         `-`        -` `:`::                    \n");
    printf(ESPACIO"            .-`                 :....        .-    ..          ./..... :    `:o`                    \n");
    printf(ESPACIO"              --`              .-  ..........`-     .-`          -.  `:.     +:           `.        \n");
    printf(ESPACIO"                ...--..........:...           :`      -`          .-         `         `..-:        \n");
    printf(ESPACIO"                              .`               -       -.          `-                ... `:         \n");
    printf(ESPACIO"                             `.  `...`.```.....:        .-          -`            ...   `:          \n");
    printf(ESPACIO"                             :...`             ..        `-.        /:        `...     `:           \n");
    printf(ESPACIO"                            -`                `./          `..-..:./.-`   `...`       .-            \n");
    printf(ESPACIO"                           `:            `....` `-..         -:::-:/......`          -.             \n");
    printf(ESPACIO"                          ..-      ```...`       -`          `` -.``               `-`              \n");
    printf(ESPACIO"                         :` :......``           -`               :               .:.                \n");
    printf(ESPACIO"                        :.  -`                .-.                -.          ``..-`                 \n");
    printf(ESPACIO"                        :   `-           ``...`:                  -        `--`..                   \n");
    printf(ESPACIO"                       ..    `-`    ```..``    :                  :     `.-`.:.`                    \n");
    printf(ESPACIO"                       -`     `--...```        -.                .- ``.:` /..`                      \n");
    printf(ESPACIO"                       `-       `-`        ```...-`              /.:`` :...                         \n");
    printf(ESPACIO"                        -`        `...``...```   `.-`           :. ..`..`                           \n");
    printf(ESPACIO"                         -.         `.-.``         .:-`        ./``-.`                              \n");
    printf(ESPACIO"                          .-`          `-`..`````..```.-       /:.`                                 \n");
    printf(ESPACIO"                            --.`      `.    ```.-....../` .   `.                                    \n");
    printf(ESPACIO"                        ``...`--     ..                `- `    -`                                   \n");
    printf(ESPACIO"                     `-.``          .`                 -`      `:`                                  \n");
    printf(ESPACIO"                   `--:-`        `..`                 -`        `-`                                 \n");
    printf(ESPACIO"                  ./-..-:. ``...``                    :`   `..----:                                 \n");
    printf(ESPACIO"                   :.:-.-:..`                         `-.-.+. -/.:`                                 \n");
    printf(ESPACIO"                                                        ...:.-:`-`                                  \n");
    printf(ESPACIO"                                                          `. `-   \n");

    break;

case 150:
    printf(ESPACIO"\n");
    printf(ESPACIO"                                               `/:+`                      ```                        \n");
    printf(ESPACIO"                                              :- .+`     `....``        -+-:/:                      \n");
    printf(ESPACIO"                                              ./. `/--:::-....--:::::-./:   +.                      \n");
    printf(ESPACIO"                                               `/.  .`              `.:`  `/.                       \n");
    printf(ESPACIO"                                                `/                       `+`                        \n");
    printf(ESPACIO"                                                `o                       /.                         \n");
    printf(ESPACIO"                                                :-                       /.                         \n");
    printf(ESPACIO"                                               `+                        ./                         \n");
    printf(ESPACIO"                                               .:                        `+                         \n");
    printf(ESPACIO"                                               `+    `.`           `     .+                         \n");
    printf(ESPACIO"                                                :-`-:``.-`      `..` `-.`/.                         \n");
    printf(ESPACIO"                                                `+``o/o.` `- `- ```:+-/ ./                          \n");
    printf(ESPACIO"                                                 :- //Nh/. .:-/ .:hNh--.+`                          \n");
    printf(ESPACIO"                        `-:::::-`                `+```:+ss::.`:/yoo/.``+`                           \n");
    printf(ESPACIO"                       `+-`   `.+.              `:+-     ``     `     -:                            \n");
    printf(ESPACIO"                       /-       .o              +.`./-.            `-:-`                            \n");
    printf(ESPACIO"                       :/       :+:`           ::  --.-::.` ``. `.::.                               \n");
    printf(ESPACIO"                        :/-...-/:`./:--..`     o   o    s.::-..::-`                                 \n");
    printf(ESPACIO"                         `..-+-`    -+:..-:-.` + `.+:---o````.+-                                    \n");
    printf(ESPACIO"                  `...`      :+      `:/-..-//:+:/:-.` `.--:``-:-.-.                                \n");
    printf(ESPACIO"                -/:-.-:/-``.:/. -      .s:...-/-````.-:`  `..-:-  `:-                               \n");
    printf(ESPACIO"               .o`     `o/--.  `o      o`     `o`     `/.      -``  -:                              \n");
    printf(ESPACIO"        ```    -/       /-      +`     s       o`       +`     ` .:` :-                             \n");
    printf(ESPACIO"    `-//:::://:-s:`   `:o.``    `.   ``++.`  `:/-`      -/     .- -/  +`                            \n");
    printf(ESPACIO"  `//-`       `-:os+:::----:::.````-/:-.-:::::. ./`     `+      /  +` :/                            \n");
    printf(ESPACIO" .o.   ``...:.    `:+.       `-::::-`            `+.    `+      `  :` :s                            \n");
    printf(ESPACIO"`o.  `::----:+/`    `+:                           `/:`   /.      `..``/o                            \n");
    printf(ESPACIO":+  `+.       -+`     //                            ./-` `::-..-::-` :./`                           \n");
    printf(ESPACIO"o.  :/         -o`     /+                             -/.    `    `  /..:                           \n");
    printf(ESPACIO"y   +.          :+      //                             `::        /. :-`/                           \n");
    printf(ESPACIO"y   +.           //      o-                              +.       `o``+`/`                          \n");
    printf(ESPACIO"s`  /:            +/     .o                              -/        .+ .+./`                         \n");
    printf(ESPACIO"+-  .o             /+`    s.                             -:         -- .+.+`                        \n");
    printf(ESPACIO"-+   +-             -o:   s`                        ./::-:` .`       `  `/:o`                       \n");
    printf(ESPACIO" o`  `o.              -///-                      `:/-        ``       ````-/o:                      \n");
    printf(ESPACIO" .o   `o`                                      `//`              .:-::::::/++s+                     \n");
    printf(ESPACIO"  :/   `+-                                    -+`                 -:        :+:+-                   \n");
    printf(ESPACIO"   //    :+`                                 :/`                   +         `o-:+`                 \n");
    printf(ESPACIO"    :+`   `//`                              :/                     o          `s`-o`                \n");
    printf(ESPACIO"     -+`    .//-                           -+                     .o           o. -+                \n");
    printf(ESPACIO"      `+-     `-/:-.                     `-s                      +-           o.  /:               \n");
    printf(ESPACIO"       `//`      `.-:::---.....-------::::s.                     .o           `s   `s               \n");
    printf(ESPACIO"         .+:`         ````......``````   :/                     `o.           //    s`              \n");
    printf(ESPACIO"           -/:`                         `o`                     +-           .o`    s`              \n");
    printf(ESPACIO"             ./:`                       -/                    `+-           `o.     s`              \n");
    printf(ESPACIO"               .:/-`                    +.                   `+-           `o-      s               \n");
    printf(ESPACIO"                 `-/:.`                 o`                  .+-           -+.      `o               \n");
    printf(ESPACIO"                    `-/:-.`             o`                `//`          ./:`       :-               \n");
    printf(ESPACIO"                       `.-:::-.``       :`              `:/.          .//.        ./                \n");
    printf(ESPACIO"                            `.--::::-.-:+`            .:/.         `-/:.        .::`                \n");
    printf(ESPACIO"                                  `.://:`          `.//.        `-:/-`       .-/-`                  \n");
    printf(ESPACIO"                                  -/-`          `-/+:.````...-:/s:.      `.-/-.                     \n");
    printf(ESPACIO"                                 `o         .::::-:---------..` o       `+-`                        \n");
    printf(ESPACIO"                                  o`      `-:-`                 ::      .+                          \n");
    printf(ESPACIO"                                  o`     ./.                     +`     +.                          \n");
    printf(ESPACIO"                                 `o     .o`                      +.     +                           \n");
    printf(ESPACIO"                                 ::     o.                      `o`     /`                          \n");
    printf(ESPACIO"                                `o`    :+                      `+-      `+-                         \n");
    printf(ESPACIO"                                :/     y`                    ./o/-`      `:/.                       \n");
    printf(ESPACIO"                               `o`     h/-                  -+. `-s`       `//.`                    \n");
    printf(ESPACIO"                              `o.      y`o`                 o`    o.         `:/:`                  \n");
    printf(ESPACIO"                              /:       s.o.                 -o.``:s.`           .:/:.`       ````   \n");
    printf(ESPACIO"                             :/        :o-                   `///-`-:/:.         ...:///::::/::://` \n");
    printf(ESPACIO"                            :/         `o.`..``                       .:+.        .-:/::/++-`    .+:\n");
    printf(ESPACIO"                           -+  `://`    `/:..::/-                       `+:`               -+-    `s\n");
    printf(ESPACIO"                          -o      -+            //                        -//:.```         `/o-:--:.\n");
    printf(ESPACIO"                          /:     `/o-:::::::`   `s                           `-:::::::::--:-`       \n");
    printf(ESPACIO"                           :/::://-        `:////-  \n");

    break;

case 151:
    printf(ESPACIO"                /H                   \n");
    printf(ESPACIO"               / =/        /H/       \n");
    printf(ESPACIO"         /HHHH/ ==H       H   H      \n");
    printf(ESPACIO" /H/  /H/      H==H      /=    H     \n");
    printf(ESPACIO"/   HH=          =H      H==    /    \n");
    printf(ESPACIO"H== ==           //      /==    H    \n");
    printf(ESPACIO"/==             // /      H==   /    \n");
    printf(ESPACIO" H=   /H/==     H H /      H==   /   \n");
    printf(ESPACIO"  H=  H=H/=     /H/ H       H==  H   \n");
    printf(ESPACIO"   H= H HH/     =/ =/        H===H/  \n");
    printf(ESPACIO"   H= H H /      ==H  H       H=H=H/ \n");
    printf(ESPACIO"   /==/HH/=       H  H=/       H= HH/\n");
    printf(ESPACIO"    H======       / H=/H      /=  / H\n");
    printf(ESPACIO"     /H==/==     H H== /      H= /  H\n");
    printf(ESPACIO"        HH/HHHHH/ H/==H       /= H =H\n");
    printf(ESPACIO"         H///==/H///HH/      /=    //\n");
    printf(ESPACIO"         ///====/HHH= H/     H=    / \n");
    printf(ESPACIO"        H/===== =H=H  HH     H= =  H \n");
    printf(ESPACIO"       H==/=     H H  H=/    H =/ // \n");
    printf(ESPACIO"      H=  H=     / /  / H    H // H  \n");
    printf(ESPACIO"     H=   /     /=      H    H // /  \n");
    printf(ESPACIO"    H=   /=     H       H    H ///   \n");
    printf(ESPACIO"   H==  /H=     H       H    H = H/  \n");
    printf(ESPACIO"   /=H /H / =   H  =/= =/   H=  //H  \n");
    printf(ESPACIO"    / /   H==/H H  /// /=/H H   H/H  \n");
    printf(ESPACIO"          H==  /H  /// H==/H=   H=H  \n");
    printf(ESPACIO"          H===  H  ///=/=====  /H=H  \n");
    printf(ESPACIO"         H/==== /= =/=/====/HH/ /=/  \n");
    printf(ESPACIO"        H///===///=   HHHH/    H H   \n");
    printf(ESPACIO"       H//HH==///H=  =/        / /   \n");
    printf(ESPACIO"      H///  /HHH/H== /        H H    \n");
    printf(ESPACIO"      H//H      H/===H     /H/ H     \n");
    printf(ESPACIO"       ////H/     /=/  /HH/=  H      \n");
    printf(ESPACIO"        //////HHHHHHHH/====/H/       \n");
    printf(ESPACIO"         /HH//==========/H/          \n");
    printf(ESPACIO"             /HHHHHHHHH/\n");

    break;




    }
}
void print_pokemon(int n_pokemon) {

    for(int i = 0; i < 50; i++){
        printf(UP "");
    }
    switch(n_pokemon) {

case 0:
    printf("(No hay sprite de este pokemon)\n");

    break;


case 1:
    printf("                                           /\n");
    printf("                        _,.------....___,.' ',.-.\n");
    printf("                     ,-'          _,.--\"        |\n");
    printf("                   ,'         _.-'              .\n");
    printf("                  /   ,     ,'                   `\n");
    printf("                 .   /     /                     ``.\n");
    printf("                 |  |     .                       \\.\\\n");
    printf("       ____      |___._.  |       __               \\ `.\n");
    printf("     .'    `---\"\"       ``\"-.--\"'`  \\               .  \\\n");
    printf("    .  ,            __               `              |   .\n");
    printf("    `,'         ,-\"'  .               \\             |    L\n");
    printf("   ,'          '    _.'                -._          /    |\n");
    printf("  ,`-.    ,\".   `--'                      >.      ,'     |\n");
    printf(" . .'\\'   `-'       __    ,  ,-.         /  `.__.-      ,'\n");
    printf(" ||:, .           ,'  ;  /  / \\ `        `.    .      .'/\n");
    printf(" j|:D  \\          `--'  ' ,'_  . .         `.__, \\   , /\n");
    printf("/ L:_  |                 .  \"' :_;                `.'.'\n");
    printf(".    \"\"'                  \"\"\"\"\"'                    V\n");
    printf(" `.                                 .    `.   _,..  `\n");
    printf("   `,_   .    .                _,-'/    .. `,'   __  `\n");
    printf("    ) \\`._        ___....----\"'  ,'   .'  \\ |   '  \\  .\n");
    printf("   /   `. \"`-.--\"'         _,' ,'     `---' |    `./  |\n");
    printf("  .   _  `\"\"'--.._____..--\"   ,             '         |\n");
    printf("  | .\" `. `-.                /-.           /          ,\n");
    printf("  | `._.'    `,_            ;  /         ,'          .\n");
    printf(" .'          /| `-.        . ,'         ,           ,\n");
    printf(" '-.__ __ _,','    '`-..___;-...__   ,.'\\ ____.___.'\n");
    printf(" `\"^--'..'   '-`-^-'\"--    `-^-'`.''\"\"\"\"\"`.,^.`.--' \n");
    printf("\n");
    printf("\n");

    break;

case 2:
    printf("                               ,'\"`.,./.\n");
    printf("                             ,'        Y',\"..\n");
    printf("                           ,'           \\  | \\\n");
    printf("                          /              . |  `\n");
    printf("                         /               | |   \\\n");
    printf("            __          .                | |    .\n");
    printf("       _   \\  `. ---.   |                | j    |\n");
    printf("      / `-._\\   `Y   \\  |                |.     |\n");
    printf("     _`.    ``    \\   \\ |..              '      |,-'\"\"7,....\n");
    printf("     l     '-.     . , `|  | , |`. , ,  /,     ,'    '/   ,'_,.-.\n");
    printf("     `-..     `-.  : :     |/ `   ' \"\\,' | _  /          '-'    /___\n");
    printf("      \\\"\"' __.,.-`.: :        /   /._    l'.,'\n");
    printf("       `--,   _.-' `\".           /__ `'-.' '         .\n");
    printf("       ,---..._,.--\"\"\"\"\"\"\"--.__..----,-.'   .  /    .'   ,.--\n");
    printf("       |                          ,':| /    | /     ;.,-'--      ,.-\n");
    printf("       |     .---.              .'  :|'     |/ ,.-='\"-.`\"`' _   -.'\n");
    printf("       /    \\    /               `. :|--.  _L,\"---.._        \"----'\n");
    printf("     ,' `.   \\ ,'           _,     `''   ``.-'       `-  -..___,'\n");
    printf("    . ,.  .   `   __     .-'  _.-           `.     .__    \\\n");
    printf("    |. |`        \"  ;   !   ,.  |             `.    `.`'---'\n");
    printf("    ,| |C\\       ` /    | ,' |(]|            -. |-..--`\n");
    printf("   /  \"'--'       '      /___|__]        `.  `- |`.\n");
    printf("  .       ,'                   ,   /       .    `. \\\n");
    printf("    \\                      .,-'  ,'         .     `-.\n");
    printf("     x---..`.  -'  __..--'\"/\"\"\"\"\"  ,-.      |   |   |\n");
    printf("    / \\--._'-.,.--'     _`-    _. ' /       |     -.|\n");
    printf("   ,   .   `-..__ ...--'  _,.-' | `   ,.-.  ;   /  '|\n");
    printf("  .  _,'         '\"-----\"\"      |    `   | /  ,'    ;\n");
    printf("  |-'  .-.    `._               |     `._// ,'     /\n");
    printf(" _|    `-'   _,' \"`--.._________|        `,'    _ /.\n");
    printf("//\\   ,-._.'\"/\\__,.   _,\"     /_\\__/`. /'.-.'.-/_,`-' \n");
    printf("`-\"`\"' v'    `\"  `-`-\"              `-'`-`  `'\n");

    break;

case 3:
    printf("                           _._       _,._\n");
    printf("                        _.'   `. ' .'   _`.\n");
    printf("                ,\"\"\"/`\"\"-.-.,/. ` V'\\-,`.,--/\"\"\".\"-..\n");
    printf("              ,'    `...,' . ,\\-----._|     `.   /   \\\n");
    printf("             `.            .`  -'`\"\" .._   :> `-'   `.\n");
    printf("            ,'  ,-.  _,.-'| `..___ ,'   |'-..__   .._ L\n");
    printf("           .    \\_ -'   `-'     ..      `.-' `.`-.'_ .|\n");
    printf("           |   ,',-,--..  ,--../  `.  .-.    , `-.  ``.\n");
    printf("           `.,' ,  |   |  `.  /'/,,.\\/  |    \\|   |\n");
    printf("                `  `---'    `j   .   \\  .     '   j\n");
    printf("              ,__`\"        ,'|`'\\_/`.'\\'        |\\-'-, _,.\n");
    printf("       .--...`-. `-`. /    '- ..      _,    /\\ ,' .--\"'  ,'\".\n");
    printf("     _'-\"\"-    --  _`'-.../ __ '.'`-^,_`-\"\"\"\"---....__  ' _,-`\n");
    printf("   _.----`  _..--.'        |  \"`-..-\" __|'\"'         .\"\"-. \"\"'--.._\n");
    printf("  /        '    /     ,  _.+-.'  ||._'   \"\"\"\". .          `     .__\\\n");
    printf(" `---    /        /  / j'       _/|..`  -. `-`\\ \\   \\  \\   `.  \\ `-..\n");
    printf(",\" _.-' /    /` ./  /`_|_,-\"   ','|       `. | -'`._,   L  \\ .  `.   |\n");
    printf("`\"' /  /  / ,__...-----| _.,  ,'            `|----.._`-.|' |. .` ..  .\n");
    printf("   /  '| /.,/   \\--.._ `-,' ,          .  '`.'  __,., '  ''``._ \\ \\`,'\n");
    printf("  /_,'---  ,     \\`._,-` \\ //  / . \\    `._,  -`,  / / _   |   `-L -\n");
    printf("   /       `.     ,  ..._ ' `_/ '| |\\ `._'       '-.'   `.,'     |\n");
    printf("  '         /    /  ..   `.  `./ | ; `.'    ,\"\" ,.  `.    \\      |\n");
    printf("   `.     ,'   ,'   | |\\  |       \"        |  ,'\\ |   \\    `    ,L\n");
    printf("   /|`.  /    '     | `-| '                  /`-' |    L    `._/  \\\n");
    printf("  / | .`|    |  .   `._.'                   `.__,'   .  |     |  (`\n");
    printf(" '-\"\"-'_|    `. `.__,._____     .    _,        ____ ,-  j     \".-'\"'\n");
    printf("        \\      `-.  \\/.    `\"--.._    _,.---'\"\"\\/  \"_,.'     /-'\n");
    printf("         )        `-._ '-.        `--\"      _.-'.-\"\"        `.\n");
    printf("        ./            `,. `\".._________...\"\"_.-\"`.          _j\n");
    printf("       /_\\.__,\"\".   ,.'  \"`-...________.---\"     .\".   ,.  / \\\n");
    printf("              \\_/\"\"\"-'                           `-'--(_,`\"`-` \n");

    break;

case 4:
    printf("              _.--\"\"`-..\n");
    printf("            ,'          `.\n");
    printf("          ,'          __  `.\n");
    printf("         /|          \" __   \\\n");
    printf("        , |           / |.   .\n");
    printf("        |,'          !_.'|   |\n");
    printf("      ,'             '   |   |\n");
    printf("     /              |`--'|   |\n");
    printf("    |                `---'   |\n");
    printf("     .   ,                   |                       ,\".\n");
    printf("      ._     '           _'  |                    , ' \\ `\n");
    printf("  `.. `.`-...___,...---\"\"    |       __,.        ,`\"   L,|\n");
    printf("  |, `- .`._        _,-,.'   .  __.-'-. /        .   ,    \\\n");
    printf("-:..     `. `-..--_.,.<       `\"      / `.        `-/ |   .\n");
    printf("  `,         \"\"\"\"'     `.              ,'         |   |  ',,\n");
    printf("    `.      '            '            /          '    |'. |/\n");
    printf("      `.   |              \\       _,-'           |       ''\n");
    printf("        `._'               \\   '\"\\                .      |\n");
    printf("           |                '     \\                `._  ,'\n");
    printf("           |                 '     \\                 .'|\n");
    printf("           |                 .      \\                | |\n");
    printf("           |                 |       L              ,' |\n");
    printf("           `                 |       |             /   '\n");
    printf("            \\                |       |           ,'   /\n");
    printf("          ,' \\               |  _.._ ,-..___,..-'    ,'\n");
    printf("         /     .             .      `!             ,j'\n");
    printf("        /       `.          /        .           .'/\n");
    printf("       .          `.       /         |        _.'.'\n");
    printf("        `.          7`'---'          |------\"'_.'\n");
    printf("       _,.`,_     _'                ,''-----\"'\n");
    printf("   _,-_    '       `.     .'      ,\\\n");
    printf("   -\" /`.         _,'     | _  _  _.|\n");
    printf("    \"\"--'---\"\"\"\"\"'        `' '! |! /\n");
    printf("                            `\" \" -' \n");
    printf("\n");
    printf("\n");

    break;

case 5:
    printf("                      ,-'`\\\n");
    printf("                  _,\"'    j\n");
    printf("           __....+       /               .\n");
    printf("       ,-'\"             /               ; `-._.'.\n");
    printf("      /                (              ,'       .'\n");
    printf("     |            _.    \\             \\   ---._ `-.\n");
    printf("     ,|    ,   _.'  Y    \\             `- ,'   \\   `.`.\n");
    printf("     l'    \\ ,'._,\\ `.    .              /       ,--. l\n");
    printf("  .,-        `._  |  |    |              \\       _   l .\n");
    printf(" /              `\"--'    /              .'       ``. |  )\n");
    printf(".\\    ,                 |                .        \\ `. '\n");
    printf("`.                .     |                '._  __   ;. \\'\n");
    printf("  `-..--------...'       \\                  `'  `-\"'.  \\\n");
    printf("      `......___          `._                        |  \\\n");
    printf("               /`            `..                     |   .\n");
    printf("              /|                `-.                  |    L\n");
    printf("             / |               \\   `._               .    |\n");
    printf("           ,'  |,-\"-.   .       .     `.            /     |\n");
    printf("         ,'    |     '   \\      |       `.         /      |\n");
    printf("       ,'     /|       \\  .     |         .       /       |\n");
    printf("     ,'      / |        \\  .    +          \\    ,'       .'\n");
    printf("    .       .  |         \\ |     \\          \\_,'        / j\n");
    printf("    |       |  L          `|      .          `        ,' '\n");
    printf("    |    _. |   \\          /      |           .     .' ,'\n");
    printf("    |   /  `|    \\        .       |  /        |   ,' .'\n");
    printf("    |   ,-..\\     -.     ,        | /         |,.' ,'\n");
    printf("    `. |___,`    /  `.   /`.       '          |  .'\n");
    printf("      '-`-'     j     ` /.\"7-..../|          ,`-'\n");
    printf("                |        .'  / _/_|          .\n");
    printf("                `,       `\"'/\"'    \\          `.\n");
    printf("                  `,       '.       `.         |\n");
    printf("             __,.-'         `.        \\'       |\n");
    printf("            /_,-'\\          ,'        |        _.\n");
    printf("             |___.---.   ,-'        .-':,-\"`\\,' .\n");
    printf("                  L,.--\"'           '-' |  ,' `-.\\\n");
    printf("                                        `.' \n");

    break;

case 6:
    printf("                 .\"-,.__\n");
    printf("                 `.     `.  ,\n");
    printf("              .--'  .._,'\"-' `.\n");
    printf("             .    .'         `'\n");
    printf("             `.   /          ,'\n");
    printf("               `  '--.   ,-\"'\n");
    printf("                `\"`   |  \\\n");
    printf("                   -. \\, |\n");
    printf("                    `--Y.'      ___.\n");
    printf("                         \\     L._, \\\n");
    printf("               _.,        `.   <  <\\                _\n");
    printf("             ,' '           `, `.   | \\            ( `\n");
    printf("          ../, `.            `  |    .\\`.           \\ \\_\n");
    printf("         ,' ,..  .           _.,'    ||\\l            )  '\".\n");
    printf("        , ,'   \\           ,'.-.`-._,'  |           .  _._`.\n");
    printf("      ,' /      \\ \\        `' ' `--/   | \\          / /   ..\\\n");
    printf("    .'  /        \\ .         |\\__ - _ ,'` `        / /     `.`.\n");
    printf("    |  '          ..         `-...-\"  |  `-'      / /        . `.\n");
    printf("    | /           |L__           |    |          / /          `. `.\n");
    printf("   , /            .   .          |    |         / /             ` `\n");
    printf("  / /          ,. ,`._ `-_       |    |  _   ,-' /               ` \\\n");
    printf(" / .           \\\"`_/. `-_ \\_,.  ,'    +-' `-'  _,        ..,-.    \\`.\n");
    printf(".  '         .-f    ,'   `    '.       \\__.---'     _   .'   '     \\ \\\n");
    printf("' /          `.'    l     .' /          \\..      ,_|/   `.  ,'`     L`\n");
    printf("|'      _.-\"\"` `.    \\ _,'  `            \\ `.___`.'\"`-.  , |   |    | \\\n");
    printf("||    ,'      `. `.   '       _,...._        `  |    `/ '  |   '     .|\n");
    printf("||  ,'          `. ;.,.---' ,'       `.   `.. `-'  .-' /_ .'    ;_   ||\n");
    printf("|| '              V      / /           `   | `   ,'   ,' '.    !  `. ||\n");
    printf("||/            _,-------7 '              . |  `-'    l         /    `||\n");
    printf(". |          ,' .-   ,' ||               | .-.        `.      .'     ||\n");
    printf(" `'        ,'    `\".'    |               |    `.        '. -.'       `'\n");
    printf("          /      ,'      |               |,'    \\-.._,.'/'\n");
    printf("          .     /        .               .       \\    .''\n");
    printf("        .`.    |         `.             /         :_,'.'\n");
    printf("          \\ `...\\   _     ,'-.        .'         /_.-'\n");
    printf("           `-.__ `,  `'   .  _.>----''.  _  __  /\n");
    printf("                .'        /\"'          |  \"'   '_\n");
    printf("               /_|.-'\\ ,\".             '.'`__'-( \\\n");
    printf("                 / ,\"'\"\\,'               `/  `-.|\" \n");

    break;

case 7:
    printf("               _,........__\n");
    printf("            ,-'            \"`-.\n");
    printf("          ,'                   `-.\n");
    printf("        ,'                        \\\n");
    printf("      ,'                           .\n");
    printf("      .'\\               ,\"\".       `\n");
    printf("     ._.'|             / |  `       \\\n");
    printf("     |   |            `-.'  ||       `.\n");
    printf("     |   |            '-._,'||       | \\\n");
    printf("     .`.,'             `..,'.'       , |`-.\n");
    printf("     l                       .'`.  _/  |   `.\n");
    printf("     `-.._'-   ,          _ _'   -\" \\  .     `\n");
    printf("`.\"\"\"\"\"'-.`-...,---------','         `. `....__.\n");
    printf(".'        `\"-..___      __,'\\          \\  \\     \\\n");
    printf("\\_ .          |   `\"\"\"\"'    `.           . \\     \\\n");
    printf("  `.          |              `.          |  .     L\n");
    printf("    `.        |`--...________.'.        j   |     |\n");
    printf("      `._    .'      |          `.     .|   ,     |\n");
    printf("         `--,\\       .            `7\"\"' |  ,      |\n");
    printf("            ` `      `            /     |  |      |    _,-'\"\"\"`-.\n");
    printf("             \\ `.     .          /      |  '      |  ,'          `.\n");
    printf("              \\  v.__  .        '       .   \\    /| /              \\\n");
    printf("               \\/    `\"\"\\\"\"\"\"\"\"\"`.       \\   \\  /.''                |\n");
    printf("                `        .        `._ ___,j.  `/ .-       ,---.     |\n");
    printf("                ,`-.      \\         .\"     `.  |/        j     `    |\n");
    printf("               /    `.     \\       /         \\ /         |     /    j\n");
    printf("              |       `-.   7-.._ .          |\"          '         /\n");
    printf("              |          `./_    `|          |            .     _,'\n");
    printf("              `.           / `----|          |-............`---'\n");
    printf("                \\          \\      |          |\n");
    printf("               ,'           )     `.         |\n");
    printf("                7____,,..--'      /          |\n");
    printf("                                  `---.__,--.'\n");

    break;

case 8:
    printf("     __                                _.--'\"7\n");
    printf("    `. `--._                        ,-'_,-  ,'\n");
    printf("     ,'  `-.`-.                   /' .'    ,|\n");
    printf("     `.     `. `-     __...___   /  /     - j\n");
    printf("       `.     `  `.-\"\"        \" .  /       /\n");
    printf("         \\     /                ` /       /\n");
    printf("          \\   /                         ,'\n");
    printf("          '._'_               ,-'       |\n");
    printf("             | \\            ,|  |   ...-'\n");
    printf("             || `         ,|_|  |   | `             _..__\n");
    printf("            /|| |          | |  |   |  \\  _,_    .-\"     `-.\n");
    printf("           | '.-'          |_|_,' __!  | /|  |  /           \\\n");
    printf("   ,-...___ .=                  ._..'  /`.| ,`,.      _,.._ |\n");
    printf("  |   |,.. \\     '  `'        ____,  ,' `--','  |    /      |\n");
    printf(" ,`-..'  _)  .`-..___,---'_...._/  .'      '-...'   |      /\n");
    printf("'.__' \"\"'      `.,------'\"'      ,/            ,     `.._.' `.\n");
    printf("  `.             | `--........,-'.            .         \\     \\\n");
    printf("    `-.          .   '.,--\"\"     |           ,'\\        |      .\n");
    printf("       `.       /     |          L          ,\\  .       |  .,---.\n");
    printf("         `._   '      |           \\        /  .  L      | /   __ `.\n");
    printf("            `-.       |            `._   ,    l   .    j |   '  `. .\n");
    printf("              |       |               `\"' |  .    |   /  '      .' |\n");
    printf("              |       |                   j  |    |  /  , `.__,'   |\n");
    printf("              `.      L                 _.   `    j ,'-'           |\n");
    printf("               |`\"---..\\._______,...,--' |   |   /|'      /        j\n");
    printf("               '       |                 |   .  / |      '        /\n");
    printf("                .      .              ____L   \\'  j    -',       /\n");
    printf("               / `.     .          _,\"     \\   | /  ,-','      ,'\n");
    printf("              /    `.  ,'`-._     /         \\  i'.,'_,'      .'\n");
    printf("             .       `.      `-..'             |_,-'      _.'\n");
    printf("             |         `._      |            ''/      _,-'\n");
    printf("             |            '-..._\\             `__,.--'\n");
    printf("            ,'           ,' `-.._`.            .\n");
    printf("           `.    __      |       \"'`.          |\n");
    printf("             `-\"'  `\"\"\"\"'            7         `.\n");
    printf("                                    `---'--.,'\"`' \n");

    break;

case 9:
    printf("                       _\n");
    printf("            _,..-\"\"\"--' `,.-\".\n");
    printf("          ,'      __.. --',  |\n");
    printf("        _/   _.-\"' |    .' | |       ____\n");
    printf("  ,.-\"\"'    `-\"+.._|     `.' | `-..,',--.`.\n");
    printf(" |   ,.                      '    j 7    l \\__\n");
    printf(" |.-'                            /| |    j||  .\n");
    printf(" `.                   |         / L`.`\"\"','|\\  \\\n");
    printf("   `.,----..._       ,'`\"'-.  ,'   \\ `\"\"'  | |  l\n");
    printf("     Y        `-----'       v'    ,'`,.__..' |   .\n");
    printf("      `.                   /     /   /     `.|   |\n");
    printf("        `.                /     l   j       ,^.  |L\n");
    printf("          `._            L       +. |._   .' \\|  | \\\n");
    printf("            .`--...__,..-'\"\"'-._  l L  \"\"\"    |  |  \\\n");
    printf("          .'  ,`-......L_       \\  \\ \\     _.'  ,'.  l\n");
    printf("       ,-\"`. / ,-.---.'  `.      \\  L..--\"'  _.-^.|   l\n");
    printf(" .-\"\".'\"`.  Y  `._'   '    `.     | | _,.--'\"     |   |\n");
    printf("  `._'   |  |,-'|      l     `.   | |\"..          |   l\n");
    printf("  ,'.    |  |`._'      |      `.  | |_,...---\"\"\"\"\"`    L\n");
    printf(" /   |   j _|-' `.     L       | j ,|              |   |\n");
    printf("`--,\"._,-+' /`---^..../._____,.L',' `.             |\\  |\n");
    printf("   |,'      L                   |     `-.          | \\j\n");
    printf("            .                    \\       `,        |  |\n");
    printf("             \\                __`.Y._      -.     j   |\n");
    printf("              \\           _.,'       `._     \\    |  j\n");
    printf("              ,-\"`-----\"\"\"\"'           |`.    \\  7   |\n");
    printf("             /  `.        '            |  \\    \\ /   |\n");
    printf("            |     `      /             |   \\    Y    |\n");
    printf("            |      \\    .             ,'    |   L_.-')\n");
    printf("             L      `.  |            /         _.-^._\n");
    printf("              \\   ,'  `-7         ,-'      / |  ,'      `-._\n");
    printf("             _,`._       `.   _,-'        ,',^.-            `.\n");
    printf("          ,-'     v....  _.`\"',          _:'--....._______,.-'\n");
    printf("        ._______./     /',,-'\"'`'--.  ,-'  `.\n");
    printf("                 \"\"\"\"\"`.,'         _\\`----...' \n");
    printf("                        --------\"\"'\n");
    printf("\n");
    printf("\n");

    break;

case 10:
    printf("                   _,........_\n");
    printf("               _.-'    ___    `-._\n");
    printf("            ,-'      ,'   \\       `.\n");
    printf(" _,...    ,'      ,-'     |  ,\"\"\":`._.\n");
    printf("/     `--+.   _,.'      _.',',|\"|  ` \\`\n");
    printf("\\_         `\"'     _,-\"'  | / `-'   l L\\\n");
    printf("  `\"---.._      ,-\"       | l       | | |\n");
    printf("      /   `.   |          ' `.     ,' ; |\n");
    printf("     j     |   |           `._`\"\"\"' ,'  |__\n");
    printf("     |      `--'____          `----'    .' `.\n");
    printf("     |    _,-\"\"\"    `-.                 |    \\\n");
    printf("     l   /             `.               F     l\n");
    printf("      `./     __..._     `.           ,'      |\n");
    printf("        |  ,-\"      `.    | ._     _.'        |\n");
    printf("        . j           \\   j   /`\"\"\"      __   |          ,\"`.\n");
    printf("         `|           | _,.__ |        ,'  `. |          |   |\n");
    printf("          `-._       /-'     `L       .     , '          |   |\n");
    printf("              F-...-'          `      |    , /           |   |\n");
    printf("              |            ,----.     `...' /            |   |\n");
    printf("              .--.        j      l        ,'             |   j\n");
    printf("             j    L       |      |'-...--<               .  /\n");
    printf("             `     |       . __,,_    ..  |               \\/\n");
    printf("              `-..'.._  __,-'     \\  |  |/`._           ,'`\n");
    printf("                  |   \"\"       .--`. `--,  ,-`..____..,'   |\n");
    printf("                   L          /     \\ _.  |   | \\  .-.\\    j\n");
    printf("                  .'._        l     .\\    `---' |  |  || ,'\n");
    printf("                   .  `..____,-.._.'  `._       |  `--;\"I'\n");
    printf("                    `--\"' `.            ,`-..._/__,.-1,'\n");
    printf("                            `-.__  __,.'     ,' ,' _-'\n");
    printf("                                 `'...___..`'--^--' \n");

    break;

case 11:
    printf("                                   ,--..\n");
    printf("                                  /     `.\n");
    printf("                                 /|       `.\n");
    printf("                                / |        |\n");
    printf("                               /  j        |\n");
    printf("                              /  |         `\n");
    printf("                             '  ,'          \\\n");
    printf("                           ,'                L\n");
    printf("                          /                  +\n");
    printf("                        .:.                   .      `\n");
    printf("                     ,\"`.  `.       ,..-._    +\n");
    printf("                     |  |`.  L     '   _.'`.   .\n");
    printf("                     j  `.,\\ '    | ,.' |  +.  +\n");
    printf("                    '`.    |,'    |\" `\"\"   / `, .\n");
    printf("                   |   `\"\"'/      `-.____.'    \\|\n");
    printf("                 ,'|     ,'                     Y\n");
    printf("                /  |    /                      '|\n");
    printf("               /   |  ,'                     ,' +\n");
    printf("              /    \\-'                      /    `\n");
    printf("             /    /                       ,'      `\n");
    printf("            .     ,`'-.                 ,'         L\n");
    printf("             \\   /     \\               /            .\n");
    printf("                /      `               \\            |\n");
    printf("              `/          _,            `          ,'\n");
    printf("               |                         `       ,'\n");
    printf("               |           \"'             `.   ,'\n");
    printf("               j         -\"'               |`-'\n");
    printf("              /                           /'/\n");
    printf("             /           ,               / /\n");
    printf("            /            '              j /\n");
    printf("          .' ___                        '/\n");
    printf("          |-'   `\"`-.                  '/\n");
    printf("          '          \\                .'\n");
    printf("        ,\"            l          _,.-'\n");
    printf("       ,---..         |L     _.-'\n");
    printf("     ,'      `.      / |  ,-'\n");
    printf("    /          `  _,'  ;-'\n");
    printf("  ,'--.       ,-`|  ,-'\n");
    printf(" /     L   _,'  _|-'\n");
    printf("(       \\-' _,-'\n");
    printf(" `......^.-' \n");
    printf("\n");
    printf("\n");

    break;

case 12:
    printf("       ,-.                                            ___.._\n");
    printf(" _     `. `.                                    _,-\"\"\"      ',._\n");
    printf("`.`.      `.\\                                _,'         _..-'  `.\n");
    printf("  `._\\       `.                            ,'         _,'_,.-'-.  \\\n");
    printf("      `.       `.                        ,'        ,-',-\"       \\  .\n");
    printf("        `.       \\                      /  _,----\"',-'           L  L\n");
    printf("          `.      \\                   ,' _.--\"-.  [              |  |\n");
    printf("            `.     .                 / ,'       | |     _..---../   |\n");
    printf("              .     L               / /         | j ,.-'        `   |\n");
    printf("               \\    .              ' /          j ,'             |  |\n");
    printf("                \\    .            ' /          ' /               |  |\n");
    printf("                 \\   l           / /          /,'                j  '\n");
    printf("                  L__L._        / /          +'      __,........'  j\n");
    printf("                ,'   '  \"`.    / /         .' _,.--'\"           \\  |\n");
    printf("               /,\"\"-.      `. ' '        _/.-'                  | F\n");
    printf("              /|   / l       . /       ,'                       | |\n");
    printf("             | |  /  |     '      ,'                         | |\n");
    printf("            ,._\\\"'   |       |     ,'-'\"\"\"\"\"\"\"\"\"\"\"\"\"'----.._    / |\n");
    printf("            |  \\`.._,'       F  _,'                         `--'  |\n");
    printf("            `..'           _/ ,:_____                         L   |\n");
    printf("              `..          .-'       `'--.._                   | j\n");
    printf("            _,. /,---.       \\              `--..              | |\n");
    printf("           F  <j-.'   `       ._                 `\"-._        j  '\n");
    printf("           |  <|`,.    |       `L._                   `..   _, ,'\n");
    printf("           `..<|`.___,'        |.  `-.                   Y\"' _.\n");
    printf("              `L               | `.   `-.._____________,',.-'\n");
    printf("                `.            .Y   \\      `\"\".\"\"\"\"\".  .\"'\n");
    printf("                  `.        ,' |\\   `.        `+-._ \\  |\n");
    printf("                    `,--. -'   | .    `.       `   `.| |\n");
    printf("                    /    //    |  \\    ``-..___/     | |\n");
    printf("                   j    .l     |   .    F   \\   `   F  |\n");
    printf("                   |    ||     |    `   `    .   ` ,  /\n");
    printf("                   |    ||    F      `-.|     . _,' _'\n");
    printf("                   |   / |    |       `._`-----'  ,'\n");
    printf("                   |  /  |   /           `-------'\n");
    printf("                   l /   \\_,'\n");
    printf("                    \" \n");

    break;

case 13:
    printf("               ,`.\n");
    printf("               L  \\\n");
    printf("              ,    \\\n");
    printf("             j      \\\n");
    printf("             ,       \\\n");
    printf("            j         `\n");
    printf("            ,          .__\n");
    printf("         ,-'Y          `  `-.\n");
    printf("      .-'    `..___..-'      `-.\n");
    printf("     /__           ,-.          \\\n");
    printf("    /(__)         `   '          `.\n");
    printf("   |               `\"'             L\n");
    printf("   `.------._                      |\n");
    printf(" ,'          `                     |\n");
    printf("F             |                    |\n");
    printf("|             |                    |\n");
    printf("`._         ,'                     j\n");
    printf("   `+------'                      /\n");
    printf("     \\                           /                         |`._\n");
    printf("      `.                       ,'                          |   \\\n");
    printf("        `._                _,-'                            |    \\\n");
    printf("           `-,.________,.-'   `.                           |     L\n");
    printf("            /                   '                          |     |\n");
    printf("           /             _,._   |                          ,`---,'\n");
    printf("         ,'|            /    .  j                        .'      `.\n");
    printf("         . L            '    | ,                      ,-'\"'`-..   |\n");
    printf("          .,\\            `--' / `.               ___./       ,.' ,'\n");
    printf("             \\              ,'    \\__         ,-'     \"-.    | |'\n");
    printf("              `-._______,.-'  __   | `'-._.,- ._        _`   `\"Y\n");
    printf("                |           .\"  \\  |     \\      `.    ,'  \\   ,'\n");
    printf("                |           '    | ;      .       .   `._./.-'\n");
    printf("                7.           `'\"' / `.--. |   _.. |      j\n");
    printf("                `.__       `   _-'   |   |j  /   ||     .'\n");
    printf("                    `-...,_..-'      `--'/   `._, ^----'\n");
    printf("                         .\\            _'       ,'\n");
    printf("               `         `._-.______,.'`.___,.-'\n");
    printf("\n");

    break;

case 14:
    printf("           _,--'\"\"\"\"\"\"---.._\n");
    printf("         ,'                 `._\n");
    printf("       ,'                      `.\n");
    printf("     ,'                          \\\n");
    printf("    .                             \\\n");
    printf("  ,'.                  ,-`.        \\\n");
    printf(" /   \\               ,'    ,        \\\n");
    printf("|`.  |\\            ,`      |         |\n");
    printf("L  `.| |         .''     _,'        _'\n");
    printf(" \\    \"'        ,`'_..-''        _,'\n");
    printf("  `.            '\"\"          _,.' `.\n");
    printf("    /._                 _..-\"       \\\n");
    printf("   /   `.          _,.-'             \\\n");
    printf("  /      \\-.___.--'/                  \\\n");
    printf(" |      ,/.     .-^+.._               F\n");
    printf("  L..-''.' \\  .'   |   `'--.....___   .\n");
    printf("  /     /   `/     |               `\"-;\n");
    printf(" /     j    j      '                ,'\n");
    printf(" `.    |    |       L          _.-'Y\n");
    printf("  ,`._/     |        .    _,.-'     .\n");
    printf("  `.  '|    |         \\\"\"\"|         |\n");
    printf("   |   |    |         |   |         |\n");
    printf("   |   |    |        ,'   |         |\n");
    printf("   |   L    +      ,'     |         |\n");
    printf("   |    \\    L    ,\\      j         |\n");
    printf("   L     \\   |   /  `.   /          j\n");
    printf("    \\    j\\  |  /    `. /          .\n");
    printf("     L  .  ` | /       \\          /\n");
    printf("     +  |   `|/                  /\n");
    printf("      \\ | _,..._         \\      /\n");
    printf("       ./'      `-._      \\   ,'\n");
    printf("        l           `.     ^_/\n");
    printf("        +             `   /\n");
    printf("         L-\"\"--.       .,'\n");
    printf("         |      `.     ,\n");
    printf("         .        \\  ,'\n");
    printf("          `       _.'\n");
    printf("           `....-' \n");

    break;

case 15:
    printf("                     ,--\"\"+--.\n");
    printf("                    /     j   /`.\n");
    printf("                   |     /   |   `.\n");
    printf("                   |   ,'    '     \\\n");
    printf("                   j,-'     '`..    \\\n");
    printf("                  +      _ /    `._/ \\\n");
    printf("                  |     / '-.     |   .\n");
    printf("                  |    /     |   /    |\n");
    printf("                  |   /     j   j     |\n");
    printf("                  |  j      |   |     |._\n");
    printf("                  | .'     7    |     |  `.\n");
    printf("  ___      _.._   | j      |    +     '    `.\n");
    printf(" |.---=-.,'+-. `. |/       F     L  ,'    ,'`.\n");
    printf(" ||,==--'|_' |  j  \\      /      |,'   ,`'    L\n");
    printf(" 'Y'   | |  '/ ',.-.\\    j     ,,^  _,' \\     |\n");
    printf("`.||   |  `.'  '    `.   / _,-'   `'     L   F\n");
    printf("  ||   `     .  ,-.   `,--'              |   |\n");
    printf("  `'    `.  /_,' ,'     `--------------\"\"\"\"'Y\n");
    printf("         _:\"'_.-'       /_>:-.__           /\n");
    printf("      `-\".`\"'__,`-.,-._/      `.\"\"`------\"'\n");
    printf("      `.| `\"'      | | _.--'\"\"'--\\\n");
    printf("       || /        | '\"  ___,.._  \\\n");
    printf("      _|||__      / /,.-'       `- .\n");
    printf("    ,'   `. .    /,'/'  _.,-\"\"\"--._F\n");
    printf("    7     | |  .',L'|_-'           |\n");
    printf("    +     | | / / ',\"'  ,.-'\"\"'`-._|\n");
    printf("     L    ' |. /  .-.`\"'           |\n");
    printf("     |   j j   \\  `-.'\\           j\n");
    printf("     +   | | \\  `.   ` `.  _.... ,\n");
    printf("      L  | |  \\   .   `  \\\"     /\n");
    printf("      | ,' |   L  ,'    \\ `    .\n");
    printf("      | || |   '  |      L `   |\n");
    printf("      `./|j     `. .     `. \\ j\n");
    printf("       |  '       ` .     | '\\`\n");
    printf("                   \\ '.   | \\\n");
    printf("                    | |  /,-'\n");
    printf("                    j l  \"\n");
    printf("                  _/_,'\n");
    printf("                 ',' \n");

    break;

case 16:
    printf("                   .,\n");
    printf("            , _.-','\n");
    printf("          \"\"|\"    `\"\"\"\".,\n");
    printf("         /'/       __.-'-\"/\n");
    printf("        ','  _,--\"\"      '-._\n");
    printf("    _...`...'.\"\"\"\"\"\".\\\"\"-----'\n");
    printf(" ,-'          `-.) /  `.  \\\n");
    printf("+---.\"-.    |     `.    .  \\\n");
    printf("     \\  `.  |       \\   |   L\n");
    printf("      `v  ,-j        , .'   |\n");
    printf("     .'\\,' /        /,'      -._\n");
    printf("    ,____.'        .            `-.\n");
    printf("        |         /                `-.\n");
    printf("       /          `.                  `-.\n");
    printf("      /             `. |                 `.                  _.\n");
    printf("     .                `|                 ,-.             _.-\" .\n");
    printf("    j                  |                 |  \\         _.'    /\n");
    printf("    .                  |               .'    \\     ,-'      /\n");
    printf("    |                  |            ,-.\\      \\  ,'      _.-\n");
    printf("    |                . '  `.       |   `      `v'  _,.-\"/\n");
    printf("    ||    \\          |  ` |(`'-`.,.j         \\ `.-'----+---.\n");
    printf("    |'|   |L    \\  | |   `|   \\'              L \\___      /\n");
    printf("    ' L   |`     L | |     `.                 | j   `\"\"\"-'\n");
    printf("       `-'||\\    | ||j       `.       ._    ` '.\n");
    printf("          `\\ '\"`^\"- '          `.       \\    |/|\n");
    printf("            `._                  `-.     \\   Y |\n");
    printf("    __,..-\"\"`..`._                  `-._  `\\ `.|\n");
    printf("   +.....>+----.' \"\"----.........,--\"\"\" `--.'.'\n");
    printf("       ,' _\\  ,..--.-\"' __>---'  |\n");
    printf("      --\"\"  \"'  _.\" }<\"\"          `---\"\"`._\n");
    printf("               /...\"  L__.+--   _,......'..'\n");
    printf("                 /.-\"\"'/   \\ ,-'\n");
    printf("                     .' ,-\"\"'\n");
    printf("                    /.-' \n");

    break;

case 17:
    printf("                        |\n");
    printf("                   ____ A,\n");
    printf("               _,-'\\  || /`'`.\n");
    printf("              /-.   '.'|    ,'-.\n");
    printf("            .'   `. |/j | ,'    ..\n");
    printf("           .\"\"|._  \\` | ,'  _.,\\--.\n");
    printf("           '/ |  |\"\\\\,| |,\"| |  |  \\\n");
    printf("           |.'_..|().\\../()|_/\\ |\\ |'\n");
    printf("           | |     ,'   `    L \\| Y\n");
    printf("           | '    /.-\"\"-.`    |||  \\\n");
    printf("           . |   |_,-----.|   j||  `\n");
    printf("           | .   . .     ,'  /,'/\n");
    printf("         __|  \\   \\ \\__,'/  // j\n");
    printf("     _,'\" ,'   `._ `.__.'  ,'  |---._\n");
    printf("   ,'    .        `\"----\"\"'    .     `.\n");
    printf("  ,     .                       `      `\n");
    printf(" /     /    ,-\"\"\"\"\"\"\"\"\"\"\"\"\"--._  \\      '\n");
    printf(" |    j   ,'                   `. `     |\n");
    printf("|'.'  |  /                       `.|    |\n");
    printf("| `.  /.'                          \\  | |\n");
    printf("L  `'v'/                            . |,|\n");
    printf(" \\   '|                             | 'j\n");
    printf("      |                             ./ /\n");
    printf("  `   '                             j /\n");
    printf("   `  `                            / /\n");
    printf("    `. .                          / /\n");
    printf("      `.`.                       /,'\n");
    printf("         \\`.                   ,',\n");
    printf("          . `                 .-\n");
    printf("           `.  +.       _,.- ,'\n");
    printf("            |`-| `\"--\"\"' `,'-|\n");
    printf("           ,'  | _      _ |  |\n");
    printf("   ,--...-'    `' |> <(\"     |-..__,..\n");
    printf(" ,'    _.+- ,  +..'    --.  .  `.___  '\n");
    printf("`-\"\"--:-' ,' |  `.       |   `..   .||_\\\n");
    printf("     /\"|_'   `.,-|       | _.|  `-.'_\\ `\n");
    printf("     .'        | |        ` ||\n");
    printf("                '          V' \n");

    break;

case 18:
    printf("                   ..-`\"-._\n");
    printf("                 ,'      ,'`.\n");
    printf("               ,f \\   . / ,-'-.\n");
    printf("              '  `. | |  , ,'`|\n");
    printf("             `.-.  \\| | ,.' ,-.\\\n");
    printf("              /| |. ` | /.'\"||Y .\n");
    printf("             . |_|U_\\.|//_U_||. |\n");
    printf("             | j    /   .    \\ |'\n");
    printf("              L    /     \\    .j`\n");
    printf("               .  `\"`._,--|  //  \\\n");
    printf("               j   `.   ,'  , \\   L\n");
    printf("          ____/      `\"'     \\ L  |\n");
    printf("       ,-'   ,'               \\|'-+.\n");
    printf("      /    ,'                  .    \\\n");
    printf("     /    /                     `    `.\n");
    printf("    . |  j                       \\     \\\n");
    printf("    |F   |                        '   \\ .\n");
    printf("    ||  F                         |   |\\|\n");
    printf("    ||  |                         |   | |\n");
    printf("    ||  |                         |   | |\n");
    printf("    `.._L                         |  ,' '\n");
    printf("     .   |                        |,| ,'\n");
    printf("      `  |                    '|||  j/\n");
    printf("       `.'    .             ,'   /  '\n");
    printf("         \\\\    `._        ,'    / ,'\n");
    printf("          .\\         ._ ,'     /,'\n");
    printf("            .  ,   .'| \\  (   //\n");
    printf("            j_|'_,'  |  ._'` / `.\n");
    printf("           ' |  |    |   |  Y    `.\n");
    printf("    ,.__  `; |  |-\"\"\"^\"\"\"'  |.--\"\"`\n");
    printf(" ,--\\   \"\"\" ,    \\  / \\ ,-     \"\"\"\"---.\n");
    printf("'.--`v.=:.-'  .  L.\"`\"'\"\\   ,  `.,.._ /`.\n");
    printf("     .L    j-\"`.   `\\    j  |`.  \"'--\"\"`-'\n");
    printf("     / |_,'    L ,-.|   (/`.)  `-\\.-'\\\n");
    printf("    `-\"\"        `. |     l /     `-\"`-'\n");
    printf("                  `      `- \n");

    break;

case 19:
    printf("                                      ,'\"\"`--.\n");
    printf("                                     |     __ `-.\n");
    printf("                                     |    /  `.  `.\n");
    printf("                                      \\        ,   `.\n");
    printf("                                       `.      \\_    `.\n");
    printf("                                         `.    | `.    \\\n");
    printf("                                           `--\"    `.   `\n");
    printf("                                                     `.  `\n");
    printf("                 ,.._                                  \\  `\n");
    printf("               /_,.  `.                                 \\  `\n");
    printf("              j/   .   \\                  ___            \\  \\\n");
    printf("              |    |   `____         _,--'   `.           .  L\n");
    printf("               L  /`--\"'    `'--._ ,'   ,-`'\\ |            . |\n");
    printf("                |-                /  ,''     ||            | |\n");
    printf("     -v._      /                   ,'        ||            | |\n");
    printf("       `.`-._,'               _     \\        |j    _,...   | |\n");
    printf("         `,.'             _,-. \\     |      /,---\"\"     `- | |\n");
    printf("        .'              ,\".   ||     `..___/,'            `' |\n");
    printf("        |   ,         _/`-'  /,'                            `|\n");
    printf("        |-.__.-'\"''\"\"' \"\"\"\"\"\"\"\"--`_,...-----''''--...--      `.\n");
    printf("         `.____,..              \"\"   __,..---\"\"\"              |\n");
    printf("          |       `              --\"'.                        `\n");
    printf("          |     ,' `._                \\'                       `\n");
    printf("          | |  .^.    `.             /                          `.\n");
    printf("         ,'_]__|  \\   / `.          /          /____._            `._\n");
    printf("       ,'          \\ j    '        /          /       `.             `.\n");
    printf(" ___,.' `._       __L/    |     __'          /     _, / \\             |\n");
    printf("`-._       L,.-\"\"\"  .    ,' _.-','          /-----'-./   `--.         |\n");
    printf("   '   / ,'         '..'\"_,'    /         F /  .\"'_,'        |.__     '\n");
    printf("  / ,.\\,'              \"\"      /         / (,'\\ .'        ,.-\"'  `.  j\n");
    printf("  -'   '                      /        ,'     `\"         / __/' .- ,'\n");
    printf("                           __.'\"`.    /                 `-' | _,L,'\n");
    printf("                         .',      `\"\"'                      '/,--\n");
    printf("                          / _..' _,,'\n");
    printf("                          ,' `-\"' \n");

    break;

case 20:
    printf("                        |.     .|\n");
    printf("                      `.  `._.' |,'Y'     _.......\n");
    printf("      +--------..  _\\\"'  \"\"\"\"\"\"'--.=-_ ,-'  ,.-- '     .\n");
    printf("       |  '\"\"`.  `.`-._           .-\" |   .'    (      |`\n");
    printf("       j       \\  |..'-- ,-----. ,.]..|  /       `.    L .\n");
    printf("  ____(___     |      _.' -  , `--..    | __.....-/-..__|L\n");
    printf(".'._______\"\"\"\"----  ,'   _____._    ` ,-':,...------\"\"\"\"i .\n");
    printf("         |\"\"\"\"-.  -'    '.     /`    ' -------.j__      | |\n");
    printf("     .,--------        / \\    j  L      `=..-\"\"----'    | |\n");
    printf("           ,-_,.-     j   L | |   .     `-..:-.__       | |\n");
    printf("        ,++-.  |      |   /-+-|   |       | `\"-._`._    | |\n");
    printf("      .+\"\" '- .'      L  j  | L   j       | L    `-.`.  F-|\n");
    printf("    ,'    .-) `,       \\_/     \\ /        j  \\       ` /-.|\n");
    printf("   '        |  .        `.......-        /   j_       j  j\n");
    printf("         .--|  ,\\_                      ,'\". / )     ,^-.|\n");
    printf("          `.`,-                        /  / / ,`._  ,.   F\n");
    printf("       \"\"\"| '  .'`.'                   `-'\\ \"'  \\ \\,  \\ /\n");
    printf("      | j`.    |     . ,. .,..  ,_  .     `...-.| |.  ,'\n");
    printf("      `-'  /\"\"/    ,' .' \\ '  `/. `-       Y   |`\"  `/\n");
    printf("          j  /'                             .  | \\ ,'\n");
    printf("           \\ \\                              |  | ,'\n");
    printf("           ' '                              j j-'\n");
    printf("            `.\\                            ,.'\n");
    printf("            _+.`.                       _.,---.._    _\n");
    printf("   ,-\"\"--.,'   `--.._              ,::`\"-        '\"\"' -.\n");
    printf(" .'  _..--          ,`\"`--------\"\"'  `._    ....<\"\"`-\",.'\n");
    printf(" `-\"'   _,-\"\"'  _,-'                    `-..__   v._  `.\n");
    printf("   / ,-'/  _,-`'                              `-. \\ `-.|\n");
    printf("   -'  |_,'                                      \"' \n");

    break;

case 21:
    printf("               _,\n");
    printf("             .'.'  _.\n");
    printf("           ,' ._,-'_\"'\n");
    printf("        _,'   '  ------\"\"'`._\n");
    printf("      ,'                 _,.--\"'              ___        __,..\n");
    printf("      |    _,..       ,-'             _,.--\"\"'   7_,.--\"'    ,'\n");
    printf("      j. .'D  |       |            ,'\"       _.-'       _.-\"\"'.  _,..-\"'\n");
    printf(" ,---'  `+----'       |`._      _.'         '                '.-'      /\n");
    printf("j         `.       ,-'    `'--,\"                           ,'       ,-'\n");
    printf("|    __    |      '-.._,    .'                           ,'     ,.-'\n");
    printf("`. ,' ('T--'        .\"     /                          _.'  _,--\"\n");
    printf("  `   `,  /         _`.   j                         _', ,-\"__,..,-.\n");
    printf("      `-\"`.        \\   `-.|                        _,'\"\"\"\"'       l\n");
    printf("           `.,      \\     L                     _.'      __,...--'\n");
    printf("            ` '-    .`     `._             _,.-' ,--'\"\"\"\"\n");
    printf("             '  \\`.,\\         `+------,--\"'     /\n");
    printf("                 \\ )`'      ,-'      /         /\n");
    printf("                  `     _,-'       ,'         /\n");
    printf("                   `+\"\"'         ,'     ,.  ,'\n");
    printf("                     `.        ,'     ,'   .\n");
    printf("                       `-._.,-'      /. _.,j\n");
    printf("                           \"\"`-----.'  '  /\n");
    printf("                                / /   /  /\n");
    printf("                    _.......__,' /__,' ,'\n");
    printf("                  ,\\  ,--..--------\"_  ...._\n");
    printf("                 '--\"(_,`|  ,..-' _,....__  |.\n");
    printf("                        '-./...-'\"        `\"\"\"- \n");

    break;

case 22:
    printf("    ,---...__     ,.._\n");
    printf("  .\"\"\"_...   \"\"---\\.,_`\"-._                    __,..._\n");
    printf(" ,--   \"\"\"\"\"\":--..    \"-   `-._ _,.        ,-\"\" ..----'\"\"\",\n");
    printf("`---........_____ ._     `-._  `. |       / /'      '\"\"\"\"-----.\n");
    printf("\\\"'\"\"\"\"\"\"''\"\"\"'\"-`           `-. `.      / j     .\\ |\\   -.,:,- .\n");
    printf(" `-.......___     `._           \\  \\  \\ |   . |L ||/\\   `. ` .`.\n");
    printf("         __,..==--'/ '           \\  L  A|,'|    \\| |||||  ` .`.. -._\n");
    printf("    .--\"\"          `.             L | j  /'\"-.__\\V '/|||   | `. `._ `.\n");
    printf("      `....----_..-`\"`/.          | | | j   __ `._   | |'_`.\\  `.  `. |\n");
    printf("            -\"'       \\           | `_|.   l  `.  `.   |||   ` | `   \\'\n");
    printf("            `-._,...-\"\"\\-         |        |    .   /`.  \\  ..Y   `.  \\\n");
    printf("               `-..,'  .`         '         L \\  .  `--\"`.`.`|  .   \\  |\n");
    printf("                  \\  ,'  `|     ,'          .\\ +-'-...-^._`. | |..  ,\\ '\n");
    printf("                   `\\     `.._ j             /\"       \\  |\\ `..- `.'- `\n");
    printf("                    `. ,' | .  |           .'          \\ | `._`.\n");
    printf("                      +   | | j           /             `'    `.`.\n");
    printf("                       `.+._j_'      __..)                      `..\n");
    printf("                        _,-'   .,   j ` .'\"\"`--.                  `\n");
    printf("                     _.' .-'  /,'`\"-.  ,` .\\ \\` `\n");
    printf("                   ,'  .' / /`,'    ||'` ,'`T|.`-|\n");
    printf("                 ___,'/_,._/        L|   . |'-'\\\"\n");
    printf("                                    `-   ||    ' \n");

    break;

case 23:
    printf("        _,--\"\"'\"\"\"-.\n");
    printf("      ,'   .,-.     `.\n");
    printf("     '`...( |  |      \\\n");
    printf("    |      `--'        .\n");
    printf("    '_,...__,'          `\n");
    printf("     `._                 `\n");
    printf("        `..______         |\n");
    printf("             |.          ,|\n");
    printf("             | `-.....,-\" |\n");
    printf("             |            j\n");
    printf("             ^.         _F\n");
    printf("            /  `-.....-'/\n");
    printf("           /          ,'\n");
    printf("          /          /\n");
    printf("         /          /\n");
    printf("        j       _.-- .\n");
    printf("        |      /     ,+---....___\n");
    printf("        L     /     /            \"\"`-.._\n");
    printf("         \\   j     j                    `-.\n");
    printf("          `. |     |            .'         `\n");
    printf("            `+...__|__       .,+-..         |\n");
    printf("                      \"\"`._.l      `.       j\n");
    printf("                      ,.-\"   \"-.     L    ,'\n");
    printf("                    ,'          L    : _.'\n");
    printf("                   /            |   _:'\n");
    printf("                  .            .|,-'\n");
    printf("                   .            `.._\n");
    printf("   '\\               `-.             `\"-.\n");
    printf(" ,`.'                  `-.              L\n");
    printf(" |  )                     `-. _...__     |\n");
    printf(".'-'                         )      `.   j\n");
    printf("|  |_                      _,'\"\"`.    \\ /\n");
    printf(" .-' `+._               _,\"       `.  |/\n");
    printf("  \\   |  \"`,,,,,....---'           | .'\n");
    printf("   `-.'   /                        |+\n");
    printf("      `--+                     _.-'\n");
    printf("          `--.___       __.---'\n");
    printf("                 `\"\"\"\"\"\" \n");

    break;

case 24:
    printf("                   _,.----'\"\"\"'---..._\n");
    printf("              _,-'\"                   `-..\n");
    printf("           _,'                            `-.\n");
    printf("         ,'                                  `-.\n");
    printf("       ,'                                _,..._ `.\n");
    printf("      /                               ,.\"     `:- L\n");
    printf("    ,'                             |.'         / ||\n");
    printf("   /            _,.-._             L        .-' -,'\n");
    printf("  /        _,.-\"      `.            `     __   .'\n");
    printf(" j      _,\"           ||\\|           `. ,-  _.'\n");
    printf(".     ,' `-..________.-' |            |' ,-'\n");
    printf("|   .' `--,.___       _,'| /`.        ` '\n");
    printf("|   |     `._  '\"\"\"\"\"'   . `_Y.        Y_\n");
    printf("`._          `-...__      `.`-'        | `-,...___\n");
    printf("   ``-,.._          `\"\"--.._`.         |  /     _,+`-._\n");
    printf("    .'    '--._             `-+      _ |./    ,\"       \\\n");
    printf("   ,  _,...._  `..             `-.:L_,v-'\"`-./_____     L\n");
    printf("  .,-\"       `-.| `,                )/       \\     \"`   |\n");
    printf("  j             |  \\`\\       _,......|       |       `  |\n");
    printf("  |       _,.---^.v[\\_   _,-'        |       |        \\ '\n");
    printf("  |     ,\"       _>.. \"\"\"            |       |        _V\n");
    printf("  '    .        /  |'`\\              |.._   ,'     _,'\n");
    printf("   .  j       ,'    |  `._           |   `\"\"-----\"'\n");
    printf("    \\ |      j      '     `--..,,,..j\n");
    printf("     Y       |       \\             /\n");
    printf("      `.     |        \\           /\n");
    printf("        `.   `         `.      _,'\n");
    printf("          `._ `.         `--..'\n");
    printf("             `---...,,,...-\"' \n");
    printf("\n");

    break;

case 25:
    printf("                                             ,-.\n");
    printf("                                          _.|  '\n");
    printf("                                        .'  | /\n");
    printf("                                      ,'    |'\n");
    printf("                                     /      /\n");
    printf("                       _..----\"\"---.'      /\n");
    printf(" _.....---------...,-\"\"                  ,'\n");
    printf(" `-._  \\                                /\n");
    printf("     `-.+_            __           ,--. .\n");
    printf("          `-.._     .:  ).        (`--\"| \\\n");
    printf("               7    | `\" |         `...'  \\\n");
    printf("               |     `--'     '+\"        ,\". ,\"\"-\n");
    printf("               |   _...        .____     | |/    '\n");
    printf("          _.   |  .    `.  '--\"   /      `./     j\n");
    printf("         \\' `-.|  '     |   `.   /        /     /\n");
    printf("         '     `-. `---\"      `-\"        /     /\n");
    printf("          \\       `.                  _,'     /\n");
    printf("           \\        `                        .\n");
    printf("            \\                                j\n");
    printf("             \\                              /\n");
    printf("              `.                           .\n");
    printf("                +                          \\\n");
    printf("                |                           L\n");
    printf("                |                           |\n");
    printf("                |  _ /,                     |\n");
    printf("                | | L)'..                   |\n");
    printf("                | .    | `                  |\n");
    printf("                '  \\'   L                   '\n");
    printf("                 \\  \\   |                  j\n");
    printf("                  `. `__'                 /\n");
    printf("                _,.--.---........__      /\n");
    printf("               ---.,'---`         |   -j\"\n");
    printf("                .-'  '....__      L    |\n");
    printf("              \"\"--..    _,-'       \\ l||\n");
    printf("                  ,-'  .....------. `||'\n");
    printf("               _,'                /\n");
    printf("             ,'                  /\n");
    printf("            '---------+-        /\n");
    printf("                     /         /\n");
    printf("                   .'         /\n");
    printf("                 .'          /\n");
    printf("               ,'           /\n");
    printf("             _'....----\"\"\"\"\" \n");

    break;

case 26:
    printf("                                        _,--\"\"`---...__\n");
    printf("                            _.---\"\"\"\"`-'.   .-\"\"\"'`-.._`-._\n");
    printf("                _,.-----.,-\"         .\". `-.           \"---`.\n");
    printf("             _,' _,.-..,'__          `.'  ,-`...._      ,\"\"''`-.\n");
    printf("           ,' ,-'     / (  .   ,-.       |    `.  `-._  .       `.\n");
    printf("         ,',-\"       /   `\"    `\"'       '      .    _`. \\\n");
    printf("       ,','       ,-'7--.                 `.__.\"|   ( ` `j\n");
    printf("      '.:--.    ,'   |   .       |\\             '    `--'\n");
    printf("     /.     | ,'     |   |       `'            .\n");
    printf("    '       |',\".    |._,'                     `      _.--\"\"\"\"\"-._\n");
    printf("'.          `-..'    `.                      ,  \\  ,-' _.-\"\"\"\"\"-. `.\n");
    printf("` `                   F  -.                 /    ,' .-'          `  `\n");
    printf(" \\ `                 j     `.              ,-.   . /               . `\n");
    printf("    `.               |     .-`.           .  '-.  V                 . `\n");
    printf("  `   `.      .      | .    \\  \\         j      \\/|                  ' .\n");
    printf("   .    `.    |`.    |-.`._/`   .        |    ,'  A                  | |\n");
    printf("    \\     `. F   \\   |--`  \"._  |        `-.-\"   / .                 | |\n");
    printf("     \\      -'    `. |        `\"'                  |                 F '\n");
    printf("      \\             `+`.                           |                / .\n");
    printf("       \\              .-`                     .    j               / ,\n");
    printf("        \\              \\   `.               .'    /               ' .\n");
    printf("         \\       |`._   \\    `-.._        ,'    ,'              ,'.'\n");
    printf("          '      |   `.  `.       `<`\"\"\"\"'    .'             _,'.'\n");
    printf("           `     |     `-. `._      )   `.     .          _.'_.'\n");
    printf("            `    |        `--/     /`-._  .     `.___..--'_.\"\n");
    printf("             `   |          /     /._   `\"\"`.     `. _,.-\"\n");
    printf("              `  |         /     /   `--.....`.     `._\n");
    printf("               ` |       ,'     /              .\"\"\"\"'  `.\n");
    printf("                `'      , `-..,7                `    . `.`.\n");
    printf("                       .       '                 `.   \\  `v\n");
    printf("                      j.  ,   /                    `.._L_.'\n");
    printf("                      || .   /\n");
    printf("                      `\"-'__/ \n");
    printf("\n");
    printf("\n");

    break;

case 27:
    printf("          _...-----'`._\n");
    printf("      _,-'   _`. .\"\". \\`._\n");
    printf("    ,'    ,-'   ` ` |  \\/--.\n");
    printf("  ,:_  ,-'       ` `|  |`.  `.\n");
    printf(" /   `'-..        `  .-'  `   \\\n");
    printf("j         `.--,    \\       `   :\n");
    printf("|         '--' |    \\       `._'-.\n");
    printf("|___     |     |     L      .'    `.\n");
    printf("|   `-. /|___.' `.   |    .'.       .\n");
    printf("|     ,'          .  j.  /   `.      \\\n");
    printf(".  _,'            |,'  `.      \\   ,<`.\n");
    printf(" .'             _.-      `      j.'  \\ \\                          ,.\n");
    printf("  `       ,v-\"\"'   \\      )__,+'      . \\                       ,' |\n");
    printf("   `.    / |  /  _,'`.  ,'  \\  \\       /`.                   _.:   |\n");
    printf("     `,-'-`  / ,'     \\'    j,  \\   ,.'   L               ,-'   . F\n");
    printf("     / ,. | / .        \\  .'     \\.-\\     |         _,.-\"`.     `,'\n");
    printf("     (_\\/|'|   \\        .'   _,-\"    `    +....---+'       `     '\n");
    printf("     . \\ |.     \\    ,.^---`<_        | ,'||       \\        \\   /\n");
    printf("      `.'| \\_    :v-'         `.      |-  | \\ __..--\\     _,'\\,'\n");
    printf("        `'/`----'/              '.  ,'    |  Y       L_,-'  ,'\n");
    printf("          \\     /            ___,.'\\     j   |       |    .'\n");
    printf("           \\   .\"`\",\"\"'\"\"\"'\"`     | .   .'   |       |  ,'\n");
    printf("            \\  |   |         |    | | .' j,.-|       j-'\n");
    printf("             `. ___|________/.....|_Y'  /    |   _.-'\n");
    printf("          __,-' \\                 |    /    _j,-'\n");
    printf("         '--.    .                `...+---\"\"\n");
    printf("        `_____\\  _`..__    __,..-\"'\n");
    printf("              .-'_|._  `\"\"\"       \\\n");
    printf("             , -'    .          __/\n");
    printf("             \"------------\"\"\"\"\"\" \n");
    printf("\n");

    break;

case 28:
    printf("                    ,\\\n");
    printf("                _,-'.+..----\"/_____\n");
    printf("             _,'---,        /      `\"\",\n");
    printf("           .'    ,'  __..../_     _,-'\n");
    printf("          /    ,' ,-\"       ,'---+--...__\n");
    printf("        ,'   ----'        ,'             `\"\n");
    printf("       '                ,'     ______  ,-\"`-._\n");
    printf("      /  ,+\"\"\",   ....-^--..<\"\"      ``-._    `-.\n");
    printf("    ,' .'-'  /      |        `._          `-.   _`-\n");
    printf("   /    `\"\"\"'       `           `.           `,\"\n");
    printf("  |                  `.           `.      ,-'\"--.\n");
    printf("  '               ,-   `._ ,-\"\"\"`.__:---\"\"'-._   `._\n");
    printf("   `-----..__  _,'     .-\".       `._         `.    `.\n");
    printf("   /________.'\"/      /  j         | `-._       `.    `.\n");
    printf("\\`-.`.__    )_/__    ._,-|         |     `.       `.\"\"\"'\n");
    printf(" .      `\"\"\"\"j   `\"\"`'   |         |       `.       `.\n");
    printf(" \\`._       /            L         '         `.....---\n");
    printf("  `  `..___'              \\      ,\"            .   `.\n");
    printf("   `.     `              _.\\ _.-\" `-._          `.   `.\n");
    printf("     `-._  \\         _,-\"-. '|        .`-.-\"\"\"\"``\\     `.\n");
    printf("         `\"-^'   _.-'        |         \\  `.      `---...-\n");
    printf("              \\.\"            |          L   `.     `.\n");
    printf("              /              `          |     \\      `.\n");
    printf("             j                `.        |      `,....__`\n");
    printf("             |                  \\       |       `   \\\n");
    printf("              .                  .      F        \\   `.\n");
    printf("      _,...,---`.                 `.   j `.       L--..`\n");
    printf("    ,\",.--\"'-.   -.                _`. |   `._    .\n");
    printf("    ,'        \\_.--`._     ,----.-<.  V       `-._ ._\n");
    printf("   /.---\"\".-\"\"\" )     `\"\"\"'      `. `-.._         `' `._\n");
    printf("        ,' _.-\"\"\"\"`.               |     `\"-..__        `-.\n");
    printf("        '\"\"         \\         _,..-'            `\"\"----...-'\n");
    printf("         '-----------+---\"\"\"\"\" \n");
    printf("\n");
    printf("\n");

    break;

case 29:
    printf("        .'-.                            ,.. _,._\n");
    printf("  ,--\"\".`.  `.                        ,'  /'    `-.._\n");
    printf("  \\__   `-`   \\                     ,'  ,' _____     `-.\n");
    printf("     | ,-.._   \\                  ,'    _,'     \\   ___.'\n");
    printf("     j |    `   L               .'    ,'        |  |\n");
    printf("    . j      \\  |              /    ,'  ___     |  |\n");
    printf("    | |  .\"\"\"|  `    _,.--....'|   /-'\"\"   `.   |  '\n");
    printf("    |j  j    `   `-\"\"          '  '         |   | F\n");
    printf("    ||  |    ,'                   `         |   | |\n");
    printf("    |`. |   /      ,\"\".       .    \\        |   ' |\n");
    printf("    `  `.  /,\\     |   \\     / `    \\       |,-' F\n");
    printf("     `.  `/ | \\    '    .   /.  |    \\   _,-   ,-'\n");
    printf("       `-. j  |\\       \"   /.|  |     `\"\"__..-'\n");
    printf("        .' |_ |(`        ,' )|__'      `._____\n");
    printf(".-------'.   `-'-`       `--\"\"      \"\"\"\"\"__..-'\n");
    printf(" \"\"\"\"\"\"--.                           \"\"\"(\n");
    printf("     ___.'        .                 -----..._\n");
    printf("   .\"____..       '   -'              \"\"`----`_\n");
    printf("          `.     . _._   _,             ,. `./ |\n");
    printf("            >     `.  .\"\".              \\ |  \\ j\n");
    printf("           j       `.,'  /               \"'   Y\n");
    printf("          /          `..'                     |\n");
    printf("                                              |\n");
    printf("         .                             ,\"-.   |\n");
    printf("         |                             |   \\  |\n");
    printf("         |                             .   /  |\n");
    printf("         |                              `-'   |\n");
    printf("         |   `.                           ,   '\n");
    printf("         L     \\                      _  /   /.\n");
    printf("          \\     \\             |      ( `/  .'  `.\n");
    printf("           L     `.           |       \"/ _/    _|\n");
    printf("         _,|       -,_        |       j-'_._  ,  `.\n");
    printf("        '..|       (_.'--.._  L       |-+_  ..`.,.`\n");
    printf("           |      j         \"\" .    __|   `\"'\n");
    printf("           |,..__<             |\"`,\"  \\\n");
    printf("           | _,x..)            '-' --.'\n");
    printf("            \" \n");

    break;

case 30:
    printf("                           _            _\n");
    printf("                          / )  _  _,.-\"\" )\n");
    printf("                        ,' /..' /\"   _,+'--\"`.\n");
    printf("                       /     / j_.-\"'     ,-\"\n");
    printf("                     ,'    ,'       _____  `\n");
    printf("                   _+__   .     _.-'     \\  `...._\n");
    printf("              ,'\"\"\"    \"\"/  _.-'          .       \\\n");
    printf("            ,'          '  ',--'\"\"`-.      L   ,-\"\n");
    printf("          .\"              .'         \\     |  /\n");
    printf("        ,' _                          \\    | j      _\n");
    printf("       / ,'   _,+-'                 _,'   ,' /_,.-\"\" |\n");
    printf("    _.' '  .+'.  \\               ,-\"___..\"  -'      ,'\n");
    printf(" ,-\"     ,'-' |  |           .,-\"\"''___,..-'       /\n");
    printf("j        `\"\"\"\"---'             '\"'\"\"       ._    , _.--\".\n");
    printf("\\   ,                                        `- ' `._  ,'\n");
    printf(" \\                            _.-'            .\"`.   `-. ____...----\"\"`\n");
    printf("  `.-\"-._,..---+ +          ,'       `         `.'      `.             |\n");
    printf("      `.        \\/        ,'          |            ,.---. \\           .\n");
    printf("        `._               +__,...__   |     ,     |     |  L        .'\n");
    printf("           `--...-\"\"`-._   /       `,\"    ,'      `     |  |      ,'\n");
    printf("                     /  `./        /    ,'         \\    j  '    .'\n");
    printf("                    /    j        /    .       _    `._'     ,-'\n");
    printf("                   j     '       /     |     .\" `         ,-'\n");
    printf("                   |, .<(       '      `      \\_/       ,'\n");
    printf("                   |-...+.___,./`.______\\             ,'\n");
    printf("                   `.'`.' \\/  V /_/.___  `.  _     _,'\n");
    printf("                                `....\\_`,-\",' |,-./\n");
    printf("                                        `\"\"..-'---` \n");

    break;

case 31:
    printf("                                          .\"\n");
    printf("                                        ,'  |\n");
    printf("                                      _,... '.___\n");
    printf("                             +--._  ,'.-\"+.      \"`-.\n");
    printf("                         _,---\\   `\" / |p|.'     \"'   \\\n");
    printf("                       ,- _.---\".   |_,'      ,-\"\"\"\"-._|\n");
    printf("                     ,' ,.'    .'          ,-'        ,'\n");
    printf("                   ,' ,' |    .          .^---._      |\n");
    printf("            |. _  `. /   .    |   ,---.+'       `.    |\n");
    printf("           ,| | `/\\|.    `    |  .      `-.       .  /\n");
    printf("       .---. \"`-`.,\\ \\    `-.,'  |         `-._   | '\n");
    printf("        `.-'        , \"\"\"\"--'..-  \\            `--'.L\n");
    printf("          .          |`.     `     `._             _,'   .\n");
    printf("           `.        |  `.    |_,..   `-..______.-'  _,-| |. ,\"\\\n");
    printf("             -.     /     +--'/    `.            -,\"'   `\"  \".-'\n");
    printf("               `-+-'      |  /       `.        '\\ |           .L_\n");
    printf("           -\"--.,-`._..._,' j          `.     / | '           (_,'\n");
    printf("          `.    j.-'     `- |            \\   j  |  `.  _...___'\n");
    printf("            `. /__ ,...._  \\|             |  |  |...-`\"\n");
    printf("              j|  `      ,-/`.           /   `  ;.._\n");
    printf("          ,-. ||   |\"\"-.'  |  `..__,...-'     \\'    `.\n");
    printf("          `   |/`--    .  /|                  /----.__\\\n");
    printf("           \\  .         `' /                 /         \\\n");
    printf("            . |           ,`.              ,'     ___..+--.\n");
    printf("            +-|          /   `-..______..-\"     ,\"  `.   /___\n");
    printf("          ,'  |         j               .'    ,'      `\"|    /\n");
    printf("       ,-+    .         |`._          ,+_    /          `-..'\n");
    printf("   _.-'  |     `.      /    ``-----:='   `.,'         _,..'\n");
    printf(",-'      L       `-.--'         ,,'        |       ,-'\n");
    printf("\\_        \\         `._    _,.-'           `.___..'\n");
    printf("  `.._     `._      __.+'\"'\n");
    printf("      `---... +---\"\" \n");

    break;

case 32:
    printf("                  .\"\\                            _\n");
    printf("                  | |  ,.                    _,-\" /\n");
    printf("                  j `-' /                 _.'   /..\n");
    printf("                ,'     |                ,'   _..  |\n");
    printf("               /       `.          .\"','  ,-'   \\ `...\n");
    printf("             .'          \\       ,' ,' ,-'      |   _/\n");
    printf("            /             \\     /    ,'         |  |\n");
    printf("           /               `.  /    /           |  '\n");
    printf("          |                  `/    /            | `.\n");
    printf("       .-.`                  /   ,'            j   |        _\n");
    printf("       \\                   /V   /              |  ,'     ,-' |\n");
    printf("        .                _/    /               | /    ,-'   /\n");
    printf("        |               |    ,'               j / _.-'    ,'\n");
    printf("        |               |   /                 ' \"\"       /\n");
    printf("     `\"--               |  /                  |        ,'  _,..-.\n");
    printf("      \\                 | j                  .'       ---\"'     /\n");
    printf("       \\               j  |                  /                ,'\n");
    printf("        \\       __...--.  |                 /_..-----.       /\n");
    printf("         \\   ,\"\"       |  |   _.           /        /      ,'\n");
    printf("          . /          |  |  /  |        ,'        /      /\n");
    printf("           Y           |  |.'   F    _,-'         /__,._ `.......\n");
    printf("        _,'               '    / _.+'   ,-\"\"-.        .'       ,'\n");
    printf("    _.-'                      `-'| |   ,      .       -._   ,-'\n");
    printf("_.-'                  .\"\\        | |    ._   ,'         / .'\n");
    printf(" `\"\"\"---...._        /D  |       | |      \"\"' .     __  `--.\n");
    printf("       / |  ,      ,`  `-|       ` |  /`    ,'    /\"  \\     `.\n");
    printf("      .  `_/      /  `-..|         |  .'   /      `.  |       \\\n");
    printf("      `          '-......'         |      .         `-'        L\n");
    printf("       \\                          ,'     j                     |\n");
    printf("        `                      _.'       |                    .-.\n");
    printf("        /    ,            _,.-'          |                    '  \\\n");
    printf("       j._            ,-+'             __|                  ,^.   \\\n");
    printf("      | | `+\"\"-.....,' .'           ,-'   `._           _.-'\"\"\"`\"\"\n");
    printf("      |,|  _`. |     ,+          _,'         `\"-------\"'\n");
    printf("      '  \"\"   \"     | ,\"\"-.   _,'\n");
    printf("                    |,` _.+--'\n");
    printf("                    ' \"' \n");

    break;

case 33:
    printf("    `._\n");
    printf("     \\ `.\n");
    printf("      \\  `.\n");
    printf("       .   `.\n");
    printf("       j     :-----+...-.\n");
    printf("       /  _,'   /\"\"_     `.     _,..._\n");
    printf("     ,'  '      .-\"c|\"`+- -+--\"'      `-.._\n");
    printf("   ,'            \"\"\"+_ |       _,--\"\"--.._ `---..\n");
    printf("  '     _             \"'      '\\          `--._  `.\n");
    printf(" |    -'                      _.'              `-. `.\n");
    printf(" (     __   ,.----.._        \\``-.                |  `._\n");
    printf("  `.  /_ \"\"\"   ___.| ,.      j  `.`.   ,          `.    `.\n");
    printf("    `'| |    ,'    '.'/'\"\"'\"'   j`. \\,'|  _________||\"\"`-'`.\n");
    printf("      `_.\\   j       j      __-'|_/'\"._:.\"  __       .    \"\n");
    printf("          | /        /      \\ `/        |`.   .   ..._`.\n");
    printf("          ||        /       | /         | |    :.'    -/\n");
    printf("          |'    _,-'        |.`.       ,' |   | |\\_\n");
    printf("    _     | `--'     _,-    . `.`--- ,'   /   |  .\\`-..\n");
    printf("    |`v,-'\"\"\"'`-.,.-'        `._``--'  _,'    |  | \\  ,'\n");
    printf(",--'`- _       \\ \\              '\"\"''`'       `_,'  +-\n");
    printf(" -.'    \\       . |                        /`     ,---.\n");
    printf(" -`\\    |       | L                        `-'     '\"\"'`\\\n");
    printf(" '---...:_      / \\                          |   ,.-\"\"\".|\n");
    printf("          '---+'   \\                         ' ,'       `\n");
    printf("               '`''\".                       / /          `.\n");
    printf("                     \\                     j |            '.\n");
    printf("                      `.                   | |              \\\n");
    printf("                        \\ _                |/             /\\|\n");
    printf("                         / \"-   --\"\"----+--'             / ||\n");
    printf("                        `v'\"\"\"\"\"-..     |      `..__.,.-'-.,,\n");
    printf("                         |         `-.,'           .`.J     /\n");
    printf("                         |            |             '---...'\n");
    printf("                         |     .     /\n");
    printf("                         |    | `,  j\n");
    printf("                        ..--+'\"--_  /\n");
    printf("                         `-.|     \\'\n");
    printf("                             `----' \n");

    break;

case 34:
    printf("                  _.___.._              ,'            ,. ____\n");
    printf("                   \\      '-.._      |: | '       __,- _ ... )\n");
    printf("                   j-\"\"\"|\"`-._ `.'.  | \\| |    ,\"'_,--.     `.\n");
    printf("                  |     |     `. `.\\-' j   .-.'  '     `.    |\n");
    printf("     _.           `     |       \\  \"  /    \\   .'       |    |\n");
    printf("    /  |           \\    L       j           )   \\       j   j\n");
    printf("   /   |            \\    `.   ,'_ ..   .__,. ,   `     /   ,'\n");
    printf("  /   j              `-._  `./  /`. \\       / /\"| \\ .-'  ,'\n");
    printf(" .  ,.|                _`+..    |.)`       ' (| |  ``._.'\n");
    printf(" |-'  |              ,'    /,     \"`'       '--\"   |   '`.\n");
    printf("j     |             '        \\ './.             |\\-'      `\n");
    printf("|     |            |          \\  `/, . . . _-|./ |        _\\\n");
    printf("| ,-\"\".            `-\"\"-.     |`-._`| \\--|'/|, ,,'    _.-' /\n");
    printf("|/     \\        __(      \\   ,+..._`---...-'_.--\"\". .'     \\\n");
    printf("|       `   ,-\"'   `._   | _.      `\"-....-'       `.    ,.---.\n");
    printf("|    ,-'\"  '\"'\\       L,-|'            `v           |  ,'      `\n");
    printf("L   /    .\"`--'       |  |              |           |||         `'\n");
    printf(" | /     `..        ,.|  |.             |          ,' '|       .\"\".\\\n");
    printf(" `'      | /        . `. | `.       _,--+--._    ,',-''|        `-'|\n");
    printf("  `     .,\"`. ,..  / `  `|   `-...-'         `\"-' / ,.-\\         /\"\".\n");
    printf("   \\   j    |`. |.-   `/. `.     __.-----...__   ,`/    `.___    \\  |\n");
    printf("    .  |    |  \\|      | \\\\ `- -'             `.. |       |  `,\"\" `.'\n");
    printf("     ` |   j .         | | \\                   |  |       |,-| \\\n");
    printf("      `'   | \".      ,-' `. L                  .-' `        ,'  |\n");
    printf("        `. |   \\    /     .'`.               ,'     `      /    |\n");
    printf("          `.    `\"\"'      /   `-._       __.' .'\\    `....'    /\n");
    printf("           ,'             \\ _____ `\"\"\"\"\"\"  _.'  /             '\n");
    printf("           ' ,--'\"\"`--.___,'     \"\"------''    '_    _,...__ /`.\n");
    printf("            `-........'                          `-.'       `,\"\n");
    printf("                                                     `\"\"\"---' \n");

    break;

case 35:
    printf("                    __.._\n");
    printf("                ,--'     \"`-._    _,.-,--------.\n");
    printf("    ________ ,-'              `-\"'   /     _.-'|\n");
    printf(" ,-'  '     :                       .    ,'    '\n");
    printf("|    '     j      _.._              |  ,'     j\n");
    printf("L   /      |    .'    `.            |.'      /\n");
    printf(" \\ j       |    `.,'   |           ,'       /    _\n");
    printf("  .|      ,'\\         /           '.___    / _.-\" |\n");
    printf("   `    .'   `-.....-'                 `- +-'    /\n");
    printf("    `. ,'                                `.     <__\n");
    printf("      `.             .\\ \\                 |   ___ ,'\n");
    printf("      |     | #      || |                  ,\"\"   \"`.\n");
    printf("      |     | #      `'_/                   .       `.\n");
    printf("     ,'     `.         ,-\"\".                L         `.\n");
    printf("    /     (__)       _  \"\"\"                  :\"\"-.      .\n");
    printf("   /             \\\"'u|         |/            |    \\     |\n");
    printf("  .               \\  |         |           | |     |    |\n");
    printf("  |     _          `-'        j           /  |     '    |\n");
    printf("  L      `.                   |          /   |   ,'     '\n");
    printf("   \\       `.                ,'         /    |_,'      /\n");
    printf("    `.   ,.<'                `+--.    ,'     /       ,'\n");
    printf("      `./`._'                 '_.`._,'      j      _,\n");
    printf("        /\"'                      \"          |   _,'\n");
    printf("       /   `._              .              '..-'\n");
    printf("      j       `-._           `            /\n");
    printf("      |        _,'`\"--........+.         /\n");
    printf("      ,\"-.._,-'                 `.  .-._/\n");
    printf("      '---'                       `+__,' \n");

    break;

case 36:
    printf("                                       __,......._\n");
    printf("    _............___          ____....<__         `\"._\n");
    printf("   '._      `\",     `'--._,.-'   ___     `\"-.    ___..>---,---------..\n");
    printf(" ____ -.,..--\"            `-  ,-'   `       .`-\"'       .'_         ,-'\n");
    printf("'._  \"\"'-.                  .'     _.._                    `-._ ,.-'\n");
    printf("   `-._   `._              .     ,'    `.                    ,-'----.._\n");
    printf("       _>.   -.            `     |      |                _,-'          )\n");
    printf(",..--\"\"`--\"\"\"\"\"`-.          \\    `-.    |             ,.+.__   _,;---\"\"\n");
    printf("\\_ |              `.         `.       _.'         _,-`      `\"\"   `.\n");
    printf("  \"\\                `       / _`\"----'           '                 /-.\n");
    printf("   `.____                  |  #      #' \\                         `,..'\n");
    printf("       ,-\"--...__          `--        --'                   ___,..'\n");
    printf("      '-.---\"'  |           -.,........,            ,.---\"\"\" .\n");
    printf("                |            |        \\'             \\\"\"--..._`\n");
    printf("                |             \\       /              |\n");
    printf("                .              `.    /               |\n");
    printf("                 ,               `--'                j\n");
    printf("                j \\                                 /\n");
    printf("                |  .                               '`.\n");
    printf("                 L._`.                           .' ,|\n");
    printf("                 |  `.:-._                    _,' ,' |\n");
    printf("                 `.,'| \"\"\"`.__            _,< _..-   '\n");
    printf("                     `...-'   `----------'   `-.__|`' \n");

    break;

case 37:
    printf("               _,.+-----__,._\n");
    printf("              /  /    ,'     `.\n");
    printf("     ,+._   ./...\\_  /   ,..   \\\n");
    printf("     | `.`+'       `-' .' ,.|  |\n");
    printf("     |  |( ,    ,.`,   |  `-',,........_       __......_\n");
    printf("      \\ |..`/,-'  '\"\"\"' `\"\"'\"  _,.---\"-,  .-+-'      _.-\"\"`--._\n");
    printf("       .\"|       /\"\\`.      ,-'       / .','      ,-'          \\\n");
    printf("      .'-'      |`-'  |    `./       / / /       /   ,.-'       |\n");
    printf("     j`v+\"      `----\"       ,'    ,'./ .'      /   |        ___|\n");
    printf("     |                      |   _,','j  |      /    L   _.-\"'    `--.\n");
    printf("      \\                     `.-'  j  |  L     F      \\-'             \\\n");
    printf("       \\ .-.               ,'     |  L   .    /    ,'       __..      `\n");
    printf("        \\ `.|            _/_      '   \\  |   /   ,'       ,\"    `.     '\n");
    printf("         `.             '   `-.    `.__| |  /  ,'         |            |\n");
    printf("           `\"-,.               `----'   `-.' .'   _,.--\"\"\"'\" --.      ,'\n");
    printf("              |          ,.                `.  ,-'              `.  _'\n");
    printf("             /|         /                    \\'          __.._    \\'\n");
    printf("   _...--...' +,..-----'                      \\-----._,-'     \\    |\n");
    printf(" ,'    |     /        \\                        \\      |       j    |\n");
    printf("/| /   |    j  ,      |                         ,._   `.    -'    /\n");
    printf("\\\\'   _`.__ | |      _L      |-----\\            `. \\    `._    _,'\n");
    printf(" \"\"`\"'     \"`\"---'\"\"`._`-._,-'      `.              `.     `--'\n");
    printf("                       \"`--.......____:.         _  / \\\n");
    printf("                               `-----.. `>-.....`,-'   \\\n");
    printf("                                      `|\"    `.  ` . \\ |\n");
    printf("                                        `._`..'    `-\"'\n");
    printf("                                           \"' \n");

    break;

case 38:
    printf("        ,-\"\"'-.._\n");
    printf("   .---'\"\" \">` - `--\n");
    printf("   `.      `-._  .`-.\n");
    printf("     `-.       \\ .` : -.\n");
    printf("      _.>._     / ` `:..,\n");
    printf(" ,.../...._`\"-./    '.|, `\n");
    printf("`---.._\"'-.`-._    |    \"'--.\n");
    printf("       `--.\\`. `._,'         `.---------------.._\n");
    printf("            \"-'--.___          \\`'\"-..__         `-._\n");
    printf("                     `.\"`-\\     ` `\"--..\"`-.-..__    `\".\n");
    printf("                       `.  `.     |``._ `--. `-..`\"-._`.\\-.\n");
    printf("                         \\   -....' `-.`-.  `-._ `-.  `-.\\ `.\n");
    printf("                          `-.__  `.`-. `. `._   `._ `-.  `.  `.\n");
    printf("                               `-..`` `. `.  `.    `.  `-.     \\\n");
    printf("                                   \\`.` `  `.  `.    `.   `-.   `.\n");
    printf("                                    `.`-'`.  \\   .     `.    `.   \\\n");
    printf("                                      `..  \\  \\   \\      `.    `.,_`.\n");
    printf("                                         \\` \\  .   `.     '\\     `.`.`._\n");
    printf("                                          \\``.  \\    \\     \\`.    |\n");
    printf("                                           ' '.  \\    \\     \\ \\   L\n");
    printf("                                             \\ \\  '    `    '. `.  \\\n");
    printf("                                              ` `. \\    `    '.  `. `.\n");
    printf("                                               `. `,`.   `.   `.   `._.\n");
    printf("                                                 `-  \\._   `.  `.     \"`\n");
    printf("                                                      ` `.   `.  .\n");
    printf("                                                          `-. ``-.:-.\n");
    printf("                                                              -.`. '\"-'\n");
    printf("                                                                 `\"-. \n");

    break;

case 39:
    printf("   ,..__\n");
    printf("  |  _  `--._                                  _.--\"\"\"`.\n");
    printf("  |   |._    `-.        __________         _.-'    ,|' |\n");
    printf("  |   |  `.     `-..--\"\"_.        `\"\"-..,-'      ,' |  |\n");
    printf("  L   |    `.        ,-'                      _,'   |  |\n");
    printf("   .  |     ,'     ,'            .           '.     |  |\n");
    printf("   |  |   ,'      /               \\            `.   |  |\n");
    printf("   |  . ,'      ,'                |              \\ /  j\n");
    printf("   `   \"       ,                  '               `   /\n");
    printf("    `,         |                ,'                  '+\n");
    printf("    /          |             _,'                     `\n");
    printf("   /     .-\"\"\"'L          ,-' \\  ,-'\"\"\"\"`-.           `\n");
    printf("  j    ,' ,.+--.\\        '    ',' ,.,-\"--._`.          \\\n");
    printf("  |   / .'  L    `.        _.'/ .'  |      \\ \\          .\n");
    printf(" j   | | `--'     |`+-----'  . j`._,'       L |         |\n");
    printf(" |   L .          | |        | |            | |         |\n");
    printf(" |   `\\ \\        / j         | |            | |         |\n");
    printf(" |     \\ `-.._,.- /           . `         .'  '         |\n");
    printf(" l      `-..__,.-'             `.`-.....-' _.'          '\n");
    printf(" '                               `-.....--'            j\n");
    printf("  .                  -.....                            |\n");
    printf("   L                  `---'                            '\n");
    printf("    \\                                                 /\n");
    printf("     ` \\                                        ,   ,'\n");
    printf("      `.`.    |                        /      ,'   .\n");
    printf("        . `._,                        |     ,'   .'\n");
    printf("         `.                           `._.-'  ,-'\n");
    printf("    _,-\"\"\"\"`-,                             _,'\"-.._\n");
    printf("  ,'          `-.._                     ,-'        `.\n");
    printf(" /             _,' `\"-..___     _,..--\"`.            `.\n");
    printf("|         _,.-'            `\"\"\"'         `-._          \\\n");
    printf("`-....---'                                   `-.._      |\n");
    printf("                                                  `--...' \n");

    break;

case 40:
    printf(",-.                                                 .\n");
    printf(".` `.                                             .'|\n");
    printf("` `. `-._                     _,.--._            /  |\n");
    printf(" `  ..   `.                  /       `.        ,' , '\n");
    printf("  `  ` `.  `-._              | '\".     \\      /  / .\n");
    printf("   `. `   `.   `.          ,\"'---'      .   ,' ,'' |\n");
    printf("     ` `.    `.  `.       .             |  /  / /  F\n");
    printf("      `. .     `.  \\ ,..--|             |,'  / /  /\n");
    printf("        \\ `.     .  |      \\           ,.   / /  /\n");
    printf("         `._`._   j   .----.`._     _,` | ,\" / ,'\n");
    printf("            `._`\"`  ,',\"\"\"\"-.`.\"\"--' ,-\":+.-'.'\n");
    printf("            ,'     . |`._)   . L     ||_7\\+-'\n");
    printf("           /       | |       | |     .\\   \\.\n");
    printf("          /        |  .      | |      \\\\_,'j\n");
    printf("         .          ._ `----' /        `--\" '\n");
    printf("        j             \"--..--'              |\n");
    printf("       ,|                        ,-\".       |\n");
    printf("     ,' |                       /   |       '\n");
    printf("    /   '                       `..'    ,'   \\\n");
    printf("   /   j                               /      L\n");
    printf("  j    |                              .       |\n");
    printf("  |  _.'                              |     , |\n");
    printf("  `-' .                               |   ,'  '\n");
    printf("      |                               `.-'     .\n");
    printf("      |                                        |\n");
    printf("      |                                        j\n");
    printf("      '                                       .\n");
    printf("       `                                     /\n");
    printf("        `.                                  /\n");
    printf("     ______.                              ,'\n");
    printf("   ,'       `-._                     _,.'\"\"`--..\n");
    printf("  .         ___,+ -...._________,...<_          \\\n");
    printf("   .___,.-\"'                          `-._      |\n");
    printf("                                          `-....' \n");

    break;

case 41:
    printf("                                        `\"--.._\n");
    printf("                                         '  ,__`-._\n");
    printf("                                          ` |   `-.`._\n");
    printf("                                           |`       `._`.\n");
    printf("                                    ./\"\\   | `.        `.`.\n");
    printf("                                  .'/   .  | _ `.        `.`.\n");
    printf("     /|                          / /    |  || `-.`.         `..\n");
    printf("    / |                         . /     |  ||    `.`.         `.`\n");
    printf("   /  '        _.,.____      _,.'._     '  j       `.`          `..\n");
    printf("  j ,-.`       . \"\"--._`-. ,',.-++.`. ,'  //         `..          `..\n");
    printf("  / '  \\`       \\      `. '.'|  ''  \\`   //            ``.          `.\n");
    printf(" j /    \\`.      \\       || `'       |\\ //              `..    __,....`.\n");
    printf(" |.      `.`.     `.     ||         [|'//                 \\\\_,\"        `\n");
    printf(" ||       |,.`._    `----.`_\"\\   _.-\"  .        ___........\\|\n");
    printf("jj        || `-.`-.______ `/`--'\"       \\   _.-'\n");
    printf("|.        ||     `--..___\"\"              .,'\n");
    printf("||        ||             \"\"|             Y\n");
    printf("||        ||               \\            /\n");
    printf("||        ||           _....\\.         ,\\\n");
    printf("||        '|        ,-'       `,.___,.-. .\n");
    printf("||         L      ,'           `  /     ` .\n");
    printf("||         '`    /              ||       ` .\n");
    printf("||          \\| ,'               ||        `.`\n");
    printf("||        ___|/                 '|          .`.\n");
    printf("||    _,-'    |                  L           ` .\n");
    printf("||  ,'                           ||           ` .\n");
    printf("` ./                             ||            ` .\n");
    printf(" `V                              ||             ` .\n");
    printf("                                 ||              ``\n");
    printf("                                 ||               ``\n");
    printf("                                 ||                `\\\n");
    printf("                                 ||                 `'\n");
    printf("                                 ||\n");
    printf("                                 ||\n");
    printf("                                 !|\n");
    printf("                                 _/ \n");

    break;

case 42:
    printf("                           ---..__\n");
    printf("_____                          `._\"`._\n");
    printf("  `._`\"--_._                      `.  `._._\n");
    printf("     `._   `-._._                   `.   `.`._\n");
    printf("        `.     `-._.                  `.    `.`._\n");
    printf("          `.       `-`._                `.    `-.`.\n");
    printf("            `.        `-`._               \\      `.`.\n");
    printf("              \\          `.`.              \\       `-.`.\n");
    printf("               \\            `..             \\         `.`.\n");
    printf("                \\             `..            \\          `.`\n");
    printf("                 \\             _:`.           |           `..\n");
    printf("                  L       _,-\"\" jj            |     ___......:\n");
    printf("                  |     ,'      ||            |  ,.\"        .'\n");
    printf("                  |   ,'        ||            |\"'           / \\\n");
    printf("                  |  /         /|L       ,\". `.         /   L\n");
    printf("                  |,'         . ` \\      /  \"\"\"  \"`.      j    |\n");
    printf("                  /_          |  `.\\    (\\  <.)|    \\     |    |\n");
    printf("                    `-.       |    \\`.  |_____..     \\   j     |\n");
    printf("                       `,     |     `.`.\\|    V \\   .'\\  |     |\n");
    printf("                         \\    |       `._|       | <  ` j     j\n");
    printf("                          `.  |          `.      |  \\  |      |\n");
    printf("                            \\ |           |L      L  L |__    |\n");
    printf("                             \\|           ||      |  |  __`. j\n");
    printf("                              Y           ||.-.   |  | |   \\ |\n");
    printf("                               \\,--\"\"\"\"\"`-.|`. \\  |  |/|    `\n");
    printf("                                '          |  \\ `.'    j\n");
    printf("                                          (|  | ,.`.  /\n");
    printf("                                      _.-\"_`._| | `' /\n");
    printf("                              ,....../ ,'\" `.__.'_,-'\n");
    printf("                              `-----._`..      \"\"\n");
    printf("                                      `.J \n");

    break;

case 43:
    printf("                           .-\"--.__\n");
    printf("          _                / '+.--'\n");
    printf("           \\.-._          j / |\n");
    printf("            \\`-.`._      . j  |\n");
    printf("             \\  `. `.    | |  L                        _,,--+='\n");
    printf("              L   `. `-. | |   \\                  _.-+'    /\n");
    printf("              |     \\   j  |    \\            _,-'\" .'    ,'\n");
    printf("              .      \\  |  |     \\         ,'   _,'    ,'\n");
    printf("               \\      `j   |      \\      .'   ,'      /\n");
    printf("                `.     |   |       \\   ,'   ,'       /\n");
    printf("                  \\    |   |        \\ /    /        /\n");
    printf("  _,-''\"\"\"\"'\"\"'\"\"`--. j    |         V    /      _,+............._\n");
    printf("-=`...-----...__     `|    |         .   /   _.-'        _,.--\"\",..=.\n");
    printf("      `-.       `._   |    |          L,'  ,'       _,.-'    ,-'\n");
    printf("         `.        `. |    |          |  .'     _.-'       ,'\n");
    printf("            .        \\|    '          L/    _,-'          /\n");
    printf("             `._      `.    L        /   _,'            ,'\n");
    printf("                `-._    \\   `       ,' ,'             ,'\n");
    printf("                    `-.. `   \\     /,-'           _.-'\n");
    printf("                      ,'\"-..  .   /_,..---\"`+'\"\"\"\"\n");
    printf("                     /           '           `.\n");
    printf("                    j                          .\n");
    printf("                   .                           |\n");
    printf("                   |   .-.       ,.            |\n");
    printf("                   |    -'       `.'           |\n");
    printf("                   `                           '\n");
    printf("                    `.      .--.             ,'\n");
    printf("                      `.    `._|          ,-'\n");
    printf("                    _.-`   ,..______.. .  `-.\n");
    printf("                  ,'       |          |      `.\n");
    printf("                ,'         '          |        `.\n");
    printf("               /         ,'            .         .\n");
    printf("               \\     _,-'               `._      |\n");
    printf("                `---'                      `-....' \n");

    break;

case 44:
    printf("                            ,.--\"\"+`-,\n");
    printf("                    ___,..-'  C'  `.' `-.\n");
    printf("                 .\"|      `-,...._   ___:.\n");
    printf("                /'\"|   _,..^..__ _'\"'     `-.\n");
    printf("               ' `\" ,-`c.   ..  `.     ,\"\".  `.\n");
    printf("              /,  ,'       `._'   `.|)  \"'    /\\           .\n");
    printf("          _,.|'- /  .-.             \\         `\".          |\\\n");
    printf("      _.-'   |  |   '-        _     |           |          | \\\n");
    printf("    ,'       |  |            \\.'    |           |          |  .\n");
    printf("   ,          . |                   |           j          j  |\n");
    printf("  /_.-'\"\"\"'\"':.+|                   |          /         ,'   |\n");
    printf(" /'       ,-'    \\                 /        _,'-..___,..'     j\n");
    printf("j|       /        `.             ,^.......-+                 /\n");
    printf("||      /     _,-.\"\"'-..____,..-'-._        \\               /\n");
    printf("| \\   ,|    ,' .'   ,'    .         `.       \\__         ,-'\n");
    printf(" . `-'.|   /  /  _.'       `.         \\       . `---+.-'|\n");
    printf("  `._, ' j   j '\"            `--..     `.     |.     `. |\n");
    printf("        .|   |                           .    ||       `|\n");
    printf("        `'   |,----......__...._         '    ||        |\n");
    printf("             |`._=-=====___''-. `-.      |   / |        '\n");
    printf("          _,.L   `\"\"\"------|  .---'      |  /`-+_\n");
    printf("     ,'\"`/    \\            |  |          |.'.    `\"\"'-.\n");
    printf("     |   \\__,.'`           | j              _+-._     |\n");
    printf("     |    `     `._        | |             ,     `---\"\n");
    printf("      .    `...,-' +._      `|            /\n");
    printf("       `.       -'\"   `-...________,..--.  `.,..\n");
    printf("         \\     |                         `.     |\n");
    printf("          `._  |                          '    /\n");
    printf("             `'                      _,.-'    /\n");
    printf("                                  ,-'        /\n");
    printf("                                 `.       _,'\n");
    printf("                                   `'----' \n");

    break;

case 45:
    printf("                        _..--------..__\n");
    printf("                    ,-\"'    __         `-.\n");
    printf("                 ,-'    .-\"'  |   .--.    `. ____\n");
    printf("               ,'  _..   `\"\"\"'    `-'  _.-'\"'    `\"--._\n");
    printf("             .'   `..'  _           _,' ,\"\"`,        __`._\n");
    printf("      _.--\"\"\"`\"---.._  '.\"   ___..,'__   `\"'        `. `. `.\n");
    printf("    .'__       .-,   `'-+.--\"-------..`-.   `=`       `\"'   \\\n");
    printf("  ,'(__,'   _   \"       |( ,-'\"\"'\"\"'`-.`,|  _.----\"\"'\"`--.../\n");
    printf(" /         |_)          | `-...______,.' |-'        `-'      `-.\n");
    printf("j                      .'_,..........__,'     c.          .-.   `.\n");
    printf("|        _,..  `+' _,.-'\"        .,    `-._               \\__'    `\n");
    printf("|       `___,'   ,'   .:\"',     '\"    .-,  `-.     ,--.      _     |\n");
    printf(" \\             ,'       \"\"             `      `.   `--'    ,' |    |\n");
    printf("  `.         ,'  .'\"\"`.          :\",       __   \\          `..'    '\n");
    printf("    `._     .    `---'            \"       |  `.  \\               ,'\n");
    printf("       `\"--+                   __          `\"'    .           _,'\n");
    printf("           |                 ('  )                |...,,...-'\"\n");
    printf("            `.                 \"'                ,'\n");
    printf("              `-..__                          _,'\n");
    printf("                    `+---.=,---------+.----+\"'\n");
    printf("                ,'\"`/     \"          \"   ,-.\\\n");
    printf("                \\    \\         _        /  | +.\n");
    printf("               .`.            '/       /   | | \\\n");
    printf("             ,'   A   '               /    j |  `.\n");
    printf("            '    / \\   \\             j    / /`.   \\\n");
    printf("             `--'   \\   \\            |   j,'   `.,'\n");
    printf("                      . |-.........,.|   .\n");
    printf("                       `'            `,.' \n");

    break;

case 46:
    printf("           ____                               ____\n");
    printf("      ,-\"|\"    \"\",._                    _,--\"' |  ``-.\n");
    printf("     /   \\.   _,'   `-.               ,'  \\   ,'    ,-\".\n");
    printf("    /      `\"'        |              /     \\.'      |   L\n");
    printf("   /_     .-..    ,'\"\"|             |   _,.    ,--. `.__|\n");
    printf("  j  \\   /    |  /    |     _____   `  j   \\  |    \\     L\n");
    printf("  |  |   `    L  \\   / _.\"\"|    .\"'--._|    |  `.__/     |\n");
    printf("  |  '    `-./    `.+-'    `..-'       |-.  |        ,\"`.|\n");
    printf("  `-'            ,'  )   __,...__       ` `-._      /   ||\n");
    printf("   `,---.      ,'  .'_,-'        ``-._   `-.__|-.../_...'\n");
    printf("    `-..,\\.--'/..-`.'  ..-------..._ ,-.\"'`-.    `.\n");
    printf("            ,\"`.__  `.'    `'  `-' .(   ).   \\     . ,--._\n");
    printf("         ,\"|`._)  `. |  _      ,.  |`-,'  `. |     |'     `.\n");
    printf("        / _|  .    | | `-'     -'  |  .   ,' |,-\"\"-`.,--.   `.\n");
    printf("       /\"\" `.  `\"-'  '    ___       `. `\"'  .'       .   I-.  `.\n");
    printf("     ,'      `-..,.-' ,-'\"   `-.      `\"--'\"/         \\   \\ `.  `\n");
    printf("    /         |      /         |\"-.        /           `.  `. `. \\\n");
    printf("   /          |.    | `. ___ ,.'  |       j            \\ `   `. \\ .\n");
    printf("  j           | `. (`._ \\  .\"   _,{      ,'             L `.   . \\|\n");
    printf("  |           |,' `-.  `\\   \",-'  |_,..-'|              |   L  |  '\n");
    printf("  |           |      `-..'  '__,.-'      |              |    . |\n");
    printf(" /|            L        `\"\"\"'           j               |    | |\n");
    printf("j |            |                        |              j     | |\n");
    printf("| |             L                       |              .     ' j\n");
    printf("| [             |                       |             /       '\n");
    printf(" - `.           |                       |            /\n");
    printf("    `.   ,'\"\"`-,                        |.--..__    /\n");
    printf("      `.'      \\                        '       `.,'\n");
    printf("        `.      \\                     ,'      _,-'\n");
    printf("          `.     `.                 ,'    _,-'\n");
    printf("            `-..__ \\              <___..-\" \n");

    break;

case 47:
    printf("                                       _______\n");
    printf("                                   _,\"\"|      `-._\n");
    printf("                                 ,\"  _.'          `.\n");
    printf("                                ,'\"\"'               `.\n");
    printf("                              ,'       ,.----._  .--. \\\n");
    printf("                             /        `____    \\  \\_ ) \\\n");
    printf("                           ,'              \"\"`-'    \"   L\n");
    printf("                         ,'                             |\n");
    printf("                       ,'.'                              L\n");
    printf("                     ,'-'    _,...._             .\"\"`.   |\n");
    printf("                  _,'     ,-'       `.       ,.   `.  `. '\n");
    printf("              _.-'      .'     ______/       `_)    `._;  \\\n");
    printf("           ,-'           `-\"'\"\"                            \\\n");
    printf("         ,'   ,.---,                                        \\\n");
    printf("        /   .'   _,                    ,\"\"\"`-._         .\"`-.'\n");
    printf("        7-\"'-+--'     ___               `-.__  `.       `.   `\n");
    printf("      ,'      \\_____.'   `.--.'\"\"`.          `-.'         `-..\\\n");
    printf("     /         `.`._|     | |      |`--...,.---.               `.\n");
    printf("   ,'      . `  |    \\    ,-|     ,'..,-'       `.,_             \\\n");
    printf("  /     \"       |.,.._\"'\"'   `-..'  .'            \\ `\"-.._      __\\\n");
    printf(" /              | '-..\"\"..________./              |..-\"\". `+.  (  ,\n");
    printf("j               | L\"`--._....___  /               |_...  `/  \\  -.'\n");
    printf("|             | | |      `--._  \"/                j__..`  `.  `.-'\n");
    printf("|          /  j ' |           \"./       ,.'    \" /_..-\"'\\   \\.  `.\n");
    printf("|         /' / /| |            /         ' \"    /'       \\   \\`.  `.\n");
    printf(" L       / |V j | |           /               ,'          \\   \\ \\   `.\n");
    printf(" |      j  |  | |  L         j              ,'            /    | \\   |\n");
    printf("  L     |  |  | `.  \\        |            ,'             j    /   \\  |\n");
    printf("  .    j   `. L   `._`.     j          _,'               '   '     . |\n");
    printf("   \\   |     `.\\     `\"`    |       _.'                 /   /      | |\n");
    printf("    \\  |       `           /   _,.-'                   /   /       j .\n");
    printf("     \\ |                  /.-\"'                    _,-'  ,'       /,'\n");
    printf("      '                                           '----\"' \n");

    break;

case 48:
    printf("                                           _.----.\n");
    printf("                                       __,'   _,-'\n");
    printf("                                  _..\"_..---\"'\n");
    printf("                               _.'_,-'_____________,......\n");
    printf("                    `. .   ._,_.-',--',.-...........    __;\n");
    printf("                 __  `/ ),`','_.'..,--'_,.---;      `\"\"\"\n");
    printf("              `.,..`\"'  ,.'.-_.-',..-'\"   ,-'\n");
    printf("            _,..        ___-'           ,'\n");
    printf("         ,-'    |     ,'   `-.         '----..\n");
    printf("       ,'       |   ,'        \\             \\.\n");
    printf("      /         '  /           L            `-\n");
    printf("     |        ,'  j            |        ,     `.\n");
    printf("     |    _,+----.|            |       . `.    .-.\n");
    printf("     |   /\\    ,..\\L           '       |   .   |`---\n");
    printf("     |`-| ,\\___|  | \\.        /        |   |  .--            .,|\n");
    printf("     |   V     / ,   '-.....'\"         |   |   `.           ,.-'`'\n");
    printf("     |\\       `-'                      `._,     _\\\n");
    printf("     '|                                         ` _   .-.--\".-\n");
    printf("  _,.. |                                       ,./`.,/   ,.-'\n");
    printf(".' .   |,                            ,---,     \"._      /\n");
    printf("|  `     `.                         /   `.     ,--     /.----...,\n");
    printf(" \\         \\                        \\   .\"    '.._             |\n");
    printf("  `.        L                        `...'  `..--. -\"\"_..    _.'\n");
    printf("    `.      '.,`.                          ..'-.`,_      `-\"'\n");
    printf("      \\       \\` ',-                     .'     \\\n");
    printf("       `.      L  `.  .             ,.-'\"\\       \\\n");
    printf("         \\     |    '`.`. .-. .-..,..'.   \\       \\\n");
    printf("          `-._,'         `\". `-..          \\       `.\n");
    printf("                                            `. -.   |\n");
    printf("                                              '-.+--' \n");

    break;

case 49:
    printf("                      ,-\"\"-.                _ _,....._\n");
    printf("                    ,'     |            _,-\"_..----\"\"-\"\\\n");
    printf("              .   ,      ,'|         _,\"_.-'            |\n");
    printf("            ,'/  /|    ,'  |      ,-'_,'                |\n");
    printf("           / /  /j    /    |   ,-'_,'            __,..--'\n");
    printf("          / /  / '   /    j  ,' ,'          _.--'      /\n");
    printf("         / /  / /   /     |,' .'         ,-'          /\n");
    printf("        / /  j /   /     /' .'        ,-'            /\n");
    printf("       / /   |j   /  __.' ,'       _,'             ,'\n");
    printf("      / /  ,\",|  /,-\".' ,'       ,:_______________/\n");
    printf("     / , ,','j  /\", /,\"/|      ,'                /\n");
    printf("    /  |' /  |_/ / / .' |    ,'                 /\n");
    printf("   /   |,'  ,' .' / /  j   ,'                _,`\n");
    printf("  j   '/ ,-' .'  / /   | ,'              _.-\" |\n");
    printf(" .'   j.'  ,'|  / /    ,'          _,.--'     j\n");
    printf(" | _.-_,../| | / /    |      _,,-'\"        _./\n");
    printf(" j  ,( )__ `.// /   ,'|  _.-'          _.-'  |\n");
    printf(".   | `(  ) |/ /   /  ,`+        _,..-'      '\n");
    printf("|   |   \"'  | /  ,'_,'   `.  _,-'           .\n");
    printf("|   .`.___,'--. /,'       ,+\"               |\n");
    printf("|  | `/         \\     ,-'\"\"'\"\"-.._         .'\n");
    printf(" .,j /           \\ ,-'         \\  `-.      /\n");
    printf("  `|'      /`.    Y-\"'\"\"\"---.._|     `.   /\n");
    printf("   |     ,' / 7   |            |`-.    \\ /\n");
    printf("   |___,'  / /`.  |_           |   `.  ,'\n");
    printf("   `.___..' / /  /  .,.__      |     `.\n");
    printf("     `.____/,' _'   /`.  '`-.._|      Y\n");
    printf("       `-+----'   ,'   7-..   j -.     .\n");
    printf("         |  __.,-'    -|   `-.+   `-.  |\n");
    printf("         |\"'      ,.'` ',   /  `._   `.|\n");
    printf("         |_  _,,.'      |`..      `.   |\n");
    printf("          .'\"          ,'  \\.       `. \"-.\n");
    printf("          `        ,./\"|\\   \\|        `.  |\n");
    printf("           `v.^.,`.    | \\   )     ,    `.|\n");
    printf("             `._     .'   `./_\\.--' .     `.\n");
    printf("                `---'               '      /\n");
    printf("                                     `. _,'\n");
    printf("                                       \" \n");

    break;

case 50:
    printf("                     _,.---'\"\"'\"--.._\n");
    printf("                   ,\"                `-.\n");
    printf("                 ,'                     `.\n");
    printf("                /     _       ,.          `.\n");
    printf("               /     ||      |\"|            \\\n");
    printf("              /      ||      | |             \\\n");
    printf("             /       .'      `_'              L\n");
    printf("            j                                 |\n");
    printf("            |        __,...._                 |\n");
    printf("            |      .\"        `.               |\n");
    printf("            |      '           )              |\n");
    printf("            |       `-...__,.-'               |\n");
    printf("            |                                 |\n");
    printf("            |                                 |\n");
    printf("         ...|                                 |\n");
    printf("      _,'   |                                 |\n");
    printf("  _,-'  ___ |                                 |.-----_\n");
    printf("-' ,.--`.  \\|                                 |     . \\\n");
    printf(",-'     ,  |--,                               |  _,'   `- -----._\n");
    printf("      ,' ,'    - ----.            _,..       _|.',               \\\n");
    printf(" ,-\"\"' .-             \\  ____   `'  _-'`  ,-'     `.              `-\n");
    printf(" .--'\"`   ,--:`.       --    ,\"'. ,'  ,'`,_\n");
    printf("        _'__,' |  _,..'_    ,:______,-     --.         _.\n");
    printf("        -__..--' '      ` ..`L________,___ _,     _,.-'\n");
    printf("                                              '\" ' \n");

    break;

case 51:
    printf("                                        _..-----._\n");
    printf("                                     ,-'__      __`-.\n");
    printf("                                   ,'  '  `    /  |  \\\n");
    printf("                   _____          /   ,...            \\\n");
    printf("              _.-\"\"     `-.      |   /    `. ,-\"\"`.    \\\n");
    printf("             /             `.    |  |   `  || .    |    .\n");
    printf("            j             _. \\   |  `..__.' '      |    |\n");
    printf("           .     __     ,'--. \\ j       ,....`....-'    |\n");
    printf("           |     .---. .     | \\|      (__    )         |\n");
    printf("           |   .'   . || '   |  Y         \"\"\"'          |\n");
    printf("           |   |      | `-..-'  |                       |\n");
    printf("           |    `-...',.--.     |      ,--,.--\"\"'\"-.._ j\n");
    printf("           |        .\"    _|    |      .-\" |    ,\"\"\"`.`|\n");
    printf("           |        `---\"'      `.    /    '   /     |  `\n");
    printf("           |                     L   /,-\"\"-.   _,...     \\\n");
    printf("       _._  L                    |  j|    _ | /     `.    L\n");
    printf("     ,'   `-|                     L ||      | |  '   |    |\n");
    printf(" ,--\"     _||                     |j  `----'  `      |    |\n");
    printf("\"       ,',:|                     .     ,-\"\"--.`-- -'     | _\n");
    printf("     ,-._'  '.                    |     `-...__)         j'\" `-.\n");
    printf("    :,.._:.   `.               ,-'|                      |_,.._ ---.\n");
    printf("               _:......--.,..-'   |                      |     `.  ,`.\n");
    printf("          `\"\"\"' ..../__,  \"----.\"'-\\  _,-'\"`._           | .   __\n");
    printf("                                '-..- .....- .`-...,-\"\"`-,|___.\n");
    printf("                                                '\"-----\"'. \n");

    break;

case 52:
    printf("                                        .\n");
    printf("                         |              |\n");
    printf("                         |             ,|\n");
    printf("                ,_       |\\            F'   ,.-\"\"`.\n");
    printf("               /  `-._   |`           // ,-\"_,..  |\n");
    printf("              |   ___ `. | \\ ,\"\"\"`-. /.-' ,'    ' |_....._\n");
    printf("              |  /   `-.`.  L......|j j_.'      ` |       `._\n");
    printf("              | |      _,'| |______|' | '-._     ||  ,.-.    `.\n");
    printf("               L|    ,'   | |      | j      `-.  || '    `.    \\\n");
    printf("___            | \\_,'     | |`\"----| |         `.||       |\\    \\\n");
    printf(" \"\"=+...__     `,'   ,.-.   |....._|   _....     Y \\      j_),..+=--\n");
    printf("     `\"-._\"._  .   ,' |  `   \\    /  ,' |   \\     \\ j,..-\"_..+-\"  L\n");
    printf("          `-._-+. j   !   \\   `--'  .   !    \\  ,.-\" _..<._  |    |\n");
    printf("              |-. |   |    L        |   !     |  .-/'      `.|-.,-|\n");
    printf("              |__ '   '    |        '   |    /    /|   `, -. |   j\n");
    printf("        _..--'\"__  `-.___,'          `.___,.'  __/_|_  /   / '   |\n");
    printf("   _.-_..---\"\"_.-\\                            .,...__\"\"--./L/_   |\n");
    printf(" -'\"\"'     ,\"\"  ,-`-.    .___.,...___,    _,.+\"      \"\"\"\"`-+-==++-\n");
    printf("          / /  `.   )\"-.._`v \\|    V/  /-'    \\._,._.'\"-. /    /\n");
    printf("          ` `.  )---.     `\"\"\\\\__  / .'        /    \\    Y\"._.'\n");
    printf("           `\"'`\"     `-.     /|._\"\"_/         |  ,..   _ |  |\n");
    printf("                        `\"\"\"' |  \"'           `. `-'  (_|,-.'\n");
    printf("                               \\               |`       .`-\n");
    printf("                                `.           . j`._    /\n");
    printf("                                 |`.._     _.'|    `\"\"/\n");
    printf("                                 |    /\"\"'\"   |  .\". j\n");
    printf("                                .`.__j         \\ `.' |\n");
    printf("                                j    |          `._.'\n");
    printf("                               /     |\n");
    printf("                              /,  ,  \\\n");
    printf("                              \\|  |   L\n");
    printf("                               `..|_..' \n");

    break;

case 53:
    printf("\n");
    printf("         ,-\"\"--.\n");
    printf("        /       \\\n");
    printf("        | ,\"`.   L\n");
    printf("        |     |  |\n");
    printf("        \\_   /   |\n");
    printf("          `-' |  |\n");
    printf("              |  |\n");
    printf("              |  |\n");
    printf("              j  j\n");
    printf("             .  .\n");
    printf("             j  j\n");
    printf("            .  .\n");
    printf("            |  |\n");
    printf("            |  |\n");
    printf("            |  |\n");
    printf("            L  |\n");
    printf("             \\_|._\n");
    printf("       _.-,-\"     `\".\n");
    printf("     ,' .'           \\\n");
    printf("    /  /              \\\n");
    printf(" _,'  /  /             \\\n");
    printf("<    /  /              |\\\n");
    printf("<+-'|  j               |/\n");
    printf(" `--+  |    ___        `    ..-.\n");
    printf("     \\ |  ,\"--.`.       \\__/,\"\".|\n");
    printf("      `-\\||    `.\\--\"\"\"\"' //    |\n");
    printf("         |`    / `          \\  ,'\n");
    printf("          \\|. / ,.  ,-.  _.. \\'___..\n");
    printf("      _____| Y |  `.`./ /  | ;.=\"\n");
    printf("         \"-+=+.|  ! \\  /_! / |_____\n");
    printf("          _|_L, `\"\"\" ._. \"\"  .---------\n");
    printf("       _+==+-`\\. .__,.|...,-=+\\._\n");
    printf("     ,\"\"   | .+-+ \\     )/.'   \\\"-+\n");
    printf("           ,+'  |` \\    // \\    \\\n");
    printf("          '|    | `.\\..'/   \\    \\\n");
    printf("           |    |   `\"\"'     \\    L\n");
    printf("           |    |             \\   |,._\n");
    printf("           |    `             _j .'  '>\n");
    printf("           |  ,..\\           /        /-.\n");
    printf("          ,^.' _  |          `.  .--.'  j\n");
    printf("        ,'  | |/  |-\"`.       |'-'\"\"``-|/\n");
    printf("        |_   .,---.  |\\\n");
    printf("        |/_,`-...-^..`' \n");

    break;

case 54:
    printf("                              ,-'   ,\"\",\n");
    printf("                             / / ,-'.-'\n");
    printf("                   _,..-----+-\".\".-'_,..\n");
    printf("           ,...,.\"'             `--.---'\n");
    printf("         /,..,'                     `.\n");
    printf("       ,'  .'                         `.\n");
    printf("      j   /                             `.\n");
    printf("      |  /,----._           ,.----.       .\n");
    printf("     ,  j    _   \\        .'  .,   `.     |\n");
    printf("   ,'   |        |  ____  |         | .\"--+,^.\n");
    printf("  /     |`-....-',-'    `._`--....-' _/      |\n");
    printf(" /      |     _,'          `--..__  `        '\n");
    printf("j       | ,-\"'    `    .'         `. `        `.\n");
    printf("|        .\\                        /  |         \\\n");
    printf("|         `\\                     ,'   |          \\\n");
    printf("|          |                    |   ,-|           `.\n");
    printf(".         ,'                    |-\"'  |             \\\n");
    printf(" \\       /                      `.    |              .\n");
    printf("  ` /  ,'                        |    `              |\n");
    printf("   /  /                          |     \\             |\n");
    printf("  /  |                           |      \\           /\n");
    printf(" /   |                           |       `.       _,\n");
    printf(".     .                         .'         `.__,.',.----,\n");
    printf("|      `.                     ,'             .-\"\"      /\n");
    printf("|        `._               _.'               |        /\n");
    printf("|           `---.......,--\"                  |      ,'\n");
    printf("'                                            '    ,'\n");
    printf(" \\                                          /   ,'\n");
    printf("  \\                                        /  ,'\n");
    printf("   \\                                      / ,'\n");
    printf("    `.                                   ,+'\n");
    printf("      >.                               ,'\n");
    printf("  _.-'  `-.._                      _,-'-._\n");
    printf(",__          `\",-............,.---\"       `.\n");
    printf("   \\..---. _,-'            ,'               `.\n");
    printf("          \"                '..,--.___,-\"\"\"---' \n");

    break;

case 55:
    printf("                ,|\n");
    printf("              ,' |         .',\n");
    printf("             /   |    /\\_,' j\n");
    printf("            /    |  ,' |    |\n");
    printf("          ,'     |,'   |   .\n");
    printf("         /       '    j   j    _,.-/\n");
    printf("        /      ,'     |   |..-\"  ,'\n");
    printf("       /              |         /                      `\n");
    printf("      /               |       ,'\n");
    printf("    ('  (                 ,\"\"`-.                        /|\n");
    printf("     | | .              ,'      \\                      / |\n");
    printf("     | |p'             /        |                     /  |\n");
    printf("     |.`              '       ,'|-.                 ,'   '\n");
    printf("     /`\"`\"\"\"'\"`-.    /       .  |. `.___           /    /\n");
    printf("    /      ,-\"'_|._,'        |  | `.    `\"--..    /    j\n");
    printf("  ,'     ,',-\"',-'           |,'    `-.       | ,'     |\n");
    printf(" /     .'.'   /  ,-'|       \\'         `.    ,'/      j\n");
    printf("|    .','    /  /   |   ,-.  \\           `+-','       '\n");
    printf("|  .''      .._/   /   /   \\  \\           `.'        /\n");
    printf(" \\/         | /`\"-.'  /_,..\"\\,\\                     /\n");
    printf("            '/    |\"|(       \\ .                  ,'\n");
    printf("                   .| \\       `'                 /\n");
    printf("                    ' _\\       ,.----\"\"-\\      ,'\n");
    printf("                 ,-'\"\"  \\    ,'          `   ,'\n");
    printf("                |        `-.'              ,'\n");
    printf("                .           \\           _.'\n");
    printf("                 \\        ___\\         `.\n");
    printf("                  `.    \"\" `. \\          \\\n");
    printf("            ,-/\"\"\"\"'._       \\_`.         `.\n");
    printf("`         _.`-'\"\"            /_`.\\          \\\n");
    printf("         /.-n+==`       _,,-'\"    \\          \\\n");
    printf("           ,\\ __.-\"\"\"\"'\"           )          `..__\n");
    printf("          (,.'                   _/         .._   _\\_\n");
    printf("          '                    ,\"  _,.-._   -. `_/__ \\\n");
    printf("                              / ),+....._\\ ,--.\"    `'\n");
    printf("                             `\"'          `.._ \\\n");
    printf("                                              `' \n");

    break;

case 56:
    printf("                                ,.-\"\".\n");
    printf("                               ,| .   `.\n");
    printf("   ,-\"\"\"\"'\"`.                 '/ |   /  \\\n");
    printf("  ,'     _.  \\           ,.  (/ ,'  `    .               ,-\"\"--.\n");
    printf(".'j ,  ,\"\"`.  \\         /  \\  -.\\   |\\   L             ,'  ,..  `.\n");
    printf("|( |   |    \\  \\|`-.  ,//\"  \\   `\"--' \\   \\           j   /---.   .\n");
    printf("`-\\|_..'     \\  ||. `/`/  \\  \\---,    `.   \\          |  '.    |  |\n");
    printf("              \\ || \\    `-.|  ` '`\"-,  |    .         '   |    |__|\n");
    printf("               `||/        `       `.. |    |          `--'    |  |\n");
    printf("               ,'                 __.-\"     |                  |  |\n");
    printf("              /                ,'\"       ,-\"'                  '  |\n");
    printf("             /   ,'           '        ,'L                    /   '\n");
    printf("            /. .'.                   .'   |                  /   /\n");
    printf("           |/ /|||               __,'     L                 /   /\n");
    printf("          .-.'|L|'__            --         \\               '   /\n");
    printf("         | . \\                             `.           _,'   /\n");
    printf("         ` ' ,                              .`       _,'    ,'\n");
    printf("          `-+                              /--------'    _,'\n");
    printf("            \\             .               {         _,.-\"\n");
    printf("           ,\"\\            \\       .     ,-\"-----\"\"\"'\n");
    printf("       _,.'   `.           )      |  __,.\n");
    printf("      /        __.        /       |-'\n");
    printf("      .   ..--+.  `/`v  ./     ,-\"\"\"-.\n");
    printf("       `-\"`.    \\     `/ \\           '\n");
    printf("            `-.  \\        `\"\"\"\"--.._  `.\n");
    printf("               )  \\___              `._ `.\n");
    printf("             _/       `-.               _ `._\n");
    printf("     .'\"\"\"--' ,  ,-\"\"`..'           ,\"\"``    `.\n");
    printf("     \\ _.,--.' ,'                   ( ,-.    __'\"\"\"`.\n");
    printf("      \" '.___./                      '  |  '\"  `-.   '.\n");
    printf("                                        |   -.    `-._/\n");
    printf("                                        |   /\n");
    printf("                                        '--.' \n");
    printf("\n");

    break;

case 57:
    printf("                                       _.-\"\"'-.\n");
    printf("     _______                        ,-'        `.\n");
    printf("   ,\" .  ,  `.                  ,. .             \\\n");
    printf("  / ,.-\"\"     \\      ,v\\       / '\\|              `'.\n");
    printf(" /  |     _    |__  j   \\  /| / .  |               |.\\\n");
    printf("j   `._,.+.. ,-'  \\ |.\\ ,`,`'/ /|   \\         ,\"\"- '/ |\n");
    printf("'        |  / _.,_/ || \\,'  / / `    \\_    _.:-...+'  |\n");
    printf(" `-._    `-| /.\"  \\ |''      `. _\\   '.`---..|`-\"'  _/\n");
    printf("     `---' `.L\\    /'   | \\_.  ' `           '--.--'  \\\n");
    printf("               \\ ,-    .'  ,                    |      \\\n");
    printf("                V ,-   -. l            __       |       .\n");
    printf("              ,','    , '              ..+.....'        |\n");
    printf("             /.'    .|                 `,              /\n");
    printf("            | '   .' |                 .'           _.'\n");
    printf("            | . ,'!  |                 `--....,...-'--.. _\n");
    printf("           _|_`-..--\"                   -'             <__\n");
    printf("          /,  `.                                       ,.'\n");
    printf("          \\'   |                                    _,'\n");
    printf("           ._ ,'                                   <\n");
    printf("             \\                                    ,-`\n");
    printf("              \\                                  <\"`\n");
    printf("              .\\                                  \\\n");
    printf("           _,'  \\                     _     ___ ,--\"\n");
    printf("         .'      \\              ,.'--`|:._.._`. `\n");
    printf("         |       _\\'.,_        '| `\"- | `--. `\"`\n");
    printf("          \\         ) `...|`-`,-|      `.._\n");
    printf("           `\"-.     \\-.   `.    '          `,\n");
    printf("               j__._,-'|         `---.       \\ _\n");
    printf("              |-.-'   _'              ` _      )|.\n");
    printf("              `.__..-' `-.               +.__.,'  |\n");
    printf("               ,'         /              \\..-'   ,`.\n");
    printf("       ,-\"----'      ,.--'                \\___,-'   `.\n");
    printf("       /  .-\"'    ,-'                        `.       `.._\n");
    printf("       `-..L____,'                            j __        |\n");
    printf("                                             |    `.      |\n");
    printf("                                              `___,'--....' \n");

    break;

case 58:
    printf("\n");
    printf("\n");
    printf("\n");
    printf("                   _,\n");
    printf("                 .',_..,\n");
    printf("               ,'     /,--\n");
    printf("             .'       ,./.__\n");
    printf("             |_,.----/,,'`.  _\n");
    printf("            .'__     //    `...>\n");
    printf("       ____//|) |    `      /.'\n");
    printf("      (/    `-.-'.._     _,|                 ,.-------.._\n");
    printf("      .             `.  '   \\               /            `-._\n");
    printf("      `..---._       |       `.            j                 `.\n");
    printf("        >-,-\"`\"\"'    |        |`\"+-..__    |              -. `-.\n");
    printf("       ( /|         /____     |  |  |  \\\"\"|+-.._     ___    `.  `.\n");
    printf("        \" `-..._     \"--,_    |  |  `   | |   | `.-.\"   \"-._  |  -`\n");
    printf("             ,'        '_>_   j ,'  '. ,` |,  |   `. `.-v.' `-+..._`.\n");
    printf("            '.         >       '     | |  ' \\ L     ..`.  '        `._\n");
    printf("             '.       /              '|`     \\|      '^,         ..,{ `.\n");
    printf("            / /      /                '       v          |__    ___,'\"\"\n");
    printf("          ,'  >---+-+.        |   __,..--\"`-._          /.-'`\"----'\n");
    printf("         /`.       `. '.      |-\"'            `\"--....-'._\n");
    printf("       .'___'        `._`,    j             ___,-','      `-..._\n");
    printf("  _ _.'    '/.-          '  ,'       __..<\"\"__,.-'              `.\n");
    printf(" `.)         |'---\"\"`.+-.--'-------\"\"-...__  ,-'/ .\"\\          _  |\n");
    printf(",\"\\ ,--.  _,-          ` `'                `'\"\"\"'`\"'\"\"\"`--._  . `/\n");
    printf(" `-`.___.'                                                  `\"-\"'\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");

    break;

case 59:
    printf("            /  ,'(\n");
    printf("           /`-'   \\__.,\n");
    printf("         ,'     .-\"\\ `---/                     /\n");
    printf("      |`'      /,'||    '.               ,`. ,(,_. _,\n");
    printf("  __  |  ,--+--.  ||     `'/  .     _.-\"'   `    \"\"`.\n");
    printf(".\" ,'-'.\"d__|  `.'_'    _,-    ,.  /        ._      `\\_\n");
    printf("|,'     `-..-----\"._     `.     ` |           `.     \\.\n");
    printf(" `\"V\"--._           `.   `._    ' |             \\     \\,\n");
    printf("  \\      `----      '. _,-'    ,' |              \\     .\n");
    printf("   `._             .--`       `.  |               .    |\n");
    printf("      `-.          `,.       ,--  |               L    '\n");
    printf("        /   [-,=.---' `.__`,`     `.              |     \\\n");
    printf("    _.-'    `.._'--.._   - `--+\"\"\"\" '._           |      `._,\n");
    printf("    \\        _  ---..__`--._'-.`,  ,' ,`._       j         -,'\n");
    printf("   .'        ,-..     ,'    `. `  . ,'  / `._   /`._    ___,-'_\n");
    printf("   l        .|_  `,  -' . .-\"      v   /   _.`.'`   7\",',-,.-\" --,\n");
    printf("    \\      `.  .,  -..',')'\"\",   .    /  .'    |  ,'.',/| ,.     >\n");
    printf("     V-.    '    -._,-\"    _,  .,'   j ,^    ,'/`--' `    -..,   `...\n");
    printf("     '  \\/\\|.     :/       './`'|    |/    ,' /            `___    ,'\n");
    printf("           | `. ,'`-.        /  |    ' _.-'  |               ,'  .\"\n");
    printf("           L._`.'   |       Y,.'|    ,-    ,-'          __.,'  .'\n");
    printf("            \\ \\  /`.|     _,.',''.  .`-,../         ,.-/,...-`'\n");
    printf("             \\ ,|| |/_.-\\\" .+'    \\._  _,'       _.'\"  |\n");
    printf("              '  ' L| | `,' |      `.\"\"          ,.    |\n");
    printf("              )    `|\"      |        `>.. _,..--\" j    |\n");
    printf("           ,-'      |____,..'       ,',-\"'       /   _,'\n");
    printf("          /\"'    _,.'               |(      _..-' `\"\"\n");
    printf("          `----\"'                    `'\"\"'\"\" \n");
    printf("\n");
    printf("\n");

    break;

case 60:
    printf("  _..__                                    ___\n");
    printf(" /     `._                          ,--\"\"\"\"   `\"-.\n");
    printf("|         `.                    _.'\"\"/`.        |/`-.\n");
    printf("|           `.                ,+ `..' | |       |'...+.\n");
    printf("|     \\       \\              / /\\____,' '    __ `.`._,\".\n");
    printf("|      ..      \\           ,'  \\      .' ,-\"'  `. `.._,'`.\n");
    printf("|       .`.     \\         /     `-..-'  .  _.... |._      \\\n");
    printf("'        ' `     \\       /          ,-\"\"`.____...'  `.     \\\n");
    printf(" `        `.`.    \\     '         ,'   _,--------.`.  `.    L\n");
    printf("  `         ` `.   \\   j         /  .,' ,\"_.....`.`.`   \\   |\n");
    printf("   `.        `. `.  \\  |        / ,'/ .','..... `.\\ \\|   .  |\n");
    printf("     `.        `. .  \\ |       j . / ..'.,-\"\". \\ || ||   |  |\n");
    printf("       `.        `.`. \\'.      | | | |||.   .,.','/ /'   |  |\n");
    printf("         `-.       `. .:\\      | | | ||'`..___.'.','/   j   |\n");
    printf("            `-._     `-._\\      \\'.`.`..`..__....','   ,   /\n");
    printf("                `--......-\\      \\ `.`.`.......-\"'   ,'   /\n");
    printf("                           `.     `. `-..____,.-\" _.'   ,'\n");
    printf("                             >.     '--...___,..-'   _.\"\n");
    printf("                           ,'  `--,__            _,-\"  `-.\n");
    printf("                       _.-'      '   `'--------\"' `.      `-.\n");
    printf("                     .'        ,'                   \\        `.\n");
    printf("                    .        .'                      `.        .\n");
    printf("                    |      ,'                          `._     |\n");
    printf("                     `----'                               `\"--\" \n");
    printf("\n");
    printf("\n");

    break;

case 61:
    printf("             ___   _,-'\"\"-.\n");
    printf("           /`.  `./,\\`.    `.\n");
    printf("          /'. |  / || |      .\n");
    printf("         . `|,+-'| `| |       `._\n");
    printf("         `,-'    `. | '          `.\n");
    printf("        ,' -'      `\"'             `.\n");
    printf("       /\"`-.                         `.\n");
    printf("      :`.   \\                          .\n");
    printf("     ' `.\\   \\                          `\n");
    printf("    .`.  .`   `           `.             .\n");
    printf("   / `.'  .`   .      .     \\             \\\n");
    printf("  /``  .`  `\\   .      \\     .             .\n");
    printf(" j  .\\  .:  .'  :       .    '             |\n");
    printf(" |`. .. ||  :|  |        ,..--`._          |\n");
    printf(" |:| |: :|  |:  |      ,'        |         |\n");
    printf(" ||| :: |:  |:  |      |         |         |\n");
    printf(" :'j '| :|  :|  |      |         |         |\n");
    printf(" `/ .j  ,:  :|  |     ,'         `         |\n");
    printf("  \\/ / . '  ',  |   .'            \\        '\n");
    printf("  ` , /,'  /.  j   |               .      /\n");
    printf("   `.'/   /'   '   |  .             .   ,'\n");
    printf("     .  .'/   /    `._/             '  /\n");
    printf("      `.,'   /       |          __,' .'\n");
    printf("        `-._,         `.   _,.-\" _,-'\n");
    printf("            `+..____    `\"'    .'\n");
    printf("           _/    |  `\"\"\"''\\    '\n");
    printf("     _,.-\"'      \\        |     \\\n");
    printf(" _.-'             .       |      `\n");
    printf(",                 |       |       `.\n");
    printf("`_          __,,-'        '         `.\n");
    printf("  `'\"\"'\"'\"''             .            .\n");
    printf("                         |            |\n");
    printf("                         '            /\n");
    printf("                          `.        ,'\n");
    printf("                            `-..,.-' \n");

    break;

case 62:
    printf("                               __,.-\"\"\"'\"--..._.,---.\n");
    printf("                           _,-'               /      `.\n");
    printf("                        _.'                 ,'   ,-\"\"`.|\n");
    printf("                      ,'                        / ,+\"`.;\n");
    printf("                    ,'   ____                  . |_/  /\n");
    printf("                   /  .\"'    `-.               ` `..-/`.  _\n");
    printf("                  '  /                     .    `---'   `: `.\n");
    printf("                 /  .    ,-\"\"`.           .'             \\`-.`+\"\"`\"`.\n");
    printf("                /   |  .' ,\"\".|               _,...,._    L |  `     `.\n");
    printf("               /    |  | ._)  /     \\    _.-\"'        \"`. | j          .\n");
    printf("              j     `  ' |  ,'        ,-'   ___......_   .|\"           |\n");
    printf("              |         `-+'        ,'  _,\"__.---\"\"\"`-.`.||            |\n");
    printf("              '                   ,'  ,'.-'    _______ `.`|\\           |\n");
    printf("            .\"                   /  ,\",'   _,\"+.------+`.`:|           |\n");
    printf("          ,'     .             ,' .,-'   .\".-'  _..._  ` \\''    .      ;\n");
    printf("       _,+      /             ,  ,/    ,'.' .-\",.----.+ `7  `.   `._,.'\n");
    printf("      /  '    ,'             .  '.   ,\".\" .:,-'__     :|j     `-.-'\n");
    printf("     j    \\  /|`            ,  //   .,' ,'.' .\"__`.   ||'\n");
    printf("   ,-+     `\" | \\             /.   //  /,\" ,'.'  \\ \\  |'\n");
    printf("  /           '  \\         : j '  //  //  .,'     || ,\"\n");
    printf(" /           /    \\        | :|  j.' j/   ||_.\") , ;<_\n");
    printf(".            `-.   `.      : ||  || |.    `..-'.'.'   `'-._\n");
    printf("|              |     `.    | |:  :| |'        _,'          `.\n");
    printf("|              |      /`-._`.`:. \\' `.`..__.-'+              `\n");
    printf("`          .   F     ,     /\"`+-+.^+--`\"\"\"     `._            |\n");
    printf(" `.       |   /     /     .                       `._         /\n");
    printf("   `._   _,..'    ,'      '                          `\"-....-'\n");
    printf("      `\"\"        /       j\n");
    printf("               ,'        |\n");
    printf("              /          |\n");
    printf("             j           '\n");
    printf("             |          /\n");
    printf("             |         /\n");
    printf("             '        /\n");
    printf("              `.___,.' \n");

    break;

case 63:
    printf("                                                        _\n");
    printf("                                                   _, -\"'|\n");
    printf("                                               _.-'   ,'j\n");
    printf("                       ____           _,.....-'      /  |\n");
    printf("                      `.   `'--..,--\"'              .   |\n");
    printf("                       `.                           |   |\n");
    printf("                        .`.                         \\  j\n");
    printf("                _.,     '  .                         ` |\n");
    printf("              .','       . |                            \\\n");
    printf("            ,\" /         `./                             \\\n");
    printf("           /  /           /                    ,-'        \\\n");
    printf("         ,'  j           j  .._              ,'            L._\n");
    printf("        /    |           |     `.          ,'             ,'  `-.\n");
    printf("       .     |           |       `.       .            _,'       `.\n");
    printf("       |     |           `.        `               _,-'            \\\n");
    printf("       |     `           / `-.                  ,\"/                `.\n");
    printf("       |    _.\\         j     `-.._       ,   .' |                  ;\n");
    printf("       '  ,'   \\        |        _,'.    '  ,'    `.              .'\n");
    printf("        +'   ,.-^.      `-..,..-'/ _,^-----+.       `._       _,-'\n");
    printf("        .+--`._   `-._     L_   j-\"          `-.  _,-\\ `..,--'\n");
    printf("          \\    `      `\"-+'  `-.'               \"\" ,.'/ ` |      ,\n");
    printf("_____      L    `       /       `.._.----.._   _.-'  /   F     ,'|\n");
    printf("`.   `.    |     \\     '.           `\"\"\"-+.-`\"'     '    |`. ,'  |\n");
    printf("  `.   `.  |      L   _,+\\__              `          \\   |/ /    |\n");
    printf("    \\    +,'      |  '     `.`._           `.         |  |.,     |\n");
    printf("    `.  '         |,\"        \\  `.          |.      _,|         /\n");
    printf("      `           |           |   +.       / | _,-+'  |        /\n");
    printf("       \\          |          '    |\\.     /-',\"  /    |       j\n");
    printf("        \\         |         /_    | \\`..,-\".\"   |     j       |\n");
    printf("         \\         \\ _   _,'  `-.  `-,|/___.\\,-.|    /        '\n");
    printf("         `         `' \"\"\"        `\"\"'            \\  |        .\n");
    printf("          `. ,\"\"'   |                             `-+`./     |\n");
    printf("            `.     '                                  |      F\n");
    printf("              )   |                                    \\    /\n");
    printf("             /__,.'                                     \\,.' \n");

    break;

case 64:
    printf("                       .-\n");
    printf("                       | \\               _,\n");
    printf("                      j   \\           ,-' |\n");
    printf("                      |    \\       ,''   .'\n");
    printf("                      |     \\    ,'   .  |\n");
    printf("         .-`.        .|    __\\_,'    ,  ,\n");
    printf("       ,'   |        ||  \"\"        .'  /\n");
    printf("      .     +.      ,\"'           .   /   ___\n");
    printf("    ,-.\\ _,`.'     ,  __._        `. ,  ,'   |\n");
    printf("    .  `'   /     /  <   ,'    _    \\`.'     `-,._\n");
    printf(" ,\\_|`.,-`.'     /`. `-^-'  _.|    .-\"||     .'   `-.\n");
    printf("` `. //`.`      j \\`.     ,'|)|   ,\\  |`.    |  ,.--'\n");
    printf(" `. `'`//       |  `|   .:,-'     |`.'   `.___`\" '\n");
    printf("  `.|>,'\\       |`..|  /     ____.' |    `-. >    \\,_..._\n");
    printf("  // `   \\     ,',-'| /  \"'-\".  ` `.`.    ,-\"\"\\  ,'      `\".\n");
    printf(" (/   :  `-._,/ /,'`./  '\"-._ `. `. ``--..\\_,-' ,'          \\\n");
    printf("      '.    .',' /'|     /|  `. `. ._.__ _,'.\"|'             \\\n");
    printf("        .   `,' /  |  ` /-'    \\  `. ` -..-'  |\"`.            '\n");
    printf("         `--'/ /    `+-'        \\  ``.       .    `.          `\n");
    printf("            ' .       `-.  ,-\"--.+  \\ .    .' `.    `    .   | \\\n");
    printf("           '| |          `.\\,\" ,. ` ' '_.-'     \\    \\   |   ' |\n");
    printf("           |' |    __,.-\"' .| '|`. . \\`.   \\     \\    .  | ,'  |\n");
    printf("           || |  ,'\\        .`. V  | |     |      .   |  '   /.'\n");
    printf("           `| | /   `._     `. _|  | ||    |      |   | /..-' /   .\n");
    printf("            ' . '      /`---'.`.`._| '|,--.|      |   |'     /    '|\n");
    printf("             . . \\    ,'      ` \\/ '/ `    `._    '  ,'     |   ,' |\n");
    printf("              `.\\ `.  \\        `. .'   |      `.,' ,'|      '+-'   '\n");
    printf("            _.--`.-j   `-.-..    `-.   `-.     | ,/  `.       `  .'\n");
    printf("          .'_.'+\"\"' _   _,.'-`      `-..._,\\   |-'     `-...__..'\n");
    printf("          ' /_..|/-' `\"'                ,_.`'   `..__\n");
    printf("                                          `.  `-._  ,-'\n");
    printf("                                           `,..`. `/  |\n");
    printf("                                            :  /    `.'\n");
    printf("                                             `.' \n");

    break;

case 65:
    printf("                                               _,'|\n");
    printf("                                             .'  /\n");
    printf("                    __                     ,'   '\n");
    printf("                   `  `.                 .'    '\n");
    printf("                    \\   `.             ,'     '\n");
    printf("                     \\    `.          ,      /\n");
    printf("                      .     `.       /      ,\n");
    printf("                      '       ..__../'     /\n");
    printf("                       \\     ,\"'   '      . _.._\n");
    printf("                        \\  ,'             |'    `\"._\n");
    printf("                         |/               ,---.._   `.\n");
    printf("                       ,-|           .   '       `-.  \\\n");
    printf("                     ,'  |     ,   ,'   :           '__\\_\n");
    printf("                     |  /,_   /  ,U|    '            |   .__\n");
    printf("                     `,' `.\\ `./..-'  __ \\           |   `. `.\n");
    printf("                       `\",_|  /     ,\"  `.`._       .|     \\ |\n");
    printf("                      / /_.| j  ---'.     `._`-----`.`     | |\n");
    printf("                     / // ,|`'  `-/' `.      `\"/-+--'    ,'  `.\n");
    printf("                 _,.`,'| / |.'  -,' \\  \\       \\ '._    /     |\n");
    printf(" .--.      _,.-\"'   `| L \\ \\__ ,^.__.\\  `.  _,--`._,>+-'  __,-'\n");
    printf(":    \\   ,'          |  | \\          /.   `'      '.  `--'| \\\n");
    printf("'    | ,-.. `'   _,--' ,'  \\        `.\\            7      |,.\\\n");
    printf(" `._ '.  .`.    .>  `-.-    |-.\"\"---..-\\        _>`       `.-'\n");
    printf("    `.,' | l  ,' ,>         | `.___,....\\._    ,--``-.\n");
    printf("   j | .'|_|.'  /_         /   _|         \\`\"--+--.   ` ,..._\n");
    printf("   |_`-'/  |     ,' ,.._,.'\"\"\"'\\           `--'    `-..'     `\".\n");
    printf("     \"-'_,+'\\    '^-     |      \\                    /         |\n");
    printf("          |_/         __ \\       .                   `.`.._  ,'`.\n");
    printf("                  _.:'__`'        `,.                  |   `'   |\n");
    printf("                 `--`-..`\"        /--`               ,-`        |\n");
    printf("                   `---'---------'                   \"\"| `#     '.\n");
    printf("                                                       `._,       `:._\n");
    printf("                                                         `|   ,..  |  '.\n");
    printf("                                                         j   '.  `-+---'\n");
    printf("                                                         |,.. |\n");
    printf("                                                          `. `;\n");
    printf("                                                            `' \n");

    break;

case 66:
    printf("                        ,.\"--.\n");
    printf("                   _.../     _\\\"\"-.\n");
    printf("                 //  ,'    ,\"      :\n");
    printf("                .'  /   .:'      __|\n");
    printf("                || ||  /,    _.\"   '.\n");
    printf("                || ||  ||  ,'        `.\n");
    printf("               /|| ||  ||,'            .\n");
    printf("              /.`| /` /`,'  __          '\n");
    printf("             j /. \" `\"  ' ,' /`.        |\n");
    printf("             ||.|        .  | . .      _|,--._\n");
    printf("             ||#|        |  | #'|   ,-\"       `-.\n");
    printf("            /'.||        |  \\.\" |  /             `\n");
    printf("           /    '        `.----\"   |`.|           |\n");
    printf("           \\  `.    ,'             `  \\           |\n");
    printf("            `._____           _,-'  `._,..        |\n");
    printf("              `\".  `'-..__..-'   _,.--'.  .       |\n");
    printf("               ,-^-._      _,..-'       `.|       '\n");
    printf("           _,-'     |'\"\"'\"\"              `|  `\\    \\\n");
    printf("       _.-'         |            `.,--    |    \\    \\\n");
    printf("  _,.\"\"'\"\"'-._      '      `.     .      j      '    \\\n");
    printf(" /            `.___/.-\"    ._`-._  \\.    |      |     L\n");
    printf("/  ____           /,.-'    . `._ '\"\"|`.  `      |     |\n");
    printf(" `.    `\"-.      / _,-\"     `._ `\"'\".  `. \\     '     '\n");
    printf("   \\       `-   .\"'            \"`---'\\   ` `-._/     /\n");
    printf("    `-------.   |                     \\   `-._      /\n");
    printf("             \\ j                      .       `...,'\n");
    printf("              `|                       \\\n");
    printf("               '                        \\\n");
    printf("                .                      / \\\n");
    printf("                |`.                   /   `._\n");
    printf("                |    `.._____        /|      `-._\n");
    printf("                |        |   Y.       |.         `.\n");
    printf("                |       j     \\       '.`\"--....-'\n");
    printf("             _,-'       |      |        \\\n");
    printf("          .-'           |     ,'         `.\n");
    printf("         '              |     |            `.\n");
    printf("         `.        __,..'     '.             \\\n");
    printf("           `-.---\"'             `-..__      _/\n");
    printf("                                      `'\"\"\"' \n");

    break;

case 67:
    printf("           ,-\"\"\",.--\n");
    printf("         ,:-'_.--\"\"\"\\\n");
    printf("       ,\"/,-'  _,..--+-.\n");
    printf("      .,'/ _.-'         \\\n");
    printf("      |||,'_.-.          \\ ____\n");
    printf("      |.','U| |         .-'    `-.\n");
    printf("    ,\"   |_L:/        ,'          `.\n");
    printf("   j                 /              .\n");
    printf("   \\_______...-7    j           ___ |\n");
    printf("    V V/     _.'    |    _,.---- ,_`\"-.\n");
    printf("     ,/_...-\"   __.-|  -\"    `,.   ``.'`.\n");
    printf("     `..,......\"    `.  | \\    `+`. `  \\ .\n");
    printf("       j /            `./ \\\\    ` .  \\\\ . .\n");
    printf("       | |               ` `\\     \\'  \\' \\|\n");
    printf("       | |              | `.`+. /         \\\n");
    printf("       ` '              |   `\".',  `\\  `|  )\n");
    printf("        \\ \\           .'     . ||   || ||.'\n");
    printf("         `>`.,.....-----\"'\"\"\"\"\\`|   |' |||\n");
    printf("         / .||D.\\\\|.'\\ () (_) (\\|  j|  j/|\n");
    printf("        / +,|| ||||_____........|  || / .'\n");
    printf("     _,'.\"'_|\\.'/|   _,---._    |  .' ,'\n");
    printf("  .\"' .   '\"j-...' ,' ,     `. .'  '  |\n");
    printf(" /  ,/  ,'.'`     /  /       ,'       `.\n");
    printf(" | /| ,`./   \\   / .'        |         |.\n");
    printf(" | ||_|./ .   `.j /          `.        | )\n");
    printf(" `-'`.+' /      | `          ,'`.__     Y\n");
    printf("     .' /       | `.       .'   /  `\"\"'\"\n");
    printf("     |  '      /|    .___.'   ,'\n");
    printf("      `.   / -' `.        ,   `.\n");
    printf("       |  /       `+.     |     `.\n");
    printf("       |  \\        | `    `       \\\n");
    printf("        \\  `.      |`.`.   `.      |\n");
    printf("         \\   `.    |  `..    `.    '\n");
    printf("         /     `-. |    `.     `  /\n");
    printf("  ____.-'          `.  _,'      --\\\n");
    printf(",' .'_.,_.         __:\"            `.\n");
    printf("| ( | (         ,-\" ,-'.\" ,'_.      |\n");
    printf("`-`-^--`--------'__|__(  | /   _,--\"\n");
    printf("                       \"\"--'..' \n");

    break;

case 68:
    printf("                 __.\"`. .-.                    ,-..__\n");
    printf("              ,-.  \\  |-| |               ,-\"+' ,\"'  `.\n");
    printf("              \\  \\  \\_' `.'             .'  .|_.|_.,--'.\n");
    printf("               \\.'`\"     `.              `-' `.   .  _,'.\n");
    printf("                \\_     `\"\"\"-.             .\"--+\\   '\"   |\n");
    printf("                | `\"\"+..`..,'             `-._ |        |\n");
    printf("               j     |                       '.       _/.\n");
    printf("              /   ,' `.      _.----._          `\"-.  '   \\\n");
    printf("             |   |     |   ,'  ,.-\"\"\"`.           |  .    \\\n");
    printf("    __       |   '    /-._.  ,'        `.         |   \\    \\\n");
    printf("   (  `.     `.     .'    | /  _,.-----. \\       j     .    \\\n");
    printf("    `. |.  __  `,         |j ,'\\        `|\"+---._|          ,\n");
    printf(" .-\"-|\"' \\\"  |   \". '.    ||/d |_-\"\"`.    /     ,'.          )\n");
    printf(" `._. |  '.,.'     '  `  ,||_.-\"      |  j     '   `        .\n");
    printf(".\"'--:' .  )        `.  (     _.-+    |  |                  |\n");
    printf("`-,..'  ` <_          `-.`..+\"   '   ./,  ._         |      |\n");
    printf(" `.__|   |  `-._     _.-\"`. |   /  ,'j      `. `....' ____..'\n");
    printf("   `-.,.'    \\  `. ,'     ,-|_,'  /  |        `.___,-'   )\n");
    printf("      `.      `.  Y       `-..__.',-'    __,.'           '\n");
    printf("        `         '   ,--.    |  /            `+\"\"       `.\n");
    printf("         `.       ,--+   '  .-+-\"  _,'   ,--  /     '.    |\n");
    printf("           `-..   \\     __,'           .'    /        `.  |\n");
    printf("               `---)   |  ____,'      ,....-'           `,'\n");
    printf("                  '                 ,' _,-----.         /\n");
    printf("                   `.____,.....___.\\ _...______________/\n");
    printf("                                  __\\:+.`'O O  O O  O |\n");
    printf("                              ,-\"'  _,|:;|\"\"\"\"\"\"\"\"\"\"\"\"|\n");
    printf("                            ,'   ,-'  `._/    _.\"  .`-|\n");
    printf("                         .-\"    '      \\    .'      `.`.\n");
    printf("                        :      .        \\   |        / |\n");
    printf("                         .      \\.__   _,`-.|       /  |\n");
    printf("                         `.      \\  \"\"'     `.         `....\n");
    printf("                           .     |            \\             `.\n");
    printf("                          .'   ,'              \\              |\n");
    printf("                  ,------'     `.               `-...._  '\"-. '.\n");
    printf("                 / ,'\"'\"`        |                  `--`._      `.\n");
    printf("                 `\"......---\"\"--'                         \\       .\n");
    printf("                                                          |        `.\n");
    printf("                                                         (   -..     .\n");
    printf("                                                          `\"\"\"' `....' \n");

    break;

case 69:
    printf("                _.--\"'\"\"\"--._\n");
    printf("              .\"             `.\n");
    printf("             /                 .\n");
    printf("            j                   .\n");
    printf("            |                   |\n");
    printf("            |                   |\n");
    printf("            | (')              j\n");
    printf("            `                 ,`.\n");
    printf("             \\               ,^. `.\n");
    printf("              .             /   \\  .\n");
    printf("              |            /     . |\n");
    printf("              |          ,'      | |\n");
    printf("             ,'---..___ /        | |\n");
    printf("            ' `--..___ \"`.      .  |\n");
    printf("             `\"--....___.'     /  j__.....__\n");
    printf("                              /   |         `.\n");
    printf("                             / _,------._     `.\n");
    printf("                            /,+_         `.     `.\n");
    printf("                          ,'    `-.        \\      .\n");
    printf("                         .         `.       \\      \\\n");
    printf("                         |           `.     |       \\\n");
    printf("                         |             `.   |_,..__  .\n");
    printf("                         |\\              \\  |      `.|\n");
    printf("                         | `.,--------._  \\ |        `\n");
    printf("                         |  |           `. \\|\n");
    printf("                         |  |             `.|\n");
    printf("                         |  |\n");
    printf("                         |  |\n");
    printf("                         |. '\n");
    printf("                        .' \\ `.\n");
    printf("                     _,' ,' `. ._\n");
    printf("   ---====+,______,.\"_.-'     .  `.\n");
    printf("   _,..==`'_.+'-\"\"\"\"'         / ^.\\`:._\n");
    printf(" ,=\"/    ,\"            ....==+ /  `\\  `:.\n");
    printf("'  /    / |               _+:-'    .|   ``.\n");
    printf("       '  `.           --\"\"        |'     `\\\n");
    printf("                                   ' \n");

    break;

case 70:
    printf("                                    _...._\n");
    printf("                                  ,'   __ `.\n");
    printf("                                .'   ,'  `. |\n");
    printf("                               .   .'      .|\n");
    printf("                              /   .        ||\n");
    printf("                          .-\"'\"\"\"-'        ,'\n");
    printf("                      _,'\"\"\"'\"--._ `.\n");
    printf("                    .'            `.:\n");
    printf("                  ,'                `.\n");
    printf("                 /     _              \\\n");
    printf("   ..--._       /     ._;              \\\n");
    printf(" ,'      `.    j                        .\n");
    printf(".          `.  |                        |\n");
    printf("|           ,+-' ,-\"\"-.       _.-\"'\"\"\"`\"`._\n");
    printf("|          : |/ /`.    |    ,'             `.\n");
    printf("|          |// :  |    |   ,                 '.\n");
    printf("'    .     |/  '-\"     |  /                    `.\n");
    printf(" `    \\   ,'    `-...,'  j                       `\n");
    printf("  '._/_\\.'               |                        `\n");
    printf("  .'   `\"-._             |                         \\\n");
    printf("  |         `.           |                          \\\n");
    printf("  | --+.      `.          .                 ___      .\n");
    printf("  '   | `.      `.         .           _.-\"\"   `\"._  |\n");
    printf("   .  '    .      `.        `-.____,.-' /          `.|\n");
    printf("    .  `    `.      .                  /             `\n");
    printf("     `. `.    `.     \\                ,\n");
    printf("       .  .     .     .             ,'\n");
    printf("        `  `.    `.    .           .\n");
    printf("         `.  `.    .   |        _,'\n");
    printf("           `    `. |   |      ,'\n");
    printf("            `.    `'   |  _.-'\n");
    printf("              `-.      ;-'\n");
    printf("                 `--..\" \n");

    break;

case 71:
    printf("                                       ___\n");
    printf("                                    ,\"\" __\"`.\n");
    printf("                                   / .'\"   `-`.\n");
    printf("                                  / /        ` .\n");
    printf("                            _,.__. /_,...._   \\ \\\n");
    printf("                         ,-'     |j        `-._\\ \\\n");
    printf("                      _,'        ||            `._\\\n");
    printf("                    ,'_,..,.      |        .----._`.\n");
    printf("                  _,\"'   / /     `'         `.   :`-'\n");
    printf("                        / j               ,_  \\   `|\n");
    printf("                       j ,'-._      _..-\"\"' | `.  ||\n");
    printf("                       | |    `'-.,'        |  |  ||\n");
    printf("                       | |  _.              ' j   ||\n");
    printf("                       ' '.'.'         \\\"-./ ,    |'\n");
    printf("                        ` `/_           \\_/ /     | L\n");
    printf("                         `._ `-..___,.-'\"_,:      | |\n");
    printf("                          | `._      _,-' ||      | |\n");
    printf("                          |`..,+----`.__,\" |      | |\n");
    printf("                          |                |      | |\n");
    printf("         _.--\"\"\"\"--._     |               _'    _.+-'\"\"\"'`-._\n");
    printf("       ,'            `-.  |.-.           , `\\ ,'             `.\n");
    printf("     ,'                 \\j |  |          `./ /                 `.\n");
    printf("    / _.--\"\"\"--._        | `-\"               |    _,.-------.._  \\\n");
    printf("   /.'           `-.    j                    | ,-'             `-.\\\n");
    printf("  ,'                `-. |                    |'                   '.\n");
    printf(" /   __                \\|                    /                      `\n");
    printf("j .'\"  \"-..             |  _         ,\"`.    |           _,.--'\"\"'-. .\n");
    printf("|/:        `._          / | \\        |  |    |        _,:           \\|\n");
    printf("` '           `-._    ,'| `.,'       '.-'    `..__,..' '`.   __\n");
    printf(" '                `\"\"'  '                    ;          `.`.'  \"'--...,'\n");
    printf("                         .  Y.          /\"','             '-..____,.-'\n");
    printf("                          `-._         _`-'\n");
    printf("                              `\"------\" \n");

    break;

case 72:
    printf("                             _,--'\"\"\"`\"--._\n");
    printf("                           ,'            _.-+._\n");
    printf("                       ,-.'            ,'      `.\n");
    printf("                     .'  |            .          `.\n");
    printf("                    /    '            |            \\\n");
    printf("                   /    /             |             L\n");
    printf("                  /    /            . |             |\n");
    printf("                 j    /             | '             |\n");
    printf("                 |   /              '  .            |\n");
    printf("                 |  j  .             \\  .           |\n");
    printf("                 '  | /               `  `.       .''\n");
    printf("                  \\ |j                 `.  `-....\" j\n");
    printf("                  |`'|   ,',..           `.._      |\n");
    printf("                  `. `   |/   \\              `     |\n");
    printf("                    `.   `.   |                    |\n");
    printf("                     |     `__'                    |_,..---..\n");
    printf("                   __|                            ,'         |\n");
    printf("                .\"\"  '     .    '               ,'           |\n");
    printf("                |     .    |     \\   ____     ,'             |\n");
    printf("                .      `-..L      `,'u   `:-./              j\n");
    printf("                '        |u \\     /    _,-'  |             /\n");
    printf("                 `.   ,./`\"\"`\\_ ,'`\"--'      |            /\n");
    printf("                   `./  \\..._  |    _,..._   |.---+.    ,'\n");
    printf("                    / ,'     `.|  ,'      `--'-.   \\`--'\n");
    printf("                   j .         `.'              `.  .\n");
    printf("                   | |                           |  |\n");
    printf("                   | |                           |  |\n");
    printf("                  j j                            |  |\n");
    printf("                 ,' |                            |  |\n");
    printf("           ___.-'  ,'                            |  |          _,-..\n");
    printf("    _,.-'\"\"   __,.-'                             |  |       ,-' ,--\"'\n");
    printf(" ,-',.-' _,.-'                                   |  '     ,'  .'   /\n");
    printf(". ,' _,-'                                         .  `---'  ,'  _,'\n");
    printf("|/ .'                                              `.    _,' _,'\n");
    printf("`-'                                                  `\"-`.,-' \n");

    break;

case 73:
    printf("                                      _.._,-\"\"-.._     \n");
    printf("                             _....\"\".'_,./        `.\n");
    printf("                           .'  ,|   ,'   |          `.\n");
    printf("                          ' _,'\"'\"\"'      `.          |\n");
    printf("                         .,' ___            `--....__ |\n");
    printf("                        ,|.\"\"   `-.____,.--'\"\"\"\"`-._ `'.\n");
    printf("                      ,','            _,.--         `.._`.._\n");
    printf("                    ,.,'          _.-\"   /'\"\"-._        `\"'-`.\n");
    printf("                   /      ,-\"\"\"-,'-.._,.'       `.           |\n");
    printf("                  (      |`.__,' `.      ,-.      |         (\n");
    printf("                   `._   |_.'     |  /|  ` |,\" .  |          |\n");
    printf("                     /`  |       .'  |`   `.'.`\\`/          ,'\n");
    printf("                    '._ j       /   .` .    .``.`.`-._ _,.-'\n");
    printf("                       `/      /    ||`.`    `..``.`-.`.._\n");
    printf("       _              ,'      /,.___'|  ``.,..-\\`-\\`/ `._.+,------._\n");
    printf("      \\ `\"-.__      ,+      .'|| | j |+-+-`._`+.\\+--\"\"\"\"            `-.\n");
    printf("       `._    \"'\"'\"'/|     j| |' . | |\\`.`.  |+---+--+-+--.....__      \\\n");
    printf("     __..-`--------+-|     || | \\ / / \\\\ \\ \\ | `.\\ \\. \\ \\   `. `.`-.___/\n");
    printf("   .'       _,.-',','`     || |  /,\\  ` \\ ' \\|   `\\ \\`.\\ '    \\  \\\n");
    printf(" ,'     _,-'    / . .'\\    || |,'/\\ \\  \\ \\ \\ |    | |-. L`+._  \\  |\n");
    printf("/    ,/'       . j  | |\\   '.-'.'  \\ `. \\ \\ .|    / `  `| |  `-.`-'\n");
    printf("|   ,'        j  | j  | `.  `.\"\\    `  \\ . .|'   /|  \\  | |`.   .\n");
    printf("`..'          .  | |  `.  /. `. `    `. `| |/   / |  |  |  . `-.'\n");
    printf("              |  | `.  | /  +. \\ `.    \\ |,'  ,'\\ |  |  |  |\n");
    printf("              |. |  `..' | .' `\".  .   _\\+  _.| | |  '  '  '\n");
    printf("              .`.'       `-'    `--'  '--+\"'| `.' `-'  `..'\n");
    printf("                                         `--' \n");

    break;

case 74:
    printf("                                            _,.---.\n");
    printf("                                        _,-'       `.\n");
    printf("                                     _,'  ,          \\\n");
    printf("                                   ,'  _,'   .        `.\n");
    printf("                                  /  ,'     ,'          `.\n");
    printf("         __                       .,'    _,'              `.\n");
    printf("    _,..'  `-....___              :    ,'     '             \\\n");
    printf("  ,'   /            :             /`.,'      /               `\n");
    printf(" /    /  ._         |         __..|  `.    .'       ,         `.\n");
    printf(" |   |   ,'\"--._    |      ,-'    `-._`.,-'       ,:            .\n");
    printf(".'\\   \\     _,'.    `'___.'           `\"`.     _,' /            |\n");
    printf("|  \\   \\---'       ,\"'  .-\"\"'\"----.       `.  '  ,'             |\n");
    printf(" `. `-.'          /    /                    `-..^._             '\n");
    printf("   |._|    _.    /    /                            `._           .\n");
    printf("   `...:--'--+..'   ,'                              /            |\n");
    printf("       '._  `|   ,-'       _..._                   j     \\       |\n");
    printf("         |` |   /       ,-'     `-.__              |      L      |\n");
    printf("         |  |  /      ,'                           |      |      |\n");
    printf("         |_,'        /         _,-                  .     |      |\n");
    printf("        ,'  ,   |  ,'        ,|            ,..._     \\    |      '\n");
    printf("       ,     \\ j  '       _.\" |           /     `-.__'    '    ,'\n");
    printf("        +._   '|       ,'|    |          /        ,'    .'    /\n");
    printf("        |  `._  `-' .:|  |    '.       -'        '           j\n");
    printf("        '    |`    ' |'  |     |                             |\n");
    printf("         `.  |       |--'     _|        .                    |\n");
    printf("           \\ |       '----'\"\"\"           \\      __,....-+----'\n");
    printf("           | '                            `---\"\"      .'\n");
    printf("           `. `.                                     ,\n");
    printf("             `\" \\_...-\"\"\"'--..         _+          ,'\n");
    printf("                  '            -.'  `-'  `.  .\"-..'\n");
    printf("                   `-..._            _____,.'\n");
    printf("                         `--.....,-\"' \n");

    break;

case 75:
    printf("               __..  ,..--+'\"\"--.._\n");
    printf("            ,-'    \\_|_...'        |\n");
    printf("     ,'\\  ,'`.,----\"    '          |.._\n");
    printf("    /  _\\_'   `.                _,.+.  `-.___\n");
    printf("    |          |           ,.--'     \\       `.\n");
    printf("  /'|          |\\,-.       |          `\"--.    `.\n");
    printf(" |  |          |/   \\                      :     |\n");
    printf(" |  '          /    '                      |     |\n");
    printf(" `.|         ,'    /                       '     `\n");
    printf("|\"j               _,\\                             \\\n");
    printf("| /  ,          -'   \\                             \\\n");
    printf(" |  '/     _.-       |            _,.               `..\n");
    printf(".'| /   ,-'/     --- `         -\"'   `.                |\n");
    printf(" `| `--d  |         __        __       |        __     |\n");
    printf(" /    /...'   .  ,\"'  .         `.    .'          \\    |\n");
    printf("'..-----.._ ,'   |    '           \\    `           |   |\n");
    printf("   |/  _,.-'     '                      \\          /  ,'\n");
    printf("  /'\"\"'                      .\"\\         \\       ,'   |\n");
    printf("   -...--.__                 `  \\        _\\..     \\   `.\n");
    printf("    `.                        \\\"        :   |     |   /\n");
    printf("     |    _..-.    ,..-.       `.    ..\"    `     /  .'\n");
    printf("   ,-|   |     `---;             |           `.  '   |\n");
    printf("   \\  `. `---._ '\"\"`---.         |             | __.-'\n");
    printf("   |..\"|+.\"`-'        /         j.            /  |\n");
    printf("    `. | \\          \"'      _.' '|           /  /\n");
    printf("     |\"\"`.`\"'          __,\"\"  __.-          j ,'\n");
    printf("     .--- \\ `--------\"'      ,              +'\n");
    printf("     |__,' `+.          .    |.            |\n");
    printf("   ,'  |     \\`-.___,-' `.__.' `.          |\n");
    printf("   |._,'   | |   |         |   ,'\\    '.   '\n");
    printf("   |\"`.--|-+.' _.'         |`..  /`--/ :.-.|\n");
    printf("   '  |  \\  |,'.. _     .-' _ .-'   /.-'  /\n");
    printf("    `-'   `.|_(._|______|_ /  '.__,' \\,...'\n");
    printf("                          `\"-------'\" \n");

    break;

case 76:
    printf("                            _____   ____\n");
    printf("                       _,.,|     `\"`-.._`--._\n");
    printf("                    _,\" ,j |            `\"-. `-,\n");
    printf("                 _,\"_,-' ' |._              `.  \\`.\n");
    printf("               ,' ,',.....L   `-._            \\  . `.\n");
    printf("             .' ,\"'\"`.__  |       `-.._        | |   \\\n");
    printf("   ,.._     ,'-/     '  `.|..'\"\"|`._   `-.___.-','-._ `.\n");
    printf(" ,' . _>-.._/ /     /    /   `-.' \\ `-._  |   ,'     `-..\n");
    printf("/,..|`._'  / /     /   ,'   _ _\\   `.   `-:..'          `\\\n");
    printf("''  | .--./ /     /   / ,'\"\"|/ .'\"\"'\\`.._ |  \\            |\n");
    printf("  /'`.   / |`...+.   /.' _.`+._ `._/ \\'| `|\\  `.____      |\n");
    printf(" /,..:.-+ _|.-\"'\"\"`./__.\"      `.|    j   `.\\  /---._\"---.|`.\n");
    printf(" '     _:\"    ____  | |          `+---'     `\\/       \"-._| |\n");
    printf("     ,'    ,+\"  |   ' '.           \\`.       |            `.|\n");
    printf("    .     d |  /     \\  \\          |  \\      |             ||\n");
    printf("    |   _/..+.'       \\  \\      __,^.  '._   |            j |\n");
    printf("   ,'_,'        ___    \\  `----\" ,.--`+..,.-'+`-.._       | |\n");
    printf("  ',\"     ____,'/     / +...--'_,.--\"'||       '._ `-..__/ /\n");
    printf("   `...--\"'|  .'   _,'| / ..-'\"       ||          `.    / |\n");
    printf("          ,'./ ,.-'   |j |          __||          .'`,\"__.'\n");
    printf("          \\__.'\\     j | |        ,'    `-.     ,\" ,'.\" .'\n");
    printf("              \\|     | 'j       ,'         `. ,' .',' .'\n");
    printf("             . `.____|/ |__    :            |`,-'.'_.\"\n");
    printf("             '.  `._ _.\"-._`-._|            +----'\"\n");
    printf("               `.   `\"\"-.._`-._|            |\n");
    printf("                |          `<\" `.           |\n");
    printf("                /            `.  `.         '\n");
    printf("           ,.\":\"_,-           |,..'          `._\n");
    printf("          '.__|' ,--.    __,.\"'> .             /`.\n");
    printf("              '\"\"`---`'\"\"  \\_.' _|-\":__,....--'\"''\n");
    printf("                             `-',..-' \n");

    break;

case 77:
    printf("                    .' .\n");
    printf("                   .| '\\\n");
    printf("           _...___/`'   .\n");
    printf("         ,'             |\n");
    printf("     ,|,\"             )/|                             , .\n");
    printf("    / |              / , .                            \\` \\\n");
    printf("   /            ...-'  ',                              .  \\\n");
    printf("  .           ,>      .                                |   |\n");
    printf("  |          .'   ___`,                  .'  ,--.._,.-'/  ,'\n");
    printf("..|          |.-\"', /                  ,' | /       .\"'   '.\n");
    printf("\\ '          |  ,'//                   .'  \"    __,._'    |\n");
    printf(" \\ `         /.\"_/'_,                 '.       /         _'\n");
    printf("  `.\\     _,'   \\.`  ) ,^.              `     '       ,-\"\n");
    printf("    |.  .'  _   | `. '-  `,            , \\     `.    ,-\n");
    printf("    | `w  ,\" |  |   \\   .'   _,_ :\"'. / 7 . ,`..'   .'\n");
    printf("    '|    `.'  /     \\   `-'\"   `   _:_,.}|  :  _. ,'\n");
    printf("     \\       .'       `-.      _,.-\"       `-+-`  '\n");
    printf("     |       |           ``--\"'               `.\n");
    printf("     \\   .- .                                   \\\n");
    printf("      `.._,\":                                    \\\n");
    printf("            '                                    `.  '-7\n");
    printf("             \\                                  .'`-\"  :\n");
    printf("              \\                        .        `      `-'\n");
    printf("             j \\                       `.        `.     |\n");
    printf("             |  `.  |      .^,'.       ,.+        :    _'\n");
    printf("             |   |`.|      |    \\,  ,-'  :`.       \\  /_.,\n");
    printf("            /    |  |     /     .,-'.     `.`.      \\   /\n");
    printf("           /    .' j     / _._,\"     `      ':`.     . (\n");
    printf("          /    /,-\"|    j  `.         `-.    |  .    |/\n");
    printf("          .   `'   |    |    7           |   |   |   |\n");
    printf("           `.   .  |    |  v'            |  .'   |   |\n");
    printf("             `.  `.|   j'.'              |  |    |  j\n");
    printf("               \\   |   |                j   |   j   |\n");
    printf("                `.j   /\\                |_,j    |  j\n");
    printf("                  /  /`\"              ,\"   |    '  |\n");
    printf("                 /  j                 '_,.-'   /.-'|\n");
    printf("                |   |                         /__.-'\n");
    printf("               .'`-.'\n");
    printf("              /    |\n");
    printf("              `----' \n");

    break;

case 78:
    printf("                     :`./\n");
    printf("                    _|  ,-\n");
    printf("               ,'\"\"'    ,`\n");
    printf("             ,'.\\       `.    __  ,.-.\n");
    printf("          . ./ `'    __  '. ,'  \\ `.|\n");
    printf("          \\\\  \\   .\"'  L   \"     `\" `\\                          _,-.\n");
    printf("           \\` |\\.`      7     .,   :._|   --'`.                 ` |\n");
    printf("          ` \\`+ `'\\      \\^--\"  `. |    ,'     `.            ,..' |\n");
    printf("           | ,.    |              ` `.  |    ..  '.          |    /\n");
    printf("           ':P'     '.    ,..      \\  `-+`\"-'  `._ \\     -`,- ..,'\n");
    printf("          /        / `-,-'  ,'`.    `.   ; .--'   `+    '.   | ,\n");
    printf("         /     _..     .   `-.  \\,.   `-'  '.  `.^  `\".__|   ' |\n");
    printf("        '   , / |       `.   \\    |        ,'     \\           /\n");
    printf("         `\"' \" .         \\   |  __ \\    ,-'       `----.   _,'\n");
    printf("              /           |  `\"' _} `\"\"'                `-'\n");
    printf("             /.'         /     .-.         ,\".\n");
    printf("     .._,.  /           /     '-.,'    ,'-. .'.\n");
    printf("    /  `. \\/             `-.      `.   /`.  :\n");
    printf("   /  __ `.'                '-.     `-+_.'  .'          ,__\n");
    printf("  / .'  `.___                  `,..__      <__          \\ (\n");
    printf(" / /       \"..   /                   `-.     .' .-'\"`--.'  \\\n");
    printf("/  |       /-'  /                       \\ ,._|  |          /'\n");
    printf("\\.'|+.+.  (`..,'                         \\`._ _,'           \\__\n");
    printf(" \\ |||| \\ _`.^ `.            .            |  \"    .'`\"-.       `.\n");
    printf("  `+'|/ `( \\'    `-....__    |            |._,\".,'     `,        |\n");
    printf("                         `:-.|            `           ..'   ,'`.,-\n");
    printf("                          |  |            |`.        '-..    . /\n");
    printf("                          '  |           /  /           `.   |\n");
    printf("                           ` '          /  ',.         ,     `._\n");
    printf("                            \\|        ,'   \\'|         :  __    '\n");
    printf("                             `,     ,`     .._`..       `'  `-,.`.\n");
    printf("                       _`'`\".  `.   ``-._ /   F   )        ,._\\ `\n");
    printf("                      '-\"'`, \\   \\ ,. ).-'-.^,|_,'         `  '.\n");
    printf("                          '.. \\___j  `\"'               ,..  | .'\n");
    printf("                             \\            ___       ,. `\\ \\,+-'\n");
    printf("                              7.._   .--+`.  |_    |  `,'\n");
    printf("                           _,'  .'`--'  '    7 ` v.-\n");
    printf("                         .\"._  /-.  -.   \\.^-`\n");
    printf("                       .'  __+'...`'  `--'\n");
    printf("                        `\"\" \n");

    break;

case 79:
    printf("                                  _.---\"'\"\"\"\"\"'`--.._\n");
    printf("                             _,.-'                   `-._\n");
    printf("                         _,.\"                            -.\n");
    printf("                     .-\"\"   ___...---------.._             `.\n");
    printf("                     `---'\"\"                  `-.            `.\n");
    printf("                                                 `.            \\\n");
    printf("                                                   `.           \\\n");
    printf("                                                     \\           \\\n");
    printf("                                                      .           \\\n");
    printf("                                                      |            .\n");
    printf("                                                      |            |\n");
    printf("                                _________             |            |\n");
    printf("                          _,.-'\"         `\"'-.._      :            |\n");
    printf("                      _,-'                      `-._.'             |\n");
    printf("                   _.'                              `.             '\n");
    printf("        _.-.    _,+......__                           `.          .\n");
    printf("      .'    `-\"'           `\"-.,-\"\"--._                 \\        /\n");
    printf("     /    ,'                  |    __  \\                 \\      /\n");
    printf("    `   ..                       +\"  )  \\                 \\    /\n");
    printf("     `.'  \\          ,-\"`-..    |       |                  \\  /\n");
    printf("      / \" |        .'       \\   '.    _.'                   .'\n");
    printf("     |,..\"--\"\"\"--..|    \"    |    `\"\"`.                     |\n");
    printf("   ,\"               `-._     |        |                     |\n");
    printf(" .'                     `-._+         |                     |\n");
    printf("/                           `.                        /     |\n");
    printf("|    `     '                  |                      /      |\n");
    printf("`-.....--.__                  |              |      /       |\n");
    printf("   `./ \"| / `-.........--.-   '              |    ,'        '\n");
    printf("     /| ||        `.'  ,'   .'               |_,-+         /\n");
    printf("    / ' '.`.        _,'   ,'     `.          |   '   _,.. /\n");
    printf("   /   `.  `\"'\"'\"\"'\"   _,^--------\"`.        |    `.'_  _/\n");
    printf("  /... _.`:.________,.'              `._,.-..|        \"'\n");
    printf(" `.__.'                                 `._  /\n");
    printf("                                           \"' \n");

    break;

case 80:
    printf("                   ,-'\"-.\n");
    printf("             __...| .\".  |\n");
    printf("        ,--+\"     ' |   ,'\n");
    printf("       | .'   ..--,  `-' `.\n");
    printf("       |/    |  ,' |       :\n");
    printf("       |\\...-+-\".._|       |\n");
    printf("     ,\"            `--.     `.     _..-'+\"/__\n");
    printf("    /   .              |      :,-\"'     `\" |_'\n");
    printf(" ..| .    _,....___,'  |    ,'            /\\\n");
    printf("..\\'.__.-'  /V     |   '                ,'\"\"\n");
    printf("`. |  `:  \\.       |  .               ,'         ,.-.\n");
    printf("  `:       |       |  '             .^.        ,' ,\"`.\n");
    printf("    `.     |       | /               _.\\.---..'  /   |     ,-,.\n");
    printf("      `._  A      / j              .\"       /   /    |   .',' |\n");
    printf("         `. `...-' ,'             /        /._ /     | ,' /   |\n");
    printf("           |\"-----'             ,'        /   /-.__  |'  /    |\n");
    printf("           | _.--'\"'\"\"`.       .         /   /     `\"^-.,     |\n");
    printf("           |\"       ____\\     j             j            `\"--.|\n");
    printf("           |  _.-\"\"'     \\    |             |                j\n");
    printf("         _,+.\"_           \\   |             |                |\n");
    printf("        '    . `.     _.-\"'.     ,          |                '\n");
    printf("       |_    | `.`. ,'      `.   |          |               .\n");
    printf("       | `-. |  ,'.\\         .\\   \\         |              /\n");
    printf("       |\\   ;+-'   \"\\      ,'  `.  \\        |             /\n");
    printf("       '\\\\.\"         \\ _.-'     ,`. \\       '            /\n");
    printf("        \\\\\\           :       .'   `.`._     \\          / `-..-.\n");
    printf("         ``.          |    _.\" _...,:.._`.    `._     ,'   -. \\'\n");
    printf("          `.`.        |`\".'__.'           `,...__\"--`/  |   / |\n");
    printf("            `.`.     _'    \\|             ,'       ,'_  `..'  |..__,.\n");
    printf("              `._`--\".'     \\`._      _,-'       ,' `-'  /    | .  ,'\n");
    printf("                 `\"\"'        `. `\"'\"\"'   ,-\" _,-'    _ .'     '  `' `.\n");
    printf("                               `-.._____:  |\"       _,\" .\"  ,'__,..\"'\n");
    printf("                                         `.|-...,.<'    `,_\"\"'`./\n");
    printf("                                             `.'   `\"--'\" \n");

    break;

case 81:
    printf("                                  _,._,._\n");
    printf("                                 '-\"._,\"--,\n");
    printf("                                  `\"..-+-'\n");
    printf("                                  :'==-:\n");
    printf("                                  :`=-\":\n");
    printf("                                 _.\"-..|\n");
    printf("     _____                  _.-'\"  `\"\"' `-._\n");
    printf("    |  |  `\"\"'----._      ,'                `.\n");
    printf("    |__|            `.  ,'                    '.\n");
    printf("    '..|\"\"'---._     | /                        \\    _.......______\n");
    printf("          `\"\"\"--:    |/         ,.---._          \\ .'.------.....__`-...\n");
    printf("                |    j        ,'       `.         . '              |\"--|\n");
    printf(".'\"\"|\"---......-'   .|       /           \\        |'     ______    |   |\n");
    printf("|   |              / |      .      .      .       |    .'      `\"\"`--..'\n");
    printf(":\"\"'|---.....___.-'.'|      |             |       |    :\n");
    printf(" `\"`+---....____,.'  `      `.           /       /|    '_\n");
    printf("                      \\ _,..  `.       ,'       / `      `\"\"'--....,._\n");
    printf("                      .'::__:   `-...-'        ,   `._            '   |\n");
    printf("                      |-..--|          ,-\"-. ,'       \"--.....___:   j\n");
    printf("                      `.::_,          |.-''-:                     `\"'\n");
    printf("                            `\"-...____' \" :.'\n");
    printf("                                       `\"\"' \n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");

    break;

case 82:
    printf("                                 _\n");
    printf("                              ,\"'_\\\n");
    printf("                         ,\"\\  `.\"  \\       ,..._\n");
    printf("                        '.' \\   \\   .     ('\"\"`.\\     _\n");
    printf("                         \\   \\  `.  |      /=.:.'  ,:`.`.\n");
    printf("                          \\   \\.';  |\"\"\"\"\"`-./   .'   .`\n");
    printf("                           \\   `\"   '         `.'   ,' ,\"`.\n");
    printf("                            `.___..'            `. `..:'`./\n");
    printf("                            /             _,.._   \\    _.'\n");
    printf("                 _....__   /            ,\"     `.  ._,'\n");
    printf("             ,-\"'       `\"+.           :         . |\n");
    printf("+'\"|\"\"'-.  ,'               `.         |      \"  | |\n");
    printf("\\\\_|__   `:                   \\         \\       /  |          _,-.\n");
    printf("      :)  |        ,.-----.    \\         ._   .'   '._    _,-'`\\  j\n");
    printf("  ...,'   |       /        \\    . __ _ _,\".`\"'   ,'   `.,\"    _.`\"\n");
    printf("  \\\\ |  _,'      .          .   || |I ' -'|    _, _     `   ,\"'  _.\".\n");
    printf("  `\"\"'':         '     \"    |   |`\"'^\"`\"| /  ,`:://\\     \\  `..-' \\  '\n");
    printf("       '          \\        /   ,\"\"`--..`\"\"-\"`\"\"':{.|      .      _,+\"\n");
    printf("        .          `-....-'   :`:'-|            |l,'      |.__.-\"\n");
    printf("         \\,.                  '. :/                       |\n");
    printf("     .-.\":`.`.              ,'  \"'     ,\"-.   _       _,._|\n");
    printf("     \\`. \\`,\"`._        __,:      .    `.'/`,'.`.   .'    '\n");
    printf("      '.`.;     \"--+--'\"_  `       `     `.` \"' ; ,'  .  /\n");
    printf("        `\"         ||  :|.  :       `.     \\_:.' :    _.'\n");
    printf("                   ||  |||__|         `._        `...\"\n");
    printf("                   ||__||| _|            `\"-....-\"\\\\,\\\n");
    printf("                   || _| `\"                  \\\\  \\ \\\\'\n");
    printf("                   `\"'                        \\`.-\\\n");
    printf("                                               \\\\.' \n");

    break;

case 83:
    printf("        .\n");
    printf("      ,' \\\\\n");
    printf("     /   ' \\\n");
    printf("  _  \\    \\ \\\n");
    printf(" / \". \\    ` \\                                        ,.\n");
    printf("j    \\ \\    ` \\                \"\"\"'-. ..          .. :| \\\n");
    printf("|     `.\\    ` `              __ `.  \\: \\         \\ `||  .    ___\n");
    printf(" `.     `\\    `.`.            \\ `\"-`. \\ |          \\ `|  |   //  |\n");
    printf(" _ '.     `     . `.           `-.,    `'-.._       \\    |  //   |\n");
    printf("| `._`.          `. `         .-'   --._  || `.      \\   | //   j\n");
    printf("|    `.`           . `.      /     .\"\"-.`._|.\".\\      \\,-|'/    |\n");
    printf("'       `.          `. `.   /      | '::|  '|:| .      : |,     '\n");
    printf(" `._                  .  \\ :       |  ::|.-\"\"\"'.|___...+-+-..  /\n");
    printf("    `-.                \\  `:       '__.,'               _,..-)/\n");
    printf("   .\"`-`.               \\   .       .'_....__    __..-\"' _.-'/\n");
    printf("    \\                    \\   \\      :\"       `'\"\"  __.-\": |,\":\"`.\n");
    printf("     \\                    \\   \\ .,\"--`.       _..-\",'   | |.\"   |\n");
    printf("      `._                  \\    j      `\"'\"\":'  ,'      |,'     |\n");
    printf("         `.                 .   /           |_,'      ,-'       |\n");
    printf("      \\`._ `.                `\"'            '       ,'          |\n");
    printf("       .  `-.:._                           j       /          _.'\n");
    printf("        `.     .`.._                       |      :.......--\"\" '\n");
    printf("          `. '`   `.`-._                  .      .'           /\n");
    printf("            `:      `                    ,       \"-..._____..'\n");
    printf("        `\"\"\"-.--.....__                .'         _.' /  /\n");
    printf("        _.`--         .`,           _,'----....--'   /  /\n");
    printf("       \"---..,.  __,--`-........,.-\"                /  /\n");
    printf("            /..-\"_..---\"'   _.-'                   /  j\n");
    printf("               --.,..    _,'                      /   |\n");
    printf("                 .','_,-'                         '--\"\n");
    printf("                 `\"-' \n");

    break;

case 84:
    printf("                                  _.---.._\n");
    printf("                                ,'       ,.\n");
    printf("                               :    _    '_|\n");
    printf("             _,-\"'--._         :  :'|\\      :\n");
    printf("           .'         `.       |  `--'  .\"\".;\n");
    printf("           |     __     .      `.       `. '.\n");
    printf("           |    :_'|    :        `.    _.'`. `.\n");
    printf("           ,\"'. `--'    .          |\"''     `. '.\n");
    printf("          '  ,'        /           | |        `. `._\n");
    printf("        .' ,'`.   __,-\"            | |          `.  `.\n");
    printf("      .' .'    `|\" |              j .             `.  \\\n");
    printf("    ,' .'       |  | _   ._      .  '               `.'\n");
    printf("  ,' ,'         '  |' `-'  `..\"',  j\n");
    printf(".' .'         .\"'  '          ,'  .'\n");
    printf("`-'         .'   `  `.      .\"  ,'  \\\n");
    printf("           <      `   \\      `-'     .\n");
    printf("            :      `  .'             ,\n");
    printf("           j        `\"         .-   :\n");
    printf("           :                  .  \"   `\n");
    printf("           |               .  `       '\n");
    printf("          `.                         7\n");
    printf("           ,                        '\n");
    printf("            '.                    .'\n");
    printf("              ,-.               ,'\n");
    printf("                 '..        _.-:\n");
    printf("                    `|\".-.-' | |\n");
    printf("                     | |     | |\n");
    printf("                     | |     | |\n");
    printf("                     ' .     ' '\n");
    printf("                    . .       , .\n");
    printf("                      |       | |\n");
    printf("                   :  '       | |\n");
    printf("          ,-\"`----\"'  .___    | |\n");
    printf("         '-'..--\",    ___:_`.\"'  -..____\n");
    printf("             _.-'_,.  ._\\_,.      _____:_\\\n");
    printf("           ,\"  ,'   : `    / ,-.  \\\n");
    printf("          ,'.,'     |  : ,' /   '  \\\n");
    printf("         '.-\"       `.\"\": ,'     `  `.\n");
    printf("                      '/`.        `.\"|\n");
    printf("                       .'           \\' \n");

    break;

case 85:
    printf("                            .\n");
    printf("                          .'/   .\n");
    printf("                        .\" / ,\".'    _.--:'`-......___\n");
    printf("                     , / ,-\"_,' ___.\"   ,.`-.....-\"\"\n");
    printf("                   // //_.-'   /.._\"\"\". |_'  : `-...\n");
    printf("                 ,/.-'`'  `.  '  '._..-.     '\n");
    printf("               ..','   _,   :      `.,'    .'\n");
    printf("             .'/-.: |,'|_   :       /\\__ ,'\n");
    printf("           ,'_,   _'_ \"     ;       j,| |\"`--,\\_\n");
    printf("          :_`.'_,\"_,+\\   ,^.`.     '/ | |      '.\n");
    printf(" ,.------\"...,\".-\" '/`\"'`   `.`.  ,'  ` l       `.    _.---._,.-..\n");
    printf("'-...-\"' .\",.____./`.\"-._     `.`...   `_\\       '_.-'_,.-'       \\\n");
    printf("       .','      :/  `-._`\"---..`.._|            : ,-\" __..--\"\"'`.-'\n");
    printf("      +\"'        /       `\"'\"\"----.              ;,.-\"'          _|\n");
    printf("                /                 :_     '.   _;\"'+.,--\"'\"''\"'\"\"\"\n");
    printf("                                  ' `-:.,' `'\"     /-..\n");
    printf("                                      |     .-----'--..`.\n");
    printf("                                      ;___,'           `.`.\n");
    printf("                  _.,....---------...' ,'                `.`.\n");
    printf("            _.--\"',     ____,.....----\"                    `.`-._     ,\n");
    printf("           :-'.,-' .-._'.                                    `._ `----')\n");
    printf("          '._\".  .'    \"'                                       `. `.__\n");
    printf("         `' ',.-'                                                `.-...' \n");

    break;

case 86:
    printf("                            _,.--\"\"\"'--._\n");
    printf("                          ,\"             `.         _,.--'\"\"\"\"--.._\n");
    printf("                         /                 `.     ,\"               `.\n");
    printf("                        |  ,                 \\   '                   `.\n");
    printf("                        '.'                   \\ /                -..   .\n");
    printf("                         j                     '                    \\  |\n");
    printf("                         |                                    .._    . |\n");
    printf("                         .    .       _...         _,..._        `.  :'\n");
    printf("                          `-./      ,'    `.      /      \"`.      |  ;\n");
    printf("                             '.   ,'       |     (          \\     .-'\n");
    printf("                               `\"'         |      \\          `-..'\n");
    printf("                                          /        \\\n");
    printf("                                        ,'          \\\n");
    printf("                                     _,'             `.\n");
    printf("                                 _,-'                  \\\n");
    printf("                               ,'                       \\\n");
    printf("                              /  /\\                      \\\n");
    printf("                             /  /  \\                      \\\n");
    printf("                            /  /    \\                      l\n");
    printf("                         _,.-\"/      '--._                 |\n");
    printf("                       ,'      `.  '      `.               |\n");
    printf("                     ,' _..          _      `.             |\n");
    printf("                    ,   _  `       ,' `.      \\            |\n");
    printf("                   .  .\".`          ...        \\           '\n");
    printf("  _.--\"\"`--....--\"'|  |`' |       .(_) |        .         /\n");
    printf(",'  _              |  `../        `.__.'        |        /\n");
    printf("| ,'              ,'-\"'--._,...  ______         |    _  /\n");
    printf("|/  _.           .  .      \\_,'\"'      `-.      '     `'..__,...----._\n");
    printf("' ,'             | | \\               ,'|  \\    /                      `\n");
    printf(" `|          _,-\"'.|  \\ .---,-._    /  |   | .' __                \"\"`-.\\\n");
    printf("  `.     _.-'      |  .:   j    `-.j   |  /.'--'  `.           .       |\n");
    printf("    `'\"\"'           `-''   '     ,'|   | ,'         `.          \\      |\n");
    printf("                        `-......'--...`-'             \\          .    ,'\n");
    printf("                                                       `-._      |_,.'\n");
    printf("                                                           `\"---\"' \n");

    break;

case 87:
    printf("             /\\\n");
    printf("        _.--'  `\"-.\n");
    printf("       ' ,.        `\n");
    printf("     ,' '_.'        \\\n");
    printf("    |                .\n");
    printf("    \"..+--.,-        :\n");
    printf("       ||'           '\n");
    printf("       `._            `.\n");
    printf("          |             `._\n");
    printf("          |                `.._\n");
    printf("          |  .                 `\"--.._\n");
    printf("          | /   . .                   `-._\n");
    printf("          `/    |  .                      `.\n");
    printf("          /    j   |                        `.\n");
    printf("        ,'    '|   |                          \\\n");
    printf("      ,' .\"  / |   |                           \\\n");
    printf("    .' ,'  ,'  '   |                            \\\n");
    printf("   /          '    ._                            .\n");
    printf("   `\"\"-.          /  `-._                         .\n");
    printf("        `\"'-....-'       `\"--...__                |\n");
    printf("                                  `\"-.._          |\n");
    printf("                                        `.        |\n");
    printf("                                          `.      '\n");
    printf("     ,-._                                   .    .\n");
    printf("    /    `-._                               |    '\n");
    printf("   j         `-._                           |   /\n");
    printf("   |    ___      `-.                       ,'  /\n");
    printf(" ,'        `\"--..__ `-._                _,'  ,'\n");
    printf("|                  `\"--.``---........--'    /\n");
    printf("`                               _..-      ,'\n");
    printf(" `.                    __...--\"' _,'    .'\n");
    printf("  |     '\"\"'\"-----\"'`\"\"      _.-'    _,'\n");
    printf(" /                    __,.-\"'  _. _,'\n");
    printf(" `.    _______....--\"'      _,'_.'\n");
    printf("   `.                   _,.'_.'\n");
    printf("    |           ___,..-'_,-'\n");
    printf("    `._          __..-\"'\n");
    printf("       \"'`._...-\" \n");

    break;

case 88:
    printf("                                        _.---.\n");
    printf("              __             _____  _.-'      |\n");
    printf("    .\"\"\"--._,'  \\          .\"     \"\"          |\n");
    printf("    '.    `.`._ /          |                 / `.\n");
    printf(" .---'      `._|  _,....._  `.___          .`   /\n");
    printf("|     ...._   .`\"'    __  `\"-. ` `.     _.'___,'\n");
    printf("`._      `.`.'\\     ,\"  `.    `.)`.`-\"\"'_.\" .'\n");
    printf("   |.____.,'. |   _/ .    ;__  ,   ``\"\"\"     `.\n");
    printf("   |,-.  /    ' .\" |     ,__ `.'           . ,'\n");
    printf("   '   `j`---'.',-\"`----'   `\"| \\ __       | |\n");
    printf("    `.  |   `'\"'            .  \\ `._\"..__.'  .\n");
    printf("     |  '                  /:  |\"`--',..\"     |\n");
    printf("     |`. `.___...----.....' '  `    |  |     .'\n");
    printf("     |-.`.__,--|          |\"   :    |  |    /(\n");
    printf("    .   `-.___.|   ,--.,-\"|    ``.  |  |   . .'\n");
    printf("    `          |  /       |   . `.`.`--' ,'.'  `-\n");
    printf("     '.        | /        |   |   `.`...-,'      |\n");
    printf("      '`-._  _/|j        /  ,.'     '---\"   _..-\"|\n");
    printf("       `._.`\" |||       / .','            .' _..'|\n");
    printf("        |  `..||\\     ,'.\".-     ``.    .' .'    `.\n");
    printf("        |     \\`\"-..-'  :|         \\`\"\"' .'     .'.`.\n");
    printf("       ,'      `-----.-\".'   '`._   `\"--'     .','   \\\n");
    printf("      .               `\"      `..-'     .\"\"`-','.'   |\n");
    printf("      |.__..        ___       .        /.'\"\"\" .'     '.\n");
    printf("      '___.--..__.-\"_..`.    ,..___  ,'  `\"'\"'       _.'.\n");
    printf("        '---. `.__,\"`._`-._,' `----`'              .'  ,-'\\\n");
    printf("     _,'  ___`--\"                      ,-'\"`..___.' .-'   |\n");
    printf("   ,\"   ,..-.`\"._  ___..._    .\"\"..__,'.'\"\"`-......'       `._\n");
    printf("  /    _____ `.__`\" _.-\"'       `-..--\"       _...._  _....__ `.\n");
    printf("  | .\"'----.`._  `\"\"       ,.\"\"--._         _.....,_`\"_.----...'\n");
    printf("  `------'\"\"`._`.      _,.--\"''\"\"--......-\"'        \"\"\n");
    printf("               `\"-----\" \n");

    break;

case 89:
    printf("                             _,..-------.._\n");
    printf("                         _,-'              `-._\n");
    printf("                       ,\"               .---.._`.\n");
    printf("                      /----.       _._,.._\"\"\":\"`\"`.\n");
    printf("                     /`--\"\"     _.'.'  / .`-.'-\"'\"`\\_\n");
    printf("                    /\"\"-._`----\" .'  .' '   _.`     \\\"-._\n");
    printf("                   .      `.___.'   / ,' . |   |  ._  . .``-._\n");
    printf("                 _,' _.            .,' ,\"| |   |   .`.|'.' ,--\".\n");
    printf("               ,'    ||`._..____..\"' ,'--'.|   |    `.|'  .'\"-._|\n");
    printf("              /___...'|   :._     _,'      `'-. |     |  _,.._  |.\n");
    printf("             |,--.._|j  ,'   `'\"\"'         ||  `|     '.'_..._` | )\n");
    printf("            ,'      /  /                   ||   |    /',\"     ` '/|\n");
    printf("         ,-'   .,-./  /      _,..----..___,':`_'    /.'        `.' ._\n");
    printf("        /  __.._ `-\\.'-----\"'  _,...__      '\"     /.\"\"-..-\"\"\"-. |_  `._\n");
    printf("   __..:--\"_.--.`.  `---....-`\"..__.\" `-...      _.\"'\"''`---..__`._`\"\"__\\\n");
    printf(".-'  `\"\"''\"       `..--\"\"-.   _.--.._   _.-\"\"-_,'              _.._`-._  '_\n");
    printf("|\"\"-.    __.-----._ '....`._-\" _,-\"'`-..._,..`__...\"\"\"-.__  _.'_.._`-..:'\"-)\n");
    printf(" `\"\"`..-\"_...----..___)     `\"\"              `....------._\"\",-'    `..-'`\"\"\n");
    printf("      `\"                                                  `\" \n");

    break;

case 90:
    printf("               _,.-'\"\"\"''--..._\n");
    printf("           _,-'               `.\"-.._\n");
    printf("         .\"     _..-'\"'\"\"--._   `.   `-._\n");
    printf("       ,'   _.-'             `._  `.     `-._\n");
    printf("      /   .`                    `.  \\        `.\n");
    printf("     /  .'                        `. `.        `.       _,..\n");
    printf("   .'  /                            `. `.        `...-\"'    \\\n");
    printf("  /   /                               _. `.               ,-'\n");
    printf(" j   /                   ,-\"\"'`.   ,\"'  `. `.           .'\n");
    printf(" |  .     _..------...__'  \"   |  |   \"   |  `.       ,'\n");
    printf(" `._...-'\"_,.-\"'        `..__,\"    `._ _,.'`.  `    .'\\\n");
    printf("   ,\"  _,'             __..-\"\"'`\"'.  ,'    `..  `.     .\n");
    printf(" ,'  .\"        _..-''\"\"            \\/        `.   \\    '\n");
    printf(":         _..+'----\"'               `.         `.  \\    \\\n");
    printf(":      _,'    `-._                               \\  \\    \\\n");
    printf(" `...-'           `.                              \\  \\\n");
    printf("                    \\                              \\  \\   .\n");
    printf("                     \\                              .     '\n");
    printf("                    / \\                    .        '  `  :\n");
    printf("                  ,'   \\               .    \\        \\  \\  `-,._\n");
    printf("                ,'    __\\               \\    \\        \\  \\  /._ `.\n");
    printf("               .  _.\"'   \\               \\    \\        `._'/._ \"-.\\\n");
    printf("                `\"        `.              `._.'        ,'.-.. `-._ `\n");
    printf("                            `-._                    _.'.  `,\"`-._ `.`\n");
    printf("                                `--...__     ___..-\"  \\ `. '     `._`|\n");
    printf("                                        `\"'\"\" \\   :    \\  `.`.      \"\n");
    printf("                                               \\  :     `   `.`.\n");
    printf("                                                '\":      `.__,.'\n");
    printf("                                                  `-.....' \n");

    break;

case 91:
    printf("                                                          _\n");
    printf("                                                       ,\"  '\n");
    printf("                                                     ,'   /\n");
    printf("                                                    /    /\n");
    printf("                                                  ,'    /\n");
    printf("                                                ,'     .\n");
    printf("                                     _...      /       '\n");
    printf("                                  ,'\"'\"\".`.   |_..    /\n");
    printf("                        ,-\"'\".   /       \\\\  ,'   `.\"'\n");
    printf("                       .\"\"\"'. |,'         .`\".    /.\n");
    printf("                      /     | |           `...`\".',___\n");
    printf("                     /      | `.            _.-' /.___`\".\n");
    printf("                   .'       `-._`-.._____,-'    /     \\ |\n");
    printf("             ,..    \\           `. . ,'.'      /       .|\n");
    printf("           .'   `.   \\   /        .||.'       '.`.._   ||--.\n");
    printf("           \\      `...`-'         ||||      .'  `-.._`.||_ |\n");
    printf("       _,.--`\"'-..\"'              ||``. ,-\"\"\"\"`'\"--._`\"-._`-.\n");
    printf("  _,-\"'           `.              ' .\\`'             `.   `. \\......\n");
    printf(",'                 '               || .|              |`.   \\ \\   .'\n");
    printf("`.._____________ ,'\"`+-\"\"'''       || ||              |  \\  `. .-'\n");
    printf("               |    .    _..-'    j | ||              |  |    ||\n");
    printf("               |    |   .         |. j |              |_'|.   ||\n");
    printf("               |    '    `-.._    || | |  .........      | |  ||\n");
    printf("               |     `._          || ' '   \\  __.-\"  _,' '.. , '\n");
    printf("               `._      `..       ' . `..   \"\"_,..-\"'  .'  \\/.'\n");
    printf("                  ``.    /         \\`.  ``-._`-....\"_,'   .,'|`._\n");
    printf("                     `..'           `.`._  `.`--\"'      .,'\\ :   `.\n");
    printf("                      /     _.-   .    `-.:-._ ` '._    :   . `--..'\n");
    printf("                    ,'  _,-' `.   :    __  `-.` `.._`. /,  ,','\n");
    printf("                  .'  .'       `-. `-'\"       \\`.   ` ',  ','\n");
    printf("                  `--' `--..     | `-._____   `._:---.| .'/\n");
    printf("                            \\    |     .'  \"-.____`\". |-\"'\n");
    printf("                             `.__|    /           `\"'\"\n");
    printf("                                 |   /\n");
    printf("                                 '._' \n");

    break;

case 92:
    printf("                             _\n");
    printf("                          .\"' `..._\n");
    printf("                         '         `.\n");
    printf("                       .'      ___..'\n");
    printf("                 _   .\"       '   .__,-.,\"\", ,----.\n");
    printf("      ,.-\"\"''-..\" :  :        `--'        ' :      :\n");
    printf("    .'            :_,'                    `._`\"--. ;\n");
    printf("    :              _,.--'\"'\"\"`--._           `.  `\"\n");
    printf("   j             ,'               `-.      ,._.'  ,\"\".\n");
    printf("   :           ,'                   ,-.   .   __  `..'\n");
    printf("   `--.    .'.'                   ,'   `. :_,\"  `.\n");
    printf(" ,.   ;   .   \\                 ,'      |         `.\n");
    printf("' :  :    |    `.             ,'        |\\         `.  _\n");
    printf(" `.   ._  |      \\         _.'          | .      ___ `\" :\n");
    printf("        : '     . \\      ,'  .          ' |     :   `...'\n");
    printf("       ,'  \\       `.   .             ,'  |     '  __\n");
    printf("      .    `.       |    \\          .'    '    .  (  `.\n");
    printf("    .'      \\`.___,'      `-.____.-'     '     :   `-.'\n");
    printf("     .   ,\". \\ ..___              _     /      :    .\n");
    printf("     :   . :  \\|/\\  `\"'--------+\"|,'  ,'       `-..' :\n");
    printf("      `-\" .'   `: `\"-.._______,.\\|  .'               '\n");
    printf("          `--. _ `._             _,'        ,\"\"-.__,'\n");
    printf("              \" :   `\"--.....--\"'     __   .\n");
    printf("              ,-'                 ,.-\"  `-'\n");
    printf("             :   ,..             .    ,\"\".\n");
    printf("            .'   .  :   __..._   `\"-. :   :\n");
    printf("            `.._  : ' ,'      `\"--..' `--\"\n");
    printf("                `-' `\" \n");

    break;

case 93:
    printf("               -._                                   _.\n");
    printf("                \\ `-.._                           _,' |\n");
    printf("                 \\     `-._    _,.--------.._  _.\"    '\n");
    printf("                  \\        `--'              ``.     /\n");
    printf("                   \\                                j    __\n");
    printf("__         __       \\                               |.-\"' /\n");
    printf(" `.`-.`-.__`.`'\"----\"\\                              |    /\n");
    printf("    `.       `.       '        ._                       /\n");
    printf("    `..        \\               | `.               /|   /\n");
    printf("      `.        `.             |   `._          .' |  /\n");
    printf("        `.  .-----`            |      `.       /   ' '\"\"''\n");
    printf("          `. `.            .    ._      `_    /  ,'    .'\n");
    printf("            `. `.           `._   `'\"\"'\"'     \"\"' ,  ,'\n");
    printf("              `. `.          `.`.              ,-/ ,'       _..\n");
    printf("                `. `.          \\|,---..  ,--\"./ / ,--------\".  \\\n");
    printf("                  `._           `.     `/ , .`.',:           \\  \\\n");
    printf("                     `._          `..\".,./ ' _.' :            \\  `.\n");
    printf("                   ,-'\" `-._              _.\"     .   |.-\"`.   \\  |\n");
    printf("                  .         `-..........-'        |   `..   \\   |_'\n");
    printf("                  |           `\".                 `.._   .  '  ,'\n");
    printf("                  |         |   |                     `\"'    .'\n");
    printf("                  |   /\\    |'  '\n");
    printf("                  '  /  \\   ||   .\n");
    printf("                 '   \\  '   |'   ;\n");
    printf("                  \\  '  \\   `...'\n");
    printf("                   `\"\"   `,' \n");

    break;

case 94:
    printf("                 |`._         |\\\n");
    printf("                 `   `.  .    | `.    |`.\n");
    printf("                  .    `.|`-. |   `-..'  \\           _,.-'\n");
    printf("                  '      `-. `.           \\ /|   _,-'   /\n");
    printf("              .--..'        `._`           ` |.-'      /\n");
    printf("               \\   |                                  /\n");
    printf("            ,..'   '                                 /\n");
    printf("            `.                                      /\n");
    printf("            _`.---                                 /\n");
    printf("        _,-'               `.                 ,-  /\"-._\n");
    printf("      ,\"                   | `.             ,'|   `    `.\n");
    printf("    .'                     |   `.         .'  |    .     `.\n");
    printf("  ,'                       '   ()`.     ,'()  '    |       `.\n");
    printf("'-.                    |`.  `.....-'    -----' _   |         .\n");
    printf(" / ,   ________..'     '  `-._              _.'/   |         :\n");
    printf(" ` '-\"\" _,.--\"'         \\   | `\"+--......-+' //   j `\"--.. , '\n");
    printf("    `.'\"    .'           `. |   |     |   / //    .       ` '\n");
    printf("      `.   /               `'   |    j   /,.'     '\n");
    printf("        \\ /                  `-.|_   |_.-'       /\\\n");
    printf("         /                        `\"\"          .'  \\\n");
    printf("        j                                           .\n");
    printf("        |                                 _,        |\n");
    printf("        |             ,^._            _.-\"          '\n");
    printf("        |          _.'    `'\"\"`----`\"'   `._       '\n");
    printf("        j__     _,'                         `-.'-.\"`\n");
    printf("          ',-.,' \n");

    break;

case 95:
    printf("                                                       _\n");
    printf("                                       ___            | |\n");
    printf("                                   .-\"'   `...._      | |\n");
    printf("                      _,--\"'-.   ,' .           `.    | |\n");
    printf("                    .'       ,`,'    \\            `.  | |\n");
    printf("                  ,'.      .','       \\            | j  |\n");
    printf("           __,..,'   `----\"  `         \\       _..-+.`  |..\n");
    printf("        ,'\"     .             '._  ___...-._ ,'     |   |  `--.\n");
    printf("       /       _|              | `\"        .'       |   |      `.\n");
    printf("      /`  _.-`'  ._..----\"\"`._ |         ,'         |   |        .\n");
    printf("     | .-\"         `-._    _,.' `.     .'          j    |         `.\n");
    printf("  ,-\"\"\"--..._       |  '`\"\"       `-../\\     _,\"''\"|    |.._       ,|\n");
    printf(" /    '.     `\"----,'                 ` '._,'      |   j    `.   .' |\n");
    printf("/_.-'\"  `-.___..-.\"                    \\ ,'   \\    |   '    | `.'   '\n");
    printf("`                |                    _.'          |  |,_   '   `. /\n");
    printf(" .        _______|                 .-'    |.       `. '           |\n");
    printf("  `...---\"     .-'               .'       | `.                 ,  '\n");
    printf("  ,'._     _,-\"                  `        |  ,`.  ,  .    _.-'|    `.\n");
    printf(" .    `\"\"-'    `.                 \\       `.....`.     .-',   |      .\n");
    printf(" |             _,|                 ._ --.        |     '\"--...       '\n");
    printf("  `.--\"`.....-\" ,                    /\".`        |   |        _____,'\n");
    printf("    .       | .'_                   /   \\        |  j       \"'_,..'\n");
    printf("     /`-...-+\"   `.                 '   .'.__ -..'  |_,..   ,'  |\n");
    printf("    '          ____.                 \\  |    \"`-..___,....-.    '\n");
    printf("     .     _.\"\"'   |                  `. .                 / .-'\n");
    printf("      `. .'       .._                   \\ \\               / /\n");
    printf("        `-._   _.'   `.                  \\.--......____ .' /\n");
    printf("          .'`\"\"    .'  .                  .            '_.'\n");
    printf("          |       /    |____               `\"._     _,-\"      ,-'\"'\n");
    printf("           `. _.,'     |    `.                 `--\"'       _.--,.'\n");
    printf("             `'--.__,.\"       |                          ,' .' |\n");
    printf("                   |   ,.._   |\"--._                  ,-+-.'  /\n");
    printf("                   `..'    ``.'   ,.`.     _..__.-\"\"\"-.__.'\\\"'\n");
    printf("                     `----.,\"    '   .--..'   _..`-../:  _,'\n");
    printf("                           .    /  .'  _.'\\.-\"  |     '-\"\n");
    printf("                            \"--+--\"`..'   |.   ,^.__,'\n");
    printf("                                     `---\"  `-\" \n");

    break;

case 96:
    printf("                        .\"'`-._,........_.------..\n");
    printf("                       / _.-'          ,' ,---\"\"/\n");
    printf("                      /.'                /   ,.'\n");
    printf("                    .'                      `-.\n");
    printf("                  ,'                           `.\n");
    printf("                 /          _..                  \\\n");
    printf("        ______,..         .',\"\"\"\"\\)               `.\n");
    printf("   .\"\"\"\"        |.-----           -                 \\\n");
    printf("  /.' .   _     |______                              \\\n");
    printf(".'/   | ,'      '        _.....-         _,---.       \\\n");
    printf(" \\  ,\"'/-._      \\----  /-..____.   _,.-\"              .\n");
    printf("  `.|      `\"-.._ \\____/        ,---..._               '\n");
    printf("                 `            .' .      `.              \\\n");
    printf("                  |           |  |  |  |/       ,        .\n");
    printf("                  |           './|  |`.'.._   .'         |\n");
    printf("                  |               `.'      `\"\"           |\n");
    printf("                  |--.      ___       _,...    _.'\"`-...'|\n");
    printf("                ,/    `---\"'   `-....'     `--\"          |\n");
    printf("              .'.                         _...           |\n");
    printf("             /  |                      ,-'               |\n");
    printf("            /   |                    ,'                 j\n");
    printf("           .     \\                  /                   |\n");
    printf("           |      \\                .                    |\n");
    printf("           '       `               |                    |\n");
    printf("            `.      `._            '                    '\n");
    printf("              `.       `._          \\                  /\n");
    printf("            ,.\".          `.-........'.               /\n");
    printf("          ,.-'  `.____....-'           `.            '\n");
    printf("          '...--\"'                       )           `.\n");
    printf("                                       .',.-,----.    |\n");
    printf("                                       `.  |      \\_.'\n");
    printf("                                         `-+----\"\"' \n");

    break;

case 97:
    printf("                  .\\\n");
    printf("                 .  \\\n");
    printf("                     \\              _,|\n");
    printf("                j    _\\____      _.\" ||\n");
    printf("                |  -'      `\"-.-',---.|_\n");
    printf("               /                /j      `.\n");
    printf("              /                . |    |   `.\n");
    printf("             ,                 | |    |     \\\n");
    printf("            /|.                ' `    |  / ,'|\n");
    printf("          ,' |\\`.               `.`.__|_/.',`\n");
    printf("         :   | `|      ,.--..     ||\\   '\"   `.\n");
    printf("        .'   | /      |`'-\"\"'     '| \\         `.\n");
    printf("        )    `j       `.         / |  \\          .\n");
    printf("       ,`-'   |       .'        /  | `.\\         |\n");
    printf("      / |   _ |     ,'       _,'  _|_ | \\        '\n");
    printf("  _,-'  `. /  \\   ,'......--'   .\" _ `.  `      /\n");
    printf(".\" ---._ ,'|   --`              | . `. |------\"'\n");
    printf("|       |  '    .       .       `.`-' .'\n");
    printf("|       |   `.  |        |      _/:--'\n");
    printf("|       |    \\`-|        | _..-'  |\n");
    printf("|       |  _,.\\  `\"--..-\"'`      ,^.\n");
    printf("|       `.'    `                    `-.\n");
    printf("`         `\"-.                         `.\n");
    printf(" \\       .---'                           \\\n");
    printf("  \\\\\\  . `.         __....._              \\\n");
    printf("   \\\\\\__\\__'    _,-'        `-.            .\n");
    printf("   |          ,+             .'`.         .'\n");
    printf("   '.     _.-'  \\            '            \\\n");
    printf("  ,-\"`-...     ,'             \\     _ '\"-. `.\n");
    printf(" / ,'   .-    /                `.    `.   \\.'\n");
    printf(" \\_|  .'    ,'                   `-...'--\"\n");
    printf("   `--'---'\" \n");

    break;

case 98:
    printf("            ,-\"'\"'\"--.                       ,-\"\"\"\"'`-.\n");
    printf("           '          `.                   /           \\\n");
    printf("          '             \\                 ' __          \\\n");
    printf("         /       .+\"\"`'`-                `-'  `\",        \\\n");
    printf("        /       , |                             |\\        .\n");
    printf("       .       .  |          ,.    ,-.       .  | .       |\n");
    printf("       '       |  |.\".       | .   | |      ' `.| |       |\n");
    printf("        \\      |_.'  '      .' .  .  |       `  `.|       '\n");
    printf("        .    _,'    /    ,\"\"-. `-.' ,-\"\"-.    |    `.    .\n");
    printf("        j-..'      / ,-.'  .  \\    |  .   .--.'      `...'.\n");
    printf("        | `-`._.--'.'  `._     |   |   __.'   \\`--...'-'  |\n");
    printf("        `....'     | /\\___`'--'     `\"\"_....\"\\ \\     `...'\n");
    printf("         | |-\"-._,`.'     `\"-._     _.\"       \\|\". ,^.|  |\n");
    printf("         | `..,\"_,'            `---'           \\  `-..'  |\n");
    printf("         `._|_.\\ `._____                 _...__.`._,_' _.|\n");
    printf("         /  '`-.`-._|.  `-._           ,\"     .','_,\"'`\\ \\\n");
    printf("        ' .'    `-._`.`.    `.       ,'     ,' _.'      . `\n");
    printf("  ____.'  |         `\"  `\"---+------'-----\" `\"'         |  `.____\n");
    printf(",'_,.-`._,'                                             '.--...._`\n");
    printf("`\".--..__'                                               `._.---`\"` \n");

    break;

case 99:
    printf("                                 _,.._\n");
    printf("                            _,-'\"     `.\n");
    printf("                       _,.-'            `._\n");
    printf("                     .'                    `-._\n");
    printf("                    .       /                  `-.\n");
    printf("                    |      /                      |\n");
    printf("                    |   _,'                       |\n");
    printf("  ,'\"\"'\"`-._        |`\"\"                          |\n");
    printf(" /          `-.     |       _,....._              |\n");
    printf("/...._         .    '    ,-'| | |`-.`.            '\n");
    printf("     ``.       '  _  `./\\`\\ | | | | `.`.   _,.---- `.\n");
    printf("  ,.  | .       \\ ``.    ._\\|_| | | / \\ \\._          `.\n");
    printf("  | `.| |        . `.`.  |\\   `-'.|/_,.-\"  `          |\n");
    printf("  \\    `._       |   `.`-' `.              |         ,'\n");
    printf("   \\      `.   ,'     _\\,.'\"\"`.            |        .\\\n");
    printf("    `.     |  /   ||.'./ /.   |`.          |       / |\n");
    printf("      `-._.'_.    |||,' ._...-' .`-.._____.'    _,' .'\n");
    printf("          \\\" |   ,'|'   _ _   ,'   | .-\". `-..-'  ,|\n");
    printf("           . |   \\  `..' \" `-'     '/|   `._`\".    |.\n");
    printf("           | `:\"-'`.                `+.._   `\"|    .'\n");
    printf("           `._|_,\".\"`.   ........_   ,\"  `-._ '.    )|\n");
    printf("                  ' /.`-._        `\"'...-\"_.'`._\\_,' '\n");
    printf("              __.' j  /`..`..__      _.:-'    | |  \\  \\\n");
    printf("            ,__/   |-`.,'      `\"`'\"\"         | |   \\  \\\n");
    printf("               `--\"'-.'                       |  \\   .  `___\n");
    printf("                                              `./\"\"\"-`./\"'__`\n");
    printf("                                                `..--.|`-'  `' \n");

    break;

case 100:
    printf("                         __...--------...__\n");
    printf("                    _.--'                  `\"-..\n");
    printf("                _.-'                  ,.        `-._\n");
    printf("             _,'                    .'  \\           `._\n");
    printf("           ,\"                     ,'     .             `.\n");
    printf("         ,'                      /        `.             `.\n");
    printf("        /                       .           \\              `.\n");
    printf("      ,'                         `.._        .               .\n");
    printf("     /                               `-._    /`               \\\n");
    printf("    /                                    `-._  \\               \\\n");
    printf("   /    __,........----...__                 `\"-'               \\\n");
    printf("  /.--\"\"                    `'--.._                 ...........\n");
    printf(" j                                 `\"-._            `. /      |  `\n");
    printf(" '                                      `._           `.      .   .\n");
    printf(".                                          `._          `.    '   |\n");
    printf("|                                             `.          \\  /    |\n");
    printf("|                                               `.         `'     |\n");
    printf("|                                                 `.              |\n");
    printf("|                                                   `.            |\n");
    printf("'                                                     `.          |\n");
    printf(" .                                                      .         |\n");
    printf("                                                         \\        '\n");
    printf("  '                                                       \\      '\n");
    printf("   .                                                       \\    /\n");
    printf("    \\       ____                                            .  /\n");
    printf("     \\    .\"    `\"\"-._                                       '/\n");
    printf("      `   '           `-.                                   ,'\n");
    printf("       `.  `.            `.                               ,'\n");
    printf("         `.  .             `.                           .'\n");
    printf("           `._`-.            \\                        .'\n");
    printf("              `._`._          '                    _,'\n");
    printf("                 `._`\"-._     |                 _.\"\n");
    printf("                     \"-.._`--'           __,.-\"'\n");
    printf("                          `\"\"----------\"' \n");

    break;

case 101:
    printf("\n");
    printf("                         _,.--\"'\"\"\"''\"\"\"''--..__\n");
    printf("                    _.-\"'                       `-._\n");
    printf("                 _.'                                `-._\n");
    printf("              _,'                     ._                `.\n");
    printf("            ,'                          `._               `.\n");
    printf("          .'                               `._              `.\n");
    printf("         /                                    `.              \\\n");
    printf("       ,'                             .         `.    |        `.\n");
    printf("      /                               |           `.  |   |      .\n");
    printf("     /                                |             \\ |   |       \\\n");
    printf("    /                                                `    | ,.-\"'  \\\n");
    printf("   /                                                                \\\n");
    printf("  j                                                        |         .\n");
    printf("  |                  __...--'\"''\"\"'\"'\"\"\"'`--..__           |         '\n");
    printf(" j             _.--\"'                           `-.._                 .\n");
    printf(" |         _,-'                      .\"\"'`--..__     `\"-._            |\n");
    printf(" |     _.-'                          |          `\"-._     `._         |\n");
    printf(" |  _.'                              |               `-._    `._      |\n");
    printf(" |,'                                 |    |              `-._   `.    |\n");
    printf(" |                                   |    |                  `-.  `._ |\n");
    printf(" |                                   '    |     |               `.   `'\n");
    printf(" |                                    `\"--'.....+................'   j\n");
    printf(" '                                                                   |\n");
    printf("  .                                                                  '\n");
    printf("   .                                                                /\n");
    printf("    `                                                              /\n");
    printf("     '                                                           ,'\n");
    printf("      `.                                                        .\n");
    printf("        .                                                      /\n");
    printf("         `.                                                  ,'\n");
    printf("           `.                                              .'\n");
    printf("             `._                                        _.'\n");
    printf("                `._                                 _.-'\n");
    printf("                   `-._                         _,-\"\n");
    printf("                       `\"--..__           __..-'\n");
    printf("                               `\"\"\"''\"'\"\"\" \n");

    break;

case 102:
    printf("                       __.__._\n");
    printf("                     .\"   ) `.`\".\n");
    printf("                    /     `.../  \\\n");
    printf("                   |   _.'   \\    .\n");
    printf("                   |  '       `.  |\n");
    printf("                   '            `.'\n");
    printf("                    \\          _,..---..._\n");
    printf("         _,.._       `._     ,'           |.\n");
    printf("      ,\"\\  `. `\".       `\"\".'             | `.\n");
    printf("     /   \\ _|_  _\\       .'               |   `.\n");
    printf("   ,'     `...' `.\\    ,'                 |     \\         _......_\n");
    printf("  .        ,' ___. .  /                  j    _,'\\      .'   |    `.\n");
    printf("  |       .        | /                   |.--\"    \\    /     |      /.\n");
    printf("  |       |        |.                    |            /      |     /  \\\n");
    printf("  '       |        '                     '         ' j       |`  .'    .\n");
    printf("   `.  ,`.|       /|     `.                         .|`-._   .--,      |\n");
    printf("     `/   |    _.' |      |`._             _,       || `--` '--'       '\n");
    printf("       `\"-+---\"    |      `   `-._     _.-'  |      | .   ----        /\n");
    printf("      _.......__   |       `.....'   -.______'      |  \\            ,'\n");
    printf("    ,'         `\"--|_            ____               '   `-._    __.'\n");
    printf("   /                 |.         -....-\"            /        `\"\"\"\n");
    printf("  /         '   -._  | `.                         /\n");
    printf(" /         / \\     `.|   \\                      .'\n");
    printf(".         / .'       '._  \\                   ,'\n");
    printf("|        /.\"            '--._                .__..._\n");
    printf("'  .....,               |  | `-.._     __..-\"\"      `\".\n");
    printf(" . |  .'  _.-           |  |      `'\"\"'.\"              `.\n");
    printf(" `. `\" .-'              |  '          /                  \\\n");
    printf("   .                    ' .          /                    .\n");
    printf("    `.                .' /          |                     |\n");
    printf("      `.              |.'           |                     |\n");
    printf("        `-._       _,-'             `.     '-.        _,- '\n");
    printf("            \"'---\"'                   \\     `..`.  ....' /\n");
    printf("                                       \\                /\n");
    printf("                                        `._   --==-. _,'\n");
    printf("                                           `---...--' \n");

    break;

case 103:
    printf("\n");
    printf("                              .'\n");
    printf("                              | \\\n");
    printf("                              |  .\n");
    printf("              '._             |   .\n");
    printf("              `. `._          |   |        .             __...\n");
    printf("                `.  `.        |   '      .'        _,.-\"'_.'\n");
    printf("                  .   `.      |    .    / '    _,-'   _,'\n");
    printf("                   `.   `.    |        / /  _,\"    _,\"\n");
    printf("           `+.._     `    `.  '     . / / .\"     ,\"\n");
    printf("              `._`-._ `.    `. .    |/ /,'     .'\n");
    printf("    _,..---\"\"\"\"--`.  `-.`.    \\|    | ./     ,'  _,.---,________\n");
    printf(" -`=..__                `-.    |    |.'    .'_..+---\"\"\"         `\"-..\n");
    printf("        `\"\"---..___        `.  |    |'   .'-\"          ___,.....---\"\"`'\n");
    printf("               _,.-\"\"__,.._  `   ___'  .'  ____..---\"\"'\n");
    printf("         _,.-\"\"    .'  ,.  \\ .-\"'   `-.  \"\"-------...__\n");
    printf("      .-\"    __.-.'   '-\"'  / -='   `\"'\\......__       `\"-..._\n");
    printf("    .\" _,.--\"\"  / .\"\"\"|    /            \\  _  ..`.-.....______`_\n");
    printf("   '.-' .'_.-\"\".  | _.|   .   `.-----\"'  .'\"  __  `             '\n");
    printf("       -\"'     '  |'  |   |              | '\"\"     .\n");
    printf("                \\  ...'   |              '         |`-.\n");
    printf("                 `._      ,.            /          '\"--'\n");
    printf("                    `\"\"\".'  `._     _,\"`.       _,'\n");
    printf("                       /.....__`\"\"\"'     \\--..-\"\n");
    printf("                      /        `'\"\"'----...\n");
    printf("                .    /____                |\n");
    printf("               | |  j----.`\"\"---..__      |\n");
    printf("         '`-.,-`.'--|`-.  `.        `'\"--.|\n");
    printf("          `./   ___ `.  .  |              '\n");
    printf("           ' ,\"'   `. . |  |             /\n");
    printf("           . |      | | | .'          .'j\n");
    printf("            \\`.     | '-'`..._____..-'  |\n");
    printf("             `.`.__.'/     ,'`._       ,'\n");
    printf("               `\"--`'     . \\   `-.__ /\n");
    printf("                          |  `...___.'\n");
    printf("                          /\"`__.._'\".\n");
    printf("                          `\"'     `\" \n");

    break;

case 104:
    printf("                                             ..\n");
    printf("                                           .'  |\n");
    printf("                                           |   '\n");
    printf("                                           '    \\\n");
    printf("                                          /      `-._\n");
    printf("                                  _...--\"'           `\"-._\n");
    printf("                                ,'                        `-.______\n");
    printf("                               j                                   |\n");
    printf("                               |                                  ,'\n");
    printf("                               |           _                    ,'\n");
    printf("                              /          ,':\"\"\"\"\"-.           .'\n");
    printf("                             .___..  __,'\"       `.`.         |\n");
    printf("                               |       ||        `.\\ .        |\n");
    printf("                             ,'|      _||  `-._   | ||        |\n");
    printf("                  .\"`-------'  `-..,-\" ||...._()`-  '|        '\n");
    printf("                  `.               \\.-\"       `.__,','       /\n");
    printf("                    \\            .\"            |_.-'        .\n");
    printf("                     /                    _...-'            |\n");
    printf("                    /                   .'.                 |\n");
    printf("                  ,'                  .'   |        __      '\n");
    printf("                 ,                  ,'     |      .'  `      `.\n");
    printf("                /                  '       |___   |   /    .--'\n");
    printf("               .        ____                 | `. `..'   ,'\n");
    printf("               |            `\"-.             |   \\     .'\n");
    printf("            _,\"j'               `.           |    `--+\"-._\n");
    printf("          ,\"  /                   \\          |       |    `.\n");
    printf("       _,'   .                     .         |       '.     `.  _,.\n");
    printf("     ,\"      |                     |         '      /  |    ,\"._  '\n");
    printf("  _,'        |_,...._              |       ,'      /__.'  ,'    `/\n");
    printf(",'           |   _.' `\".          .     _,'\"--.._,'     .'      /\n");
    printf("`._          `--'       \\        /_,.-\"'  __,.-'       '      ,'\n");
    printf("   `\"'\"\"------`.        .\"`----\"\"     _.-\"..__________      ,'\n");
    printf("                `._     |          ,-'                `\"--'\"\n");
    printf("                   `-..-`._       /\n");
    printf("                           `.   ,'\n");
    printf("                             `\"' \n");

    break;

case 105:
    printf("      ,.                           __     ,\"`.\n");
    printf("     / |                      _.-\"'  `\"--'   |\n");
    printf("    /  |              .\"--..,'               |\n");
    printf("   j   |              `                      |\n");
    printf("   '    `-.            `.                    |\n");
    printf("  .       .'            '                    |\n");
    printf("  |    ,-\"               .                   '\n");
    printf("  |     \\                |                    ,\"\"`.\n");
    printf("  |      \\               |                   ||    `\n");
    printf("  |       \\             j     `-.           .||     `.\n");
    printf("  |        \\            |       |`.         |||      |\n");
    printf("  |         \\         __|       |  |`.      |'|\\   .'\n");
    printf("  |          `.  _.-\"'   `-.._  `._'  `.    | | `-\"\n");
    printf("  |          _,+\"             `.   `\"\"--\\     |\n");
    printf("  '        .'                   `.            |\n");
    printf("  '      ,'                      |`.       .  '\n");
    printf("   \\   .'                        `. `.     , /\n");
    printf("    \\,'             _,.-+\"\"'.      `  `.   .'\n");
    printf("    /            .-'     `-. '      `.  `\"'\n");
    printf("  ,'           ,'\\          `.`.      `\n");
    printf(" '            /.  `.         ,\\ \\      `._\n");
    printf(".            /  \\   `._    .'  \\ .        `\".\n");
    printf("|           /._  `-._  `,-'    ,' `.         \\\n");
    printf("|          /   `\"-+---\"'      |    |         ,-.._\n");
    printf("|..____,.-'       |`.         '   ,'         |    `\"-._        __\n");
    printf("`---'\"            |  \\         `.'  `-.._   ,|      `._`\"-._.\"'  `.\n");
    printf("                  |`._`.        |        `.  `-._      \"-          .\n");
    printf("                   `.,' `.___..'           `\"    `._                |\n");
    printf("                                                    `.              |\n");
    printf("                                                      `._         .'\n");
    printf("                                                         `        |\n");
    printf("                                                          .       |\n");
    printf("                                                           \\      |\n");
    printf("                                                            `..,.' \n");

    break;

case 106:
    printf("                                                   __           ,-\"\".\n");
    printf("                                                 .'  `.       ,'     .\n");
    printf("                                            _____|     \\    ,'       |\n");
    printf("                                      _,-'\"\"     |      `..'     _,-'\n");
    printf("                                    ,\"           `.            ,'\n");
    printf("                                   /       /|   ,\"'`,        ,'\n");
    printf("               _,..__             /      ,'.|  .  .',`.     `.\n");
    printf("            .\"'      `'--\"\"-._  .'     .' ,'/  |  | |' |      `.\n");
    printf("        __.'             `.   `.       |`'.'      ` '.`|        `\n");
    printf("   .-\"\"'   |               `\"-.' ,\"`.  '-'         `---'.        \\\n");
    printf("  `-.      '             ____   '.`\"\"/               .'  `\"-.     .\n");
    printf("     `-.__/            ,'    `\".  `./._              |       '    |\n");
    printf("       _,.            j        |   |  |`\"-._         '      .     '\n");
    printf(" _,.-\"'   \\           |        |   |  |   | `+-.\"\"-.  .     |    .\n");
    printf("'._       |           |        |   '  |   '  |  |.    |     `..-'\n");
    printf("   `\"-....'           `.      ,'  '  ,'  ,   |  ' .   '\n");
    printf("         .._            `-...'  ,'--+---+--.'_.'  |  .\n");
    printf("       .'   `                _.'      `.     `-..'  /\n");
    printf("     ,'     _\\         __..-\",'         `     \\    /\n");
    printf("     \"'`\"'\"'  `\"----'\"\"/.-+\"             `     `  /\n");
    printf("                    ,-'---|               \\      .\n");
    printf("                   /      |                `.__..'\n");
    printf("                 .'    .' `.                \\    /.\n");
    printf("               ,'  ,..\" ..  `.               \\-\"'  \\\n");
    printf("               '._'  |  | `-.'                \\  _,`.\n");
    printf("                     |  '                      \\'   /.\n");
    printf("                     `.  )                      . ,'  '+-._\n");
    printf("                       `'                        `. .' ||.\"`.\n");
    printf("                                                   `._,'||   |\n");
    printf("                                                    |._,' `-.|\n");
    printf("                                                    `.       |\n");
    printf("                                                     '       |\n");
    printf("                                                      .__ _ .|\n");
    printf("                                                       | | | |\n");
    printf("                                                       '.`.'.' \n");

    break;

case 107:
    printf("                                            __\n");
    printf("                                          ,'  `\".\n");
    printf("                                    _    /      '\n");
    printf("                                .-\"' | ,'      /\n");
    printf("                             ,.j     |/       /   _,\".\n");
    printf("                           ,' ||     |       j _,\"    `.\n");
    printf("                          |   ||             '\"      .'\n");
    printf("                          |    |                   ,\"\n");
    printf("                          |                      .' _..-.\n");
    printf("           _______        |   \\                  `'\"     \\\n");
    printf("      _,-\"'       `-._    |  | \\                      _.\"\n");
    printf("    .'                `.  |  | b`       _..+-      _,'  ___......\n");
    printf("   ,                    \\ `. `-     -'\"d   |   _,.---'\"\"         |\n");
    printf(" ,.                      \\  `.----.._  ---'_.-'                  |\n");
    printf("| |                       ',-\"`._    `-.,-'                    .'\n");
    printf("`.|                       |      `\"---.'  _..,.-\"\"\"\".      _.-'\n");
    printf("  `.                      |\\        ,'. .\"    |    __...-\"'\n");
    printf("    `.                   ,'/`\"-.__,'  ,'    __|.-'\"    /\n");
    printf("      `-._            _,\\.'         `.  _,-\"\\`-._____,'._\n");
    printf("          `\"-...----'\"   \\---...____.'\"\"_.'  `-..,'   `  `-.\n");
    printf("                          `\"'\"`\\   `._.'     .' /      '    \\\n");
    printf("                                `._,'      ,'  /       |     \\\n");
    printf("                                    `\"-.  .   /        |      \\\n");
    printf("                                  ,'   ,'\"'`-+...-'\"\"'/__..--\"'\n");
    printf("                              _,.'   .'        |     /\n");
    printf("                            ,\"     ,'          |    .\n");
    printf("                          ,'      .            |    '.__\n");
    printf("                        .'      .'             `.       `.\n");
    printf("                     _.'|    _,'                 `.       `.\n");
    printf("                   .\"   `-..'7                     `.       `.\n");
    printf("                 .'         /                        \\        \\\n");
    printf("                 |        .'                          \\        ,\".\n");
    printf("                 `--....-\"                          ..-`'\"\"`--'   \\\n");
    printf("                                                   /              '\n");
    printf("                                                   `._      _...-'\n");
    printf("                                                      `\"--\"' \n");

    break;

case 108:
    printf("             _____                       ,\".\n");
    printf("        _.-\"'     ``.                  .'   `\n");
    printf("      ,'             .               ,'      |\n");
    printf("    .'               |            _,'        |\n");
    printf("  ,'                 '          ,'           |\n");
    printf(" ,               / ,'         .'             '---.._\n");
    printf(" '              /.'         ,'              /       `-.\n");
    printf(".              ,\"          /               '           `.\n");
    printf("|      |      .           .                              \\\n");
    printf("|      |      |           |                               \\\n");
    printf("|      |      |           |                                .\n");
    printf("|      |      |           `\n");
    printf("'      |      |            `.             _,.._             .\n");
    printf(" \\     |      '    __...._   `.__     _,-'     \"-.          |\n");
    printf("  \\    '      ' ,\"'       ``./   `'\"\"'            `.        |\n");
    printf("   \\    .      '.       ___  `.                     \\       '\n");
    printf("    \\    \\      \\       ,..`                         \\     /\n");
    printf("     `.   \\      \\     ( \" )          ,......--'\"\"`.  \\   /\n");
    printf("       .   \\      \\     `\"'                   ,\".   |  `.'\n");
    printf("    ,..|`.  \\      `.                         `\"'   |    \\\n");
    printf("   |    . `.-`\"''\"\"\"`--._                        _.'      \\\n");
    printf("   ,\".   `.|             `-..    /`. .._      _,\"          \\\n");
    printf("   `\"'._   '                   ,'  | |  `\"+\"\"' ,-'\"\"''-.    .\n");
    printf("        `\"--`._             _.\"    | |   |    .  ,...   .   |\n");
    printf("              |`+..____,..-'       ' |   |    | .    |  |   |\n");
    printf("              |/  ,..\\           ,'  '   |    | `.__,'  |  ,'\n");
    printf("              '  |   |`.___   _.'   /    `.   `._     _.' ,-.\n");
    printf("               \\ `--'   /._'\"\"   _,'     .'`._   `\"--\"  .'   `.\n");
    printf("                `-..,.-'   `---\"'     _,'_,.--`\".___,.-'      |\n");
    printf("                   /-----\"'   ,`\"\"''\"\"           |   _....._ .'\n");
    printf("                  ,-'\"\"--._,-'                   '.\"'      .\"\n");
    printf("                   -..---'                         `\"-----' \n");

    break;

case 109:
    printf("                               ,----.\n");
    printf("                              '      |\n");
    printf("                             /       '\n");
    printf("                       __,..'         \"-._        _\n");
    printf("                  _.-\"\"                   `-.   ,\" `\".\n");
    printf("         ,-._  _.'                           `\"'      '\n");
    printf("       ,'    `\"                                       |\n");
    printf("      .                                               .\n");
    printf("       `.          _.--..               ____          '\n");
    printf("       /         ,'    . `           ,\"' .  `.         `.\n");
    printf("      /         .         |         /         \\          \\\n");
    printf("     /          `------...'        ._____      .          \\\n");
    printf("    .                                    `'\"\"\"'            \\\n");
    printf("    '                    ________                           .\n");
    printf("   j           `.\"\"/'\"\"\"`        '\"\"\"'\"'--....,-            |\n");
    printf("   |             `/.                      ,\\ /              `.\n");
    printf("   |                `-._               _.'  '                 `-.\n");
    printf("   |                    `\"-----------\"'                         |\n");
    printf(" .\"                         ____                                |\n");
    printf("|                      ,-\"\"'    `\".                            ,'\n");
    printf("|                     .   .----.   `.                        .\"\n");
    printf("`.._                  |  '.____,'   |                        '\n");
    printf("    |             ,\". `.           ,' _                     /\n");
    printf("    '            '   `._`.'._\".__,' .' .                   /\n");
    printf("     .            `'-._ `._     _.-'  _.'                 /\n");
    printf("      `.               `.  `--'\" _,.-'                    `\n");
    printf("        .               ,'     .\"                          '\n");
    printf("         '        .-..-' _,.--._`\"-..,-.                 ,'\n");
    printf("        /         \\    ,'       `-.    |           .-'\"-\"\n");
    printf("        \\          `-.'            `..'         _,'\n");
    printf("         `.,.-\"`._                           ,-'\n");
    printf("                  `\"-.                       |\n");
    printf("                      \\       ,..----.     _.'\n");
    printf("                       `\"\"---\"        `..-\" \n");

    break;

case 110:
    printf("                  __....____,'  `-.\n");
    printf("         ,\"\"-..-'\"          \"-    |       ..      _.._\n");
    printf("         |        _, .,           '._    /  `'\"\"\"'    |\n");
    printf("        .'         _____             `.,'     ____     `.\n");
    printf("     _,\" _.'      \\  |  '\"--..        '       \\__ `\"-.   `.\n");
    printf("    | ,'\"|/        `-.______,'      `     ' |\\_  `'\"\"'  .  \\\n");
    printf("    .'---'      _____             . '   `   |,'\"\"\"-._  ' \\  .\n");
    printf("   /   __..--\"\"|___/ \"-.._/|         ,'       ___    `. \\ \\ '_\n");
    printf("  . .'...-----'\"\"----.._.' |-.      |        | ,.`\".   \\ `'   |\n");
    printf("  | `\"                  \"-.'-'      `.        \\`._`.\\   |.  .-'\n");
    printf(".\"        _..._                 .              `._  ,   `.' |\n");
    printf(" `.    ,\"'_....`\".               |                \"\"       .\n");
    printf("  |    | |     | |             -'   `,                    /\n");
    printf("  `,.  `._`---'_,'  ,-.    '        ' `-.             _   |\n");
    printf("  ,\\ `._  |___|  _,'  |  `    \\        . /-.__     _.' `-\"\n");
    printf("  \\ `.._`-._ _.-'_,.--'        |        `.    |  ,'\n");
    printf("   `-\"\\ `-. ' ,'_         `-..'       .-'    /  /\n");
    printf("       `._.---._ `\"----.        .   ,'.   _.'  /\n");
    printf("         `.     `'-.._/       -\" ,-\" `.`-'      `.\n");
    printf("           `.,       .-\"    _    |     | .     ) |\n");
    printf("             '._  ,\"`----\"\"`.    |     ' `'       .\n");
    printf("                \"\"           `--'       \\`      ,\"'\n");
    printf("                                         `-._,-' \n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");

    break;

case 111:
    printf("\n");
    printf("                                        '\"-.\n");
    printf("                                       //   .\n");
    printf("                            .,.       '/    `\n");
    printf("                           |   \\     /.      \\        ,.\n");
    printf("                           |    `.  / '       \\     ,' |\n");
    printf("                          .|      `\"-'         \\  ,'   |\n");
    printf("                          ||                    \\'     '\n");
    printf("                   ,--.   ||             _,.     `\"-.   `.\n");
    printf("                __.  ,.`.j '    _.-'\"\"','  |__ ..    |    `.\n");
    printf("               .  |  |/  `.   ,'    .'     ' .'  `. ,_...   \\\n");
    printf("               '  '        \\-+.._,.'      .,'      `    .'   .\n");
    printf("              .  /      '  |     .-'      /           ./     |\n");
    printf("             /  /     .'   |             .'         ,'_|,..   .\n");
    printf("            /  '     /     '             |        _.-\"   .'   |\n");
    printf("           /  '    .' _.'   `.        __ |    _,-'      /      .\n");
    printf("          / ,'    / .'        `.    ,'. ||_,-'         /       |\n");
    printf("         /,'     /.'           `._,',\"  '|           ,'        '\n");
    printf("       ,+'      .'            .'\".'    / '          .           .\n");
    printf("      |         '           .','      |,`.         j            |\n");
    printf(".\"\"'--+--     .'           | /        '   .        |            |\n");
    printf(" \\          ,_|             \\'         `._|        |            '\n");
    printf("  `._     .'    ______      .+---.        `--..    |             .\n");
    printf("     `. ,'   _.\" |    `-. ,'      `.          |    |             |\n");
    printf("      |    .' /\\ |    ,' /         |        ,'     '.            |\n");
    printf("       `--'  /,'\"    /  /          |      ,'        /            |\n");
    printf("            /.     .' .'           |    ,:    ___  /             |\n");
    printf("           . |    /  /.  ,---.    j    /. `..'   \"           ,-. |\n");
    printf("           | |  .'  / |.'     `.  |   / ,\"-..__,...--._     /   \\|\n");
    printf("           |`-\"' _.' .'|      . .' `-'.'        /     |`..-'     |\n");
    printf("           `..-\"'--\"/  |    .'| |    '_.-. _.--'     .'.    /\\   |\n");
    printf("                    ..-'----' |,          '          |.`._ . | _,'\n");
    printf("                             `                       '    `| ,'\n");
    printf("                                                            \" \n");

    break;

case 112:
    printf("            ,\".\n");
    printf("            |--\\\n");
    printf("            | .'\\   |.\n");
    printf("            |'  _\\  |' ,.\n");
    printf("            |,.._ \\_| `.|    .-\"|\n");
    printf("          .'      .--   `. ,',\" '\n");
    printf("         '_..._   ..|`    \\ '  /\n");
    printf("         `     `.       .  /  /\n");
    printf("          .     ``.     ,' `./\n");
    printf("          |      `|`.   `-._ `\"\"\".\n");
    printf("          '       |.'`.     '   '\n");
    printf("           \\           \\  .'     `__,..\n");
    printf("            `.                ,.-'    '\n");
    printf("        _..-' `.     _.'   \"-.|      /\n");
    printf("    _.-'    |  ,`\"'\"\"   _       `.  .-..\n");
    printf("  ,\"   |    | .       .'  `     | `.  /  _,..\n");
    printf(" |     '    ' |      /     |    |   `.`'\"   '                _,..__\n");
    printf(".'.     `.__..| |\\  /      '    |     \\    /             _,'\\    _.'\n");
    printf("|,'     ,' _..|.-'\".            |      \\  .            .'.   \\,-'\n");
    printf(" \\\",  .'  ,`-.      `.          |       \\ `\".       _,'   \\ .'\n");
    printf("  `\"\"'    ` ._\\      |   _,.'   '        \\ /___,.--\"`.    .'\n");
    printf("          .`         |,-\"     .+       _  V    `.     \\  /\n");
    printf("           `-._    _,' `\"-...' ,\\ .\"    `.|      .     \\'\n");
    printf("              ,`.            .'  /        `.     |    /\n");
    printf("            ,'   \\\"--.....-\"'   .        .  \\    |  ,'\n");
    printf("           .    .\"\\           _,|        |   .   |.'\n");
    printf("           |  ,'   `-.____..-\"  |        '   |_..'\n");
    printf("           | |       /`._      _|         \\  |\n");
    printf("          ,. .       \\   `-.-'\"  .         \\ |\n");
    printf("        .' |,-`     _/       `'\"\"-`.        `.\n");
    printf("       -'\".'  \\_,-\"\"                |.     .. |\n");
    printf("         ''\"'\"\"                     ' |  ,'  \\|\n");
    printf("                                   | .'..|    |\n");
    printf("                                   '\"     `... \n");

    break;

case 113:
    printf("\n");
    printf("                    _,.-''\"\"\"`-._\n");
    printf("                  ,\"             `._\n");
    printf("                ,'   ..     .       `.\n");
    printf("              .'     ||     ||        `._\n");
    printf("   ,.....---'\"                         `._`-..._\n");
    printf("   `._  _,.-\"/        `\"--'         `  `. `._   `\"'-.\n");
    printf("  __..-'   ,' /                      \\   `.  `-.__.-'\n");
    printf("`._    __,'  ,                        `.   `.    \"--.\n");
    printf("   `\"'.'   .'       _,.+..              `.   `.-...-'\n");
    printf("    ,'  _,'     _.-\"   A  `-._            `._  `-.\n");
    printf("    `\"+'       '     ,' `     `-             \"''-'\n");
    printf("      '            ,' ___`.                   |\n");
    printf("     .            ' .`   `.`.                 |  _,.\n");
    printf("     |            ,'       `                  |,\" ,'\n");
    printf("     |           /          \\                 |  /\n");
    printf("     |          j            '                | /\n");
    printf("     '          |'`\"\"''\"`'\"\"\"|                |/\n");
    printf("      .         `            '               ,'\n");
    printf("       `.        \\          /              ,'\n");
    printf("         `._      `._     ,'             .'\n");
    printf("            `._      `\"\"\"'             .'\n");
    printf("          _,'  `-.....___________...-'`-.\n");
    printf("         `...---'               `--.....-' \n");

    break;

case 114:
    printf("                      _____         ____\n");
    printf("                   ,\"'     `.   ,-\"'    `\".     ,.\n");
    printf("                  .  ,---.   |,'   _...    .    | `.\n");
    printf("             _.---'`'\"-._ |  /   .'.---`.  '    '  |\n");
    printf("           ,'            `| /...-._____ |  |`\".'   |\n");
    printf("          /    _,---+-.   ,'       `-. ||  '   `..-.._\n");
    printf("         .   ,`._    `.`,'.   _...    \\` .  `.   `.   `-.\n");
    printf("         |_,.-...`---\"'|  ,`.|  .\"`    \\`.`.  `.   \\     \\\n");
    printf(" ,      ,'             |  |  |  |  \\    \\ `.`._ `.  \\`.   .\n");
    printf("| \\    '     __......-\"|  |  |  |`._\\    '. `\"-`. .  . \\,\"'-._\n");
    printf("|  `\"'|   .\"'   ___    |  |  '  `-...\\...|_`.._ | |..:-'      `.\n");
    printf(" `-..-|  .    .\"  _`+.,'  |   `._          `-.,'  |     ,+\"|`. |\n");
    printf(" ,'  ,|  |  ,' ,\"'     __,'      `'\"\"\"\"'`-.   .  ,'...-' | | | |\n");
    printf(".   / `  |  | .   ,-'\"'             ____   `. |-'-.| |   ',' `'\n");
    printf("|  |   \\ |  | | .'   ,-'\"\"'-.    ,'\"    `.  | |.   | |__     ,.\n");
    printf("'  `.   `|  ' | |  .'        \\  .         | | `.`. '  . `\"-.' |\n");
    printf(" \\ |\\`-..|   .`.|  |    ()    | |   ()    ' `._ ,.' \\  `---' ,\n");
    printf("  `| `--\"    | |   '          ' '        .    .' |   |.____,' \\\n");
    printf("   `.       ,' '    `.     _,'   `. ___.'_..,'   |   |  | `.   .\n");
    printf("     `-...-' .' _...  `---\" _....._  _.'\"    `..'|   |  |  |   |\n");
    printf("    ,'    _.\" ,'    |    .-' ___   `'   _..    `/|   |`.|  |   '\n");
    printf("   '    ,'/  /   _,.'  ,' .-'   `\".  \\,'   `.   | .  `  .  '  /\n");
    printf("  .   ,` ' .'   '    |/  /   ____/ \\  . ,-\"'|   '-.`.__,',' ,'\n");
    printf("  |   | |  ||  |`-..\"/  /`.'\"   /   . |'  _,'  /.  `. .\"' .'`..__,.\n");
    printf("  `   `.|_..'  `._  /  /   `._ /   /| | ,'/   /  \\   \\  ,\"._    _,'\n");
    printf("  ,`.        \\    `-._/ `.    `-.,' | |. /  ,'   /.   \\'  __`--\"\n");
    printf("  |  |-..,.\"| `-._    `.  `,      \",  '-j  .   ,',`.   `\"'  '\n");
    printf("  |  |   `. `-../ `-.   `.' `\"+-..' .'  |  |_,'.\"| |`.   _,'\n");
    printf("  '   `-._ `._.'   / `.  | _,'  |\"'|`-..|  |   | | |  `\"\"\n");
    printf("   `._    `\"'   _.|__.-| |\" `---|  '.   |  '.,'  `.'\n");
    printf("      `-.....-\"'  |___,  '       `. \\`+-`.   `.\n");
    printf("             .'   '  /  /          \"'/    `\"--'-._\n");
    printf("           _,:  ,'   `-\".           .             `._\n");
    printf("        ,-'   `\"         |          |                `.\n");
    printf("      ,'                 |          '                  `.\n");
    printf("     /                 _,'           `._                |\n");
    printf("    |               _,\"                 `-..__        _,'\n");
    printf("    `.        __..-'                          `\"\"\"`\"''\n");
    printf("      `-----\"' \n");

    break;

case 115:
    printf("                               |`.\n");
    printf("                               |  \\\n");
    printf("                          __   |   `.\n");
    printf("                        _|  \\  |     .\n");
    printf("                      .' \\`-.. `     | _____\n");
    printf("                      ,`-`  `.| \\   ,\"'     `-.     ______\n");
    printf("                     |        |  \\.'           `.,\"'      `\",'\n");
    printf("                     `.     __| ,'|             |        _.'\n");
    printf("                      '    .  :/  |             |......-'\n");
    printf("                     j      `./  .'\\            | |\n");
    printf("                    ||      ,/   ' \"'         ,'  |\n");
    printf("                    ||     . `.   `.|       .'|   |\n");
    printf("                    '+     `.  `.   '     ,|__'   '\n");
    printf("                     `    .'    \\`.  `\"-.'      .'_\n");
    printf("                      \\   `   ,  `.`.    _..-|     `---....-\"-._\n");
    printf("                       \\ . `.' _..---`.._..-\"|   |              `,\n");
    printf("                        /    .'          `.  |  ,` ._           /|\n");
    printf("                      .'    /              \\ `-|     |        ,'|'\n");
    printf("                     '/    /                .  '    .' ,-----'\"\"'\n");
    printf("                _ ,.-'    /       _.._      |   \\.-'--'\n");
    printf("              .\"         /   ,..\"'`\\/ `     |   |\n");
    printf("             /|         j  _,`/    _| \"`.   |   |\\\n");
    printf("            j `-.       |,' `.    |.|    .  |   .|\n");
    printf("            |    |    . |     `._.`-|`.  |  |    '\n");
    printf("            |    |  _ ` |       `..'\"`\"\"' \\ '     `.\n");
    printf("         _.-'\"\"\"\"' | `\"\\`                  .       |.\n");
    printf("      ,-'|   .\"`.  `.   \\`.                '      j  .\n");
    printf("    _'_..'   |   :-.--.' `.`._           ,'       |  |\n");
    printf("  .'          `+'_  `.|      _`.._____,-' ,\"`.    `._/\n");
    printf(" /         _____  `-.__..--\"\"         `-.'    \\     |\n");
    printf(".    _,.-\"'     ``\"\"'                    `-..-\"  ___/\\\n");
    printf("'.,-'                                      .',-.'   |'\n");
    printf("                                           ,'   `.  |\n");
    printf("                                                  `\" \n");

    break;

case 116:
    printf("                          _,..----.._\n");
    printf(" ,\"''-.               _.-'           `\"-._\n");
    printf(".,-.   `._          ,'    ,---.           `.             _,..\n");
    printf("||  \\     `._     ,'    .' |   .            `.     _,.-\"' _,'\n");
    printf("||   .       `-._.      |.'|   |            _...-\"'    _,'\n");
    printf("''   |           '      |  '   |         --'       _,-'\n");
    printf(" \\\\  |                  '.'    |                 ,'\n");
    printf("  .`.'                   `.    '                (\n");
    printf("   `.____                  `--'                  `--..__\n");
    printf("         ``\"-.._                                        ``--..__\n");
    printf("                |\"                                              ``.\n");
    printf("                `                             .--\"''\"\"\"'`--------'\n");
    printf("                 `.                           \\\n");
    printf("     ,-\"'`-._      `-._                 `._    `.\n");
    printf("    /        `.     ,._`-.._          _,'  `-.   .\n");
    printf("   .    _      `.   |  `\"-._`     .-\"'        `-. `.\n");
    printf("   |     `\"-._   `. |--.._  `._   \\              `. .\n");
    printf("   |          `-._ `|     `-._ `-. `.              `'\n");
    printf("   `        ._    `/'         `-. `. .\n");
    printf("    \\         `\"-.'  .-....__    `. `.`.\n");
    printf("     .          /    '       `\"-.._   | \\\n");
    printf("      `.       /------\\            `  |  \\\n");
    printf("        `.___./        `              '   .\n");
    printf("             ,          `._        ,-'    |\n");
    printf("             |.-\"''\"\"'--.._`\"---'\"/       |\n");
    printf("             |  ______      `\"-../        |\n");
    printf("             .\"'      `\".       /         '\n");
    printf("           ,'            .     /         .\n");
    printf("          .              |   .'         /\n");
    printf("          |       ,'     |.-'          /\n");
    printf("          |       |      '            '\n");
    printf("           .       `-..-\"          _,'\n");
    printf("            `.                  _,\"\n");
    printf("              `._          __.-'\n");
    printf("                 `'------\"' \n");

    break;

case 117:
    printf("                                .                ,'\n");
    printf("                               /|               /,\n");
    printf("                              'j               / |\n");
    printf("                             / |              / j\n");
    printf("                            .  |             /  |\n");
    printf("             .              |  |      _     /  j                _,..\n");
    printf("   ,         |\\            j   |   _,\",'   /   |           _.-\"',-'\n");
    printf("   '`        | `.      ,.  |   | ,'  '    /   j        _.-', _.'\n");
    printf("    \\`.      |   `...-\" '  |   \"'  ,'    /    |    _.-' _.','\n");
    printf("     \\ \\     |           \\ |      /     /     L_.-'  _,' .'\n");
    printf("      \\ `. ,\"`            v      `.__  /           ,' _.'\n");
    printf("       \\  \\   .           |        .' /         _,' ,'\n");
    printf("        \\  `  '           '      ,'  /        ,'  ,'\n");
    printf("      .--`.    \\   .     .     .'---/      ,-'   (\n");
    printf("       `.  \\| | .  |    |`.  .'    /    _,'       `-..__\n");
    printf("         `. | ' '  |    ' |  |        ,'                `\"---...__\n");
    printf("          .'`. ` \\ '   ..'|  |    `,              __________......\"\n");
    printf("          `\"--`.`.\\ ` `---' ,    -.    -'\"'\"\"`''\"\"\n");
    printf("                |\"\"`      .'     /  .._.'  .  `\"`.\n");
    printf("       __..--'\"\" `.       |`__|\\.     |  __`     |\n");
    printf(" _,.-\"'            \\      | |     .  .'    |  --.'\\\n");
    printf("`-----\"`'\"\"''+.  _,'|     |/|      `-'  .  |    |  \\\n");
    printf("           .' _,\"   |     ' `..'_......._`\"  .  '   .\n");
    printf("         .'_,\"   _. |    _.'  ,'         `.   `'    |\n");
    printf("        /.\"  _.-'  '`.--\"   .'             \\  /     |\n");
    printf("      .''_.-'     .  /     /        __      .'      |\n");
    printf("    ,'_.'         ' /     .       ,\"  `.    |       |\n");
    printf("   .-'           / /      |       |    '    |       '\n");
    printf("                . /       '       '         '      /\n");
    printf("                ,'         \\       .       /      /\n");
    printf("                            \\       `-...-'     .'\n");
    printf("                             `.              _,'\n");
    printf("                               `._        _,\"\n");
    printf("                                  `\"----\"' \n");

    break;

case 118:
    printf("                                            _.--.\n");
    printf("                                      __  ,'     \\\n");
    printf("                                    ,'  `\"        .\n");
    printf("                                   |              |\n");
    printf("                        ,'`.      ,'              |\n");
    printf("                  .._  /    \\   .'                |\n");
    printf("                 /   `'      `. |     .          .'\n");
    printf("                .   |   _...__ |'    .           |\n");
    printf("                |   |.\"'      `|     '           .\n");
    printf("                |  ,'           \\   /            `.\n");
    printf("         '`.   .| .              \\ j               |\n");
    printf("          \\ `./ | |               .|              ,\n");
    printf("           \\  . `.|                .            .'\n");
    printf("            \\  `.                  '           _|_\n");
    printf("             \\   `.                 .        .'__ `\n");
    printf("            / .   |                 |        |\"  | `-...._\n");
    printf("           .      |       ,.--.     |     _.'    |        `.\n");
    printf(" .-._      |   `  |      /     \\    |.--'\"       '         |\n");
    printf(" |   `'\"\"'\"|    `       .     .'|                 \\        |\n");
    printf(" |        ||            |    /| |                  \\       |\n");
    printf(" '        ||            |  ,d | '                  |       |\n");
    printf(".         :`             .'\"-' /  /`.            _,'`.      `.\n");
    printf("|          \\.             `..-'  / \\ \\       .\"\"'     `.      |\n");
    printf("'._         '                   /   \\ `.    /           `    .'\n");
    printf("   `-.     .'`. .._____        /     \\  \\   |                |\n");
    printf("    _|     |   \\  ___  '    _,'       .  `  .`-._            '\n");
    printf("  ,' |     |    `. \"\" / __,\"           `-..'     `.           `.\n");
    printf("  |  `-----'     |\"''\"'\"                          '            |\n");
    printf("  '              |                                 .           '\n");
    printf("   \\          _.'                                  |          |\n");
    printf("   |     ,-\"''                                      ._   _..  `.\n");
    printf("   |    /                                             `\"'   `.  '\n");
    printf("   `...'                                                      `\" \n");

    break;

case 119:
    printf("                     ,-'\"\"\"--..__  .'\\\n");
    printf("                    .            `\"   \\\n");
    printf("                    '                  \\\n");
    printf("      _____          .                  .\n");
    printf("  ,\"\"'     `'--.._    \\                 '\n");
    printf(" /                `._  \\  \\    +.     :' .\n");
    printf(".                    `._`. `.            |\n");
    printf("|                       `-`  .      _ .  |\n");
    printf("|                      '-._`._\\  \\ ' ||  |\n");
    printf("`.                         `. `.  . \\||  '\n");
    printf("  `.                 .  ...  `._`.|  '` .\n");
    printf("    `._              `   `.:    `.`.   '|\n");
    printf("       `.                     '`  `.\\  ||  _,...._\n");
    printf("         `                   -.     ``.'|,\"       `-._\n");
    printf("          |                \" ._`-._ . -._`._ |  .     `--..  ...\n");
    printf("          |           ,....    `-.-'    .'  `.  ;       ,'  /   \\\n");
    printf("          |           `\"\"'   \"' /     .\"_     `.      .'   .     '\n");
    printf("          |       _       _,.-'/  .      \"\"-.   .   ,'.   j      .\n");
    printf("          |       +'    ,\"    /     +\"    _,.'  |  /.  \\  | . |  |\n");
    printf("          '           ,'     j  .'     ._ ...   | /  `. \\ |   '  |\n");
    printf("         ,.`----...._'`.    /|           _..-'  |/  ,-.  \\|  '   |\n");
    printf("         \".      __  `-.`. / |     +' _.\"  __....._  `.`._| / ,  '\n");
    printf("           `.   `\"-'      `-.|      .'_,-'\"        _.-\"'/ |/ '  /\n");
    printf("             \\         `\"-.._`-.   ,-'         ,-\"'   .`. |,' .'\n");
    printf("              |          `   `-.`./ _.._      |     ,'__ \\| ,'\n");
    printf("              |       __  +' -- .'.'.--.`.     \\  .','..`.+'\n");
    printf("              .      `--' .\"_,.\"  |||  | |      `\" | |  ||\n");
    printf("              `.         _.\"  /\\  || \"\" ||         || \"\"'|\n");
    printf("                `-...,-\"' ,' /  \\ `.`..'/          ' `..'\n");
    printf("                   '        /    `. `--'            `.,'\n");
    printf("                    \\      /       `=+=  ,--------. .'\n");
    printf("                     `.___,           `.| `.____.','\n");
    printf("                                         `-.....-' \n");

    break;

case 120:
    printf("                                ..\n");
    printf("                               .  .\n");
    printf("                                  '\n");
    printf("                              ' \\/ '\n");
    printf("                             /  .  `\n");
    printf("                            .   |   .\n");
    printf("                            '   |\n");
    printf("                                |    '\n");
    printf("                           '    |\n");
    printf("..__                      /     |     .\n");
    printf("'   \"-..__               .      |\n");
    printf(" `.       `\"--..____..          |      '                  __..--.\n");
    printf("   ..            |   |..'       |       ..\"-. ____,..---\"'      /\n");
    printf("    .`.          |   ' \\        |      .'/   /              .','\n");
    printf("     `.`.        `    \\ `. _,..-'._   , /   .            _.','\n");
    printf("       `.`.       \\       \"        `\"' /    '          ,' ,'\n");
    printf("         . `.      .   '              /    /        _,' .'\n");
    printf("          `. `.     .   \\            /   .'       .\"  .'\n");
    printf("            `. `.  /`    \\          /   , \\     .' _,'\n");
    printf("              `  `/  \\    \\        /   /   \\  ,' ,'\n");
    printf("             ,\"`./    \\  ,-'\"\"'\"-./   /     \\_.-'\n");
    printf("             |._ `.    ,',-\"\"'\"\"`-.` '    _,' `.\n");
    printf("             |  `-._  . /          \\`._.-' _.-\"|\n");
    printf("              `._   `-|.            .|..-\"'    |\n");
    printf("              /  \\\"._ ||            ||     _,-\".\n");
    printf("             .    \\  `.|            ||..-''/   |\n");
    printf("             '     .   `           .'    ,'    '\n");
    printf("            .       .  .`._      .'`.  .'       .\n");
    printf("                   .|,'   /\"----\"\\   `._|.      '\n");
    printf("           '     ,' `. _,\"-.    ,\"'._  .' `.\n");
    printf("          /    .'  _.'\"     `..'     `\"-.   \\    .\n");
    printf("         .   ,' _,'                      `.  `.  `\n");
    printf("         | .'_,'                           `'. `. .\n");
    printf("         `\"\"'                                 `. `|\n");
    printf("                                                `\" \n");

    break;

case 121:
    printf("             .\"-.._          ____\n");
    printf("             \\     `-._     /  /\"\"\"-.\n");
    printf("              .    `\"-.`-_.'`.j      \\\n");
    printf("     _________'  .,---'\"\",|   |...___.'\n");
    printf("   .'          \\ `-.._ ,' |  ,      || \\ ____\n");
    printf("    `.    __,.-+--'\"_.'  ,^./       ||  |____`\"\"---..__\n");
    printf("   _,.`\"\"\"__....--.'   .\"  `..___   ||_.'  `.\"\"'\"\"`--- '.\n");
    printf("  /_.--\"'\"       /   ,'      |   |\"\"'\\  \\    `.       .'\n");
    printf(" .'             '  .' ___    |   |`\"--\\  \\ ____`.   ,'\n");
    printf("  `.             \\,.-'   `.  |  j      \\  \\`.`.   ,'\n");
    printf("    `-.                 /  \\ |  |       \\  \\ `.`.' `._\n");
    printf("       `._             /   |j  j  ..--.  \\  \\  `.`.   `-._\n");
    printf("          `._        ,'    ||  | /  \\  `. '  .   `.`.     `.\n");
    printf("             >.     /      |'. |'    \\   `._,'     `.`.     `.\n");
    printf("           .\"  `.  /       |   |      \\               .` _..\"\n");
    printf("         ,\"    ,'`.         |\".'       \\               `.`.\n");
    printf("       ,'   _,'   |         | |         \\                `.`.\n");
    printf("     ,'  _,'      '        j j           \\                 \\ .\n");
    printf("   ,'  ,\"          .       | |          _.\\....___          \\'\n");
    printf("  '  .'            '       | '         /`   |     `\"\"`---..__|\n");
    printf(".'_.'               .     j .         '  `.  .\n");
    printf("|\"                  '     | |       ,'     \\  \\\n");
    printf(" ''\"''\"\"\"\"''---------.    | |      /        `  \\\n");
    printf("                     '   .' |    .'          \\  \\\n");
    printf("                      .  | .    ,'.           `. .\n");
    printf("                      ' j  |   /   `-.          . \\\n");
    printf("                       .|  | ,'       `-.        . \\\n");
    printf("                       `|  |.            `._      \\ \\\n");
    printf("                        `\"-'                \"._    ` .\n");
    printf("                                               `._  \\|\n");
    printf("                                                  `-.| \n");
    printf("\n");
    printf("\n");

    break;

case 122:
    printf("               ,---.    ___\n");
    printf("               |(__)| .',-.`.\n");
    printf("               `.  j  | \\.'.'\n");
    printf("               _'  `\"'  ,-'___\n");
    printf("             ,\"         `\"',--.\\                     _..--.\n");
    printf("             |           __`..''                _,.-'      `-.\n");
    printf("   ,-\"\"'`-.. '          (  `\"\"'         _...--\"'        ,.--..'\n");
    printf(" ,'        .' `._____  ,.`-..--\"\"\"'----.               /\n");
    printf("/   _..._,'   .\"     \\ `..'|            `.        ___.'\n");
    printf("'.-\"  .'    ,'        '---\"               `.     /\n");
    printf("     |    .'.._     ,'                      `.  /\n");
    printf("      \\   `    `._ /      |  !    !  |        |\"\n");
    printf("       `.  `.     |   __  |          j  ,--. _|..._\n");
    printf("         \\   `.\"\"\"\"-.'  `. '           /  ,'\"      `-.\n");
    printf("          `.   `.    `.  |   _____|   |  /            `.\n");
    printf("          |`....'     |_,'   `.   '    `.              |\n");
    printf("          |           |---....____....-\"`        .--.  '\n");
    printf("           .         ,'                  `..._  (    `'\n");
    printf("            `--..,.-'      _.--\"\"\"'\"'.   |,\"\".`. ,--.. \\\n");
    printf("                 |       ,'       .\"\"\"`. ``-\" | |(__)|  `.\n");
    printf("                 |      .         |(__) `-'   '\"   ,\"     |\n");
    printf("                / `     |          `--.          .'_,..-\"'\n");
    printf("               /   `._   ._       .\"\"\"`-         ||\n");
    printf("               '..._  `._  `-....( (__) __    _.','\n");
    printf("              ,'    `.   `---.....`..-\"'  `\"'\"_,\".\n");
    printf("         ,-\"\"`. _.---+..-'            `\"---+-'   `\n");
    printf("        /      `.                       .\" , \\    \\\n");
    printf("        ._    ,--.                     |  |  |.    \\\n");
    printf("         _:--'    `.                   |  `._| `..-|\n");
    printf("     ,-'\"  `.    .' |                  '    `\"--...'-.\n");
    printf("    .        `\"\"'_.-'                   `.           |\n");
    printf("    |         ,-'                         `-.______,.'\n");
    printf("    '.     _.'\n");
    printf("      `---' \n");

    break;

case 123:
    printf("           ______\n");
    printf("       _.-\"______`._             ,.\n");
    printf("     ,\"_,\"'      `-.`._         /.|\n");
    printf("   ,',\"   ____      `-.`.___   // |\n");
    printf("  /.' ,-\"'    `-._     `.   | j.  |  /|\n");
    printf(" // .'   __...._  `\"--.. `. ' |   | ' '\n");
    printf("j/  _.-\"'       `._,.\"\".   |  |   |/ '\n");
    printf("|.-'                    `.'/| |   | /\n");
    printf("'                        '/ | |   |/\n");
    printf("                         /  ' '   '\n");
    printf("                   |.   ` .'/.   /\n");
    printf("                   | `. ,','.  ,'\n");
    printf("                   |   \\.' j.-'/\n");
    printf("                   '   '   '. /\n");
    printf("                  |          `\"-...__\n");
    printf("                  |             _..-'\n");
    printf("                 ,|'      __.-7'   _......____\n");
    printf("                . |    ,\"/   ,'`.'__........___`-...__\n");
    printf("                 .    '-'_..' .-\"\"-._         `\"\"'-----`---...___\n");
    printf("                 |____.-','\" /      /`.._,\"\".                 _.-'\n");
    printf("              ,\"`| ,'   '   |      .,--. ;--|             _,-\"\n");
    printf("             |   '.| `-.|   `.     ||   /   '`---.....--\"'.\n");
    printf("             '     `._  |     `+----`._;'.   `-..____..--'\"\n");
    printf("              `.    | \"'|__...-|,|       /     `.\n");
    printf("                |-..|`-.7    /   '      /   |  '|\n");
    printf("                ' |' `.||`--'    |      \\   | . |\n");
    printf("                        |        |       \\  ' | |\n");
    printf("                        `.      .'        .   ' '\n");
    printf("                          `'-+-\"|`.       '  ' /\n");
    printf("                             |`-'  \\     /  /.'\n");
    printf("                             `   _ ,.   / ,'/\n");
    printf("                              ||'.'`.  / /,'\n");
    printf("                               `      ' .'\n");
    printf("                                     /.' \n");

    break;

case 124:
    printf("                _   _,.-.' .-.\n");
    printf("            _ .' |,'   .\"\".| |.\"\"._\n");
    printf("           ( || ,',\"\". `._`' `  '  `.\n");
    printf("           `\\ | `\" .-\"`-..`     .    `.\n");
    printf("            |     `..--.._       |     \\\n");
    printf("          _,|      _...'_.'     ,+.     `.\n");
    printf("     ,\"\"'|   `...-'..\"\"(__.._ -\"   `\"--.. `.\n");
    printf("    |`._,'  ,'  /\\ .'\"\"` .'\"\"`. `.    |  `. \\\n");
    printf("    '      / / /  ||    ||    |.`.`.   .   | \\\n");
    printf("     `.__,'-._'  /|` -\"'  `-.'  \\ \\ \\   `\"-'  \\\n");
    printf("      ' `.   /  /_| | |'\"\"| | .-\"\"'`'\"`-,.-\"\\  .\n");
    printf("     . / .\\ .  /  | | `._.' ||        ,'     \\  \\\n");
    printf("    ' / / |/  /_.-+._`-..--\"-.       .   .    \\  `\n");
    printf("   / /.'  '  ,'\"\"'-. `\".\"'\"\"'`..     |.        \\  \\\n");
    printf("  / . |  j  .       . |        |\\__,\" |.  `    '   \\\n");
    printf(" .  | |  |  |       ' |        '|   | ' `  \\    \\   .\n");
    printf(" |    |  |  `.____,'   ..____,' |   |    .       \\\n");
    printf(" |    |  |  | ._  _..---._   _,'    |       .        '\n");
    printf(" |    |  |  | | \"\"  .    |`\"'   \\ `.|     '  '  '     .\n");
    printf(" |    |  |  | |     |    |       `  `      .  .  \\    |\n");
    printf(" |    |  |  | |     '    |        \\  `.    |  |   .   |\n");
    printf(" '    '  |  | |      .   `         \\   \\   |  |   |   |\n");
    printf("  \\      `  | |      |              .   `. |  |   |   |\n");
    printf("   \\      \\ ' |      `    '          `    `+..|___|___|_........\n");
    printf("    \\      \\ \\|       '    .           `.    `.                 |\n");
    printf("     `.     \\ .        .   `             `.    `-.            .'\n");
    printf("    _,'`.    \\'         .   \\              `-.._  `._       ,'\n");
    printf(" _.\"     `._ `.`        |    .                       `._   .\n");
    printf("`._       _,`\"--`.      |     .                         `. |\n");
    printf("   `-._ ,'              |      `.                         `|_\n");
    printf("      ,'         |      |        `.                          `.\n");
    printf("    .'   __...__.|      |          \\ __..._     _,..,.__       `.\n");
    printf("    `-`\"'        `._..--'-.__      .'      `-..'        ``'\"--..-'\n");
    printf("                             `\"---' \n");

    break;

case 125:
    printf("              '\n");
    printf("             .\n");
    printf("             | '\n");
    printf("             | |\n");
    printf("          .  ` '                              .\n");
    printf("          '`. . .          .--.              , .\n");
    printf("       ..  `.`| `....___  '   |            ,_' |\n");
    printf("      |  |   .    _,   .`-`,-\"          ,.'    '-.\n");
    printf("      `..`._,'` .'.   '  ,'            /    .....|\n");
    printf("          `.'  ','      '  `-._      ,'     `----'\n");
    printf("          ,'| '/               `.  ,'   \\ .-\"\".   \\\n");
    printf("        |' |`'/ .|               `.     .'  _,'_.\"'\n");
    printf("       /   `.' /_|  __       _...-'   .' |.' .\"    \\\n");
    printf("     ,' `-.   '\" .-\"V `-.  ,'       ,'   |    `-'\"\"'\n");
    printf("    ,--.'. `.   /      / ,' ,      /`.   |          |\n");
    printf("  .'---'  `./\"\"|'.    / /  /      '   `-.|          |\n");
    printf(" /         /   `-....','  /              `.|    | . |\n");
    printf(".|       .'       .'.'   /      _,        .'   .  | '\n");
    printf("||       |        |/    /    _,'  7    _,\" `---'--\"'        _.._\n");
    printf("|`  .   /         |    . _.-\"    /   ,\"     |             ,'    `.\n");
    printf("`.`-', /          |   '.' ,.    /  ,'     ,-'.          .'       |\n");
    printf("  `.              |   _.-' |   '  /    _,'   |         .\"\"`.   _,'\n");
    printf("                  '.-'     '  /  /   ,\"      |        ,\"'.  |.\"\n");
    printf("                   `      .  /  /  ,'        .       /    |,'\n");
    printf("                 ,\".`.      .  '_.'        _.-`.    ,\"-.  /\n");
    printf("               .'`._`.`. '  ' ,'          `_.'\"\".  /\".  |'\n");
    printf("               |.`._`\" .`-.'           .     ___|.'   |'\n");
    printf("           ,--'  `-.' `|   `\"--..__..-\"' | .\" __|   ,'\n");
    printf("         ,' )       _,'            `'\"._.'  \"'   `-'\n");
    printf("        '\",' )__.-'\"                    `.          |.\n");
    printf("          '\"\"                             `-.  .    | |\n");
    printf("                                             `| `.-'`-.\n");
    printf("                                               `.'\n");
    printf("                                                 ' \n");

    break;

case 126:
    printf("\n");
    printf("                                                 ,--''''-.\n");
    printf("                                               ..    `'  `\n");
    printf("                                                '    .'...'\n");
    printf("                                            '  ,'::     |\n");
    printf("                                               ,..-Y-'  /--\n");
    printf("                                    .              |' _.'\n");
    printf("                                  .' .______ ,-'\"|  ,'\n");
    printf("                           /,  ,. '-'     .-' .\" | '\n");
    printf("                          /  \"'  ' -=L;'\\'    `-.'.\n");
    printf("             ,,          /__     ,L_/'        .'            |\\\n");
    printf("       |`.  '\\  _,          |         .        ,'          =-. `|\n");
    printf("       `. ,' |.`            '`-v      `'-.    |             | -,..\n");
    printf("        _:  \" `\\,.     ___    _'|  ,-,_-  `-..'          .]---> _`'\n");
    printf("      . ___.   ' /'--.  -.=[----`, |   '-  ,'                | </\n");
    printf("           ..b--`. -'- , ----`` |'--v -'            __-- ' ,,\n");
    printf("            .'|    <\\]``,[ -    '\\\\._  |'  '''`- _  _,|    `''|\n");
    printf("   \\\" ''L     |   X`.  ` /--,    |  -`.:_ `.    ' TX_,.:'..  ,|\n");
    printf("   `   |       \"` =. ----  _|    |      ` _ `\\ |=:| /   '-\\ --'\n");
    printf("   |.   `.          '''-..L    _,'      .' `,.``-() Y.-[ .'\n");
    printf("   '    .            _. _.. -]-,..-,'    v.   \\|  ` '`'\n");
    printf("`.'       `.        ' ---.'- /-[  .',_   -.   ,)L\n");
    printf("  |       .'      __,...-`=..__       '   '     '.\n");
    printf("   ,\"', .'      -`... _-'      `.     ` ,'      | `.\n");
    printf("       .`            .'          .     '        |   \\\n");
    printf("         '           |           |             .'    .\n");
    printf("        \\ `.         '           '            ,'     |\n");
    printf("         \\  `.        `         /           .'     _.'\n");
    printf("          '.  `-.     /`__    ,'.._______,-'--...-` `.\n");
    printf("            `.   `--..'J  \"'.'         ,'       `._\\` ``-...\n");
    printf("              `.   .'   `'|'        _,'          |    _    \"-.\n");
    printf("                `.'|  ..  |     _,-'             `-._| '.---.'\n");
    printf("                / _,_/  |-`---\"'                     `-..|\n");
    printf("               `-\"   | .'\n");
    printf("                     -'\n");

    break;

case 127:
    printf("                        _.-\".\n");
    printf("                ..-\"\"`.'    '..__,\n");
    printf("                `-. .'     /  ,.`.\n");
    printf("                  ,'      '`. .'  `.\n");
    printf("                 /       .-'        `....\n");
    printf("              ..'.      .\\             .|\n");
    printf("              .`./      | `.            '.\n");
    printf("              |         |  .\\       /|    \\\n");
    printf("             .'         |)  `\\       '   (_`\n");
    printf("            ,|          |    `.            |\n");
    printf("             |          |  _,.-.           |\n");
    printf("             |          |,'     \\          |\n");
    printf("             |          |        \\         |\n");
    printf("             |      \\,  '.        \\        |\n");
    printf("             '           |         `._     |\n");
    printf("              \\          |            `-..,+___\n");
    printf("               \\         |          /       |  `.\n");
    printf("                \\        '         / ,      '    \\\n");
    printf("                 \\      ,  _      /.'      /|    `-.\n");
    printf("                  `.   .    `-.    __     ' |     .'\n");
    printf("                    `..'   -\"'  .-\"| |  ,'  |    |  '-..\n");
    printf("                    /`.        (_`.`\" \\'    |_.-'-\"'-. .`.\n");
    printf("                   .   \\       `._. `\".|    |         `|  .\n");
    printf("                   |    \\`----\"\"`.`. / |,.-\"'`-.        `. '\n");
    printf("                   |     \\        `-+-\"   /     \\         \\ \\\n");
    printf("                  ,'     _\\ ___..-'      .       \\         \\ \\\n");
    printf("                  j\"._,-\".'`.       _.-\"'|     _  \\         . \\\n");
    printf("                 / ,'   /    `.._,-'    _| _.-'   `.        |  \\\n");
    printf("               .' '    ._      `-..__.-\"_|'        |        `..\"`.\n");
    printf("   _..      _,'\"-/     | `-._   .'   `\"' `.      __|        /|  | \\_\n");
    printf(" .'   `--\"\"' _.-'    .-|     `.'          '._  .`  `.      / |  |.'|\n");
    printf(".  \\ .\"\\ _,-'        `.'..-.-'           /   `.-._   .     `.|./__.'\n");
    printf("|`.` | /\"               |.'             / _.'     `-.|\n");
    printf("`_|.'`'                                `-' \n");
    printf("\n");

    break;

case 128:
    printf("                                                           .'`.'\n");
    printf("                                                          `     '\n");
    printf("                                             ,-'.`.        `    ``\n");
    printf("            '\"--.                          /'      \\        |    |\n");
    printf("             \\   `                         '.      `.      ',    '\n");
    printf("              .   |                          `- _,.\"-._-._   `. /\n");
    printf("              '   |,`.----.                            \"-.`.  |'\n");
    printf(" ,\".        .'    '       '---.                            \\\\ ||\n");
    printf(" | :     ,-'|    .             '                            ..||\n");
    printf(" |  `._.',||`._.'|              \\.                          ||||\n");
    printf(" `.   / ._| `-...'\\              \\`._                       |. '\n");
    printf("  _,-'             . `--.         \\  `.                     '.'\n");
    printf(".\" .'             _|     `-`\".     .   `.                 .'.\n");
    printf(" '-....'          |           `-. _.'    `._           _.','\n");
    printf("  `.             .'                .-       `.       .'_,'\n");
    printf("    `..__....._ `.               ,'           `-._ .',\"\n");
    printf("          /    `.|               '                `.'....__\n");
    printf("         .                   _:.]                   `\"''-._`.\n");
    printf("         '                 :\"    '                   `.    `. .\n");
    printf("          \\                |                                 `.`.\n");
    printf("           .               |                           .       ` .\n");
    printf("           |               '         |                          ` .\n");
    printf("           '.             .          |                  '        .|\n");
    printf("             |`.          |          |                  |        ||\n");
    printf("             |  `.        '          '                  |       . '\n");
    printf("             |    \"--.     |        /_                  |     -'   |\n");
    printf("             |        `.   |       /  `'\"\"`-._          |    ,'    |\n");
    printf("             '        ,\"'..|      .      '    `.        |    |.    |\n");
    printf("              .     ,'     '.     |\\    .       `       |      | ,/\n");
    printf("              |    /        |     | .   |        `.     |      `'\n");
    printf("              |   .         |    ,' |  .           \\    |\n");
    printf("              |   |         |    .  | .'            .__ '\n");
    printf("              '-..|         |___.   '\"              |../\n");
    printf("             /.-'           \\ .'\n");
    printf("                             ' \n");

    break;

case 129:
    printf("\n");
    printf("\n");
    printf("                                 __.--.._,-'\"\"-.\n");
    printf("                              ,-' .' ,'  .-\"''-.`.       .--.\n");
    printf("                            ,'    |  |  '`-.    \\ \\       `-.|\n");
    printf("                           /       .   /    `.   \\ \\        ||\n");
    printf("                          /         `..`.    `.   \\ .       ||\n");
    printf("                         /        . .    `.    \\   . .      '.\n");
    printf("                .\"-.    .  ,\"\"'-. | |      \\    \\   `.`.__,'.'\n");
    printf("                 `. `. .   |     `. |       \\    .    `-..-'\n");
    printf("       _______     .  `|   |   '   .'        .   |...--._\n");
    printf("       `.     `\"--.'   '    .      | .        .  |\"\"''\"-._\"-._\n");
    printf("         `.             \\    `-._..'. .       |  |---.._  `-.__\"-..\n");
    printf("    -.     `.           |\\           `.`      |  |'`-.  `-._   +\"-'\n");
    printf("    `.`.     `-.        | `            .`.       | `. `.    `,\"\n");
    printf("      `.`.      `.      |  '.           ` `      `.  \\  `   /\n");
    printf("      | `.`.    __`.    |`/  `.     ...  `.`.     |   `.   .\n");
    printf("      |   \\ .  `._      | `. / `. .'.' |   \\ \\    |     \\  |\n");
    printf("      |.   ` \\    `-.   |   \\   .'.'/' |    \\ \\   |      ._'\n");
    printf("      | `.  `.\\      `. |    \\ / , '.  |_    . \\  '-.\n");
    printf("     ,     .  .\\       `|     . ' / |  | `-...\\ \\'   `._\n");
    printf("     `.     `.  \\       |.    '/ .  |  |       ' .      `-.\n");
    printf("      .`._    \\` \\      | `. /'  '  |  |       | |       ,.'\n");
    printf("       .  `-.  \\`.\\    ,|   //  '   |  |__  .' | |      |\n");
    printf("       |     `._`| `--' `  //  .    |  '  `\"  /| |   . -'\n");
    printf("       '        `|       `//   '    |   .    / | |   |\n");
    printf("      /....._____|       //   .  ___|   |   /  | |  ,|\n");
    printf("     .         _.'      /, _.--\"'-._ `\".| ,'   | |.'\n");
    printf("     |      _,' / ___   `-'.        `. _|'     |,\n");
    printf("     |  _,-\"  ,'.'   `-.._  `.      _,'         `\n");
    printf("     '-\"   _,','          \"- ....--'\n");
    printf("    /  _.-\"_.'\n");
    printf("   /_,'_,-'\n");
    printf(" .'_.-'\n");
    printf(" '\"\n");

    break;

case 130:
    printf("\n");
    printf("                            /|\n");
    printf("                /`     |   / |\n");
    printf("               . |     |`.'  |  ,          .\n");
    printf("               | |     |     `\"'/       _,'           ,\"'\n");
    printf("               | |     |       /      .\" ,'         ,'/_\n");
    printf("               | |   ,\"| .-\"\"\"''`,`.,'  /      /|  /  ' )\n");
    printf("     .'.       | |\"\"+._|'   .    '     ,__    / ) /   .'\n");
    printf("      `.`.   .'| |     '_,\".`     \\     .'   '   '   /  _\n");
    printf("        `.`./ j  |  _,-'_,'.       `-..'    .        `-'/\n");
    printf("         _\\' `   |,\" _.' `. `.     _..|     |         ,'\n");
    printf(" .    .\"'  \\._____.-' '    `-|  .-'  ,|    _|   ___  /\n");
    printf("  \\`._ `-. `|.___,'| /     _.'      / |  ,\" |.-'   `.'.\n");
    printf("   \\-.`\"-'  _______`'    ,' __.---.' ,^.' _.'_    __ `.`.\n");
    printf("   |    `-.,...... `.   |,-\"     / .'. |-'    `-.\"  | |` \\\n");
    printf("   '      ||\\/  |/`.|  .`       (,'   `|         `.'  '.| \\\n");
    printf("   `-..--.||       || j      ____\\     |       _  |  /     `.---------.\n");
    printf("      |   ||  ___..|||,.--\"\"'|.      .\"|     ,' | |\"/ `. ,'. .   ,.--\"\n");
    printf("      |  .||.'      ||.._    ' )  _,'\\ |`'-.'   | |/    ||.' |   `.\n");
    printf("      |,',|||      . |\"-.`._  `+`\"    \"      `.'  ^,.__,'.   |  ,--'\n");
    printf("       // |||      |j  |\\\\  \"'  `.     |   ,-` `./ '     |   |`.\\\n");
    printf("      .'  |||      ||  | .'      |   .\"`..|_ |  .   \\    |  /|\n");
    printf("      ||  ||`.___.'f   ' ||     ,'--\"`._|,-.`|  '    +.._|,'.|\n");
    printf("      ||  |`-.....'|    .'`.\"\"'`.       /\\ | `.'     |    |  |\n");
    printf(" .'`  ''   `--....-'    | \\|   ``\\     '  \\|   |     |`._,'-\"'\n");
    printf(" |`..''                 |  '    )|.   /`..|'   '     |   \\  /\n");
    printf("  `\"\"'                  |   `-..''|  /    |   /    _..\"`.` /\n");
    printf("                        `         |,'     |  /  ,\"'_,|     \\\n");
    printf("                         `,_   _.-'.      |,' .'-'\"  '    , \\\n");
    printf("                          `.\"\"'     `.   .' .'      /   ,' | .\n");
    printf("                            `._       \\,'  .       /   /   | |\n");
    printf("                               `\"----\"'     \\  _  /  ,'    | |\n");
    printf("                                             `\" 7._,`      | |\n");
    printf("                                                    \\      | '\n");
    printf("                                                     `-. ,.|/\n");
    printf("                                                        '  |\n");

    break;

case 131:
    printf("                                       ,|\n");
    printf("                                       ||\n");
    printf("                               ,-\"'\"\"`' `._\n");
    printf("                              '----.     __`....._\n");
    printf("                               `    `.  `. ;      `.\n");
    printf("                                `.    `.  `   ,\"`. |\n");
    printf("                                  `.  _.`._   |  ' |\n");
    printf("                                  .','  ,' `.  `--'\n");
    printf("                                 /.' _,'    | /\n");
    printf("                                '/_.'       |.\n");
    printf("                                 `---`\".    ||\n");
    printf("                                       |    ||\n");
    printf("                                      ,'    `|\n");
    printf("                         _           /       |\n");
    printf("                        ' `.        .'       |\n");
    printf("                         .  `._  _,'/|       |\n");
    printf("                        _|     \"'  / |       '\n");
    printf("                    _,-' |        /  '        .\n");
    printf("                 |\"'            ,'  '          \\\n");
    printf("                 |   _        ,'   /            \\\n");
    printf("                 ;  '        /    j              .\n");
    printf("            ,\"--'    `.    .      |              |         ________\n");
    printf("            `.   -.       / '     |              |   _,-\"\"'   __.._\"`-._\n");
    printf("             ,' ,-.`-.__.' /      '              |.-'  _..--'\"       _.-'\n");
    printf("             \\.'   `-.___.'      ,               '__.-\"           _.'\n");
    printf("             /        _..--    . |              /               ,'\n");
    printf("           ,`      .-'         | |           _,'._          _,-'\n");
    printf("       _,-'      ,'           .' '       _.-'     \"-.....-\"'\n");
    printf("     ,'     __ ,'          _.'  /  __..-'\n");
    printf("   ,' _.-\"\"'  /         _.'  _.'-\"'\n");
    printf("  '-'\"       /      _.-' _.-\"\n");
    printf("            /    _.' _.-'\n");
    printf("           .   .'_.-'\n");
    printf("           | ,'.'\n");
    printf("           | .`\n");
    printf("            `\n");

    break;

case 132:
    printf("\n");
    printf("                                           ,--._\n");
    printf("                                        _,'     `.\n");
    printf("                              ,.-------\"          `.\n");
    printf("                             /                 \"    `-.__\n");
    printf("                            .         \"        _,        `._\n");
    printf("                            |            __..-\"             `.\n");
    printf("                            |        ''\"'                     `._\n");
    printf("                            |                                    `\"-.\n");
    printf("                            '                                        `.\n");
    printf("                           .                                          |\n");
    printf("                          /                                           |\n");
    printf("                       _,'                                           ,'\n");
    printf("                     ,\"                                             /\n");
    printf("                    .                                              /\n");
    printf("                    |                                             /\n");
    printf("                    |                                            .\n");
    printf("                    '                                            |\n");
    printf("                     `.                                          |\n");
    printf("                       `.                                        |\n");
    printf("                         `.                                      '\n");
    printf("                           .                                      .\n");
    printf("                           |                                       `.\n");
    printf("                           '                                        |\n");
    printf("                         ,'                                         |\n");
    printf("                       ,'                                           '\n");
    printf("                      /                                _...._      /\n");
    printf("                     .                              ,-'      `\"'--'\n");
    printf("      ___            |                            ,'\n");
    printf("   ,-'   `\"-._     _.'                          ,'\n");
    printf("  /           `\"--'             _,....__     _,'\n");
    printf(" '                            .'        `---'\n");
    printf(" `                 ____     ,'\n");
    printf("  .           _.-'\"    `---'\n");
    printf("   `-._    _.\"\n");
    printf("       \"\"\"'\n");

    break;

case 133:
    printf("\n");
    printf("                                      |\n");
    printf("                                     /|\n");
    printf("                                   ,' |\n");
    printf("                                  .   |\n");
    printf("                                    | |\n");
    printf("                                 ' '| |\n");
    printf("                                / / | |\n");
    printf("       _,.-\"\"--._              / /  | |\n");
    printf("     ,'          `.           j '   ' '\n");
    printf("   ,'              `.         ||   / ,                         ___..--,\n");
    printf("  /                  \\        ' `.'`.-.,-\".  .       _..---\"\"'' __, ,'\n");
    printf(" /                    \\        \\` .\"`      `\"'\\   ,'\"_..--''\"\"\"'.'.'\n");
    printf(".                      .      .'-'             \\,' ,'         ,','\n");
    printf("|                      |      ,`               ' .`         .' /\n");
    printf("|                      |     /          ,\"`.  ' `-. _____.-' .'\n");
    printf("'                      |..---.|,\".      | | .  .-'\"\"   __.,-'\n");
    printf(" .                   ,'       ||,|      |.' |    |\"\"`'\"\n");
    printf("  `-._   `._.._____  |        || |      `._,'    |\n");
    printf("      `.   .       `\".     ,'\"| \"  `'           ,+.\n");
    printf("        \\  '         |    '   |   .....        .'  `.\n");
    printf("         .'          '     7  \".              ,'     \\\n");
    printf("                   ,'      |    `..        _,'      F\n");
    printf("                  .        |,      `'----''         |\n");
    printf("                  |      ,\"j  /                   | '\n");
    printf("                  `     |  | .                 | `,'\n");
    printf("                   .    |  `.|                 |/\n");
    printf("                    `-..'   ,'                .'\n");
    printf("                            | \\             ,''\n");
    printf("                            |  `,'.      _,' /\n");
    printf("                            |    | ^.  .'   /\n");
    printf("                             `-'.' j` V    /\n");
    printf("                                   |      /\n");
    printf("                                   |     /\n");
    printf("                                   |   ,'\n");
    printf("                                    `\"\"\n");

    break;

case 134:
    printf("                                                                                                    \n");
    printf("                                      ``                                                            \n");
    printf("                                       o`                                                           \n");
    printf("                                       -/                                                           \n");
    printf("                                        /-                                                          \n");
    printf("                                        ./`                            .-:`                         \n");
    printf("                                         ::                        `.-:-/`                          \n");
    printf("                                         .:-                     ..:-. -`                           \n");
    printf("                                        .-::-....--.`         `...-`   :                            \n");
    printf("                                   ``...` `:-    :  `....`  .-..-`     :                            \n");
    printf("                                  :```    ./:-...-.`  `-`---``-.    .-:.                            \n");
    printf("                                `-` ..`...``-:  `....-- .-` ..   .-..-                              \n");
    printf("                             `...    --`..  -:  ..`....-` .-` `--` `-                               \n");
    printf("           `-:://:------.....:.`..` -`.-`.-`    :    `-. -. .-.`   -`                               \n");
    printf("                `.-.````......``.--/.-.    .-. .-  .-oss/``.`  ``.`/                                \n");
    printf("                   ..       ``....``:`.::..  `.-  ::+NMd-. `.--.``:.                                \n");
    printf("                    :.............`---mNd+/o`     hmNds/ :`````` ..                                 \n");
    printf("                    `..-.`  ``````  :`oydmmd:  `  .--.`` :``````:-                                  \n");
    printf("                        `-`  `...`  .: .--.`   ..``      :       :                                  \n");
    printf("                          :-:.``  `..-.      .-...-      /..``  `-                                  \n");
    printf("                          ```:.`......:.      .-  :    `-`  ``  -`                                  \n");
    printf("                             ./.`..`   ...     `.-`  `.:.      `.-                                  \n");
    printf("                             -.        .-......````-.`  `-`   ..`                                   \n");
    printf("                             ``..`    -.     :`````.-     `  ..                                     \n");
    printf("                                 ::` ``     `-      .`    ```:                                      \n");
    printf("                            ````..`/```     ``         `.:.```                                      \n");
    printf("                      ``.....```.`-..``...``  ``.....`..`..                                         \n");
    printf("                   ....`` ```...``        `.-.``     ``   :                                         \n");
    printf("                `..````....``                             :               ```.....```               \n");
    printf("               .- `..``     `````               `.   ``   :            ``..```   `...-.``           \n");
    printf("              :` ..`        `````...`   :       ..  .-   `/````````  `.``             `.-/`         \n");
    printf("             .- .-                 `..  :       -..::-.::::-:::--:---.                `--`          \n");
    printf("            -. .-                    `-`-    ``-/.---```.............:.              .-`            \n");
    printf("            : .-                      `::``-.--.``.-.``.        ```.       ``     `.-.              \n");
    printf("           -. -`       ..````````````.-::::``....`       ``..```   -        `-.```.`                \n");
    printf("           .-`-`         `````..-:--:-   `...`        `.:.`        -          ..                    \n");
    printf("           ``:.-`.`   `    ````-.  ```....`        `.-.`:          :           .-                   \n");
    printf("           `.`--.`.-.......```.``.....          `.:.`  ..          `-           .-                  \n");
    printf("            -  `......``........`             `-/.:    :            `-.          /                  \n");
    printf("            `-        ``                   `--. -`:    :              `--`       -.                 \n");
    printf("             .-                         `::/    `-:    :                 .--`    `:                 \n");
    printf("               --`                  `.---.+:`    ::  ``:.                   .--` `:                 \n");
    printf("                 ..-..`        `.--//-``-:- -` .`:/-.:-:`                      .:/.                 \n");
    printf("                     `..........`     ```    ..-..   \n");

    break;

case 135:
    printf("XH                             HX               \n");
    printf("H;XHX                         HXH               \n");
    printf("H;;;;XH                      XHXH               \n");
    printf("XXXX;;;H                     HX;H               \n");
    printf(" HXHHX;;H                   HXH;H    XH         \n");
    printf(" HXXHHX;;X                 HXXH;H  HX;H         \n");
    printf(" XXXHHHX;H        X  H     HXHX;HHX;;;X         \n");
    printf("  HXHHHHX;H       HH HH   HXHH;;X;;;;X       XHX\n");
    printf("   HXHHHHX;X XH  XXXHHXH  HHHH;XHX;;;H    XHX;;H\n");
    printf("    HXHHHH;;XHXH HX;XHX;HHXHHX;H;H;;XXXHHX;;;;H \n");
    printf(" HHHXXXHHHX;;HXXXHX;;XHXHXHHH;;;XH;HXXX;;;;;XH  \n");
    printf("  HXXXXXXHHX;;H;XXX;;;HX;HHHXX;XHHHXX;;;;;;XH   \n");
    printf("   XHXXXXHHXX;X;;XXX;;;X;XHHXXH;;;HX;;;;;XXH    \n");
    printf("     HHHXXX;;;;;;;;X;;;;;;XHXH;;;HX;;;;;XXH     \n");
    printf("      HXHXXX;;;;;;;;;;;;;;HXH;;;;HX;;;;XXH      \n");
    printf("       XHHX;XHXX ;;;;;;;XXXH;;;;HX;;;;XX;;XHX   \n");
    printf("       HXXH;;HH X ;;;;;X H;H;;XHHHHHHXX;;;;;;HX \n");
    printf("     XHX;HX;;XHHHX;;;;XHHX;X;;;;;;;  H;;;;;;HX  \n");
    printf("  XHX;;;HXHX;;XHHH;;;;HHX;;;H;;;    H;;;;;HX    \n");
    printf(" XH;;;;;XHXH;;;;;;;XH;;;;;;XH      HXX;;HX      \n");
    printf("   XHX;XHXHXX;H;;;;;;;;;H;XHX    HHXXXXX;;XHHHHX\n");
    printf("      XH;;;HHXXHHHHHHHHH;XH    ;;  HXXXXXXXX;;H \n");
    printf("     H;;;;;;XX;XHHXXXXHH;H      H;; HXX;;;;;;H  \n");
    printf("   XH;;;H;;;;HX;HXXXXXH;X        HHHXX;;;;;;H   \n");
    printf("    HHHX;;;;;;H;;HHHHH;XH   ;;    HXXX;;;;HX    \n");
    printf("      H;; ;;;;;HX;;;;;H     HX;;   HX;;;XHH     \n");
    printf("     H;;   ;;;;;;XHHHX      XHHX;;  H;XH;;H     \n");
    printf("    H;;    ;;;;              HHHHHHHH;H;;;XH    \n");
    printf("   H;;   XHX;;;        X;    XHHHHHXXXX;;;;H    \n");
    printf("  H;;XHHXH;H;;  H;     XX;    HHHHXXXXX;;;;XH   \n");
    printf(" XHHHHHHHXX;;  ; H;     HHX;  XHHHXXXXXX;;;;XX  \n");
    printf("        HXH;   H; H;    HHHX;  HHXHXXXXXXX;;;H  \n");
    printf("        HXH   HXH; H;   XHHHHX; H   XHHXXXX;;;X \n");
    printf("       HXXH  HX  H;HH;   HHXXHHHHX     HHXXX;;H \n");
    printf("       HXX;HHX   XH;;H;  HHXXXXXHH      HXXX;;H \n");
    printf("      HXX;;HH   HXX;;;H; H HXXXXXX       HXX;;X \n");
    printf("     HXXX;;H    HXX;;;XH;H HXXXXXH       HXX;;;X\n");
    printf("    HXXX;;X     HXX;;;XXHH  HXXXXH       HXX;;;H\n");
    printf(" HHHXX;;;XH    HXX;;;XH  X  HXHXXX       HXX;;;H\n");
    printf("HXXX;;;;;H     HXX;;;H      XHHHX        HXX;;;H\n");
    printf("HX;HH;;HH     XXX;;;;H                   HHX;H;H\n");
    printf("HH;H;XHH      HX;;;;XX                   XHX;H;X\n");
    printf("  HHHHX      HXX;;;;H                     XHHHX \n");
    printf("           XHXX;;;;XH                           \n");
    printf("           HXX;;H;;H                            \n");
    printf("           XH;;H;;XH                            \n");
    printf("            XH;H;XH                             \n");
    printf("              XHHX\n");

    break;

case 136:
    printf("                         /|     '\n");
    printf("                        / `.  ,'|,-.____\n");
    printf("                       /    `'  `       `\"\"----...,\n");
    printf("             .    ,__.'                        .-'._\n");
    printf("            / |   ' .'                   ,_         `'`--.._\n");
    printf("         _.'  . ,'                        `.`-._            `'.\n");
    printf("        |      `                            .  .`-._,\"'--._    `-.\n");
    printf("     ,_.'     `                              `. .`._`.     `-._   '\n");
    printf("      .                                     ..'  `. `.`.       `-. `.\n");
    printf("      |                                       `.   `. `.`.        `. \\\n");
    printf("      |                                       ,',.'\"-\\  \\ `.         `\n");
    printf("    ,-'                                       /     .\"\\  `  \\\n");
    printf("     .                              '`._ ,.  /      |  '  `. \\\n");
    printf(" ..._)                               |  \"  `.        `-'.  |  .\n");
    printf("   \\        '.---.._'._  .\"'-._     .'      |            `.|  '\n");
    printf("    `.         `._ .._ `-'     `.`-.|       '              ` /\n");
    printf("      `.          `-. `. `-.__   '-  `._     \\              |.\n");
    printf("       L_            `._ `.   `\"--..__  `\"-../\\             ||-.,\\\n");
    printf("         `.'            `-.`.         `-._     `-._       .' |`.  \\\n");
    printf("            .           _..`.`.._       ..`      __`\"-..-'   |.'  '-'\n");
    printf("            /___     .\"'     `-._`\"----\"'   `  .( )`.          `.  .\n");
    printf("                -.,./      `\"\"   `\"\"'\"\"'`--.   `._   `.        /    \\\n");
    printf("                   /        ,               `._   `\"\"'  _____.'      '\n");
    printf("                             .                 `._      \"...'       /\n");
    printf("                  .         .'                    `\"\"-----'        ' _\n");
    printf("                  '         `-.                                    .'\n");
    printf("                ,'            /                                   _,\n");
    printf("               /         _..-\"|\"--..                             |\n");
    printf("              /       .\"'     |  .'.,----,                  ,.-'\"|\n");
    printf("             .      ,'        |     \\   `--'.        __...-\"`...-'\n");
    printf("             '     /          '      \\       `-----\"'\n");
    printf("            /     '            .      \\        \\\n");
    printf("           .       .           '._,'_.'`.       \\\n");
    printf("           '._.  ).'                    `        `.\n");
    printf("              `\"'                        \\         `\n");
    printf("                                          `.   .   ,'\n");
    printf("                                            `\"-'--'\n");

    break;

case 137:
    printf("\n");
    printf("                                                                                                     \n");
    printf("                                                                                                    \n");
    printf("                                 :+///////:--.``                                                    \n");
    printf("                              .++-       ``.--+hs-                                                  \n");
    printf("                           `/+:`            .o/` ++                                                 \n");
    printf("                        `:+/`             `++`    -s.                                               \n");
    printf("                      -++-              `++`       `o:                              `--.            \n");
    printf("                   `/+:`      .---::://+s.           /+`                          `++-:ho`          \n");
    printf("                  .s-         y:..``````/+.           .s.                       `/+. .s`.y          \n");
    printf("                 :o`          y`   odmd+ `/+.          `o/                     :o.  .s` :o          \n");
    printf("                +/           `y   `mmmmd`  `++:://///////h                   -o-   .s`  y.          \n");
    printf("              `o-            `y    :sys.    .s.`        :o                 -o:    .s.  :o           \n");
    printf("             -s.            .os/           -s`          s.               .o/`    .s.   y.           \n");
    printf("            /+`           `++` +/     ``.-/o`          `y              `++`     `s.   :o            \n");
    printf("          `o:            /o.   .y+/////:-.`            +/            `/+`      `s.    y`            \n");
    printf("         `s+///////::--:o-   -+/`                   `/+.            :o.       `s.    :o             \n");
    printf("        `s.        ``-yoo:`-o:`                   `oy-`           -o-        `s.     y`             \n");
    printf("       `s-         `++`  oho`                   .+/`.-://///:-.`.o:         `s.     :+              \n");
    printf("       o:         :o. `:o- :o.                -o/           `.-:+////:-.`  `s.      y`              \n");
    printf("      +/        -o: `/+-    `++`            :o:                      `.-://oo/`    :+               \n");
    printf("     /+       `+/``/+.        .o:     ``.-+o-                                //    y`               \n");
    printf("    .y`     `/o``++.      ``.-:/yo/////:-./h+.                               .s   :+                \n");
    printf("     ://////y:.os/:///////ss-.`            y./+-                              y`  y`                \n");
    printf("           `-:/:-.`      :o`               -o  -+/`                           o- :+                 \n");
    printf("                      .:oo                  s.   .++.                         :+ y`                 \n");
    printf("                  .///:+o                   .s     .y                         .y:+                  \n");
    printf("                `o/`  /+                     +:    s-            `ooo//::--/+//yy`                  \n");
    printf("               /o`   /s`                     `y`  -s            `s-`:++-..-:///oo/////:-..`         \n");
    printf("             -o-     -ohs///:.                :+  y`           `o:    `:+/`           `.--++`       \n");
    printf("           `+/`         -s+-.-/////:.`         y.:+       `-//+h:        `/+:`             .o/`     \n");
    printf("          :o.          `+/`:+/.    .-/////:.`  .sy`  `-////-` +/            .++-             -o:    \n");
    printf("        .s:           :o.    `/+/`        `-////hs////.      /+                -++-```......---os   \n");
    printf("        :y/////:.`  .o:         ./+:`           `y.         :+                   /o:::------...:o   \n");
    printf("         y.    .-//+s`           .:os+-`         `y.       :o                  `o:             +:   \n");
    printf("         `:/+/.    .s        .///:.   -++-        .y`     -s                  .s.              y`   \n");
    printf("             `:++:``y   `-/+/:`          :+/.      .s    .s`                 /o`             `:s    \n");
    printf("                 ./+h////-`                `-////:-`-o  .s`                `o:            `:+/.     \n");
    printf("                     `                           `-:/oo+y`                .s.          `/+/.        \n");
    printf("                                                       y+-.`             :o`        `/+/.           \n");
    printf("                                                       /o.-://///:-.`  `o/       `/+/`              \n");
    printf("                                                        y.       `.-://y-     ./+/`                 \n");
    printf("                                                        -s`            y`  ./+:`                    \n");
    printf("                                                         -///////:-.`  y-/+:`                       \n");
    printf("                                                                 `.-://o:`                          \n");
    printf("                                                                               \n");

    break;

case 138:
    printf("                                                                                                    \n");
    printf("                                                                                                    \n");
    printf("                                                                                                    \n");
    printf("                                                            `.:+oyhhhhhhhhhhyyso+:.                 \n");
    printf("                                                       .:oyhyo+/-.``         ``.:/oyy+-             \n");
    printf("                                                   `:oys+:.                         `:sho`          \n");
    printf("                                                `/ss/.`                                `/h/         \n");
    printf("                                              -ss/``..----------.....``                  `oy.       \n");
    printf("                                            :yy::---.`````````.-----:://///::-`            :h.      \n");
    printf("                                          -yo-`                            ```-:::.         :d.     \n");
    printf("                                        `os.                                     `-/-        +h     \n");
    printf("                                       .y/                                          ./.       y+    \n");
    printf("                                      :y.    `......```                               /-      .m`   \n");
    printf("                                     +y---:::---...-------------..`                    +.      d+   \n");
    printf("                                    os:``                     ````.-----..`            `s     .od   \n");
    printf("`                                  oo`                                 ```.--..         o     /.N.  \n");
    printf("`                                 +s`                                        ``:-.      +   `:` m-  \n");
    printf("`                                :y`                                            `.:.  `-+----`  d:  \n");
    printf("                                .h.                                                -/--`  +`    d:  \n");
    printf("                               `y/       ````````                                  `+`    :`    m-  \n");
    printf("                               +s`..-::--...........--------.....`                `:`     -.    m`  \n");
    printf("                              `d/.``                        `````.----...        ./       .- `./m   \n");
    printf("                              ++                                      ``.-:-.   `/        ./..`/h   \n");
    printf("                             `h`                                           `.:-`+`   -:-  ..   so   \n");
    printf("                             /+                                               `o-   .. /  :`   d/   \n");
    printf("`                            h`                                               .+   .-  /  /   `m.   \n");
    printf("`                           -s     ```.....`````                              +`   :   /  +```+h    \n");
    printf("`                           o:.-----.....``....------.......``               -/   :`   / `/```d/    \n");
    printf("`                          `d:.`                      `````...------...`     +`   : `.:` /`  -d`    \n");
    printf("`                   `.-:/o:++                                       ``..-:.` s    : `:. ./`  so     \n");
    printf("`                .:++/:-oo`d.                                             .--s   `:    `:.-:-m`     \n");
    printf("`              -oo:`   /s`+o                                                -s    /   .:   `ho      \n");
    printf("`            .oo.     .h`+o`                                                `y    --.::`   -h`      \n");
    printf("`           :y-       y:oo`                                                  h`    /::`.- .h-       \n");
    printf("`          /y.       `ds/    .-:+//::::-.`              ..-:::::/-..`        o+   :` /  `:y+        \n");
    printf("`         :h`        `m/   -+/o+-`.-::-..--`         `:+:-.```.-/oo-:/-`     `h.`-`  /  `ho         \n");
    printf("`        `h-          y   +/`/. .sdNNmN+/..+`      ./y/  .+syy+:` /o``-+-     -y.    : `yo          \n");
    printf("`        :h           :/ `h ./ `hNNmmmNddy :s-```./::o  +mmmNNyhh` /+   :/`    -o`  -..y/           \n");
    printf("`        +y            //`y::- .mNNNNmmmms //.-::-` o. -mNmmmNNmm-  y    `+.    .o.`:/s-            \n");
    printf("`        :d             -+oy++``ymmmmmm.`o`       o` .mmNNNNmmm`  s    `-+.    `syo/              \n");
    printf("`         h/              .-.`/:.:+oss+:.-:`        ::  +dmmNN:  :-     --+     `y+               \n");
    printf("`         .h+`                 `---.----.`           /-` .:///-` ./:       /s.     -m`              \n");
    printf("`          .os-`                                      .::-````.:/:`         ++     .N`              \n");
    printf("`            `/o/.`                                      `.----.             :+`   oy               \n");
    printf("`             `.os--.`                                                        `//`+y`               \n");
    printf("`         `-/++/.    `-`                                     :             .`   .+h:`               \n");
    printf("`         :y/-....-:/.       .      .                       :.             .:     `:++-``           \n");
    printf("`           .-:/oy+.       .-`     .:         .        `.  ::              +//.      `:+so-`        \n");
    printf("`            .so:`    ``.-/.      ./         .y.        .//-              +: `:/-`       .+s+`      \n");
    printf("`            `:/://:/+sho-       :/        .+o-s-   ``-/o/`             `o/     .:::.`````.:d/      \n");
    printf("`                  `yy:`       .+-      `/so. ./hooooo/-              `:h/``       `/dsooo+/-.`     \n");
    printf("`                   .+o+++///+yo` `.-:+oo:`   h+.``                `-+o::ddysoo++++oo:.```````      \n");
    printf("`                            sy+++o+:-`       `+o/-`          ``-+syo-```.sy``````                  \n");
    printf("`                                                .:+++++++ossoo+sy:+osssso/`                        \n");
    printf("`                                                         `:/+++:`                                  \n");
    printf("`                                                                    \n");

    break;

case 139:
    printf("\n");
    printf("                                                +s.                                                  \n");
    printf("                                              `h`o+                                                 \n");
    printf("                                              /o  -o-           `-.                                 \n");
    printf("                                             `d.    +yo++++/::oo/.s-                                \n");
    printf("                           -/-`         -/+++/s.....:-    ``.:///--h                                \n");
    printf("                           `h-:///:../oso/:--.-.....`           ./+o+/`                             \n");
    printf("                            /s   ``:oo.`           `.--..`        ./`.+o-                           \n");
    printf("                             s/      `s                  .-.       `+  `/o:                         \n");
    printf("                             `d/    .:-                    `-.      ./   `/s.                       \n");
    printf("                            .o/::-.............`             ..      +     `y/                      \n");
    printf("                           /o...---..```````````..-..`        -`     +      /oo                     \n");
    printf("                    ``.--:oh++::-.                `.-:-.       :     /      /`o+                    \n");
    printf("                  /yo:--....`````.:`           -//:-s/ ./.     :    `:     --  y-                   \n");
    printf("                   ./+/`          `/         .o/`  s/   `:-    :..-::/-. .:.  `:h--.`               \n");
    printf("                     `-+s:.       .-        .y-   -y      --  -:``    `-+. `//:..-/+/               \n");
    printf("                       :o-/+:-...-.         y.    ++       /.:`  `---.  `:/o.  ./h.`                \n");
    printf("                       h`   `..--.....-...-:o     :s``     `+-..:/.``-:  /o`  //`y-                 \n");
    printf("                      -y  ``.--.````       .s      oo...`  :`  -+   ` `: y`  :s` ++                 \n");
    printf("                      ++...`                +-     `/o:.`../```o.   -  / y   h:--o+                 \n");
    printf("       ``.``          o+`  `.....``       ``.+:      `-++:-/...s`   /``/ y  .h   o/                 \n");
    printf("     :+/:::/+:.       o/-:::--...``. `.:+++//+s/`       `/oo`  -:   .-.` s- -s   y.                 \n");
    printf("    :s-.-..``-o/     :y+-`         .//-.`      -/         `:o/` +-`    `.h- :s  .h                  \n");
    printf("    `-----:+-  o/    `/h+:-.``     -.   .-----.+-           `+s-..-:-::/+s  /o--s-                  \n");
    printf("           `y  `h`  `s/`  `---::---`  `:...`  `:-             s+ `..:///-  .s` ++                   \n");
    printf("            s-  o/  o+   -::-:.      .y` - -    +             :h/:--.`  `.//` /o                    \n");
    printf("            +/  .s-.+s` :-..``-:`   `/:. `..`   +             oo   `.-:/:-:.`/+                     \n");
    printf("            .y.  `:/+o//y `.-  :+:---` :.`..-``:-            :h--://oo+/:-.+o:                      \n");
    printf("          `/oyh+//::::/+//`... :. ``````.-----.`           `/y/:.       `-:o+.                      \n");
    printf("        `+o:.`    `...`  `-------/..-+.......`            .s/``.-:///+/-.`  .++.            `-.     \n");
    printf("        s/                   `-.:- `o       ./:`         ..+/+/:.``-/y-.-:/:.`.++-`       .+/oo     \n");
    printf("       :s   `-::-`           :  `/ -+`````---``/           .s`       :o    `:/:`./++:-..-++-/o`     \n");
    printf("       +/ `+o:-.-/+.        `+--.:  ------```.:/            .+o/::.   ++`     `:/:.`-:::-./+-       \n");
    printf("      `:s/o.      -y+-`      /..-:. /+::---..-:               /+-`-/-  /o/---:/. `-::/::::.         \n");
    printf("     /+os.      `s+` -/s:--+``-..`/ `::` `...`                 `:o:`:+/-.----/s:                    \n");
    printf("     y. +s-`  `:s.  .+y/  -s    `......:///////:-.`               /s  `.:///:-                      \n");
    printf("     -s. `:++//-  .o+`h  oy:        -+o+:.`    `.-::///:-`        -y                                \n");
    printf("      `++-`    .:o+.  s-`m:      `/+:`                 `.:////////-                                 \n");
    printf("        `:///++:.      ///++/:://:`                                                                 \n");
    printf("                                                                \n");

    break;

case 140:
    printf("\n");
    printf("                                       `--:----------------.`                                        \n");
    printf("                              `-------.`                  -+++::-.                                  \n");
    printf("                         `-----`                         .:   -:-.:---                              \n");
    printf("                     .:::-                                --.`  `o   `---.                          \n");
    printf("                 `:/o-                                       .---`       `-:-`                      \n");
    printf("              `:/:``/-                                                      `-:-`                   \n");
    printf("            -o+..--:`                                                          `:-.                 \n");
    printf("          :/-`...`                                                                -:.               \n");
    printf("        -/.                                                                         -/`             \n");
    printf("      ./.                                                                           .+::            \n");
    printf("     /:`                  :                                                          :-.:`          \n");
    printf("   `/-                    :`                     .:oyhdyyo/-`                         +` --         \n");
    printf("  `+`        -+ydh+-`      /                 `-odNMMMMMMMMMNmh+.                      `+  ./`       \n");
    printf("  +`      .+hNMMMMMNdo-`   `-.            .:sdNMMMMMMMMMMMMMMMMmy-                     -:  `/`      \n");
    printf(" /.     .sNMMMMMMMMMMMNdy+-.``.      `.:ohmMMMMMMMMMMMMMMMMMMMMMMNy.                    o   `/`     \n");
    printf(" s     /mMMMMMMMMMMMMMMMMMNmmdhysssyhmNMMMMMMNmNNMMMMMMMMMMMMMMMMMMm:                   ::    /`    \n");
    printf(" h    +.dMMMMMMMMMMMmdddmMMMMMMMMMMMMMMMMMms:..../sNMMMMMMMMMMMMMMMMNo`                  :-   `/    \n");
    printf(" s    + yMMMMMMMMNs-`` `./hMMMMMMMMMMMMMMy`        .hMMMMMMMMMMMMMMMMMh:`                 ./.  ./   \n");
    printf(" o    / +MMMMMMMM/        `yMMMMMMMMMMMMm`          .MMMMMMMMMMMMMMMMMMNdo:`                -:` o`  \n");
    printf(" /`   ` .NMMMMMMN          :MMMMMMMMMMMMd           `NMMMMMMMMMMMMMMMMMMMMMmh+:.             `/-.+  \n");
    printf(" `/`     +MMMMMMM/        `yMMMMMMMMMMMMM+         `sMMMMMMMMMMMMMMMMMMMMMMMMMMmy/.`           -/y` \n");
    printf("  `:-`    sMMMMMMNs-`` `.:hMMMMMMMMMMMMMMMy:.` ``./dMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNd+.          `:/ \n");
    printf("    .:-``  sMMMMMMMMmdhdmMMMMMMMMMMMMMMMMMMMNdhddNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNs.          s \n");
    printf("      `.:-`-yNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNmhsooosdMMMMMMMMMN/         o \n");
    printf("        `+/- -hNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNs:`      `NMMMNNMMMMMo        +`\n");
    printf("       .+.     -smMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMy.          dd+:--yMMmyy+       o \n");
    printf("      -+         ./yNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMd            o`     +d`  .:      o \n");
    printf("      s             +shNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM+            :-      +    --    `+ \n");
    printf("      o            /:.+-/ymNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM/             +      ./    -`   +` \n");
    printf("      +`           + ./    -+hmMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMd             o       -+.` :`  ::  \n");
    printf("      `+           `+o`   `   `yoohmNMMMMMMMMMMMMMMMMMMMMMMMMMMMNm:            o        o.-:s``-/   \n");
    printf("       -:         `-::---.-/.-+:`-/:/:so++ooooo++osdhhmNNNNmdhs+-+.           /-      `/`   `..     \n");
    printf("        ./.              `::   ....  .+--.----.----    ````    `+-          `/.      ::             \n");
    printf("          -:-`         .::`         .+                :/.-------           :/      -/`              \n");
    printf("             ---::.`.::/:.        `::                 `+-                ::`     -:.                \n");
    printf("                 .--`    `--.------                     -::.          -:-.--.----`                  \n");
    printf("                                                           .---.------ \n");

    break;

case 141:
    printf("\n");
    printf("                     `...........`        ``                                                         \n");
    printf("               ``..-..........  -       `  .`                                  ``.                  \n");
    printf("           ``.-....`         `  :      .    ``.````````        ``....`     ```` ``                  \n");
    printf("        `.....              ``. :     ``     `        `........``     ..```    `.                   \n");
    printf("       ....                .`  :`:`   .     `                       ..        `.                    \n");
    printf("     ...`      `..........-`    : -.  .    ``                     ..         `.                     \n");
    printf("    ..`     ...`                -` --..    .                    `.          `.                      \n");
    printf("   ..`   `.-`                    -.:-:     .                  `.`          ..                       \n");
    printf("  - `  `-.                       ````-    .                  ..           -`                        \n");
    printf(" -   `-.                            `/`   .                .-`          `:.                         \n");
    printf(".`  .-                               `:   -               --           -- `..                       \n");
    printf("- `-`                                 -`  :`            .:`-         .-.``..-:                      \n");
    printf("-.-                                    :` --           .::.-       .-.      ``                      \n");
    printf("..                                      -.`:          -.`.`      `-.`..````````                     \n");
    printf("                                         `..-        -`      ```.-` `. .     ``....`                \n");
    printf("                                           `--      -`````````  -    - `          ``-.`             \n");
    printf("                                             `-..``.`.   .`    `-  `.-  `````````````.:             \n");
    printf("                                               `..`  `.   ..```.  .....` . ```....`````             \n");
    printf("                                             `````.`  `...-.`..  ````  - `-``    ``.`               \n");
    printf("                                         `````  `  ..`     `.`  `-     .` ``..``....`               \n");
    printf("                                      `.``````..`.` `..-..``...`.-```..      `.`  ```               \n");
    printf("                                    ..` `.`   .`  ..``.......-```..  -         -``  `.`             \n");
    printf("                                  `.` `.`      .   ````        .`  . .`        - `....:             \n");
    printf("                                 `-  .`      ``.  .`           -`   - -        `-  ```              \n");
    printf("                                 -  -`    ``.``  .             `.--.:`-.        :    ```            \n");
    printf("                                -  -    `.`      -          ``..``````.:        ..     `.`          \n");
    printf("                               `. -`   `.        -..`````...``         :         :       `.         \n");
    printf("                               - ..   ..        .``..-```              -.   ```.`-``       .`       \n");
    printf("                               - :   .`         .    -                  .-.`-  `/. ````     `.      \n");
    printf("                              .`..  `.          -   .`                     `-... `-   ```     .`    \n");
    printf("                              .`:   -          ..  -                        ..    `.     ```   ``   \n");
    printf("                              `.:  .`          :  -                          `..   .-      `.`  ``  \n");
    printf("                               :.` .          -` `.                            `-`  `..      `.`  ` \n");
    printf("                               : ` .         .`  .                               :`   `-       `.```\n");
    printf("                               -`  .        .`   .`                               :    ..        ``-\n");
    printf("                                :  .      `..... .`                               `.    -           \n");
    printf("                                .. -```-`..`.`  ..                                 -    -           \n");
    printf("                                .:`-.``.`.   -`  .                                 -  `..           \n");
    printf("                                . -..`   -``.....`                                 ....`.-`         \n");
    printf("                                  `.`...`                                          :`.````:/`       \n");
    printf("                                  ..`                                             `-` -  . `--      \n");
    printf("                                                                                 .`  .-``..`  :     \n");
    printf("                                                                                 - .`      `-.-     \n");
    printf("                                                                                  :          .:  \n");

    break;

case 142:
    printf("                              +H+                       \n");
    printf("                             H;;+          +HHHHHHHHHHH+\n");
    printf("                             +;+ +H+   +HH+;;;;;HHHHH+  \n");
    printf("                            +;;HH;;HHH+;;;;;;+HHH+HH+   \n");
    printf("                         H  H;+H;;++;;;;+HHHHHH+++H+    \n");
    printf("                        H;H H;HH;++;;+HHHHHH++++H+      \n");
    printf("                        +;+HH;HH++HHHHHHH++++++H        \n");
    printf("                         H;;+;;;HHHHHH++++++++H         \n");
    printf("                          +HH+;;;HHH+++++++++H          \n");
    printf("                             H;;+HH+++++++++H           \n");
    printf("                             +;+HH++++++++++            \n");
    printf("                            +;;HHH+++++++++H     +HHHHH+\n");
    printf("                      H+    H;;HHH++++++++H  +HH+;;;;;H \n");
    printf("                   H+ +HH+  H;+HH+++++++++HH+;;;;;;;;H  \n");
    printf("                  H;H  +HHH++;HHH++++++++H;;;;;;;;;;H   \n");
    printf("   +H+           H;++  HHHHH;;HHH+++++++++;;;;;;;;;H    \n");
    printf("  +;;;H         H;++  H+HHH+;;HHH+++++++H;;;;;;;;;H     \n");
    printf("  H+;;+    +HHH+;++H H++HH+;;;+HH+++++++H;;;;;;;;+      \n");
    printf(" ++;;;;H+ +;;;;;++HHH++HH+;;;HHHH++++++++;;;;;;;;H      \n");
    printf(" H;;;;;;;H;++H;;;;+HH+HH+;;;+HHHHH++++++;;;;;;;;H       \n");
    printf("+;;;;;;;;;+   ;;;H+HHHH+;;+HHHHHHHH++++H;;;;;;;H        \n");
    printf("H;;;;;;;;+  H ;;;H++HH+;;+HHHH+++HHHH+++;;;;;;H         \n");
    printf("H;;;;;;;;;++H+;;H+++HH;;;HHHH++++++++HH;;;;;;;H         \n");
    printf("+;+HH+;;;;;;;;;;H++HH+;;+HHH++++++++++H;;;;;;+          \n");
    printf(" +    +HHH++;;;;;++HH;;++HH+++++++++++++;;;;;H          \n");
    printf("       H+++H++;;;+HHH;++HH+++++++++++++H;;;;;+          \n");
    printf("      H+H++++;;;H+HH+;+HHH++++++++++HH+;;;;;+           \n");
    printf("      HH H;;;;;H+++H;++HHH+++++++HH+;;;;;;;;H           \n");
    printf("    +H H+;;;;H++++++;++HHH+++++H+;;;+H;;;;;;H           \n");
    printf("   + H+;;;;H+  H++++;;+HHHH+++H+;;;;;;+H;;;;H           \n");
    printf("   H+;;;;+H     H++;;;;+HHH++H++;;;;;;;;+H;;H           \n");
    printf("  H;;;;;+H       H++;;;;+HHH+++;;;+HHHH+;;H+H           \n");
    printf("  +H;;++++        H;;;;;;+HHH++;H+      +HHHH           \n");
    printf("    H+++H         H;;;;;;;;+H+++            +           \n");
    printf("     HHH          H;;;;;;;;;;+HH+                       \n");
    printf("                  +;;;;;;;;;;;+++H                      \n");
    printf("                   +;;;;;;;;;;;;++H                     \n");
    printf("                   H;;;;;;;;;;;;;;++H                   \n");
    printf("           H       +;;+;;;;;;+;;;;;;;H                  \n");
    printf("          ++H       HHH;;;;;;H;;;;;;;;H                 \n");
    printf("          H++H       H;;;;;;;H;;;;;;;;;H                \n");
    printf("          H;++H      +;;;;+++H+;;;;;;;;;H               \n");
    printf("          H;;++H    +;;;;+++HHH+;;;;;;;;;H              \n");
    printf("          H;;;++H   H;;;;++H    +H;;;;;;;+              \n");
    printf("          H;;;;++H  H;;;;+H   +HH H+;;;;;;+             \n");
    printf("          H;;;;;;;H +;;;;H   H;;+ H++;;;;;H             \n");
    printf("          H;;;;;+H   H;;;;+HH;;H  ++++;;;;H             \n");
    printf("          +;;;;;H     +H+;;;;;;+   H+H;;;;H             \n");
    printf("           +H+;;;H       +HH+;++H+  HH;;;;+             \n");
    printf("              H;;;H         H;++++H  +;;;+              \n");
    printf("               H;;;+H+       +;++++H+;;;;H              \n");
    printf("                +H;;;;+H+    H++++H+;;;;H               \n");
    printf("                  +H+;;;;+HHHHHH+;;;;;;H                \n");
    printf("                     +HH+;;;;;;;;;;;;+H                 \n");
    printf("                         +H+;;;;;+HH+                   \n");
    printf("                            +HHHHH+\n");

    break;

case 143:
    printf("      ::                                              \n");
    printf("      HHH:                   :HH                      \n");
    printf("      HHHHH:               :HHHH                      \n");
    printf("      HHHHHH: :HHHHHHHHH: :HHHHH                      \n");
    printf("      HHHHHHHHHHHHHHHHHHH:HHHHHH                      \n");
    printf("      :HHHHHHHHHHHHHHHHHHHHHHHHH                      \n");
    printf("      ,HHHHHHHH:,,,,:HHHH:,,:HHH                      \n");
    printf("       HHHHHH:,      ,:H:    ,:H                      \n");
    printf("       HHHHH:,  :HH:  ,:  :H: ,:                      \n");
    printf("      :HHHH:,,:H             :H,:                     \n");
    printf("      HHHHH,,,,       :::       H                     \n");
    printf("      HHHH:,,,,      :::::      :,                    \n");
    printf("      HHHH,,,,,,    ,:::::,     ,:                    \n");
    printf("     ,HHHH,,,,,,,   H::,,:H     ,H,                   \n");
    printf("     :HHHH,,,,,,,,  H: ,, H    ,,HH:,:HHHH:,          \n");
    printf("     H:::HHHH:,,,,,:HHHHHHHHHHHH:HHHHHHHHHHH:         \n");
    printf("    ::HHHH:,:H:,:HH::,,         ,:HHH ,HHHHHH:        \n");
    printf("   :HHHHHHHH:, HH::,,             ,:H :HHHHHHH:       \n");
    printf("  :HHHHHHHHHHHHH:,,,               ,:HH:,, HHHH:      \n");
    printf("  HHHHHHHHHHHH:, :,                  :H,,  HHHHH      \n");
    printf(" ,HHHHHHHHHHHHH: H,                   :H  :HHHHH:     \n");
    printf(" :HHHHHHHHHHHHHH:,                     :HHHHHHHHH     \n");
    printf(" HHHHHHHHHHHHHH,,,                      :HHHHHHHH     \n");
    printf(",HHHHHHHHHHHHH:,,,,                     ,:HHHHHH:     \n");
    printf(":HHHHHHHHHHHH:,,,,,,                    ,,HHH: HHH:   \n");
    printf("HHHHHHHHHHHH:,,,,,,:,                   ,,HHH, HH,H H:\n");
    printf("HHHHHHHHHHHH,,:,,,H H,                 ,,:HH:,,:, H:,H\n");
    printf("HHHHHHHHHHH:,: :,:   :,,H:            ,,,H::::H :H:, H\n");
    printf("HHHHHHHHHHH,,H  HH,  H:H,H,,        ,,,,:H::,,     : :\n");
    printf("HHHHHHHHHHH,:,  ::,, :H, H,,,,,,,,,,,,,,H::,,      ,: \n");
    printf(":HHHHHHHHHHHH,,:,,:H:,:, :,,,,,,,,,,,,,:H:,,,       H \n");
    printf(",HHHHHHHHHH:,:H,      ,:H,,,,,,,,,,,,,:H::,,        : \n");
    printf(" HHHHHHHHHH,,,,         ,:,,,,,,,,:HHHHH:,,,   ,:,  ,:\n");
    printf(" HHHHHHHHHH,,,           H,,,:HHHHHHHHHH:,,   ,:::,  H\n");
    printf(" HHHHHHHHH:,,,   ,:::,   :::HHHHHHHHHHHH:,,   :::::  H\n");
    printf(" HHHHHHHHH,,,    :::::,  ,HHHHHHHHHHHHHH:,,   :::::  H\n");
    printf(" HHHHHHHHH,,,   ,::::::   HHHHHHHHHHHHHH:,,   ::::, ,:\n");
    printf(" HHHHHHHHH,,,   :::::::   HHHHHHHHHHHHHH:,,   ,::,  : \n");
    printf(" HHHHHHHHH,,,   :::::::   HHHHHHHHHHHHHH:,,    ,,   H \n");
    printf(" :HHHHHHHH,,,   :::::::   HHHHHHHHHHHHHH:,,,       ,: \n");
    printf(" ,HHHHHHHH,,,   ::::::,   HHHHHHHHHHHHHHH:,,      ,:  \n");
    printf("  HHHHHHHH,,,   ,:::::   ,HHHHHHHHHHHHHHH:,,,,  ,,H   \n");
    printf("  :HHHHHHH,,,    ,:::,   :HHHHHHHHHHHHHHHH:,,,,,H:    \n");
    printf("   :HHHHHH:,,,    ,:,   ,HHHHHHHHHHHHHHHHHHHHHH:      \n");
    printf("    :HHHHHH,,,          :HHHHHHHHHHHHHHHHHH:,         \n");
    printf("     :HHHHH:,,,        ,HHHHHHHHH:,                   \n");
    printf("      :HHHHH:,,,      ,:HHHHHH:,                      \n");
    printf("        H:HHH:,,,    ,:HH:,                           \n");
    printf("              :HHHHHH:\n");

    break;

case 144:
    printf("    :--:.                                                                                .--/`      \n");
    printf("    +   -:.                                                                           .::.  --      \n");
    printf("    -:    -:`                                                                    .:///.   `/:       \n");
    printf("     .-    `:-                                                             `-:///-`    .:/:         \n");
    printf("  ----`-.     -.`                                                     `-///:.``    `-:/:`           \n");
    printf("  +` `--:/.     -:.                                               .://:.....`` .-://-----:          \n");
    printf("  `/-    `-//.    -/.                                          -/+:``---`    ..`       .::          \n");
    printf("`----:.     `.`    `::                                       /+-``::-`             .:::-`           \n");
    printf("./``.-:/-`           `+`                                   `o: ./:`           `-/++/:---            \n");
    printf(" -:`    `...`      `. ./                                   o: //`         `.---.``   `:/            \n");
    printf(" .-/:.      `       :  o                                  :o -o         ```       `-::`             \n");
    printf("o``.-:/:--.`        :` o                                  y` s.               `-:::.`               \n");
    printf("-/-    ```..`       :`.o                                 :+ -o           .--://::----               \n");
    printf(" `.::-.             : +-                                 s. o.         `-.``       -/               \n");
    printf("    `-://:.`        :`s                                 `y `s                 `--::.                \n");
    printf("  -::.``           ..+-                                 :+ :/           `..-://:::-                 \n");
    printf(" /-`   `..`        :`s                                  o- +`        `..```    .-:-                 \n");
    printf(" .:::++:.`        ..+-                                  y  /              `--::.`                   \n");
    printf("  `::.`           .`s                                  `o  -         `.---------                    \n");
    printf("  +.   `.-..     ``/:         `    `.-`                ::  .              `.--::                    \n");
    printf("  :::/++:``      ` s        `-/`..-`:.  .:             o` ``        `.--://--`                      \n");
    printf("   -/-`    `       y       .:`:-`  :-.--/.            `+                   `-:                      \n");
    printf("  :/`   ...`       s`      / .- `..```./.            `+`       ``...------::-`                      \n");
    printf("  ./:::/:`         .+.     -`:`-```.-::`           .::`        ``.-:::-.``                          \n");
    printf("    `-:`  .--`    ```/:     ://:++/`.-          `-:.`        ````    `.-:-                          \n");
    printf("    -/..-/:.       `.`-/`  :..::..`  /`      `.-.`            ```.::...``./`                        \n");
    printf("    `..:/.   .`     `..`/. .:--`     :.    .--`              .`    ./:..--:`                        \n");
    printf("      `o``.:/.        `-`-- /        -:  `-.` ``              .:.`   -/`                            \n");
    printf("       ::--/`   `      `-.`::        `o .-` `.`             `  `:--...:/                            \n");
    printf("         `+`  `-` `      -`/          :--  ..           ``   -`  :.```.`  `...---::---..`           \n");
    printf("         .+..:o` .` `    `:`           `  -`             `.  `/-` +`  `.-:-..`` `````...::-`        \n");
    printf("          ...::`:` -.   `-`        `-    ..       ``  ``  `/.`:--:/--:-.`  ..-::-.```.----:/-`      \n");
    printf("             /:+` -/   `/-          /`   `         -   -.  :-.- `-:-`  `-::..`           `.-/+:     \n");
    printf("             ``--:o  ` :/`          ./     `` `    `+` `/:-/` `-:.  `-:-.`  `..-:::-..---..` `-/`   \n");
    printf("                ` +-:: .+-           /   `` :` -   `o:::. ` `-:.  `::.` `.-:-..``..........-:-.`/.  \n");
    printf("                  `.`-`:+`          `/    :-`:--/..+.     `::.  .::. `-::.``.-:/:..::....:/:....-+. \n");
    printf("                      ``:.-         `/     -/--..--`    .::` `-/-``.:-. `.:-.` `-`  +     -.`.-..:s`\n");
    printf("                        `//        `:.      -         .:-` .-:. `-:-``.:-.       :  /`     :   `-`-/\n");
    printf("                          -:-    ..:-      -:      .-:.``-:-` .::. .::.          :  /`     /     - /\n");
    printf("                           //--.::``       ./ ``.---..-:-. .-:-``-:-`           -.  +     -.     . /\n");
    printf("                           .: ..-.`.-      `o..--.-:-..`.::-.`.:-.             .:  :-    `/       `:\n");
    printf("                            :-   `--::`    .+..---.--:---..---.               -:  -:    `/`       :`\n");
    printf("                             --  `-` `::`  //---:::-----...                 `:- `:-    `/.      `:` \n");
    printf("                              ::-:`    `/`.+`                             `::` .:.    `/.      `-`  \n");
    printf("                              :`:`      /--+                           `.:-``.:.     .+.      .-    \n");
    printf("                             .::`       : -`                       ``-::.`.:-.     ./:`     `-`     \n");
    printf("                             /`:       .-:`                    ``-::-.`.:-.      ./:`     `..       \n");
    printf("                      ``` ``:`:`       /--               ```-::--.`.-:-.      `-/:`     `..         \n");
    printf("                    ...-:::-` ..```   -./`         ```-:::--.`.-:--.`      `-//-     `..`           \n");
    printf("                   -:.-:..--....../-`.- .-:- ```-:::-:-.-::---.`     ```-:/:-    ``...`             \n");
    printf("                   .. :-:`:.-`  `.-..   `::/::--..-:---.`    ````.-::::-.`  ``.-:-.                 \n");
    printf("                       -  /.    ...:..///:-``----.`````.--:::::--.`` ```.-:::-.`                    \n");
    printf("                                :-::::.``-:--``.:::::-:-..``..-:://:::::-`                          \n");
    printf("                                /o:.`.::-..::::-..-:///:::::--.`                                    \n");
    printf("                              `/:``::-.://:://:::-.`                                                \n");
    printf("                             :/``/:`.+o+/:-.                                                        \n");
    printf("                           `/. -+``/s/-                                                             \n");
    printf("                           +. /: -+-                                                                \n");
    printf("                          :- /: +/                                                                  \n");
    printf("                          o `o +:                                                                   \n");
    printf("                          + /.-+                                                                    \n");
    printf("                          /.+.+-                                                                    \n");
    printf("                           /://:                                                                    \n");
    printf("                            -o-o:                                                                   \n");
    printf("                              --+o/:-.``...`                                                        \n");
    printf("                                 `-::///::---.                                                      \n");
    printf("                                              `   \n");

    break;

case 145:
    printf("\n");
    printf("                                                                                                .-:o:\n");
    printf("                       /-                                                                `------:-  \n");
    printf("/o:--`                 .::-                                         `//             `-----   -:.    \n");
    printf("  -:`.----.             --`::         :.                          -:/o-o`      .----.     `::`      \n");
    printf("    -:.   `----- `o/----`:- `:-       :--      `+`             -:- -/`/` `-----`        `:-         \n");
    printf("      .:-      `---++`  .-+.  `/-     / --    :-/           `::`  :-`o----            -::--         \n");
    printf("        .:-          .----./`   .:.:` /  :. -: ..         -:.    -/-.               -/-.-:.         \n");
    printf("          `::             `--    .+y::+   /:`  /  `../..:-                       `::` .:.           \n");
    printf("       /++---::`                  :-      `   `:..-:/++:..                     .:-  .:.             \n");
    printf("          ---. ::`                 -:             `.``---                    -:.  .:.               \n");
    printf("             `---::.                `/.+    :yy`   .--                     ::`  .:.                 \n");
    printf("                 .-+o.              -. do-/+dh`  --`                    `/:   .:.                   \n");
    printf("   ./++/-------------:            `+--//--oo     `/                     ..----:--------/+-          \n");
    printf("       .-----`                      `// `/+: .+--.`:`                           .------`            \n");
    printf("             .-----                 .o` +- .::/`  .--                    .---://:/:                 \n");
    printf("                  `-----.           /`-:      -`    `             .------`  .----`                  \n");
    printf("                        `-----`    /`:+             :       .-----`    .----`                       \n");
    printf("                              +`  :-: ---       .:. /        :-   -----`                            \n");
    printf("                          `::/`  .+-`-/++-`    ---`-+        `.//-`                                 \n");
    printf("                          `o-:/``::--:-  ::`   .+`   :-   `--/  -:`                                 \n");
    printf("                        `-:`+` o.   --    /.   /:     /---/`-+    ::                                \n");
    printf("                    `//+--:+./ `/  ./:`   -:   .-.   `:: -- //-`.-:-+:                              \n");
    printf("                       .----..` .:-`-/---:/.     `+--/`.:+ :.`-/. -+ ./`                            \n");
    printf("                      `+----`     -:`     :.      :-` ---` ...`---.----/:                           \n");
    printf("                     -::--------` +      ::         .--/      -----+.. `-`                          \n");
    printf("                                : /    ::             :.  .--------+-.                              \n");
    printf("                                .:+  ::              -. --/-                                        \n");
    printf("                                 :.::`.-:.            o:+` `:.                                      \n");
    printf("                                 -+:--``/         `    o.-+-..:`                                    \n");
    printf("                                `:`    +   `/+    o.   ./-./.--o`                                   \n");
    printf("                                      --  /- ::  ---/   + .--                                       \n");
    printf("                                      + .//`/`+  /:-+/` `/                                          \n");
    printf("                                     `/:. ::  :.`: .: :- /                                          \n");
    printf("                                     -:        //      `:+`                                         \n");
    printf("                                               /:        `        \n");

    break;

case 146:
    printf("                                                                                                 `  \n");
    printf("                                                                                               ``.. \n");
    printf("       `                                                                                    `.-  -  \n");
    printf("    ..``.                                ``.`                                          ``.`.``  .   \n");
    printf(" ``:`  `.                              ``. .                         `.              .``.``    `.   \n");
    printf(" :-:   `.``                      `` .`.` `.`          `             `.`.            .``.       .    \n");
    printf(".`  -    .`                    ``. ``    ``          ..``   -`     `.  .          ```.`      -.     \n");
    printf("``  -    `.`              `` . -`     `.      .``````.` . .:..`   ..  -`      `````-.       --      \n");
    printf(" `` -       .             :::...    ``.      `-         - ..  .`  -   `-````.`  ..-`      ```       \n");
    printf("  . ```     `.``      ``  `.:     ..-        .`       ``.``   -  `-``...`     `.``        .         \n");
    printf("  .`  .       `-      :.. ..     `-     `.`   .      `-``..` `.````         ``         `.`          \n");
    printf("   `. ..`     ..    ...`.`.   ```-      `-`.` .`    `-`.`..          .-```..          -`            \n");
    printf("    `.``.`     `-``-`   `.    +.-    -`.`.  -`..     ````       ````.``` `            :.            \n");
    printf("      .. -`      `.-          ``.    -` `   ```     `.`     `..`                   `..`             \n");
    printf("       .``-.`    -      ```````.     `.          ````     `.-`                ````..                \n");
    printf("        -  `.-. -.`    `-`` ````   .`-.. ````.``     ` ``.`                 ```````                 \n");
    printf("        `````` .-.-````:`      ````.::`..````    ```...``                 .`:`                      \n");
    printf("            `...``:-``-/-   ``   `..`-.`       ``.                      -..``                       \n");
    printf("               `..``...-``.-``.     -.       ...`                   ````-`                          \n");
    printf("               `.``..-...`` .` .   .`   ````..`               `-..`.````                            \n");
    printf("              `.`--``  ``.`` `..       --`.`        ``.`       :` `                                 \n");
    printf("             ....`        `..  .        `.`..```.`````         :`                                   \n");
    printf("            `.`              ..`            `.``              -:                                    \n");
    printf("                              -               ``             :-.`                                   \n");
    printf("                              .                 .            ` --                                   \n");
    printf("                              .                  .`          ...                                    \n");
    printf("                              `.       `          ..``       -                                      \n");
    printf("                              .`       .           - -      .                                       \n");
    printf("                              `.       `.          - ````````                                       \n");
    printf("                               -`  ```` ..         -                                                \n");
    printf("                                ...```.````.``  ``.`                                                \n");
    printf("                                 . `.         `.. `.                                                \n");
    printf("                               `.`.-             .` .`                                              \n");
    printf("                              .`..`               `. -                                              \n");
    printf("                         `...```.`                 . ``                                             \n");
    printf("                       .--..`.``..-               `.` ``.``                                         \n");
    printf("                       `.`-..     .             `--- ...-.-.                                        \n");
    printf("                          .`                       -.` .-.                                          \n");
    printf("                                                   `.   ``                                          \n");

    break;

case 147:
    printf("                              H  \n");
    printf("               +             H + \n");
    printf("  +HHHH+      + H           +; H \n");
    printf(" H+++;;;+H    H +           H; H \n");
    printf("+HH+++;;;;H   H  +   +HHHHH+;; H \n");
    printf("+   H++;;;;H  H; H H+;;;;;;;H  H \n");
    printf("     ++;;;;;+H+;; ++;;;;;;+H;H + \n");
    printf("     H++;;;;H;;H; H;;;;;;H  H;+ +\n");
    printf("      ++;;;;+;;;H H;;+H;;+; +;H H\n");
    printf("      H+;;;;;+;;  H;+  +;;+H;+ +H\n");
    printf("      H+;;;;;H;;  H;HH H;;;;;H H+\n");
    printf("      H;;;;;;H;   H;HHHH;;;;;HHH \n");
    printf("      H;;;;;;H   H+;+HH+;;+HH+H+ \n");
    printf("      +;;;;;;+  ++;;;++;+H    H  \n");
    printf("     +;;;;;;;;+H H+;;;+H       + \n");
    printf("     H;;;;;;;;H  H+;;++;;      H \n");
    printf("     +;;;;;;;;+   H;;+H;;;;    + \n");
    printf("    +;;;;;;;;;;+  H+;++;;;;;; +  \n");
    printf("    H;;;;;;;;;;H  H+;;+H+;;;;+   \n");
    printf("    H;;;;;;;;;+H  H+;;H;;+HH+    \n");
    printf("    H;;;;;;;;;+H  H+;+  ;;;H     \n");
    printf("    H;;;;;;;;;++H H+;H      +    \n");
    printf("    H;;;;;;;;;++HH+;;+      H    \n");
    printf("    H;;;;;;;;;+++H;;+       +    \n");
    printf("    H;;;;;;;;;;+H;;;H        +   \n");
    printf("    H+;;;;;;;;;H;;;;+        H   \n");
    printf("    +++;;;;;;;;;;;;H         H   \n");
    printf("     H++;;;;;;;;;;;+         H   \n");
    printf("     ++++;;;;;;;;;+          +   \n");
    printf("      H+++++;;;;;;H         +    \n");
    printf("      H++++++++++H;;;       H    \n");
    printf("       H++++++++H;;;;;;    +     \n");
    printf("        H++++++H;;;;;;;;  H      \n");
    printf("         H+++H+;;;;;;;;; H       \n");
    printf("          +HH;;;;;;;;;;H+        \n");
    printf("             +H;;;;;;H+          \n");
    printf("               +HHHH+\n");

    break;

case 148:
    printf("                          H:              \n");
    printf("                         H H            H:\n");
    printf("                        :  H           H H\n");
    printf("                        H  :          H  H\n");
    printf("              H:        :   :         H  :\n");
    printf("            H:         : H  H  :HHH: :  : \n");
    printf("           ::          H  H  H:     :H   :\n");
    printf("          :H           H     :    :   :  H\n");
    printf("          HH           :H : H    : :  H H \n");
    printf("         ::H           H H  :    H H   HH \n");
    printf("         H H           : H ::    :H:  :H: \n");
    printf("         H:H            H HH:H:      : H  \n");
    printf("         HHH             :HHHH :     H H  \n");
    printf("        ::  :              HHH H     HH:  \n");
    printf("        H:: H              H:HHH:   ::H   \n");
    printf("        H:HHH              : :HH:     ::  \n");
    printf("        :H:  H             H H::       H  \n");
    printf("         H:::H              : H::      H  \n");
    printf("         :HH :H             H  H:::   ::  \n");
    printf("           :H  :H           :   H:::::H   \n");
    printf("             H   :H:         : H::HHH:    \n");
    printf("              H     :H       H H::  H     \n");
    printf("               H::    H      H  :::::     \n");
    printf("                :::    H     :   :H:      \n");
    printf("                H:::   :      :  :  :     \n");
    printf("                H:::    :     H  :  H     \n");
    printf("      :H:       :::     H     H  :  :     \n");
    printf("    H:   :H   :H::      H     H  :   :    \n");
    printf("   H       :H:          H     H  :   H    \n");
    printf("  H                    :H     H  :   :    \n");
    printf(" HH      :             H:     H  :    :   \n");
    printf(" :H      H:::         ::      :  :    H   \n");
    printf(": :       :::::      : H     H   :    H   \n");
    printf("H :        :H:::   :H H      :  :     H   \n");
    printf("H  :         :H:::H  H      H   :     H   \n");
    printf("H  :           :H:  H      H    :     H   \n");
    printf(":   :            :H:     H:    :      H   \n");
    printf(" :   :              :HHH:      :      H   \n");
    printf(" H    :                       :       H   \n");
    printf("  H    :                     :        :   \n");
    printf("   H    ::                  :        H    \n");
    printf("    H     ::             :::         :    \n");
    printf("     H:     ::::    :::::           H     \n");
    printf("       H:       ::::               H      \n");
    printf("         H:                       H       \n");
    printf("           :H:                  :H        \n");
    printf("              :HH:           :H:          \n");
    printf("                  :HHHHHHHHH:\n");

    break;

case 149:
    printf("                                                     `-`                                            \n");
    printf("                    --`                              --`                    `                       \n");
    printf("                    --             .-.     `        .--                     ` `                     \n");
    printf("                    :-`          `..`.-....---.....:--`                                             \n");
    printf("                    ---``....``...-` `-`---:-.....-``                                               \n");
    printf("                    `.-------:-`` `` ` `-````-`                           ```                       \n");
    printf("                      ``````.-``             `-`                                                    \n");
    printf("                         ```-``       `-::`    :`                           `                       \n");
    printf("                      ``````-/`      `-/yh:    `:          `````              `                     \n");
    printf("                        ````-o+       -/hdy`    -`         -``......``                              \n");
    printf("                    ````````.:-`      ``/-.      :         `.:`........`                            \n");
    printf("                 ````` `  `-``                   :          -:    ```...-`                          \n");
    printf("                    ``````-`              ``.    :         `-/ `      `...-`                        \n");
    printf("                         `-`              --`    ..       `-.- `-       `..-`                       \n");
    printf("                      ``  .-` ``   .`    `:`      -.    ``---   ..        .--.                      \n");
    printf("                     ``  `-:.-.````````..-:        .-``..-.`     -`        .-:`                     \n");
    printf("                        `-:`  --.`.-..-..`-.        `::.`         -         .-:                     \n");
    printf("            `   `.      -:`   -    :```  ``/          ..          .`         --.                    \n");
    printf("           `:.-.::``   `/.`   -    :....```..          `-`         -          -:                    \n");
    printf("           `/.-`...-.``-:`    :   ..        :            ..        ..         -:                    \n");
    printf("          `-``   ````../:````.-.../` `    `.-.   -        `-`       -         -:                    \n");
    printf("          -::`          `...`    ..`.`       -   -`         --      `.   `..  -:                    \n");
    printf("           --                   `-      `....-`   -`         `-`        -` `:`::                    \n");
    printf("            .-`                 :....        .-    ..          ./..... :    `:o`                    \n");
    printf("              --`              .-  ..........`-     .-`          -.  `:.     +:           `.        \n");
    printf("                ...--..........:...           :`      -`          .-         `         `..-:        \n");
    printf("                              .`               -       -.          `-                ... `:         \n");
    printf("                             `.  `...`.```.....:        .-          -`            ...   `:          \n");
    printf("                             :...`             ..        `-.        /:        `...     `:           \n");
    printf("                            -`                `./          `..-..:./.-`   `...`       .-            \n");
    printf("                           `:            `....` `-..         -:::-:/......`          -.             \n");
    printf("                          ..-      ```...`       -`          `` -.``               `-`              \n");
    printf("                         :` :......``           -`               :               .:.                \n");
    printf("                        :.  -`                .-.                -.          ``..-`                 \n");
    printf("                        :   `-           ``...`:                  -        `--`..                   \n");
    printf("                       ..    `-`    ```..``    :                  :     `.-`.:.`                    \n");
    printf("                       -`     `--...```        -.                .- ``.:` /..`                      \n");
    printf("                       `-       `-`        ```...-`              /.:`` :...                         \n");
    printf("                        -`        `...``...```   `.-`           :. ..`..`                           \n");
    printf("                         -.         `.-.``         .:-`        ./``-.`                              \n");
    printf("                          .-`          `-`..`````..```.-       /:.`                                 \n");
    printf("                            --.`      `.    ```.-....../` .   `.                                    \n");
    printf("                        ``...`--     ..                `- `    -`                                   \n");
    printf("                     `-.``          .`                 -`      `:`                                  \n");
    printf("                   `--:-`        `..`                 -`        `-`                                 \n");
    printf("                  ./-..-:. ``...``                    :`   `..----:                                 \n");
    printf("                   :.:-.-:..`                         `-.-.+. -/.:`                                 \n");
    printf("                                                        ...:.-:`-`                                  \n");
    printf("                                                          `. `-   \n");

    break;

case 150:
    printf("\n");
    printf("                                               `/:+`                      ```                        \n");
    printf("                                              :- .+`     `....``        -+-:/:                      \n");
    printf("                                              ./. `/--:::-....--:::::-./:   +.                      \n");
    printf("                                               `/.  .`              `.:`  `/.                       \n");
    printf("                                                `/                       `+`                        \n");
    printf("                                                `o                       /.                         \n");
    printf("                                                :-                       /.                         \n");
    printf("                                               `+                        ./                         \n");
    printf("                                               .:                        `+                         \n");
    printf("                                               `+    `.`           `     .+                         \n");
    printf("                                                :-`-:``.-`      `..` `-.`/.                         \n");
    printf("                                                `+``o/o.` `- `- ```:+-/ ./                          \n");
    printf("                                                 :- //Nh/. .:-/ .:hNh--.+`                          \n");
    printf("                        `-:::::-`                `+```:+ss::.`:/yoo/.``+`                           \n");
    printf("                       `+-`   `.+.              `:+-     ``     `     -:                            \n");
    printf("                       /-       .o              +.`./-.            `-:-`                            \n");
    printf("                       :/       :+:`           ::  --.-::.` ``. `.::.                               \n");
    printf("                        :/-...-/:`./:--..`     o   o    s.::-..::-`                                 \n");
    printf("                         `..-+-`    -+:..-:-.` + `.+:---o````.+-                                    \n");
    printf("                  `...`      :+      `:/-..-//:+:/:-.` `.--:``-:-.-.                                \n");
    printf("                -/:-.-:/-``.:/. -      .s:...-/-````.-:`  `..-:-  `:-                               \n");
    printf("               .o`     `o/--.  `o      o`     `o`     `/.      -``  -:                              \n");
    printf("        ```    -/       /-      +`     s       o`       +`     ` .:` :-                             \n");
    printf("    `-//:::://:-s:`   `:o.``    `.   ``++.`  `:/-`      -/     .- -/  +`                            \n");
    printf("  `//-`       `-:os+:::----:::.````-/:-.-:::::. ./`     `+      /  +` :/                            \n");
    printf(" .o.   ``...:.    `:+.       `-::::-`            `+.    `+      `  :` :s                            \n");
    printf("`o.  `::----:+/`    `+:                           `/:`   /.      `..``/o                            \n");
    printf(":+  `+.       -+`     //                            ./-` `::-..-::-` :./`                           \n");
    printf("o.  :/         -o`     /+                             -/.    `    `  /..:                           \n");
    printf("y   +.          :+      //                             `::        /. :-`/                           \n");
    printf("y   +.           //      o-                              +.       `o``+`/`                          \n");
    printf("s`  /:            +/     .o                              -/        .+ .+./`                         \n");
    printf("+-  .o             /+`    s.                             -:         -- .+.+`                        \n");
    printf("-+   +-             -o:   s`                        ./::-:` .`       `  `/:o`                       \n");
    printf(" o`  `o.              -///-                      `:/-        ``       ````-/o:                      \n");
    printf(" .o   `o`                                      `//`              .:-::::::/++s+                     \n");
    printf("  :/   `+-                                    -+`                 -:        :+:+-                   \n");
    printf("   //    :+`                                 :/`                   +         `o-:+`                 \n");
    printf("    :+`   `//`                              :/                     o          `s`-o`                \n");
    printf("     -+`    .//-                           -+                     .o           o. -+                \n");
    printf("      `+-     `-/:-.                     `-s                      +-           o.  /:               \n");
    printf("       `//`      `.-:::---.....-------::::s.                     .o           `s   `s               \n");
    printf("         .+:`         ````......``````   :/                     `o.           //    s`              \n");
    printf("           -/:`                         `o`                     +-           .o`    s`              \n");
    printf("             ./:`                       -/                    `+-           `o.     s`              \n");
    printf("               .:/-`                    +.                   `+-           `o-      s               \n");
    printf("                 `-/:.`                 o`                  .+-           -+.      `o               \n");
    printf("                    `-/:-.`             o`                `//`          ./:`       :-               \n");
    printf("                       `.-:::-.``       :`              `:/.          .//.        ./                \n");
    printf("                            `.--::::-.-:+`            .:/.         `-/:.        .::`                \n");
    printf("                                  `.://:`          `.//.        `-:/-`       .-/-`                  \n");
    printf("                                  -/-`          `-/+:.````...-:/s:.      `.-/-.                     \n");
    printf("                                 `o         .::::-:---------..` o       `+-`                        \n");
    printf("                                  o`      `-:-`                 ::      .+                          \n");
    printf("                                  o`     ./.                     +`     +.                          \n");
    printf("                                 `o     .o`                      +.     +                           \n");
    printf("                                 ::     o.                      `o`     /`                          \n");
    printf("                                `o`    :+                      `+-      `+-                         \n");
    printf("                                :/     y`                    ./o/-`      `:/.                       \n");
    printf("                               `o`     h/-                  -+. `-s`       `//.`                    \n");
    printf("                              `o.      y`o`                 o`    o.         `:/:`                  \n");
    printf("                              /:       s.o.                 -o.``:s.`           .:/:.`       ````   \n");
    printf("                             :/        :o-                   `///-`-:/:.         ...:///::::/::://` \n");
    printf("                            :/         `o.`..``                       .:+.        .-:/::/++-`    .+:\n");
    printf("                           -+  `://`    `/:..::/-                       `+:`               -+-    `s\n");
    printf("                          -o      -+            //                        -//:.```         `/o-:--:.\n");
    printf("                          /:     `/o-:::::::`   `s                           `-:::::::::--:-`       \n");
    printf("                           :/::://-        `:////-  \n");

    break;

case 151:
    printf("                /H                   \n");
    printf("               / =/        /H/       \n");
    printf("         /HHHH/ ==H       H   H      \n");
    printf(" /H/  /H/      H==H      /=    H     \n");
    printf("/   HH=          =H      H==    /    \n");
    printf("H== ==           //      /==    H    \n");
    printf("/==             // /      H==   /    \n");
    printf(" H=   /H/==     H H /      H==   /   \n");
    printf("  H=  H=H/=     /H/ H       H==  H   \n");
    printf("   H= H HH/     =/ =/        H===H/  \n");
    printf("   H= H H /      ==H  H       H=H=H/ \n");
    printf("   /==/HH/=       H  H=/       H= HH/\n");
    printf("    H======       / H=/H      /=  / H\n");
    printf("     /H==/==     H H== /      H= /  H\n");
    printf("        HH/HHHHH/ H/==H       /= H =H\n");
    printf("         H///==/H///HH/      /=    //\n");
    printf("         ///====/HHH= H/     H=    / \n");
    printf("        H/===== =H=H  HH     H= =  H \n");
    printf("       H==/=     H H  H=/    H =/ // \n");
    printf("      H=  H=     / /  / H    H // H  \n");
    printf("     H=   /     /=      H    H // /  \n");
    printf("    H=   /=     H       H    H ///   \n");
    printf("   H==  /H=     H       H    H = H/  \n");
    printf("   /=H /H / =   H  =/= =/   H=  //H  \n");
    printf("    / /   H==/H H  /// /=/H H   H/H  \n");
    printf("          H==  /H  /// H==/H=   H=H  \n");
    printf("          H===  H  ///=/=====  /H=H  \n");
    printf("         H/==== /= =/=/====/HH/ /=/  \n");
    printf("        H///===///=   HHHH/    H H   \n");
    printf("       H//HH==///H=  =/        / /   \n");
    printf("      H///  /HHH/H== /        H H    \n");
    printf("      H//H      H/===H     /H/ H     \n");
    printf("       ////H/     /=/  /HH/=  H      \n");
    printf("        //////HHHHHHHH/====/H/       \n");
    printf("         /HH//==========/H/          \n");
    printf("             /HHHHHHHHH/\n");

    break;




    }
}


#endif