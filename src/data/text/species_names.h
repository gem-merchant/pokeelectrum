const u8 gSpeciesNames[][POKEMON_NAME_LENGTH + 1] = {
    [SPECIES_NONE] = _("??????????"),
    [SPECIES_BULBASAUR] = _("BULBASAUR"),
    [SPECIES_IVYSAUR] = _("IVYSAUR"),
    [SPECIES_VENUSAUR] = _("VENUSAUR"),
    [SPECIES_CHARMANDER] = _("CHARMANDER"),
    [SPECIES_CHARMELEON] = _("CHARMELEON"),
    [SPECIES_CHARIZARD] = _("CHARIZARD"),
    [SPECIES_SQUIRTLE] = _("SQUIRTLE"),
    [SPECIES_WARTORTLE] = _("WARTORTLE"),
    [SPECIES_BLASTOISE] = _("BLASTOISE"),
    [SPECIES_CATERPIE] = _("CATERPIE"),
    [SPECIES_METAPOD] = _("METAPOD"),
    [SPECIES_BUTTERFREE] = _("BUTTERFREE"),
    [SPECIES_WEEDLE] = _("WEEDLE"),
    [SPECIES_KAKUNA] = _("KAKUNA"),
    [SPECIES_BEEDRILL] = _("BEEDRILL"),
    [SPECIES_PIDGEY] = _("PIDGEY"),
    [SPECIES_PIDGEOTTO] = _("PIDGEOTTO"),
    [SPECIES_PIDGEOT] = _("PIDGEOT"),
    [SPECIES_RATTATA] = _("RATTATA"),
    [SPECIES_RATICATE] = _("RATICATE"),
    [SPECIES_SPEAROW] = _("SPEAROW"),
    [SPECIES_FEAROW] = _("FEAROW"),
    [SPECIES_EKANS] = _("EKANS"),
    [SPECIES_ARBOK] = _("ARBOK"),
    [SPECIES_PIKACHU] = _("PIKACHU"),
    [SPECIES_RAICHU] = _("RAICHU"),
    [SPECIES_SANDSHREW] = _("SANDSHREW"),
    [SPECIES_SANDSLASH] = _("SANDSLASH"),
    [SPECIES_NIDORAN_F] = _("NIDORAN"),
    [SPECIES_NIDORINA] = _("NIDORINA"),
    [SPECIES_NIDOQUEEN] = _("NIDOQUEEN"),
    [SPECIES_NIDORAN_M] = _("DUMMY"),
    [SPECIES_NIDORINO] = _("NIDORINO"),
    [SPECIES_NIDOKING] = _("NIDOKING"),
    [SPECIES_CLEFAIRY] = _("CLEFAIRY"),
    [SPECIES_CLEFABLE] = _("CLEFABLE"),
    [SPECIES_VULPIX] = _("VULPIX"),
    [SPECIES_NINETALES] = _("NINETALES"),
    [SPECIES_JIGGLYPUFF] = _("JIGGLYPUFF"),
    [SPECIES_WIGGLYTUFF] = _("WIGGLYTUFF"),
    [SPECIES_ZUBAT] = _("ZUBAT"),
    [SPECIES_GOLBAT] = _("GOLBAT"),
    [SPECIES_ODDISH] = _("ODDISH"),
    [SPECIES_GLOOM] = _("GLOOM"),
    [SPECIES_VILEPLUME] = _("VILEPLUME"),
    [SPECIES_PARAS] = _("PARAS"),
    [SPECIES_PARASECT] = _("PARASECT"),
    [SPECIES_VENONAT] = _("VENONAT"),
    [SPECIES_VENOMOTH] = _("VENOMOTH"),
    [SPECIES_DIGLETT] = _("DIGLETT"),
    [SPECIES_DUGTRIO] = _("DUGTRIO"),
    [SPECIES_MEOWTH] = _("MEOWTH"),
    [SPECIES_PERSIAN] = _("PERSIAN"),
    [SPECIES_PSYDUCK] = _("PSYDUCK"),
    [SPECIES_GOLDUCK] = _("GOLDUCK"),
    [SPECIES_MANKEY] = _("MANKEY"),
    [SPECIES_PRIMEAPE] = _("PRIMEAPE"),
    [SPECIES_GROWLITHE] = _("GROWLITHE"),
    [SPECIES_ARCANINE] = _("ARCANINE"),
    [SPECIES_POLIWAG] = _("POLIWAG"),
    [SPECIES_POLIWHIRL] = _("POLIWHIRL"),
    [SPECIES_POLIWRATH] = _("POLIWRATH"),
    [SPECIES_ABRA] = _("ABRA"),
    [SPECIES_KADABRA] = _("KADABRA"),
    [SPECIES_ALAKAZAM] = _("ALAKAZAM"),
    [SPECIES_MACHOP] = _("MACHOP"),
    [SPECIES_MACHOKE] = _("MACHOKE"),
    [SPECIES_MACHAMP] = _("MACHAMP"),
    [SPECIES_BELLSPROUT] = _("BELLSPROUT"),
    [SPECIES_WEEPINBELL] = _("WEEPINBELL"),
    [SPECIES_VICTREEBEL] = _("VICTREEBEL"),
    [SPECIES_TENTACOOL] = _("TENTACOOL"),
    [SPECIES_TENTACRUEL] = _("TENTACRUEL"),
    [SPECIES_GEODUDE] = _("GEODUDE"),
    [SPECIES_GRAVELER] = _("GRAVELER"),
    [SPECIES_GOLEM] = _("GOLEM"),
    [SPECIES_PONYTA] = _("PONYTA"),
    [SPECIES_RAPIDASH] = _("RAPIDASH"),
    [SPECIES_SLOWPOKE] = _("SLOWPOKE"),
    [SPECIES_SLOWBRO] = _("SLOWBRO"),
    [SPECIES_MAGNEMITE] = _("MAGNEMITE"),
    [SPECIES_MAGNETON] = _("MAGNETON"),
    [SPECIES_FARFETCHD] = _("FARFETCH'D"),
    [SPECIES_DODUO] = _("DODUO"),
    [SPECIES_DODRIO] = _("DODRIO"),
    [SPECIES_SEEL] = _("SEEL"),
    [SPECIES_DEWGONG] = _("DEWGONG"),
    [SPECIES_GRIMER] = _("GRIMER"),
    [SPECIES_MUK] = _("MUK"),
    [SPECIES_SHELLDER] = _("SHELLDER"),
    [SPECIES_CLOYSTER] = _("CLOYSTER"),
    [SPECIES_GASTLY] = _("GASTLY"),
    [SPECIES_HAUNTER] = _("HAUNTER"),
    [SPECIES_GENGAR] = _("GENGAR"),
    [SPECIES_ONIX] = _("ONIX"),
    [SPECIES_DROWZEE] = _("DROWZEE"),
    [SPECIES_HYPNO] = _("HYPNO"),
    [SPECIES_KRABBY] = _("KRABBY"),
    [SPECIES_KINGLER] = _("KINGLER"),
    [SPECIES_VOLTORB] = _("VOLTORB"),
    [SPECIES_ELECTRODE] = _("ELECTRODE"),
    [SPECIES_EXEGGCUTE] = _("EXEGGCUTE"),
    [SPECIES_EXEGGUTOR] = _("EXEGGUTOR"),
    [SPECIES_CUBONE] = _("CUBONE"),
    [SPECIES_MAROWAK] = _("MAROWAK"),
    [SPECIES_HITMONLEE] = _("HITMONLEE"),
    [SPECIES_HITMONCHAN] = _("HITMONCHAN"),
    [SPECIES_LICKITUNG] = _("LICKITUNG"),
    [SPECIES_KOFFING] = _("KOFFING"),
    [SPECIES_WEEZING] = _("WEEZING"),
    [SPECIES_RHYHORN] = _("RHYHORN"),
    [SPECIES_RHYDON] = _("RHYDON"),
    [SPECIES_CHANSEY] = _("CHANSEY"),
    [SPECIES_TANGELA] = _("TANGELA"),
    [SPECIES_KANGASKHAN] = _("KANGASKHAN"),
    [SPECIES_HORSEA] = _("HORSEA"),
    [SPECIES_SEADRA] = _("SEADRA"),
    [SPECIES_GOLDEEN] = _("GOLDEEN"),
    [SPECIES_SEAKING] = _("SEAKING"),
    [SPECIES_STARYU] = _("STARYU"),
    [SPECIES_STARMIE] = _("STARMIE"),
    [SPECIES_MR_MIME] = _("MR. MIME"),
    [SPECIES_SCYTHER] = _("SCYTHER"),
    [SPECIES_JYNX] = _("JYNX"),
    [SPECIES_ELECTABUZZ] = _("ELECTABUZZ"),
    [SPECIES_MAGMAR] = _("MAGMAR"),
    [SPECIES_PINSIR] = _("PINSIR"),
    [SPECIES_TAUROS] = _("TAUROS"),
    [SPECIES_MAGIKARP] = _("MAGIKARP"),
    [SPECIES_GYARADOS] = _("GYARADOS"),
    [SPECIES_LAPRAS] = _("LAPRAS"),
    [SPECIES_DITTO] = _("DITTO"),
    [SPECIES_EEVEE] = _("EEVEE"),
    [SPECIES_VAPOREON] = _("VAPOREON"),
    [SPECIES_JOLTEON] = _("JOLTEON"),
    [SPECIES_FLAREON] = _("FLAREON"),
    [SPECIES_PORYGON] = _("PORYGON"),
    [SPECIES_OMANYTE] = _("OMANYTE"),
    [SPECIES_OMASTAR] = _("OMASTAR"),
    [SPECIES_KABUTO] = _("KABUTO"),
    [SPECIES_KABUTOPS] = _("KABUTOPS"),
    [SPECIES_AERODACTYL] = _("AERODACTYL"),
    [SPECIES_SNORLAX] = _("SNORLAX"),
    [SPECIES_ARTICUNO] = _("ARTICUNO"),
    [SPECIES_ZAPDOS] = _("ZAPDOS"),
    [SPECIES_MOLTRES] = _("MOLTRES"),
    [SPECIES_DRATINI] = _("DRATINI"),
    [SPECIES_DRAGONAIR] = _("DRAGONAIR"),
    [SPECIES_DRAGONITE] = _("DRAGONITE"),
    [SPECIES_MEWTWO] = _("MEWTWO"),
    [SPECIES_MEW] = _("MEW"),
    [SPECIES_CHIKORITA] = _("CHIKORITA"),
    [SPECIES_BAYLEEF] = _("BAYLEEF"),
    [SPECIES_MEGANIUM] = _("MEGANIUM"),
    [SPECIES_CYNDAQUIL] = _("DUMMY"),
    [SPECIES_QUILAVA] = _("DUMMY"),
    [SPECIES_TYPHLOSION] = _("DUMMY"),
    [SPECIES_TOTODILE] = _("DUMMY"),
    [SPECIES_CROCONAW] = _("DUMMY"),
    [SPECIES_FERALIGATR] = _("DUMMY"),
    [SPECIES_SENTRET] = _("SENTRET"),
    [SPECIES_FURRET] = _("FURRET"),
    [SPECIES_HOOTHOOT] = _("HOOTHOOT"),
    [SPECIES_NOCTOWL] = _("NOCTOWL"),
    [SPECIES_LEDYBA] = _("LEDYBA"),
    [SPECIES_LEDIAN] = _("LEDIAN"),
    [SPECIES_SPINARAK] = _("SPINARAK"),
    [SPECIES_ARIADOS] = _("ARIADOS"),
    [SPECIES_CROBAT] = _("CROBAT"),
    [SPECIES_CHINCHOU] = _("CHINCHOU"),
    [SPECIES_LANTURN] = _("LANTURN"),
    [SPECIES_PICHU] = _("PICHU"),
    [SPECIES_CLEFFA] = _("CLEFFA"),
    [SPECIES_IGGLYBUFF] = _("IGGLYBUFF"),
    [SPECIES_TOGEPI] = _("TOGEPI"),
    [SPECIES_TOGETIC] = _("TOGETIC"),
    [SPECIES_NATU] = _("NATU"),
    [SPECIES_XATU] = _("XATU"),
    [SPECIES_MAREEP] = _("MAREEP"),
    [SPECIES_FLAAFFY] = _("FLAAFFY"),
    [SPECIES_AMPHAROS] = _("AMPHAROS"),
    [SPECIES_BELLOSSOM] = _("BELLOSSOM"),
    [SPECIES_MARILL] = _("MARILL"),
    [SPECIES_AZUMARILL] = _("AZUMARILL"),
    [SPECIES_SUDOWOODO] = _("SUDOWOODO"),
    [SPECIES_POLITOED] = _("POLITOED"),
    [SPECIES_HOPPIP] = _("HOPPIP"),
    [SPECIES_SKIPLOOM] = _("SKIPLOOM"),
    [SPECIES_JUMPLUFF] = _("JUMPLUFF"),
    [SPECIES_AIPOM] = _("AIPOM"),
    [SPECIES_SUNKERN] = _("SUNKERN"),
    [SPECIES_SUNFLORA] = _("SUNFLORA"),
    [SPECIES_YANMA] = _("YANMA"),
    [SPECIES_WOOPER] = _("WOOPER"),
    [SPECIES_QUAGSIRE] = _("QUAGSIRE"),
    [SPECIES_ESPEON] = _("ESPEON"),
    [SPECIES_UMBREON] = _("UMBREON"),
    [SPECIES_MURKROW] = _("MURKROW"),
    [SPECIES_SLOWKING] = _("SLOWKING"),
    [SPECIES_MISDREAVUS] = _("DUMMY"),
    [SPECIES_UNOWN] = _("DUMMY"),
    [SPECIES_WOBBUFFET] = _("DUMMY"),
    [SPECIES_GIRAFARIG] = _("GIRAFARIG"),
    [SPECIES_PINECO] = _("PINECO"),
    [SPECIES_FORRETRESS] = _("FORRETRESS"),
    [SPECIES_DUNSPARCE] = _("DUMMY"),
    [SPECIES_GLIGAR] = _("GLIGAR"),
    [SPECIES_STEELIX] = _("STEELIX"),
    [SPECIES_SNUBBULL] = _("SNUBBULL"),
    [SPECIES_GRANBULL] = _("GRANBULL"),
    [SPECIES_QWILFISH] = _("QWILFISH"),
    [SPECIES_SCIZOR] = _("SCIZOR"),
    [SPECIES_SHUCKLE] = _("SHUCKLE"),
    [SPECIES_HERACROSS] = _("DUMMY"),
    [SPECIES_SNEASEL] = _("SNEASEL"),
    [SPECIES_TEDDIURSA] = _("DUMMY"),
    [SPECIES_URSARING] = _("DUMMY"),
    [SPECIES_SLUGMA] = _("SLUGMA"),
    [SPECIES_MAGCARGO] = _("MAGCARGO"),
    [SPECIES_SWINUB] = _("SWINUB"),
    [SPECIES_PILOSWINE] = _("PILOSWINE"),
    [SPECIES_CORSOLA] = _("CORSOLA"),
    [SPECIES_REMORAID] = _("REMORAID"),
    [SPECIES_OCTILLERY] = _("OCTILLERY"),
    [SPECIES_DELIBIRD] = _("DELIBIRD"),
    [SPECIES_MANTINE] = _("MANTINE"),
    [SPECIES_SKARMORY] = _("SKARMORY"),
    [SPECIES_HOUNDOUR] = _("HOUNDOUR"),
    [SPECIES_HOUNDOOM] = _("HOUNDOOM"),
    [SPECIES_KINGDRA] = _("KINGDRA"),
    [SPECIES_PHANPY] = _("PHANPY"),
    [SPECIES_DONPHAN] = _("DONPHAN"),
    [SPECIES_PORYGON2] = _("PORYGON2"),
    [SPECIES_STANTLER] = _("STANTLER"),
    [SPECIES_SMEARGLE] = _("DUMMY"),
    [SPECIES_TYROGUE] = _("DUMMY"),
    [SPECIES_HITMONTOP] = _("HITMONTOP"),
    [SPECIES_SMOOCHUM] = _("SMOOCHUM"),
    [SPECIES_ELEKID] = _("ELEKID"),
    [SPECIES_MAGBY] = _("MAGBY"),
    [SPECIES_MILTANK] = _("MILTANK"),
    [SPECIES_BLISSEY] = _("BLISSEY"),
    [SPECIES_RAIKOU] = _("RAI"),
    [SPECIES_ENTEI] = _("EN"),
    [SPECIES_SUICUNE] = _("SUI"),
    [SPECIES_LARVITAR] = _("DUMMY"),
    [SPECIES_PUPITAR] = _("DUMMY"),
    [SPECIES_TYRANITAR] = _("DUMMY"),
    [SPECIES_LUGIA] = _("LUGIA"),
    [SPECIES_HO_OH] = _("DUMMY"),
    [SPECIES_CELEBI] = _("CELEBI"),
    [SPECIES_OLD_UNOWN_B] = _("?"),
    [SPECIES_OLD_UNOWN_C] = _("?"),
    [SPECIES_OLD_UNOWN_D] = _("?"),
    [SPECIES_OLD_UNOWN_E] = _("?"),
    [SPECIES_OLD_UNOWN_F] = _("?"),
    [SPECIES_OLD_UNOWN_G] = _("?"),
    [SPECIES_OLD_UNOWN_H] = _("?"),
    [SPECIES_OLD_UNOWN_I] = _("?"),
    [SPECIES_OLD_UNOWN_J] = _("?"),
    [SPECIES_OLD_UNOWN_K] = _("?"),
    [SPECIES_OLD_UNOWN_L] = _("?"),
    [SPECIES_OLD_UNOWN_M] = _("?"),
    [SPECIES_OLD_UNOWN_N] = _("?"),
    [SPECIES_OLD_UNOWN_O] = _("?"),
    [SPECIES_OLD_UNOWN_P] = _("?"),
    [SPECIES_OLD_UNOWN_Q] = _("?"),
    [SPECIES_OLD_UNOWN_R] = _("?"),
    [SPECIES_OLD_UNOWN_S] = _("?"),
    [SPECIES_OLD_UNOWN_T] = _("?"),
    [SPECIES_OLD_UNOWN_U] = _("?"),
    [SPECIES_OLD_UNOWN_V] = _("?"),
    [SPECIES_OLD_UNOWN_W] = _("?"),
    [SPECIES_OLD_UNOWN_X] = _("?"),
    [SPECIES_OLD_UNOWN_Y] = _("?"),
    [SPECIES_OLD_UNOWN_Z] = _("?"),
    [SPECIES_TREECKO] = _("DUMMY"),
    [SPECIES_GROVYLE] = _("DUMMY"),
    [SPECIES_SCEPTILE] = _("DUMMY"),
    [SPECIES_TORCHIC] = _("DUMMY"),
    [SPECIES_COMBUSKEN] = _("DUMMY"),
    [SPECIES_BLAZIKEN] = _("DUMMY"),
    [SPECIES_MUDKIP] = _("DUMMY"),
    [SPECIES_MARSHTOMP] = _("DUMMY"),
    [SPECIES_SWAMPERT] = _("DUMMY"),
    [SPECIES_POOCHYENA] = _("DUMMY"),
    [SPECIES_MIGHTYENA] = _("DUMMY"),
    [SPECIES_ZIGZAGOON] = _("DUMMY"),
    [SPECIES_LINOONE] = _("DUMMY"),
    [SPECIES_WURMPLE] = _("DUMMY"),
    [SPECIES_SILCOON] = _("DUMMY"),
    [SPECIES_BEAUTIFLY] = _("DUMMY"),
    [SPECIES_CASCOON] = _("DUMMY"),
    [SPECIES_DUSTOX] = _("DUMMY"),
    [SPECIES_LOTAD] = _("DUMMY"),
    [SPECIES_LOMBRE] = _("DUMMY"),
    [SPECIES_LUDICOLO] = _("DUMMY"),
    [SPECIES_SEEDOT] = _("DUMMY"),
    [SPECIES_NUZLEAF] = _("DUMMY"),
    [SPECIES_SHIFTRY] = _("DUMMY"),
    [SPECIES_NINCADA] = _("DUMMY"),
    [SPECIES_NINJASK] = _("DUMMY"),
    [SPECIES_SHEDINJA] = _("DUMMY"),
    [SPECIES_TAILLOW] = _("DUMMY"),
    [SPECIES_SWELLOW] = _("DUMMY"),
    [SPECIES_SHROOMISH] = _("DUMMY"),
    [SPECIES_BRELOOM] = _("DUMMY"),
    [SPECIES_SPINDA] = _("DUMMY"),
    [SPECIES_WINGULL] = _("DUMMY"),
    [SPECIES_PELIPPER] = _("DUMMY"),
    [SPECIES_SURSKIT] = _("DUMMY"),
    [SPECIES_MASQUERAIN] = _("DUMMY"),
    [SPECIES_WAILMER] = _("DUMMY"),
    [SPECIES_WAILORD] = _("DUMMY"),
    [SPECIES_SKITTY] = _("DUMMY"),
    [SPECIES_DELCATTY] = _("DUMMY"),
    [SPECIES_KECLEON] = _("DUMMY"),
    [SPECIES_BALTOY] = _("DUMMY"),
    [SPECIES_CLAYDOL] = _("DUMMY"),
    [SPECIES_NOSEPASS] = _("DUMMY"),
    [SPECIES_TORKOAL] = _("DUMMY"),
    [SPECIES_SABLEYE] = _("DUMMY"),
    [SPECIES_BARBOACH] = _("DUMMY"),
    [SPECIES_WHISCASH] = _("DUMMY"),
    [SPECIES_LUVDISC] = _("DUMMY"),
    [SPECIES_CORPHISH] = _("DUMMY"),
    [SPECIES_CRAWDAUNT] = _("DUMMY"),
    [SPECIES_FEEBAS] = _("DUMMY"),
    [SPECIES_MILOTIC] = _("DUMMY"),
    [SPECIES_CARVANHA] = _("DUMMY"),
    [SPECIES_SHARPEDO] = _("DUMMY"),
    [SPECIES_TRAPINCH] = _("DUMMY"),
    [SPECIES_VIBRAVA] = _("DUMMY"),
    [SPECIES_FLYGON] = _("DUMMY"),
    [SPECIES_MAKUHITA] = _("DUMMY"),
    [SPECIES_HARIYAMA] = _("DUMMY"),
    [SPECIES_ELECTRIKE] = _("DUMMY"),
    [SPECIES_MANECTRIC] = _("DUMMY"),
    [SPECIES_NUMEL] = _("DUMMY"),
    [SPECIES_CAMERUPT] = _("DUMMY"),
    [SPECIES_SPHEAL] = _("DUMMY"),
    [SPECIES_SEALEO] = _("DUMMY"),
    [SPECIES_WALREIN] = _("DUMMY"),
    [SPECIES_CACNEA] = _("DUMMY"),
    [SPECIES_CACTURNE] = _("DUMMY"),
    [SPECIES_SNORUNT] = _("DUMMY"),
    [SPECIES_GLALIE] = _("DUMMY"),
    [SPECIES_LUNATONE] = _("DUMMY"),
    [SPECIES_SOLROCK] = _("DUMMY"),
    [SPECIES_AZURILL] = _("DUMMY"),
    [SPECIES_SPOINK] = _("DUMMY"),
    [SPECIES_GRUMPIG] = _("DUMMY"),
    [SPECIES_PLUSLE] = _("DUMMY"),
    [SPECIES_MINUN] = _("DUMMY"),
    [SPECIES_MAWILE] = _("DUMMY"),
    [SPECIES_MEDITITE] = _("DUMMY"),
    [SPECIES_MEDICHAM] = _("DUMMY"),
    [SPECIES_SWABLU] = _("DUMMY"),
    [SPECIES_ALTARIA] = _("DUMMY"),
    [SPECIES_WYNAUT] = _("DUMMY"),
    [SPECIES_DUSKULL] = _("DUMMY"),
    [SPECIES_DUSCLOPS] = _("DUMMY"),
    [SPECIES_ROSELIA] = _("DUMMY"),
    [SPECIES_SLAKOTH] = _("DUMMY"),
    [SPECIES_VIGOROTH] = _("DUMMY"),
    [SPECIES_SLAKING] = _("DUMMY"),
    [SPECIES_GULPIN] = _("DUMMY"),
    [SPECIES_SWALOT] = _("DUMMY"),
    [SPECIES_TROPIUS] = _("DUMMY"),
    [SPECIES_WHISMUR] = _("DUMMY"),
    [SPECIES_LOUDRED] = _("DUMMY"),
    [SPECIES_EXPLOUD] = _("DUMMY"),
    [SPECIES_CLAMPERL] = _("DUMMY"),
    [SPECIES_HUNTAIL] = _("DUMMY"),
    [SPECIES_GOREBYSS] = _("DUMMY"),
    [SPECIES_ABSOL] = _("DUMMY"),
    [SPECIES_SHUPPET] = _("DUMMY"),
    [SPECIES_BANETTE] = _("DUMMY"),
    [SPECIES_SEVIPER] = _("DUMMY"),
    [SPECIES_ZANGOOSE] = _("DUMMY"),
    [SPECIES_RELICANTH] = _("DUMMY"),
    [SPECIES_ARON] = _("DUMMY"),
    [SPECIES_LAIRON] = _("DUMMY"),
    [SPECIES_AGGRON] = _("DUMMY"),
    [SPECIES_CASTFORM] = _("DUMMY"),
    [SPECIES_VOLBEAT] = _("DUMMY"),
    [SPECIES_ILLUMISE] = _("DUMMY"),
    [SPECIES_LILEEP] = _("DUMMY"),
    [SPECIES_CRADILY] = _("DUMMY"),
    [SPECIES_ANORITH] = _("DUMMY"),
    [SPECIES_ARMALDO] = _("DUMMY"),
    [SPECIES_RALTS] = _("DUMMY"),
    [SPECIES_KIRLIA] = _("DUMMY"),
    [SPECIES_GARDEVOIR] = _("DUMMY"),
    [SPECIES_BAGON] = _("DUMMY"),
    [SPECIES_SHELGON] = _("DUMMY"),
    [SPECIES_SALAMENCE] = _("DUMMY"),
    [SPECIES_BELDUM] = _("DUMMY"),
    [SPECIES_METANG] = _("DUMMY"),
    [SPECIES_METAGROSS] = _("DUMMY"),
    [SPECIES_REGIROCK] = _("DUMMY"),
    [SPECIES_REGICE] = _("DUMMY"),
    [SPECIES_REGISTEEL] = _("DUMMY"),
    [SPECIES_KYOGRE] = _("DUMMY"),
    [SPECIES_GROUDON] = _("DUMMY"),
    [SPECIES_RAYQUAZA] = _("DUMMY"),
    [SPECIES_LATIAS] = _("DUMMY"),
    [SPECIES_LATIOS] = _("DUMMY"),
    [SPECIES_JIRACHI] = _("DUMMY"),
    [SPECIES_DEOXYS] = _("DUMMY"),
    [SPECIES_CHIMECHO] = _("DUMMY"),
};
