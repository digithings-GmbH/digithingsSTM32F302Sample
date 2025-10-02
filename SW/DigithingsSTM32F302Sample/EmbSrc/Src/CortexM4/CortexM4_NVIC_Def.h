// Base Addres of NVIC = 0xE000E100
// Base Addres of NVIC_STIR = 0xE000EF00

	#define CORTEX_M4_NVIC_ISER0_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long SETENA0 : 1;
    	unsigned long SETENA1 : 1;
    	unsigned long SETENA2 : 1;
    	unsigned long SETENA3 : 1;
    	unsigned long SETENA4 : 1;
    	unsigned long SETENA5 : 1;
    	unsigned long SETENA6 : 1;
    	unsigned long SETENA7 : 1;
    	unsigned long SETENA8 : 1;
    	unsigned long SETENA9 : 1;
    	unsigned long SETENA10 : 1;
    	unsigned long SETENA11 : 1;
    	unsigned long SETENA12 : 1;
    	unsigned long SETENA13 : 1;
    	unsigned long SETENA14 : 1;
    	unsigned long SETENA15 : 1;
    	unsigned long SETENA16 : 1;
    	unsigned long SETENA17 : 1;
    	unsigned long SETENA18 : 1;
    	unsigned long SETENA19 : 1;
    	unsigned long SETENA20 : 1;
    	unsigned long SETENA21 : 1;
    	unsigned long SETENA22 : 1;
    	unsigned long SETENA23 : 1;
    	unsigned long SETENA24 : 1;
    	unsigned long SETENA25 : 1;
    	unsigned long SETENA26 : 1;
    	unsigned long SETENA27 : 1;
    	unsigned long SETENA28 : 1;
    	unsigned long SETENA29 : 1;
    	unsigned long SETENA30 : 1;
    	unsigned long SETENA31 : 1;
    } sCORTEX_M4_NVIC_ISER0;

    typedef union {
        sCORTEX_M4_NVIC_ISER0 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_ISER0;

    #define CORTEX_M4_NVIC_ISER1_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long SETENA32 : 1;
    	unsigned long SETENA33 : 1;
    	unsigned long SETENA34 : 1;
    	unsigned long SETENA35 : 1;
    	unsigned long SETENA36 : 1;
    	unsigned long SETENA37 : 1;
    	unsigned long SETENA38 : 1;
    	unsigned long SETENA39 : 1;
    	unsigned long SETENA40 : 1;
    	unsigned long SETENA41 : 1;
    	unsigned long SETENA42 : 1;
    	unsigned long SETENA43 : 1;
    	unsigned long SETENA44 : 1;
    	unsigned long SETENA45 : 1;
    	unsigned long SETENA46 : 1;
    	unsigned long SETENA47 : 1;
    	unsigned long SETENA48 : 1;
    	unsigned long SETENA49 : 1;
    	unsigned long SETENA50 : 1;
    	unsigned long SETENA51 : 1;
    	unsigned long SETENA52 : 1;
    	unsigned long SETENA53 : 1;
    	unsigned long SETENA54 : 1;
    	unsigned long SETENA55 : 1;
    	unsigned long SETENA56 : 1;
    	unsigned long SETENA57 : 1;
    	unsigned long SETENA58 : 1;
    	unsigned long SETENA59 : 1;
    	unsigned long SETENA60 : 1;
    	unsigned long SETENA61 : 1;
    	unsigned long SETENA62 : 1;
    	unsigned long SETENA63 : 1;
    } sCORTEX_M4_NVIC_ISER1;

    typedef union {
        sCORTEX_M4_NVIC_ISER1 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_ISER1;

    #define CORTEX_M4_NVIC_ISER2_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long SETENA64 : 1;
        unsigned long SETENA65 : 1;
        unsigned long SETENA66 : 1;
        unsigned long SETENA67 : 1;
        unsigned long SETENA68 : 1;
        unsigned long SETENA69 : 1;
        unsigned long SETENA70 : 1;
        unsigned long SETENA71 : 1;
        unsigned long SETENA72 : 1;
        unsigned long SETENA73 : 1;
        unsigned long SETENA74 : 1;
        unsigned long SETENA75 : 1;
        unsigned long SETENA76 : 1;
        unsigned long SETENA77 : 1;
        unsigned long SETENA78 : 1;
        unsigned long SETENA79 : 1;
        unsigned long SETENA80 : 1;
    	unsigned long SETENA81 : 1;
        unsigned long SETENA82 : 1;
        unsigned long SETENA83 : 1;
        unsigned long SETENA84 : 1;
        unsigned long SETENA85 : 1;
        unsigned long SETENA86 : 1;
        unsigned long SETENA87 : 1;
        unsigned long SETENA88 : 1;
        unsigned long SETENA89 : 1;
        unsigned long SETENA90 : 1;
        unsigned long SETENA91 : 1;
        unsigned long SETENA92 : 1;
        unsigned long SETENA93 : 1;
        unsigned long SETENA94 : 1;
        unsigned long SETENA95 : 1;
    } sCORTEX_M4_NVIC_ISER2;

    typedef union {
        sCORTEX_M4_NVIC_ISER2 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_ISER2;

    #define CORTEX_M4_NVIC_ISER3_RESET_VALUE 0x00000000
    typedef struct {
        unsigned long SETENA96 : 1;
        unsigned long SETENA97 : 1;
    	unsigned long SETENA98 : 1;
        unsigned long SETENA99 : 1;
        unsigned long SETENA100 : 1;
        unsigned long SETENA101 : 1;
        unsigned long SETENA102 : 1;
        unsigned long SETENA103 : 1;
        unsigned long SETENA104 : 1;
        unsigned long SETENA105 : 1;
        unsigned long SETENA106 : 1;
        unsigned long SETENA107 : 1;
        unsigned long SETENA108 : 1;
        unsigned long SETENA109 : 1;
        unsigned long SETENA110 : 1;
        unsigned long SETENA111 : 1;
        unsigned long SETENA112 : 1;
        unsigned long SETENA113 : 1;
        unsigned long SETENA114 : 1;
    	unsigned long SETENA115 : 1;
        unsigned long SETENA116 : 1;
        unsigned long SETENA117 : 1;
        unsigned long SETENA118 : 1;
        unsigned long SETENA119 : 1;
        unsigned long SETENA120 : 1;
        unsigned long SETENA121 : 1;
        unsigned long SETENA122 : 1;
        unsigned long SETENA123 : 1;
        unsigned long SETENA124 : 1;
        unsigned long SETENA125 : 1;
        unsigned long SETENA126 : 1;
        unsigned long SETENA127 : 1;
    } sCORTEX_M4_NVIC_ISER3;

    typedef union {
        sCORTEX_M4_NVIC_ISER3 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_ISER3;

    #define CORTEX_M4_NVIC_ISE4_RESET_VALUE 0x00000000
    typedef struct {
        unsigned long SETENA128 : 1;
        unsigned long SETENA129 : 1;
        unsigned long SETENA130 : 1;
        unsigned long SETENA131 : 1;
    	unsigned long SETENA132 : 1;
        unsigned long SETENA133 : 1;
        unsigned long SETENA134 : 1;
        unsigned long SETENA135 : 1;
        unsigned long SETENA136 : 1;
        unsigned long SETENA137 : 1;
        unsigned long SETENA138 : 1;
        unsigned long SETENA139 : 1;
        unsigned long SETENA140 : 1;
        unsigned long SETENA141 : 1;
        unsigned long SETENA142 : 1;
        unsigned long SETENA143 : 1;
        unsigned long SETENA144 : 1;
        unsigned long SETENA145 : 1;
        unsigned long SETENA146 : 1;
        unsigned long SETENA147 : 1;
        unsigned long SETENA148 : 1;
    	unsigned long SETENA149 : 1;
        unsigned long SETENA150 : 1;
        unsigned long SETENA151 : 1;
        unsigned long SETENA152 : 1;
        unsigned long SETENA153 : 1;
        unsigned long SETENA154 : 1;
        unsigned long SETENA155 : 1;
        unsigned long SETENA156 : 1;
        unsigned long SETENA157 : 1;
        unsigned long SETENA158 : 1;
        unsigned long SETENA159 : 1;
    } sCORTEX_M4_NVIC_ISER4;

    typedef union {
        sCORTEX_M4_NVIC_ISER4 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_ISER4;

    #define CORTEX_M4_NVIC_ISER5_RESET_VALUE 0x00000000
    typedef struct {
        unsigned long SETENA160 : 1;
        unsigned long SETENA161 : 1;
        unsigned long SETENA162 : 1;
        unsigned long SETENA163 : 1;
        unsigned long SETENA164 : 1;
        unsigned long SETENA165 : 1;
    	unsigned long SETENA166 : 1;
        unsigned long SETENA167 : 1;
        unsigned long SETENA168 : 1;
        unsigned long SETENA169 : 1;
        unsigned long SETENA170 : 1;
        unsigned long SETENA171 : 1;
        unsigned long SETENA172 : 1;
        unsigned long SETENA173 : 1;
        unsigned long SETENA174 : 1;
        unsigned long SETENA175 : 1;
        unsigned long SETENA176 : 1;
        unsigned long SETENA177 : 1;
        unsigned long SETENA178 : 1;
        unsigned long SETENA179 : 1;
        unsigned long SETENA180 : 1;
        unsigned long SETENA181 : 1;
        unsigned long SETENA182 : 1;
    	unsigned long SETENA183 : 1;
        unsigned long SETENA184 : 1;
        unsigned long SETENA185 : 1;
        unsigned long SETENA186 : 1;
        unsigned long SETENA187 : 1;
        unsigned long SETENA188 : 1;
        unsigned long SETENA189 : 1;
        unsigned long SETENA190 : 1;
        unsigned long SETENA191 : 1;
    } sCORTEX_M4_NVIC_ISER5;

    typedef union {
        sCORTEX_M4_NVIC_ISER5 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_ISER5;

    #define CORTEX_M4_NVIC_ISER6_RESET_VALUE 0x00000000
    typedef struct {
        unsigned long SETENA192 : 1;
        unsigned long SETENA193 : 1;
        unsigned long SETENA194 : 1;
        unsigned long SETENA195 : 1;
        unsigned long SETENA196 : 1;
        unsigned long SETENA197 : 1;
        unsigned long SETENA198 : 1;
        unsigned long SETENA199 : 1;
    	unsigned long SETENA200 : 1;
        unsigned long SETENA201 : 1;
        unsigned long SETENA202 : 1;
        unsigned long SETENA203 : 1;
        unsigned long SETENA204 : 1;
        unsigned long SETENA205 : 1;
        unsigned long SETENA206 : 1;
        unsigned long SETENA207 : 1;
        unsigned long SETENA208 : 1;
        unsigned long SETENA209 : 1;
        unsigned long SETENA210 : 1;
        unsigned long SETENA211 : 1;
        unsigned long SETENA212 : 1;
        unsigned long SETENA213 : 1;
        unsigned long SETENA214 : 1;
        unsigned long SETENA215 : 1;
        unsigned long SETENA216 : 1;
    	unsigned long SETENA217 : 1;
        unsigned long SETENA218 : 1;
        unsigned long SETENA219 : 1;
        unsigned long SETENA220 : 1;
        unsigned long SETENA221 : 1;
        unsigned long SETENA222 : 1;
        unsigned long SETENA223 : 1;
    } sCORTEX_M4_NVIC_ISER6;

    typedef union {
        sCORTEX_M4_NVIC_ISER6 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_ISER6;

    #define CORTEX_M4_NVIC_ISER7_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long SETENA224 : 1;
        unsigned long SETENA225 : 1;
        unsigned long SETENA226 : 1;
        unsigned long SETENA227 : 1;
        unsigned long SETENA228 : 1;
        unsigned long SETENA229 : 1;
        unsigned long SETENA230 : 1;
        unsigned long SETENA231 : 1;
        unsigned long SETENA232 : 1;
        unsigned long SETENA233 : 1;
        unsigned long SETENA234 : 1;
        unsigned long SETENA235 : 1;
        unsigned long SETENA236 : 1;
        unsigned long SETENA237 : 1;
        unsigned long SETENA238 : 1;
        unsigned long SETENA239 : 1;
        unsigned long Res0      : 16;
    } sCORTEX_M4_NVIC_ISER7;

    typedef union {
        sCORTEX_M4_NVIC_ISER7 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_ISER7;

    #define CORTEX_M4_NVIC_ICER0_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long CLRENA0 : 1;
    	unsigned long CLRENA1 : 1;
    	unsigned long CLRENA2 : 1;
    	unsigned long CLRENA3 : 1;
    	unsigned long CLRENA4 : 1;
    	unsigned long CLRENA5 : 1;
    	unsigned long CLRENA6 : 1;
    	unsigned long CLRENA7 : 1;
    	unsigned long CLRENA8 : 1;
    	unsigned long CLRENA9 : 1;
    	unsigned long CLRENA10 : 1;
    	unsigned long CLRENA11 : 1;
    	unsigned long CLRENA12 : 1;
    	unsigned long CLRENA13 : 1;
    	unsigned long CLRENA14 : 1;
    	unsigned long CLRENA15 : 1;
    	unsigned long CLRENA16 : 1;
    	unsigned long CLRENA17 : 1;
    	unsigned long CLRENA18 : 1;
    	unsigned long CLRENA19 : 1;
    	unsigned long CLRENA20 : 1;
    	unsigned long CLRENA21 : 1;
    	unsigned long CLRENA22 : 1;
    	unsigned long CLRENA23 : 1;
    	unsigned long CLRENA24 : 1;
    	unsigned long CLRENA25 : 1;
    	unsigned long CLRENA26 : 1;
    	unsigned long CLRENA27 : 1;
    	unsigned long CLRENA28 : 1;
    	unsigned long CLRENA29 : 1;
    	unsigned long CLRENA30 : 1;
    	unsigned long CLRENA31 : 1;
    } sCORTEX_M4_NVIC_ICER0;

    typedef union {
        sCORTEX_M4_NVIC_ICER0 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_ICER0;

    #define CORTEX_M4_NVIC_ICER1_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long CLRENA32 : 1;
    	unsigned long CLRENA33 : 1;
    	unsigned long CLRENA34 : 1;
    	unsigned long CLRENA35 : 1;
    	unsigned long CLRENA36 : 1;
    	unsigned long CLRENA37 : 1;
    	unsigned long CLRENA38 : 1;
    	unsigned long CLRENA39 : 1;
    	unsigned long CLRENA40 : 1;
    	unsigned long CLRENA41 : 1;
    	unsigned long CLRENA42 : 1;
    	unsigned long CLRENA43 : 1;
    	unsigned long CLRENA44 : 1;
    	unsigned long CLRENA45 : 1;
    	unsigned long CLRENA46 : 1;
    	unsigned long CLRENA47 : 1;
    	unsigned long CLRENA48 : 1;
    	unsigned long CLRENA49 : 1;
    	unsigned long CLRENA50 : 1;
    	unsigned long CLRENA51 : 1;
    	unsigned long CLRENA52 : 1;
    	unsigned long CLRENA53 : 1;
    	unsigned long CLRENA54 : 1;
    	unsigned long CLRENA55 : 1;
    	unsigned long CLRENA56 : 1;
    	unsigned long CLRENA57 : 1;
    	unsigned long CLRENA58 : 1;
    	unsigned long CLRENA59 : 1;
    	unsigned long CLRENA60 : 1;
    	unsigned long CLRENA61 : 1;
    	unsigned long CLRENA62 : 1;
    	unsigned long CLRENA63 : 1;
    } sCORTEX_M4_NVIC_ICER1;

    typedef union {
        sCORTEX_M4_NVIC_ICER1 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_ICER1;

    #define CORTEX_M4_NVIC_ICER2_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long CLRENA64 : 1;
    	unsigned long CLRENA65 : 1;
    	unsigned long CLRENA66 : 1;
    	unsigned long CLRENA67 : 1;
    	unsigned long CLRENA68 : 1;
    	unsigned long CLRENA69 : 1;
    	unsigned long CLRENA70 : 1;
    	unsigned long CLRENA71 : 1;
    	unsigned long CLRENA72 : 1;
    	unsigned long CLRENA73 : 1;
    	unsigned long CLRENA74 : 1;
    	unsigned long CLRENA75 : 1;
    	unsigned long CLRENA76 : 1;
    	unsigned long CLRENA77 : 1;
    	unsigned long CLRENA78 : 1;
    	unsigned long CLRENA79 : 1;
    	unsigned long CLRENA80 : 1;
    	unsigned long CLRENA81 : 1;
    	unsigned long CLRENA82 : 1;
    	unsigned long CLRENA83 : 1;
    	unsigned long CLRENA84 : 1;
    	unsigned long CLRENA85 : 1;
    	unsigned long CLRENA86 : 1;
    	unsigned long CLRENA87 : 1;
    	unsigned long CLRENA88 : 1;
    	unsigned long CLRENA89 : 1;
    	unsigned long CLRENA90 : 1;
    	unsigned long CLRENA91 : 1;
    	unsigned long CLRENA92 : 1;
    	unsigned long CLRENA93 : 1;
    	unsigned long CLRENA94 : 1;
    	unsigned long CLRENA95 : 1;
    } sCORTEX_M4_NVIC_ICER2;

    typedef union {
        sCORTEX_M4_NVIC_ICER2 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_ICER2;

    #define CORTEX_M4_NVIC_ICER3_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long CLRENA96 : 1;
    	unsigned long CLRENA97 : 1;
    	unsigned long CLRENA98 : 1;
    	unsigned long CLRENA99 : 1;
    	unsigned long CLRENA100 : 1;
    	unsigned long CLRENA101 : 1;
    	unsigned long CLRENA102 : 1;
    	unsigned long CLRENA103 : 1;
    	unsigned long CLRENA104 : 1;
    	unsigned long CLRENA105 : 1;
    	unsigned long CLRENA106 : 1;
    	unsigned long CLRENA107 : 1;
    	unsigned long CLRENA108 : 1;
    	unsigned long CLRENA109 : 1;
    	unsigned long CLRENA110 : 1;
    	unsigned long CLRENA111 : 1;
    	unsigned long CLRENA112 : 1;
    	unsigned long CLRENA113 : 1;
    	unsigned long CLRENA114 : 1;
    	unsigned long CLRENA115 : 1;
    	unsigned long CLRENA116 : 1;
    	unsigned long CLRENA117 : 1;
    	unsigned long CLRENA118 : 1;
    	unsigned long CLRENA119 : 1;
    	unsigned long CLRENA120 : 1;
    	unsigned long CLRENA121 : 1;
    	unsigned long CLRENA122 : 1;
    	unsigned long CLRENA123 : 1;
    	unsigned long CLRENA124 : 1;
    	unsigned long CLRENA125 : 1;
    	unsigned long CLRENA126 : 1;
    	unsigned long CLRENA127 : 1;
    } sCORTEX_M4_NVIC_ICER3;

    typedef union {
        sCORTEX_M4_NVIC_ICER3 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_ICER3;

    #define CORTEX_M4_NVIC_ICER4_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long CLRENA128 : 1;
    	unsigned long CLRENA129 : 1;
    	unsigned long CLRENA130 : 1;
    	unsigned long CLRENA131 : 1;
    	unsigned long CLRENA132 : 1;
    	unsigned long CLRENA133 : 1;
    	unsigned long CLRENA134 : 1;
    	unsigned long CLRENA135 : 1;
    	unsigned long CLRENA136 : 1;
    	unsigned long CLRENA137 : 1;
    	unsigned long CLRENA138 : 1;
    	unsigned long CLRENA139 : 1;
    	unsigned long CLRENA140 : 1;
    	unsigned long CLRENA141 : 1;
    	unsigned long CLRENA142 : 1;
    	unsigned long CLRENA143 : 1;
    	unsigned long CLRENA144 : 1;
    	unsigned long CLRENA145 : 1;
    	unsigned long CLRENA146 : 1;
    	unsigned long CLRENA147 : 1;
    	unsigned long CLRENA148 : 1;
    	unsigned long CLRENA149 : 1;
    	unsigned long CLRENA150 : 1;
    	unsigned long CLRENA151 : 1;
    	unsigned long CLRENA152 : 1;
    	unsigned long CLRENA153 : 1;
    	unsigned long CLRENA154 : 1;
    	unsigned long CLRENA155 : 1;
    	unsigned long CLRENA156 : 1;
    	unsigned long CLRENA157 : 1;
    	unsigned long CLRENA158 : 1;
    	unsigned long CLRENA159 : 1;
    } sCORTEX_M4_NVIC_ICER4;

    typedef union {
        sCORTEX_M4_NVIC_ICER4 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_ICER4;

    #define CORTEX_M4_NVIC_ICER5_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long CLRENA160 : 1;
    	unsigned long CLRENA161 : 1;
    	unsigned long CLRENA162 : 1;
    	unsigned long CLRENA163 : 1;
    	unsigned long CLRENA164 : 1;
    	unsigned long CLRENA165 : 1;
    	unsigned long CLRENA166 : 1;
    	unsigned long CLRENA167 : 1;
    	unsigned long CLRENA168 : 1;
    	unsigned long CLRENA169 : 1;
    	unsigned long CLRENA170 : 1;
    	unsigned long CLRENA171 : 1;
    	unsigned long CLRENA172 : 1;
    	unsigned long CLRENA173 : 1;
    	unsigned long CLRENA174 : 1;
    	unsigned long CLRENA175 : 1;
    	unsigned long CLRENA176 : 1;
    	unsigned long CLRENA177 : 1;
    	unsigned long CLRENA178 : 1;
    	unsigned long CLRENA179 : 1;
    	unsigned long CLRENA180 : 1;
    	unsigned long CLRENA181 : 1;
    	unsigned long CLRENA182 : 1;
    	unsigned long CLRENA183 : 1;
    	unsigned long CLRENA184 : 1;
    	unsigned long CLRENA185 : 1;
    	unsigned long CLRENA186 : 1;
    	unsigned long CLRENA187 : 1;
    	unsigned long CLRENA188 : 1;
    	unsigned long CLRENA189 : 1;
    	unsigned long CLRENA190 : 1;
    	unsigned long CLRENA191 : 1;
    } sCORTEX_M4_NVIC_ICER5;

    typedef union {
        sCORTEX_M4_NVIC_ICER5 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_ICER5;

    #define CORTEX_M4_NVIC_ICER6_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long CLRENA192 : 1;
    	unsigned long CLRENA193 : 1;
    	unsigned long CLRENA194 : 1;
    	unsigned long CLRENA195 : 1;
    	unsigned long CLRENA196 : 1;
    	unsigned long CLRENA197 : 1;
    	unsigned long CLRENA198 : 1;
    	unsigned long CLRENA199 : 1;
    	unsigned long CLRENA200 : 1;
    	unsigned long CLRENA201 : 1;
    	unsigned long CLRENA202 : 1;
    	unsigned long CLRENA203 : 1;
    	unsigned long CLRENA204 : 1;
    	unsigned long CLRENA205 : 1;
    	unsigned long CLRENA206 : 1;
    	unsigned long CLRENA207 : 1;
    	unsigned long CLRENA208 : 1;
    	unsigned long CLRENA209 : 1;
    	unsigned long CLRENA210 : 1;
    	unsigned long CLRENA211 : 1;
    	unsigned long CLRENA212 : 1;
    	unsigned long CLRENA213 : 1;
    	unsigned long CLRENA214 : 1;
    	unsigned long CLRENA215 : 1;
    	unsigned long CLRENA216 : 1;
    	unsigned long CLRENA217 : 1;
    	unsigned long CLRENA218 : 1;
    	unsigned long CLRENA219 : 1;
    	unsigned long CLRENA220 : 1;
    	unsigned long CLRENA221 : 1;
    	unsigned long CLRENA222 : 1;
    	unsigned long CLRENA223 : 1;
    } sCORTEX_M4_NVIC_ICER6;

    typedef union {
        sCORTEX_M4_NVIC_ICER6 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_ICER6;

    #define CORTEX_M4_NVIC_ICER7_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long CLRENA224 : 1;
        unsigned long CLRENA225 : 1;
        unsigned long CLRENA226 : 1;
        unsigned long CLRENA227 : 1;
        unsigned long CLRENA228 : 1;
        unsigned long CLRENA229 : 1;
        unsigned long CLRENA230 : 1;
        unsigned long CLRENA231 : 1;
        unsigned long CLRENA232 : 1;
        unsigned long CLRENA233 : 1;
        unsigned long CLRENA234 : 1;
        unsigned long CLRENA235 : 1;
        unsigned long CLRENA236 : 1;
        unsigned long CLRENA237 : 1;
        unsigned long CLRENA238 : 1;
        unsigned long CLRENA239 : 1;
        unsigned long Res0      : 16;
    } sCORTEX_M4_NVIC_ICER7;

    typedef union {
        sCORTEX_M4_NVIC_ICER7 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_ICER7;

    #define CORTEX_M4_NVIC_ISPR0_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long SETPEND0 : 1;
    	unsigned long SETPEND1 : 1;
    	unsigned long SETPEND2 : 1;
    	unsigned long SETPEND3 : 1;
    	unsigned long SETPEND4 : 1;
    	unsigned long SETPEND5 : 1;
    	unsigned long SETPEND6 : 1;
    	unsigned long SETPEND7 : 1;
    	unsigned long SETPEND8 : 1;
    	unsigned long SETPEND9 : 1;
    	unsigned long SETPEND10 : 1;
    	unsigned long SETPEND11 : 1;
    	unsigned long SETPEND12 : 1;
    	unsigned long SETPEND13 : 1;
    	unsigned long SETPEND14 : 1;
    	unsigned long SETPEND15 : 1;
    	unsigned long SETPEND16 : 1;
    	unsigned long SETPEND17 : 1;
    	unsigned long SETPEND18 : 1;
    	unsigned long SETPEND19 : 1;
    	unsigned long SETPEND20 : 1;
    	unsigned long SETPEND21 : 1;
    	unsigned long SETPEND22 : 1;
    	unsigned long SETPEND23 : 1;
    	unsigned long SETPEND24 : 1;
    	unsigned long SETPEND25 : 1;
    	unsigned long SETPEND26 : 1;
    	unsigned long SETPEND27 : 1;
    	unsigned long SETPEND28 : 1;
    	unsigned long SETPEND29 : 1;
    	unsigned long SETPEND30 : 1;
    	unsigned long SETPEND31 : 1;
    } sCORTEX_M4_NVIC_ISPR0;

    typedef union {
        sCORTEX_M4_NVIC_ISPR0 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_ISPR0;

    #define CORTEX_M4_NVIC_ISPR1_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long SETPEND32 : 1;
    	unsigned long SETPEND33 : 1;
    	unsigned long SETPEND34 : 1;
    	unsigned long SETPEND35 : 1;
    	unsigned long SETPEND36 : 1;
    	unsigned long SETPEND37 : 1;
    	unsigned long SETPEND38 : 1;
    	unsigned long SETPEND39 : 1;
    	unsigned long SETPEND40 : 1;
    	unsigned long SETPEND41 : 1;
    	unsigned long SETPEND42 : 1;
    	unsigned long SETPEND43 : 1;
    	unsigned long SETPEND44 : 1;
    	unsigned long SETPEND45 : 1;
    	unsigned long SETPEND46 : 1;
    	unsigned long SETPEND47 : 1;
    	unsigned long SETPEND48 : 1;
    	unsigned long SETPEND49 : 1;
    	unsigned long SETPEND50 : 1;
    	unsigned long SETPEND51 : 1;
    	unsigned long SETPEND52 : 1;
    	unsigned long SETPEND53 : 1;
    	unsigned long SETPEND54 : 1;
    	unsigned long SETPEND55 : 1;
    	unsigned long SETPEND56 : 1;
    	unsigned long SETPEND57 : 1;
    	unsigned long SETPEND58 : 1;
    	unsigned long SETPEND59 : 1;
    	unsigned long SETPEND60 : 1;
    	unsigned long SETPEND61 : 1;
    	unsigned long SETPEND62 : 1;
    	unsigned long SETPEND63 : 1;
    } sCORTEX_M4_NVIC_ISPR1;

    typedef union {
        sCORTEX_M4_NVIC_ISPR1 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_ISPR1;

    #define CORTEX_M4_NVIC_ISPR2_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long SETPEND64 : 1;
    	unsigned long SETPEND65 : 1;
    	unsigned long SETPEND66 : 1;
    	unsigned long SETPEND67 : 1;
    	unsigned long SETPEND68 : 1;
    	unsigned long SETPEND69 : 1;
    	unsigned long SETPEND70 : 1;
    	unsigned long SETPEND71 : 1;
    	unsigned long SETPEND72 : 1;
    	unsigned long SETPEND73 : 1;
    	unsigned long SETPEND74 : 1;
    	unsigned long SETPEND75 : 1;
    	unsigned long SETPEND76 : 1;
    	unsigned long SETPEND77 : 1;
    	unsigned long SETPEND78 : 1;
    	unsigned long SETPEND79 : 1;
    	unsigned long SETPEND80 : 1;
    	unsigned long SETPEND81 : 1;
    	unsigned long SETPEND82 : 1;
    	unsigned long SETPEND83 : 1;
    	unsigned long SETPEND84 : 1;
    	unsigned long SETPEND85: 1;
    	unsigned long SETPEND86 : 1;
    	unsigned long SETPEND87 : 1;
    	unsigned long SETPEND88 : 1;
    	unsigned long SETPEND89 : 1;
    	unsigned long SETPEND90 : 1;
    	unsigned long SETPEND91 : 1;
    	unsigned long SETPEND92 : 1;
    	unsigned long SETPEND93 : 1;
    	unsigned long SETPEND94 : 1;
    	unsigned long SETPEND95 : 1;
    } sCORTEX_M4_NVIC_ISPR2;

    typedef union {
        sCORTEX_M4_NVIC_ISPR2 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_ISPR2;

    #define CORTEX_M4_NVIC_ISPR3_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long SETPEND96 : 1;
    	unsigned long SETPEND97 : 1;
    	unsigned long SETPEND98 : 1;
    	unsigned long SETPEND99 : 1;
    	unsigned long SETPEND100 : 1;
    	unsigned long SETPEND101 : 1;
    	unsigned long SETPEND102 : 1;
    	unsigned long SETPEND103 : 1;
    	unsigned long SETPEND104 : 1;
    	unsigned long SETPEND105 : 1;
    	unsigned long SETPEND106 : 1;
    	unsigned long SETPEND107 : 1;
    	unsigned long SETPEND108 : 1;
    	unsigned long SETPEND109 : 1;
    	unsigned long SETPEND110 : 1;
    	unsigned long SETPEND111 : 1;
    	unsigned long SETPEND112 : 1;
    	unsigned long SETPEND113 : 1;
    	unsigned long SETPEND114 : 1;
    	unsigned long SETPEND115 : 1;
    	unsigned long SETPEND116 : 1;
    	unsigned long SETPEND117 : 1;
    	unsigned long SETPEND118 : 1;
    	unsigned long SETPEND119 : 1;
    	unsigned long SETPEND120 : 1;
    	unsigned long SETPEND121 : 1;
    	unsigned long SETPEND122 : 1;
    	unsigned long SETPEND123 : 1;
    	unsigned long SETPEND124 : 1;
    	unsigned long SETPEND125 : 1;
    	unsigned long SETPEND126 : 1;
    	unsigned long SETPEND127 : 1;
    } sCORTEX_M4_NVIC_ISPR3;

    typedef union {
        sCORTEX_M4_NVIC_ISPR3 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_ISPR3;

    #define CORTEX_M4_NVIC_ISPR4_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long SETPEND128 : 1;
    	unsigned long SETPEND129 : 1;
    	unsigned long SETPEND130 : 1;
    	unsigned long SETPEND131 : 1;
    	unsigned long SETPEND132 : 1;
    	unsigned long SETPEND133 : 1;
    	unsigned long SETPEND134 : 1;
    	unsigned long SETPEND135 : 1;
    	unsigned long SETPEND136 : 1;
    	unsigned long SETPEND137 : 1;
    	unsigned long SETPEND138 : 1;
    	unsigned long SETPEND139 : 1;
    	unsigned long SETPEND140 : 1;
    	unsigned long SETPEND141 : 1;
    	unsigned long SETPEND142 : 1;
    	unsigned long SETPEND143 : 1;
    	unsigned long SETPEND144 : 1;
    	unsigned long SETPEND145 : 1;
    	unsigned long SETPEND146 : 1;
    	unsigned long SETPEND147 : 1;
    	unsigned long SETPEND148 : 1;
    	unsigned long SETPEND149 : 1;
    	unsigned long SETPEND150 : 1;
    	unsigned long SETPEND151 : 1;
    	unsigned long SETPEND152 : 1;
    	unsigned long SETPEND153 : 1;
    	unsigned long SETPEND154 : 1;
    	unsigned long SETPEND155 : 1;
    	unsigned long SETPEND156 : 1;
    	unsigned long SETPEND157 : 1;
    	unsigned long SETPEND158 : 1;
    	unsigned long SETPEND159 : 1;
    } sCORTEX_M4_NVIC_ISPR4;

    typedef union {
        sCORTEX_M4_NVIC_ISPR4 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_ISPR4;

    #define CORTEX_M4_NVIC_ISPR5_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long SETPEND160 : 1;
    	unsigned long SETPEND161 : 1;
    	unsigned long SETPEND162 : 1;
    	unsigned long SETPEND163 : 1;
    	unsigned long SETPEND164 : 1;
    	unsigned long SETPEND165 : 1;
    	unsigned long SETPEND166 : 1;
    	unsigned long SETPEND167 : 1;
    	unsigned long SETPEND168 : 1;
    	unsigned long SETPEND169 : 1;
    	unsigned long SETPEND170 : 1;
    	unsigned long SETPEND171 : 1;
    	unsigned long SETPEND172 : 1;
    	unsigned long SETPEND173 : 1;
    	unsigned long SETPEND174 : 1;
    	unsigned long SETPEND175 : 1;
    	unsigned long SETPEND176 : 1;
    	unsigned long SETPEND177 : 1;
    	unsigned long SETPEND178 : 1;
    	unsigned long SETPEND179 : 1;
    	unsigned long SETPEND180 : 1;
    	unsigned long SETPEND181 : 1;
    	unsigned long SETPEND182 : 1;
    	unsigned long SETPEND183 : 1;
    	unsigned long SETPEND184 : 1;
    	unsigned long SETPEND185 : 1;
    	unsigned long SETPEND186 : 1;
    	unsigned long SETPEND187 : 1;
    	unsigned long SETPEND188 : 1;
    	unsigned long SETPEND189 : 1;
    	unsigned long SETPEND190 : 1;
    	unsigned long SETPEND191 : 1;
    } sCORTEX_M4_NVIC_ISPR5;

    typedef union {
        sCORTEX_M4_NVIC_ISPR5 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_ISPR5;

    #define CORTEX_M4_NVIC_ISPR6_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long SETPEND192 : 1;
    	unsigned long SETPEND193 : 1;
    	unsigned long SETPEND194 : 1;
    	unsigned long SETPEND195 : 1;
    	unsigned long SETPEND196 : 1;
    	unsigned long SETPEND197 : 1;
    	unsigned long SETPEND198 : 1;
    	unsigned long SETPEND199 : 1;
    	unsigned long SETPEND200 : 1;
    	unsigned long SETPEND201 : 1;
    	unsigned long SETPEND202 : 1;
    	unsigned long SETPEND203 : 1;
    	unsigned long SETPEND204 : 1;
    	unsigned long SETPEND205 : 1;
    	unsigned long SETPEND206 : 1;
    	unsigned long SETPEND207 : 1;
    	unsigned long SETPEND208 : 1;
    	unsigned long SETPEND209 : 1;
    	unsigned long SETPEND210 : 1;
    	unsigned long SETPEND211 : 1;
    	unsigned long SETPEND212 : 1;
    	unsigned long SETPEND213 : 1;
    	unsigned long SETPEND214 : 1;
    	unsigned long SETPEND215 : 1;
    	unsigned long SETPEND216 : 1;
    	unsigned long SETPEND217 : 1;
    	unsigned long SETPEND218 : 1;
    	unsigned long SETPEND219 : 1;
    	unsigned long SETPEND220 : 1;
    	unsigned long SETPEND221 : 1;
    	unsigned long SETPEND222 : 1;
    	unsigned long SETPEND223 : 1;
    } sCORTEX_M4_NVIC_ISPR6;

    typedef union {
        sCORTEX_M4_NVIC_ISPR6 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_ISPR6;

    #define CORTEX_M4_NVIC_ISPR7_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long SETPEND224 : 1;
        unsigned long SETPEND225 : 1;
        unsigned long SETPEND226 : 1;
        unsigned long SETPEND227 : 1;
        unsigned long SETPEND228 : 1;
        unsigned long SETPEND229 : 1;
        unsigned long SETPEND230 : 1;
        unsigned long SETPEND231 : 1;
        unsigned long SETPEND232 : 1;
        unsigned long SETPEND233 : 1;
        unsigned long SETPEND234 : 1;
        unsigned long SETPEND235 : 1;
        unsigned long SETPEND236 : 1;
        unsigned long SETPEND237 : 1;
        unsigned long SETPEND238 : 1;
        unsigned long SETPEND239 : 1;
    	unsigned long Res0       : 16;
    } sCORTEX_M4_NVIC_ISPR7;

    typedef union {
        sCORTEX_M4_NVIC_ISPR7 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_ISPR7;

    #define CORTEX_M4_NVIC_ICPR0_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long CLRPEND0 : 1;
    	unsigned long CLRPEND1 : 1;
    	unsigned long CLRPEND2 : 1;
    	unsigned long CLRPEND3 : 1;
    	unsigned long CLRPEND4 : 1;
    	unsigned long CLRPEND5 : 1;
    	unsigned long CLRPEND6 : 1;
    	unsigned long CLRPEND7 : 1;
    	unsigned long CLRPEND8 : 1;
    	unsigned long CLRPEND9 : 1;
    	unsigned long CLRPEND10 : 1;
    	unsigned long CLRPEND11 : 1;
    	unsigned long CLRPEND12 : 1;
    	unsigned long CLRPEND13 : 1;
    	unsigned long CLRPEND14 : 1;
    	unsigned long CLRPEND15 : 1;
    	unsigned long CLRPEND16 : 1;
    	unsigned long CLRPEND17 : 1;
    	unsigned long CLRPEND18 : 1;
    	unsigned long CLRPEND19 : 1;
    	unsigned long CLRPEND20 : 1;
    	unsigned long CLRPEND21 : 1;
    	unsigned long CLRPEND22 : 1;
    	unsigned long CLRPEND23 : 1;
    	unsigned long CLRPEND24 : 1;
    	unsigned long CLRPEND25 : 1;
    	unsigned long CLRPEND26 : 1;
    	unsigned long CLRPEND27 : 1;
    	unsigned long CLRPEND28 : 1;
    	unsigned long CLRPEND29 : 1;
    	unsigned long CLRPEND30 : 1;
    	unsigned long CLRPEND31 : 1;
    } sCORTEX_M4_NVIC_ICPR0;

    typedef union {
        sCORTEX_M4_NVIC_ICPR0 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_ICPR0;

    #define CORTEX_M4_NVIC_ICPR1_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long CLRPEND32 : 1;
    	unsigned long CLRPEND33 : 1;
    	unsigned long CLRPEND34 : 1;
    	unsigned long CLRPEND35 : 1;
    	unsigned long CLRPEND36 : 1;
    	unsigned long CLRPEND37 : 1;
    	unsigned long CLRPEND38 : 1;
    	unsigned long CLRPEND39 : 1;
    	unsigned long CLRPEND40 : 1;
    	unsigned long CLRPEND41 : 1;
    	unsigned long CLRPEND42 : 1;
    	unsigned long CLRPEND43 : 1;
    	unsigned long CLRPEND44 : 1;
    	unsigned long CLRPEND45 : 1;
    	unsigned long CLRPEND46 : 1;
    	unsigned long CLRPEND47 : 1;
    	unsigned long CLRPEND48 : 1;
    	unsigned long CLRPEND49 : 1;
    	unsigned long CLRPEND50 : 1;
    	unsigned long CLRPEND51 : 1;
    	unsigned long CLRPEND52 : 1;
    	unsigned long CLRPEND53 : 1;
    	unsigned long CLRPEND54 : 1;
    	unsigned long CLRPEND55 : 1;
    	unsigned long CLRPEND56 : 1;
    	unsigned long CLRPEND57 : 1;
    	unsigned long CLRPEND58 : 1;
    	unsigned long CLRPEND59 : 1;
    	unsigned long CLRPEND60 : 1;
    	unsigned long CLRPEND61 : 1;
    	unsigned long CLRPEND62 : 1;
    	unsigned long CLRPEND63 : 1;
    } sCORTEX_M4_NVIC_ICPR1;

    typedef union {
        sCORTEX_M4_NVIC_ICPR1 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_ICPR1;

    #define CORTEX_M4_NVIC_ICPR2_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long CLRPEND64 : 1;
    	unsigned long CLRPEND65 : 1;
    	unsigned long CLRPEND66 : 1;
    	unsigned long CLRPEND67 : 1;
    	unsigned long CLRPEND68 : 1;
    	unsigned long CLRPEND69 : 1;
    	unsigned long CLRPEND70 : 1;
    	unsigned long CLRPEND71 : 1;
    	unsigned long CLRPEND72 : 1;
    	unsigned long CLRPEND73 : 1;
    	unsigned long CLRPEND74 : 1;
    	unsigned long CLRPEND75 : 1;
    	unsigned long CLRPEND76 : 1;
    	unsigned long CLRPEND77 : 1;
    	unsigned long CLRPEND78 : 1;
    	unsigned long CLRPEND79 : 1;
    	unsigned long CLRPEND80 : 1;
    	unsigned long CLRPEND81 : 1;
    	unsigned long CLRPEND82 : 1;
    	unsigned long CLRPEND83 : 1;
    	unsigned long CLRPEND84 : 1;
    	unsigned long CLRPEND85 : 1;
    	unsigned long CLRPEND86 : 1;
    	unsigned long CLRPEND87 : 1;
    	unsigned long CLRPEND88 : 1;
    	unsigned long CLRPEND89 : 1;
    	unsigned long CLRPEND90 : 1;
    	unsigned long CLRPEND91 : 1;
    	unsigned long CLRPEND92 : 1;
    	unsigned long CLRPEND93 : 1;
    	unsigned long CLRPEND94 : 1;
    	unsigned long CLRPEND95 : 1;
    } sCORTEX_M4_NVIC_ICPR2;

    typedef union {
        sCORTEX_M4_NVIC_ICPR2 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_ICPR2;

    #define CORTEX_M4_NVIC_ICPR3_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long CLRPEND96 : 1;
    	unsigned long CLRPEND97 : 1;
    	unsigned long CLRPEND98 : 1;
    	unsigned long CLRPEND99 : 1;
    	unsigned long CLRPEND100 : 1;
    	unsigned long CLRPEND101 : 1;
    	unsigned long CLRPEND102 : 1;
    	unsigned long CLRPEND103 : 1;
    	unsigned long CLRPEND104 : 1;
    	unsigned long CLRPEND105 : 1;
    	unsigned long CLRPEND106 : 1;
    	unsigned long CLRPEND107 : 1;
    	unsigned long CLRPEND108 : 1;
    	unsigned long CLRPEND109 : 1;
    	unsigned long CLRPEND110 : 1;
    	unsigned long CLRPEND111 : 1;
    	unsigned long CLRPEND112 : 1;
    	unsigned long CLRPEND113 : 1;
    	unsigned long CLRPEND114 : 1;
    	unsigned long CLRPEND115 : 1;
    	unsigned long CLRPEND116 : 1;
    	unsigned long CLRPEND117 : 1;
    	unsigned long CLRPEND118 : 1;
    	unsigned long CLRPEND119 : 1;
    	unsigned long CLRPEND120 : 1;
    	unsigned long CLRPEND121 : 1;
    	unsigned long CLRPEND122 : 1;
    	unsigned long CLRPEND123 : 1;
    	unsigned long CLRPEND124 : 1;
    	unsigned long CLRPEND125 : 1;
    	unsigned long CLRPEND126 : 1;
    	unsigned long CLRPEND127 : 1;
    } sCORTEX_M4_NVIC_ICPR3;

    typedef union {
        sCORTEX_M4_NVIC_ICPR3 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_ICPR3;

    #define CORTEX_M4_NVIC_ICPR4_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long CLRPEND128 : 1;
    	unsigned long CLRPEND129 : 1;
    	unsigned long CLRPEND130 : 1;
    	unsigned long CLRPEND131 : 1;
    	unsigned long CLRPEND132 : 1;
    	unsigned long CLRPEND133 : 1;
    	unsigned long CLRPEND134 : 1;
    	unsigned long CLRPEND135 : 1;
    	unsigned long CLRPEND136 : 1;
    	unsigned long CLRPEND137 : 1;
    	unsigned long CLRPEND138 : 1;
    	unsigned long CLRPEND139 : 1;
    	unsigned long CLRPEND140 : 1;
    	unsigned long CLRPEND141 : 1;
    	unsigned long CLRPEND142 : 1;
    	unsigned long CLRPEND143 : 1;
    	unsigned long CLRPEND144 : 1;
    	unsigned long CLRPEND145 : 1;
    	unsigned long CLRPEND146 : 1;
    	unsigned long CLRPEND147 : 1;
    	unsigned long CLRPEND148 : 1;
    	unsigned long CLRPEND149 : 1;
    	unsigned long CLRPEND150 : 1;
    	unsigned long CLRPEND151 : 1;
    	unsigned long CLRPEND152 : 1;
    	unsigned long CLRPEND153 : 1;
    	unsigned long CLRPEND154 : 1;
    	unsigned long CLRPEND155 : 1;
    	unsigned long CLRPEND156 : 1;
    	unsigned long CLRPEND157 : 1;
    	unsigned long CLRPEND158 : 1;
    	unsigned long CLRPEND159 : 1;
    } sCORTEX_M4_NVIC_ICPR4;

    typedef union {
        sCORTEX_M4_NVIC_ICPR4 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_ICPR4;

    #define CORTEX_M4_NVIC_ICPR5_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long CLRPEND160 : 1;
    	unsigned long CLRPEND161 : 1;
    	unsigned long CLRPEND162 : 1;
    	unsigned long CLRPEND163 : 1;
    	unsigned long CLRPEND164 : 1;
    	unsigned long CLRPEND165 : 1;
    	unsigned long CLRPEND166 : 1;
    	unsigned long CLRPEND167 : 1;
    	unsigned long CLRPEND168 : 1;
    	unsigned long CLRPEND169 : 1;
    	unsigned long CLRPEND170 : 1;
    	unsigned long CLRPEND171 : 1;
    	unsigned long CLRPEND172 : 1;
    	unsigned long CLRPEND173 : 1;
    	unsigned long CLRPEND174 : 1;
    	unsigned long CLRPEND175 : 1;
    	unsigned long CLRPEND176 : 1;
    	unsigned long CLRPEND177 : 1;
    	unsigned long CLRPEND178 : 1;
    	unsigned long CLRPEND179 : 1;
    	unsigned long CLRPEND180 : 1;
    	unsigned long CLRPEND181 : 1;
    	unsigned long CLRPEND182 : 1;
    	unsigned long CLRPEND183 : 1;
    	unsigned long CLRPEND184 : 1;
    	unsigned long CLRPEND185 : 1;
    	unsigned long CLRPEND186 : 1;
    	unsigned long CLRPEND187 : 1;
    	unsigned long CLRPEND188 : 1;
    	unsigned long CLRPEND189 : 1;
    	unsigned long CLRPEND190 : 1;
    	unsigned long CLRPEND191 : 1;
    } sCORTEX_M4_NVIC_ICPR5;

    typedef union {
        sCORTEX_M4_NVIC_ICPR5 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_ICPR5;

    #define CORTEX_M4_NVIC_ICPR6_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long CLRPEND192 : 1;
    	unsigned long CLRPEND193 : 1;
    	unsigned long CLRPEND194 : 1;
    	unsigned long CLRPEND195 : 1;
    	unsigned long CLRPEND196 : 1;
    	unsigned long CLRPEND197 : 1;
    	unsigned long CLRPEND198 : 1;
    	unsigned long CLRPEND199 : 1;
    	unsigned long CLRPEND200 : 1;
    	unsigned long CLRPEND201 : 1;
    	unsigned long CLRPEND202 : 1;
    	unsigned long CLRPEND203 : 1;
    	unsigned long CLRPEND204 : 1;
    	unsigned long CLRPEND205 : 1;
    	unsigned long CLRPEND206 : 1;
    	unsigned long CLRPEND207 : 1;
    	unsigned long CLRPEND208 : 1;
    	unsigned long CLRPEND209 : 1;
    	unsigned long CLRPEND210 : 1;
    	unsigned long CLRPEND211 : 1;
    	unsigned long CLRPEND212 : 1;
    	unsigned long CLRPEND213 : 1;
    	unsigned long CLRPEND214 : 1;
    	unsigned long CLRPEND215 : 1;
    	unsigned long CLRPEND216 : 1;
    	unsigned long CLRPEND217 : 1;
    	unsigned long CLRPEND218 : 1;
    	unsigned long CLRPEND219 : 1;
    	unsigned long CLRPEND220 : 1;
    	unsigned long CLRPEND221 : 1;
    	unsigned long CLRPEND222 : 1;
    	unsigned long CLRPEND223 : 1;
    } sCORTEX_M4_NVIC_ICPR6;

    typedef union {
        sCORTEX_M4_NVIC_ICPR6 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_ICPR6;

    #define CORTEX_M4_NVIC_ICPR7_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long CLRPEND224 : 1;
        unsigned long CLRPEND225 : 1;
        unsigned long CLRPEND226 : 1;
        unsigned long CLRPEND227 : 1;
        unsigned long CLRPEND228 : 1;
        unsigned long CLRPEND229 : 1;
        unsigned long CLRPEND230 : 1;
        unsigned long CLRPEND231 : 1;
        unsigned long CLRPEND232 : 1;
        unsigned long CLRPEND233 : 1;
        unsigned long CLRPEND234 : 1;
        unsigned long CLRPEND235 : 1;
        unsigned long CLRPEND236 : 1;
        unsigned long CLRPEND237 : 1;
        unsigned long CLRPEND238 : 1;
        unsigned long CLRPEND239 : 1;
    	unsigned long Res0       : 16;
    } sCORTEX_M4_NVIC_ICPR7;

    typedef union {
        sCORTEX_M4_NVIC_ICPR7 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_ICPR7;

    #define CORTEX_M4_NVIC_IABR0_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long ACTIVE0 : 1;
    	unsigned long ACTIVE1 : 1;
    	unsigned long ACTIVE2 : 1;
    	unsigned long ACTIVE3 : 1;
    	unsigned long ACTIVE4 : 1;
    	unsigned long ACTIVE5 : 1;
    	unsigned long ACTIVE6 : 1;
    	unsigned long ACTIVE7 : 1;
    	unsigned long ACTIVE8 : 1;
    	unsigned long ACTIVE9 : 1;
    	unsigned long ACTIVE10 : 1;
    	unsigned long ACTIVE11 : 1;
    	unsigned long ACTIVE12 : 1;
    	unsigned long ACTIVE13 : 1;
    	unsigned long ACTIVE14 : 1;
    	unsigned long ACTIVE15 : 1;
    	unsigned long ACTIVE16 : 1;
    	unsigned long ACTIVE17 : 1;
    	unsigned long ACTIVE18 : 1;
    	unsigned long ACTIVE19 : 1;
    	unsigned long ACTIVE20 : 1;
    	unsigned long ACTIVE21 : 1;
    	unsigned long ACTIVE22 : 1;
    	unsigned long ACTIVE23 : 1;
    	unsigned long ACTIVE24 : 1;
    	unsigned long ACTIVE25 : 1;
    	unsigned long ACTIVE26 : 1;
    	unsigned long ACTIVE27 : 1;
    	unsigned long ACTIVE28 : 1;
    	unsigned long ACTIVE29 : 1;
    	unsigned long ACTIVE30 : 1;
    	unsigned long ACTIVE31 : 1;
    } sCORTEX_M4_NVIC_IABR0;

    typedef union {
        sCORTEX_M4_NVIC_IABR0 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IABR0;

    #define CORTEX_M4_NVIC_IABR1_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long ACTIVE32 : 1;
    	unsigned long ACTIVE33 : 1;
    	unsigned long ACTIVE34 : 1;
    	unsigned long ACTIVE35 : 1;
    	unsigned long ACTIVE36 : 1;
    	unsigned long ACTIVE37 : 1;
    	unsigned long ACTIVE38 : 1;
    	unsigned long ACTIVE39 : 1;
    	unsigned long ACTIVE40 : 1;
    	unsigned long ACTIVE41 : 1;
    	unsigned long ACTIVE42 : 1;
    	unsigned long ACTIVE43 : 1;
    	unsigned long ACTIVE44 : 1;
    	unsigned long ACTIVE45 : 1;
    	unsigned long ACTIVE46 : 1;
    	unsigned long ACTIVE47 : 1;
    	unsigned long ACTIVE48 : 1;
    	unsigned long ACTIVE49 : 1;
    	unsigned long ACTIVE50 : 1;
    	unsigned long ACTIVE51 : 1;
    	unsigned long ACTIVE52 : 1;
    	unsigned long ACTIVE53 : 1;
    	unsigned long ACTIVE54 : 1;
    	unsigned long ACTIVE55 : 1;
    	unsigned long ACTIVE56 : 1;
    	unsigned long ACTIVE57 : 1;
    	unsigned long ACTIVE58 : 1;
    	unsigned long ACTIVE59 : 1;
    	unsigned long ACTIVE60 : 1;
    	unsigned long ACTIVE61 : 1;
    	unsigned long ACTIVE62 : 1;
    	unsigned long ACTIVE63 : 1;
    } sCORTEX_M4_NVIC_IABR1;

    typedef union {
        sCORTEX_M4_NVIC_IABR1 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IABR1;

    #define CORTEX_M4_NVIC_IABR2_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long ACTIVE64 : 1;
    	unsigned long ACTIVE65 : 1;
    	unsigned long ACTIVE66 : 1;
    	unsigned long ACTIVE67 : 1;
    	unsigned long ACTIVE68 : 1;
    	unsigned long ACTIVE69 : 1;
    	unsigned long ACTIVE70 : 1;
    	unsigned long ACTIVE71 : 1;
    	unsigned long ACTIVE72 : 1;
    	unsigned long ACTIVE73 : 1;
    	unsigned long ACTIVE74 : 1;
    	unsigned long ACTIVE75 : 1;
    	unsigned long ACTIVE76 : 1;
    	unsigned long ACTIVE77 : 1;
    	unsigned long ACTIVE78 : 1;
    	unsigned long ACTIVE79 : 1;
    	unsigned long ACTIVE80 : 1;
    	unsigned long ACTIVE81 : 1;
    	unsigned long ACTIVE82 : 1;
    	unsigned long ACTIVE83 : 1;
    	unsigned long ACTIVE84 : 1;
    	unsigned long ACTIVE85 : 1;
    	unsigned long ACTIVE86 : 1;
    	unsigned long ACTIVE87 : 1;
    	unsigned long ACTIVE88 : 1;
    	unsigned long ACTIVE89 : 1;
    	unsigned long ACTIVE90 : 1;
    	unsigned long ACTIVE91 : 1;
    	unsigned long ACTIVE92 : 1;
    	unsigned long ACTIVE93 : 1;
    	unsigned long ACTIVE94 : 1;
    	unsigned long ACTIVE95 : 1;
    } sCORTEX_M4_NVIC_IABR2;

    typedef union {
        sCORTEX_M4_NVIC_IABR2 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IABR2;

    #define CORTEX_M4_NVIC_IABR3_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long ACTIVE96 : 1;
    	unsigned long ACTIVE97 : 1;
    	unsigned long ACTIVE98 : 1;
    	unsigned long ACTIVE99 : 1;
    	unsigned long ACTIVE100 : 1;
    	unsigned long ACTIVE101 : 1;
    	unsigned long ACTIVE102 : 1;
    	unsigned long ACTIVE103 : 1;
    	unsigned long ACTIVE104 : 1;
    	unsigned long ACTIVE105 : 1;
    	unsigned long ACTIVE106 : 1;
    	unsigned long ACTIVE107 : 1;
    	unsigned long ACTIVE108 : 1;
    	unsigned long ACTIVE109 : 1;
    	unsigned long ACTIVE110 : 1;
    	unsigned long ACTIVE111 : 1;
    	unsigned long ACTIVE112 : 1;
    	unsigned long ACTIVE113 : 1;
    	unsigned long ACTIVE114 : 1;
    	unsigned long ACTIVE115 : 1;
    	unsigned long ACTIVE116 : 1;
    	unsigned long ACTIVE117 : 1;
    	unsigned long ACTIVE118 : 1;
    	unsigned long ACTIVE119 : 1;
    	unsigned long ACTIVE120 : 1;
    	unsigned long ACTIVE121 : 1;
    	unsigned long ACTIVE122 : 1;
    	unsigned long ACTIVE123 : 1;
    	unsigned long ACTIVE124 : 1;
    	unsigned long ACTIVE125 : 1;
    	unsigned long ACTIVE126 : 1;
    	unsigned long ACTIVE127 : 1;
    } sCORTEX_M4_NVIC_IABR3;

    typedef union {
        sCORTEX_M4_NVIC_IABR3 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IABR3;

    #define CORTEX_M4_NVIC_IABR4_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long ACTIVE128 : 1;
    	unsigned long ACTIVE129 : 1;
    	unsigned long ACTIVE130 : 1;
    	unsigned long ACTIVE131 : 1;
    	unsigned long ACTIVE132 : 1;
    	unsigned long ACTIVE133 : 1;
    	unsigned long ACTIVE134 : 1;
    	unsigned long ACTIVE135 : 1;
    	unsigned long ACTIVE136 : 1;
    	unsigned long ACTIVE137 : 1;
    	unsigned long ACTIVE138 : 1;
    	unsigned long ACTIVE139 : 1;
    	unsigned long ACTIVE140 : 1;
    	unsigned long ACTIVE141 : 1;
    	unsigned long ACTIVE142 : 1;
    	unsigned long ACTIVE143 : 1;
    	unsigned long ACTIVE144 : 1;
    	unsigned long ACTIVE145 : 1;
    	unsigned long ACTIVE146 : 1;
    	unsigned long ACTIVE147 : 1;
    	unsigned long ACTIVE148 : 1;
    	unsigned long ACTIVE149 : 1;
    	unsigned long ACTIVE150 : 1;
    	unsigned long ACTIVE151 : 1;
    	unsigned long ACTIVE152 : 1;
    	unsigned long ACTIVE153 : 1;
    	unsigned long ACTIVE154 : 1;
    	unsigned long ACTIVE155 : 1;
    	unsigned long ACTIVE156 : 1;
    	unsigned long ACTIVE157 : 1;
    	unsigned long ACTIVE158 : 1;
    	unsigned long ACTIVE159 : 1;
    } sCORTEX_M4_NVIC_IABR4;

    typedef union {
        sCORTEX_M4_NVIC_IABR4 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IABR4;

    #define CORTEX_M4_NVIC_IABR5_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long ACTIVE160 : 1;
    	unsigned long ACTIVE161 : 1;
    	unsigned long ACTIVE162 : 1;
    	unsigned long ACTIVE163 : 1;
    	unsigned long ACTIVE164 : 1;
    	unsigned long ACTIVE165 : 1;
    	unsigned long ACTIVE166 : 1;
    	unsigned long ACTIVE167 : 1;
    	unsigned long ACTIVE168 : 1;
    	unsigned long ACTIVE169 : 1;
    	unsigned long ACTIVE170 : 1;
    	unsigned long ACTIVE171 : 1;
    	unsigned long ACTIVE172 : 1;
    	unsigned long ACTIVE173 : 1;
    	unsigned long ACTIVE174 : 1;
    	unsigned long ACTIVE175 : 1;
    	unsigned long ACTIVE176 : 1;
    	unsigned long ACTIVE177 : 1;
    	unsigned long ACTIVE178 : 1;
    	unsigned long ACTIVE179 : 1;
    	unsigned long ACTIVE180 : 1;
    	unsigned long ACTIVE181 : 1;
    	unsigned long ACTIVE182 : 1;
    	unsigned long ACTIVE183 : 1;
    	unsigned long ACTIVE184 : 1;
    	unsigned long ACTIVE185 : 1;
    	unsigned long ACTIVE186 : 1;
    	unsigned long ACTIVE187 : 1;
    	unsigned long ACTIVE188 : 1;
    	unsigned long ACTIVE189 : 1;
    	unsigned long ACTIVE190 : 1;
    	unsigned long ACTIVE191 : 1;
    } sCORTEX_M4_NVIC_IABR5;

    typedef union {
        sCORTEX_M4_NVIC_IABR5 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IABR5;

    #define CORTEX_M4_NVIC_IABR6_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long ACTIVE192 : 1;
    	unsigned long ACTIVE193 : 1;
    	unsigned long ACTIVE194 : 1;
    	unsigned long ACTIVE195 : 1;
    	unsigned long ACTIVE196 : 1;
    	unsigned long ACTIVE197 : 1;
    	unsigned long ACTIVE198 : 1;
    	unsigned long ACTIVE199 : 1;
    	unsigned long ACTIVE200 : 1;
    	unsigned long ACTIVE201 : 1;
    	unsigned long ACTIVE202 : 1;
    	unsigned long ACTIVE203 : 1;
    	unsigned long ACTIVE204 : 1;
    	unsigned long ACTIVE205 : 1;
    	unsigned long ACTIVE206 : 1;
    	unsigned long ACTIVE207 : 1;
    	unsigned long ACTIVE208 : 1;
    	unsigned long ACTIVE209 : 1;
    	unsigned long ACTIVE210 : 1;
    	unsigned long ACTIVE211 : 1;
    	unsigned long ACTIVE212 : 1;
    	unsigned long ACTIVE213 : 1;
    	unsigned long ACTIVE214 : 1;
    	unsigned long ACTIVE215 : 1;
    	unsigned long ACTIVE216 : 1;
    	unsigned long ACTIVE217 : 1;
    	unsigned long ACTIVE218 : 1;
    	unsigned long ACTIVE219 : 1;
    	unsigned long ACTIVE220 : 1;
    	unsigned long ACTIVE221 : 1;
    	unsigned long ACTIVE222 : 1;
    	unsigned long ACTIVE223 : 1;
    } sCORTEX_M4_NVIC_IABR6;

    typedef union {
        sCORTEX_M4_NVIC_IABR6 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IABR6;

    #define CORTEX_M4_NVIC_IABR7_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long ACTIVE224 : 1;
        unsigned long ACTIVE225 : 1;
        unsigned long ACTIVE226 : 1;
        unsigned long ACTIVE227 : 1;
        unsigned long ACTIVE228 : 1;
        unsigned long ACTIVE229 : 1;
        unsigned long ACTIVE230 : 1;
        unsigned long ACTIVE231 : 1;
        unsigned long ACTIVE232 : 1;
        unsigned long ACTIVE233 : 1;
        unsigned long ACTIVE234 : 1;
        unsigned long ACTIVE235 : 1;
        unsigned long ACTIVE236 : 1;
        unsigned long ACTIVE237 : 1;
        unsigned long ACTIVE238 : 1;
        unsigned long ACTIVE239 : 1;
    	unsigned long Res0      : 16;
    } sCORTEX_M4_NVIC_IABR7;

    typedef union {
        sCORTEX_M4_NVIC_IABR7 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IABR7;

    #define CORTEX_M4_NVIC_IPR0_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N0 : 8;
        unsigned long PRI_N1 : 8;
        unsigned long PRI_N2 : 8;
        unsigned long PRI_N3 : 8;
    } sCORTEX_M4_NVIC_IPR0;

    typedef union {
    	sCORTEX_M4_NVIC_IPR0 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR0;

    #define CORTEX_M4_NVIC_IPR1_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N4 : 8;
        unsigned long PRI_N5 : 8;
        unsigned long PRI_N6 : 8;
        unsigned long PRI_N7 : 8;
    } sCORTEX_M4_NVIC_IPR1;

    typedef union {
        sCORTEX_M4_NVIC_IPR1 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR1;

    #define CORTEX_M4_NVIC_IPR2_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N8 : 8;
        unsigned long PRI_N9 : 8;
        unsigned long PRI_N10 : 8;
        unsigned long PRI_N11 : 8;
    } sCORTEX_M4_NVIC_IPR2;

    typedef union {
        sCORTEX_M4_NVIC_IPR2 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR2;

    #define CORTEX_M4_NVIC_IPR3_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N12 : 8;
        unsigned long PRI_N13 : 8;
        unsigned long PRI_N14 : 8;
        unsigned long PRI_N15 : 8;
    } sCORTEX_M4_NVIC_IPR3;

    typedef union {
        sCORTEX_M4_NVIC_IPR3 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR3;

    #define CORTEX_M4_NVIC_IPR4_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N16 : 8;
        unsigned long PRI_N17 : 8;
        unsigned long PRI_N18 : 8;
        unsigned long PRI_N19 : 8;
    } sCORTEX_M4_NVIC_IPR4;

    typedef union {
        sCORTEX_M4_NVIC_IPR4 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR4;

    #define CORTEX_M4_NVIC_IPR5_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N20 : 8;
        unsigned long PRI_N21 : 8;
        unsigned long PRI_N22 : 8;
        unsigned long PRI_N23 : 8;
    } sCORTEX_M4_NVIC_IPR5;

    typedef union {
        sCORTEX_M4_NVIC_IPR5 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR5;

    #define CORTEX_M4_NVIC_IPR6_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N24 : 8;
        unsigned long PRI_N25 : 8;
        unsigned long PRI_N26 : 8;
        unsigned long PRI_N27 : 8;
    } sCORTEX_M4_NVIC_IPR6;

    typedef union {
        sCORTEX_M4_NVIC_IPR6 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR6;

    #define CORTEX_M4_NVIC_IPR7_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N28 : 8;
        unsigned long PRI_N29 : 8;
        unsigned long PRI_N30 : 8;
        unsigned long PRI_N31 : 8;
    } sCORTEX_M4_NVIC_IPR7;

    typedef union {
        sCORTEX_M4_NVIC_IPR7 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR7;

    #define CORTEX_M4_NVIC_IPR8_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N32 : 8;
        unsigned long PRI_N33 : 8;
        unsigned long PRI_N34 : 8;
        unsigned long PRI_N35 : 8;
    } sCORTEX_M4_NVIC_IPR8;

    typedef union {
        sCORTEX_M4_NVIC_IPR8 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR8;

    #define CORTEX_M4_NVIC_IPR9_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N36 : 8;
        unsigned long PRI_N37 : 8;
        unsigned long PRI_N38 : 8;
        unsigned long PRI_N39 : 8;
    } sCORTEX_M4_NVIC_IPR9;

    typedef union {
        sCORTEX_M4_NVIC_IPR9 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR9;

    #define CORTEX_M4_NVIC_IPR10_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N40 : 8;
        unsigned long PRI_N41 : 8;
        unsigned long PRI_N42 : 8;
        unsigned long PRI_N43 : 8;
    } sCORTEX_M4_NVIC_IPR10;

    typedef union {
        sCORTEX_M4_NVIC_IPR10 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR10;

    #define CORTEX_M4_NVIC_IPR11_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N44 : 8;
        unsigned long PRI_N45 : 8;
        unsigned long PRI_N46 : 8;
        unsigned long PRI_N47 : 8;
    } sCORTEX_M4_NVIC_IPR11;

    typedef union {
        sCORTEX_M4_NVIC_IPR11 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR11;

    #define CORTEX_M4_NVIC_IPR12_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N48 : 8;
        unsigned long PRI_N49 : 8;
        unsigned long PRI_N50 : 8;
        unsigned long PRI_N51 : 8;
    } sCORTEX_M4_NVIC_IPR12;

    typedef union {
        sCORTEX_M4_NVIC_IPR12 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR12;

    #define CORTEX_M4_NVIC_IPR13_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N52 : 8;
        unsigned long PRI_N53 : 8;
        unsigned long PRI_N54 : 8;
        unsigned long PRI_N55 : 8;
    } sCORTEX_M4_NVIC_IPR13;

    typedef union {
        sCORTEX_M4_NVIC_IPR13 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR13;

    #define CORTEX_M4_NVIC_IPR14_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N56 : 8;
        unsigned long PRI_N57 : 8;
        unsigned long PRI_N58 : 8;
        unsigned long PRI_N59 : 8;
    } sCORTEX_M4_NVIC_IPR14;

    typedef union {
        sCORTEX_M4_NVIC_IPR14 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR14;

    #define CORTEX_M4_NVIC_IPR15_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N60 : 8;
        unsigned long PRI_N61 : 8;
        unsigned long PRI_N62 : 8;
        unsigned long PRI_N63 : 8;
    } sCORTEX_M4_NVIC_IPR15;

    typedef union {
        sCORTEX_M4_NVIC_IPR15 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR15;

    #define CORTEX_M4_NVIC_IPR16_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N64 : 8;
        unsigned long PRI_N65 : 8;
        unsigned long PRI_N66 : 8;
        unsigned long PRI_N67 : 8;
    } sCORTEX_M4_NVIC_IPR16;

    typedef union {
        sCORTEX_M4_NVIC_IPR16 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR16;

    #define CORTEX_M4_NVIC_IPR17_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N68 : 8;
        unsigned long PRI_N69 : 8;
        unsigned long PRI_N70 : 8;
        unsigned long PRI_N71 : 8;
    } sCORTEX_M4_NVIC_IPR17;

    typedef union {
        sCORTEX_M4_NVIC_IPR17 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR17;

    #define CORTEX_M4_NVIC_IPR18_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N72 : 8;
        unsigned long PRI_N73 : 8;
        unsigned long PRI_N74 : 8;
        unsigned long PRI_N75 : 8;
    } sCORTEX_M4_NVIC_IPR18;

    typedef union {
        sCORTEX_M4_NVIC_IPR18 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR18;

    #define CORTEX_M4_NVIC_IPR19_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N76 : 8;
        unsigned long PRI_N77 : 8;
        unsigned long PRI_N78 : 8;
        unsigned long PRI_N79 : 8;
    } sCORTEX_M4_NVIC_IPR19;

    typedef union {
        sCORTEX_M4_NVIC_IPR19 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR19;

    #define CORTEX_M4_NVIC_IPR20_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N80 : 8;
        unsigned long PRI_N81 : 8;
        unsigned long PRI_N82 : 8;
        unsigned long PRI_N83 : 8;
    } sCORTEX_M4_NVIC_IPR20;

    typedef union {
        sCORTEX_M4_NVIC_IPR20 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR20;

    #define CORTEX_M4_NVIC_IPR21_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N84 : 8;
        unsigned long PRI_N85 : 8;
        unsigned long PRI_N86 : 8;
        unsigned long PRI_N87 : 8;
    } sCORTEX_M4_NVIC_IPR21;

    typedef union {
        sCORTEX_M4_NVIC_IPR21 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR21;

    #define CORTEX_M4_NVIC_IPR22_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N88 : 8;
        unsigned long PRI_N89 : 8;
        unsigned long PRI_N90 : 8;
        unsigned long PRI_N91 : 8;
    } sCORTEX_M4_NVIC_IPR22;

    typedef union {
        sCORTEX_M4_NVIC_IPR22 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR22;

    #define CORTEX_M4_NVIC_IPR23_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N92 : 8;
        unsigned long PRI_N93 : 8;
        unsigned long PRI_N94 : 8;
        unsigned long PRI_N95 : 8;
    } sCORTEX_M4_NVIC_IPR23;

    typedef union {
        sCORTEX_M4_NVIC_IPR23 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR23;

    #define CORTEX_M4_NVIC_IPR24_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N96 : 8;
        unsigned long PRI_N97 : 8;
        unsigned long PRI_N98 : 8;
        unsigned long PRI_N99 : 8;
    } sCORTEX_M4_NVIC_IPR24;

    typedef union {
        sCORTEX_M4_NVIC_IPR24 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR24;

    #define CORTEX_M4_NVIC_IPR25_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N100 : 8;
        unsigned long PRI_N101 : 8;
        unsigned long PRI_N102 : 8;
        unsigned long PRI_N103 : 8;
    } sCORTEX_M4_NVIC_IPR25;

    typedef union {
        sCORTEX_M4_NVIC_IPR25 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR25;

    #define CORTEX_M4_NVIC_IPR26_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N104 : 8;
        unsigned long PRI_N105 : 8;
        unsigned long PRI_N106 : 8;
        unsigned long PRI_N107 : 8;
    } sCORTEX_M4_NVIC_IPR26;

    typedef union {
        sCORTEX_M4_NVIC_IPR26 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR26;

    #define CORTEX_M4_NVIC_IPR27_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N108 : 8;
        unsigned long PRI_N109 : 8;
        unsigned long PRI_N110 : 8;
        unsigned long PRI_N111 : 8;
    } sCORTEX_M4_NVIC_IPR27;

    typedef union {
        sCORTEX_M4_NVIC_IPR27 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR27;


    #define CORTEX_M4_NVIC_IPR28_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N112 : 8;
        unsigned long PRI_N113 : 8;
        unsigned long PRI_N114 : 8;
        unsigned long PRI_N115 : 8;
    } sCORTEX_M4_NVIC_IPR28;

    typedef union {
        sCORTEX_M4_NVIC_IPR28 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR28;

    #define CORTEX_M4_NVIC_IPR29_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N116 : 8;
        unsigned long PRI_N117 : 8;
        unsigned long PRI_N118 : 8;
        unsigned long PRI_N119 : 8;
    } sCORTEX_M4_NVIC_IPR29;

    typedef union {
        sCORTEX_M4_NVIC_IPR29 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR29;

    #define CORTEX_M4_NVIC_IPR30_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N120 : 8;
        unsigned long PRI_N121 : 8;
        unsigned long PRI_N122 : 8;
        unsigned long PRI_N123 : 8;
    } sCORTEX_M4_NVIC_IPR30;

    typedef union {
        sCORTEX_M4_NVIC_IPR30 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR30;

    #define CORTEX_M4_NVIC_IPR31_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N124 : 8;
        unsigned long PRI_N125 : 8;
        unsigned long PRI_N126 : 8;
        unsigned long PRI_N127 : 8;
    } sCORTEX_M4_NVIC_IPR31;

    typedef union {
        sCORTEX_M4_NVIC_IPR31 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR31;

    #define CORTEX_M4_NVIC_IPR32_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N128 : 8;
        unsigned long PRI_N129 : 8;
        unsigned long PRI_N130 : 8;
        unsigned long PRI_N131 : 8;
    } sCORTEX_M4_NVIC_IPR32;

    typedef union {
        sCORTEX_M4_NVIC_IPR32 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR32;

    #define CORTEX_M4_NVIC_IPR33_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N132 : 8;
        unsigned long PRI_N133 : 8;
        unsigned long PRI_N134 : 8;
        unsigned long PRI_N135 : 8;
    } sCORTEX_M4_NVIC_IPR33;

    typedef union {
        sCORTEX_M4_NVIC_IPR33 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR33;

    #define CORTEX_M4_NVIC_IPR34_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N136 : 8;
        unsigned long PRI_N137 : 8;
        unsigned long PRI_N138 : 8;
        unsigned long PRI_N139 : 8;
    } sCORTEX_M4_NVIC_IPR34;

    typedef union {
        sCORTEX_M4_NVIC_IPR34 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR34;

    #define CORTEX_M4_NVIC_IPR35_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N140 : 8;
        unsigned long PRI_N141 : 8;
        unsigned long PRI_N142 : 8;
        unsigned long PRI_N143 : 8;
    } sCORTEX_M4_NVIC_IPR35;

    typedef union {
        sCORTEX_M4_NVIC_IPR35 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR35;

    #define CORTEX_M4_NVIC_IPR36_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N144 : 8;
        unsigned long PRI_N145 : 8;
        unsigned long PRI_N146 : 8;
        unsigned long PRI_N147 : 8;
    } sCORTEX_M4_NVIC_IPR36;

    typedef union {
        sCORTEX_M4_NVIC_IPR36 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR36;

    #define CORTEX_M4_NVIC_IPR37_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N148 : 8;
        unsigned long PRI_N149 : 8;
        unsigned long PRI_N150 : 8;
        unsigned long PRI_N151 : 8;
    } sCORTEX_M4_NVIC_IPR37;

    typedef union {
        sCORTEX_M4_NVIC_IPR37 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR37;

    #define CORTEX_M4_NVIC_IPR38_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N152 : 8;
        unsigned long PRI_N153 : 8;
        unsigned long PRI_N154 : 8;
        unsigned long PRI_N155 : 8;
    } sCORTEX_M4_NVIC_IPR38;

    typedef union {
        sCORTEX_M4_NVIC_IPR38 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR38;

    #define CORTEX_M4_NVIC_IPR39_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N156 : 8;
        unsigned long PRI_N157 : 8;
        unsigned long PRI_N158 : 8;
        unsigned long PRI_N159 : 8;
    } sCORTEX_M4_NVIC_IPR39;

    typedef union {
        sCORTEX_M4_NVIC_IPR39 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR39;

    #define CORTEX_M4_NVIC_IPR40_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N160 : 8;
        unsigned long PRI_N161 : 8;
        unsigned long PRI_N162 : 8;
        unsigned long PRI_N163 : 8;
    } sCORTEX_M4_NVIC_IPR40;

    typedef union {
        sCORTEX_M4_NVIC_IPR40 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR40;

    #define CORTEX_M4_NVIC_IPR41_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N164 : 8;
        unsigned long PRI_N165 : 8;
        unsigned long PRI_N166 : 8;
        unsigned long PRI_N167 : 8;
    } sCORTEX_M4_NVIC_IPR41;

    typedef union {
        sCORTEX_M4_NVIC_IPR41 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR41;

    #define CORTEX_M4_NVIC_IPR42_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N168 : 8;
        unsigned long PRI_N169 : 8;
        unsigned long PRI_N170 : 8;
        unsigned long PRI_N171 : 8;
    } sCORTEX_M4_NVIC_IPR42;

    typedef union {
        sCORTEX_M4_NVIC_IPR42 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR42;

    #define CORTEX_M4_NVIC_IPR43_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N172 : 8;
        unsigned long PRI_N173 : 8;
        unsigned long PRI_N174 : 8;
        unsigned long PRI_N175 : 8;
    } sCORTEX_M4_NVIC_IPR43;

    typedef union {
        sCORTEX_M4_NVIC_IPR43 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR43;

    #define CORTEX_M4_NVIC_IPR44_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N176 : 8;
        unsigned long PRI_N177 : 8;
        unsigned long PRI_N178 : 8;
        unsigned long PRI_N179 : 8;
    } sCORTEX_M4_NVIC_IPR44;

    typedef union {
        sCORTEX_M4_NVIC_IPR44 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR44;

    #define CORTEX_M4_NVIC_IPR45_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N180 : 8;
        unsigned long PRI_N181 : 8;
        unsigned long PRI_N182 : 8;
        unsigned long PRI_N183 : 8;
    } sCORTEX_M4_NVIC_IPR45;

    typedef union {
        sCORTEX_M4_NVIC_IPR45 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR45;

    #define CORTEX_M4_NVIC_IPR46_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N184 : 8;
        unsigned long PRI_N185 : 8;
        unsigned long PRI_N186 : 8;
        unsigned long PRI_N187 : 8;
    } sCORTEX_M4_NVIC_IPR46;

    typedef union {
        sCORTEX_M4_NVIC_IPR46 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR46;

    #define CORTEX_M4_NVIC_IPR47_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N188 : 8;
        unsigned long PRI_N189 : 8;
        unsigned long PRI_N190 : 8;
        unsigned long PRI_N191 : 8;
    } sCORTEX_M4_NVIC_IPR47;

    typedef union {
        sCORTEX_M4_NVIC_IPR47 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR47;

    #define CORTEX_M4_NVIC_IPR48_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N192 : 8;
        unsigned long PRI_N193 : 8;
        unsigned long PRI_N194 : 8;
        unsigned long PRI_N195 : 8;
    } sCORTEX_M4_NVIC_IPR48;

    typedef union {
        sCORTEX_M4_NVIC_IPR48 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR48;

    #define CORTEX_M4_NVIC_IPR49_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N196 : 8;
        unsigned long PRI_N197 : 8;
        unsigned long PRI_N198 : 8;
        unsigned long PRI_N199 : 8;
    } sCORTEX_M4_NVIC_IPR49;

    typedef union {
        sCORTEX_M4_NVIC_IPR49 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR49;

    #define CORTEX_M4_NVIC_IPR50_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N200 : 8;
        unsigned long PRI_N201 : 8;
        unsigned long PRI_N202 : 8;
        unsigned long PRI_N203 : 8;
    } sCORTEX_M4_NVIC_IPR50;

    typedef union {
        sCORTEX_M4_NVIC_IPR50 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR50;

    #define CORTEX_M4_NVIC_IPR51_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N204 : 8;
        unsigned long PRI_N205 : 8;
        unsigned long PRI_N206 : 8;
        unsigned long PRI_N207 : 8;
    } sCORTEX_M4_NVIC_IPR51;

    typedef union {
        sCORTEX_M4_NVIC_IPR51 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR51;

    #define CORTEX_M4_NVIC_IPR52_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N208 : 8;
        unsigned long PRI_N209 : 8;
        unsigned long PRI_N210 : 8;
        unsigned long PRI_N211 : 8;
    } sCORTEX_M4_NVIC_IPR52;

    typedef union {
        sCORTEX_M4_NVIC_IPR52 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR52;

    #define CORTEX_M4_NVIC_IPR53_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N212 : 8;
        unsigned long PRI_N213 : 8;
        unsigned long PRI_N214 : 8;
        unsigned long PRI_N215 : 8;
    } sCORTEX_M4_NVIC_IPR53;

    typedef union {
        sCORTEX_M4_NVIC_IPR53 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR53;

    #define CORTEX_M4_NVIC_IPR54_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N216 : 8;
        unsigned long PRI_N217 : 8;
        unsigned long PRI_N218 : 8;
        unsigned long PRI_N219 : 8;
    } sCORTEX_M4_NVIC_IPR54;

    typedef union {
        sCORTEX_M4_NVIC_IPR54 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR54;

    #define CORTEX_M4_NVIC_IPR55_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N220 : 8;
        unsigned long PRI_N221 : 8;
        unsigned long PRI_N222 : 8;
        unsigned long PRI_N223 : 8;
    } sCORTEX_M4_NVIC_IPR55;

    typedef union {
        sCORTEX_M4_NVIC_IPR55 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR55;

    #define CORTEX_M4_NVIC_IPR56_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N224 : 8;
        unsigned long PRI_N225 : 8;
        unsigned long PRI_N226 : 8;
        unsigned long PRI_N227 : 8;
    } sCORTEX_M4_NVIC_IPR56;

    typedef union {
        sCORTEX_M4_NVIC_IPR56 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR56;

    #define CORTEX_M4_NVIC_IPR57_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N228 : 8;
        unsigned long PRI_N229 : 8;
        unsigned long PRI_N230 : 8;
        unsigned long PRI_N231 : 8;
    } sCORTEX_M4_NVIC_IPR57;

    typedef union {
        sCORTEX_M4_NVIC_IPR57 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR57;

    #define CORTEX_M4_NVIC_IPR58_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N232 : 8;
        unsigned long PRI_N233 : 8;
        unsigned long PRI_N234 : 8;
        unsigned long PRI_N235 : 8;
    } sCORTEX_M4_NVIC_IPR58;

    typedef union {
        sCORTEX_M4_NVIC_IPR58 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR58;

    #define CORTEX_M4_NVIC_IPR59_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long PRI_N236 : 8;
        unsigned long PRI_N237 : 8;
        unsigned long PRI_N238 : 8;
        unsigned long PRI_N239 : 8;
    } sCORTEX_M4_NVIC_IPR59;

    typedef union {
        sCORTEX_M4_NVIC_IPR59 Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_IPR59;

    #define CORTEX_M4_NVIC_STIR_RESET_VALUE 0x00000000
    typedef struct {
    	unsigned long INTID : 9;
        unsigned long Res0 : 23;
    } sCORTEX_M4_NVIC_STIR;

    typedef union {
        sCORTEX_M4_NVIC_STIR Bit;
        unsigned long  All;
    } uCORTEX_M4_NVIC_STIR;

    typedef struct {
    	uCORTEX_M4_NVIC_ISER0 CORTEX_M4_NVIC_ISER0; // Offset: 0x00
    	uCORTEX_M4_NVIC_ISER1 CORTEX_M4_NVIC_ISER1; // Offset: 0x04
    	uCORTEX_M4_NVIC_ISER2 CORTEX_M4_NVIC_ISER2; // Offset: 0x08
    	uCORTEX_M4_NVIC_ISER3 CORTEX_M4_NVIC_ISER3; // Offset: 0x0C
    	uCORTEX_M4_NVIC_ISER4 CORTEX_M4_NVIC_ISER4; // Offset: 0x10
    	uCORTEX_M4_NVIC_ISER5 CORTEX_M4_NVIC_ISER5; // Offset: 0x14
    	uCORTEX_M4_NVIC_ISER6 CORTEX_M4_NVIC_ISER6; // Offset: 0x18
    	uCORTEX_M4_NVIC_ISER7 CORTEX_M4_NVIC_ISER7; // Offset: 0x1C
    	unsigned long Reserved0; // Offset: 0x20
    	unsigned long Reserved1;
    	unsigned long Reserved2;
    	unsigned long Reserved3;
    	unsigned long Reserved4;// Offset: 0x30
    	unsigned long Reserved5;
    	unsigned long Reserved6;
        unsigned long Reserved7;
        unsigned long Reserved8;// Offset: 0x40
        unsigned long Reserved9;
        unsigned long Reserved10;
        unsigned long Reserved11;
        unsigned long Reserved12;// Offset: 0x50
        unsigned long Reserved13;
        unsigned long Reserved14;
        unsigned long Reserved15;
        unsigned long Reserved16;// Offset: 0x60
        unsigned long Reserved17;
        unsigned long Reserved18;
        unsigned long Reserved19;
        unsigned long Reserved20;// Offset: 0x70
        unsigned long Reserved21;
        unsigned long Reserved22;
        unsigned long Reserved23;
        uCORTEX_M4_NVIC_ICER0 CORTEX_M4_NVIC_ICER0; // Offset: 0x80
        uCORTEX_M4_NVIC_ICER1 CORTEX_M4_NVIC_ICER1; // Offset: 0x84
        uCORTEX_M4_NVIC_ICER2 CORTEX_M4_NVIC_ICER2; // Offset: 0x88
        uCORTEX_M4_NVIC_ICER3 CORTEX_M4_NVIC_ICER3; // Offset: 0x8C
    	uCORTEX_M4_NVIC_ICER4 CORTEX_M4_NVIC_ICER4; // Offset: 0x90
    	uCORTEX_M4_NVIC_ICER5 CORTEX_M4_NVIC_ICER5; // Offset: 0x94
    	uCORTEX_M4_NVIC_ICER6 CORTEX_M4_NVIC_ICER6; // Offset: 0x98
    	uCORTEX_M4_NVIC_ICER7 CORTEX_M4_NVIC_ICER7; // Offset: 0x9C
    	unsigned long Reserved24;// Offset: 0xA0
    	unsigned long Reserved25;
    	unsigned long Reserved26;
    	unsigned long Reserved27;
    	unsigned long Reserved28;// Offset: 0xB0
    	unsigned long Reserved29;
    	unsigned long Reserved30;
        unsigned long Reserved31;
        unsigned long Reserved32;// Offset: 0xC0
        unsigned long Reserved33;
        unsigned long Reserved34;
        unsigned long Reserved35;
        unsigned long Reserved36;// Offset: 0xD0
        unsigned long Reserved37;
        unsigned long Reserved38;
        unsigned long Reserved39;
        unsigned long Reserved40;// Offset: 0xE0
        unsigned long Reserved41;
        unsigned long Reserved42;
        unsigned long Reserved43;
        unsigned long Reserved44;// Offset: 0xF0
        unsigned long Reserved45;
        unsigned long Reserved46;
        unsigned long Reserved47;
        uCORTEX_M4_NVIC_ISPR0 CORTEX_M4_NVIC_ISPR0; // Offset: 0x100
        uCORTEX_M4_NVIC_ISPR1 CORTEX_M4_NVIC_ISPR1; // Offset: 0x104
        uCORTEX_M4_NVIC_ISPR2 CORTEX_M4_NVIC_ISPR2; // Offset: 0x108
        uCORTEX_M4_NVIC_ISPR3 CORTEX_M4_NVIC_ISPR3; // Offset: 0x10C
    	uCORTEX_M4_NVIC_ISPR4 CORTEX_M4_NVIC_ISPR4; // Offset: 0x110
    	uCORTEX_M4_NVIC_ISPR5 CORTEX_M4_NVIC_ISPR5; // Offset: 0x114
    	uCORTEX_M4_NVIC_ISPR6 CORTEX_M4_NVIC_ISPR6; // Offset: 0x118
    	uCORTEX_M4_NVIC_ISPR7 CORTEX_M4_NVIC_ISPR7; // Offset: 0x11C
    	unsigned long Reserved48;// Offset: 0x120
    	unsigned long Reserved49;
		unsigned long Reserved50;
		unsigned long Reserved51;
		unsigned long Reserved52;// Offset: 0x130
		unsigned long Reserved53;
		unsigned long Reserved54;
        unsigned long Reserved55;
        unsigned long Reserved56;// Offset: 0x140
        unsigned long Reserved57;
        unsigned long Reserved58;
        unsigned long Reserved59;
        unsigned long Reserved60;// Offset: 0x150
        unsigned long Reserved61;
        unsigned long Reserved62;
        unsigned long Reserved63;
        unsigned long Reserved64;// Offset: 0x160
        unsigned long Reserved65;
        unsigned long Reserved66;
        unsigned long Reserved67;
        unsigned long Reserved68;// Offset: 0x170
        unsigned long Reserved69;
        unsigned long Reserved70;
        unsigned long Reserved71;
        uCORTEX_M4_NVIC_ICPR0 CORTEX_M4_NVIC_ICPR0; // Offset: 0x180
        uCORTEX_M4_NVIC_ICPR1 CORTEX_M4_NVIC_ICPR1; // Offset: 0x184
        uCORTEX_M4_NVIC_ICPR2 CORTEX_M4_NVIC_ICPR2; // Offset: 0x188
        uCORTEX_M4_NVIC_ICPR3 CORTEX_M4_NVIC_ICPR3; // Offset: 0x18C
    	uCORTEX_M4_NVIC_ICPR4 CORTEX_M4_NVIC_ICPR4; // Offset: 0x190
    	uCORTEX_M4_NVIC_ICPR5 CORTEX_M4_NVIC_ICPR5; // Offset: 0x194
    	uCORTEX_M4_NVIC_ICPR6 CORTEX_M4_NVIC_ICPR6; // Offset: 0x198
    	uCORTEX_M4_NVIC_ICPR7 CORTEX_M4_NVIC_ICPR7; // Offset: 0x19C
    	unsigned long Reserved72;// Offset: 0x1A0
    	unsigned long Reserved73;
    	unsigned long Reserved74;
    	unsigned long Reserved75;
    	unsigned long Reserved76;// Offset: 0x1B0
    	unsigned long Reserved77;
    	unsigned long Reserved78;
        unsigned long Reserved79;
        unsigned long Reserved80;// Offset: 0x1C0
        unsigned long Reserved81;
        unsigned long Reserved82;
        unsigned long Reserved83;
        unsigned long Reserved84;// Offset: 0x1D0
        unsigned long Reserved85;
        unsigned long Reserved86;
        unsigned long Reserved87;
        unsigned long Reserved88;// Offset: 0x1E0
        unsigned long Reserved89;
        unsigned long Reserved90;
        unsigned long Reserved91;
        unsigned long Reserved92;// Offset: 0x1F0
        unsigned long Reserved93;
        unsigned long Reserved94;
        unsigned long Reserved95;
        uCORTEX_M4_NVIC_IABR0 CORTEX_M4_NVIC_IABR0; // Offset: 0x200
        uCORTEX_M4_NVIC_IABR1 CORTEX_M4_NVIC_IABR1; // Offset: 0x204
        uCORTEX_M4_NVIC_IABR2 CORTEX_M4_NVIC_IABR2; // Offset: 0x208
        uCORTEX_M4_NVIC_IABR3 CORTEX_M4_NVIC_IABR3; // Offset: 0x20C
    	uCORTEX_M4_NVIC_IABR4 CORTEX_M4_NVIC_IABR4; // Offset: 0x210
    	uCORTEX_M4_NVIC_IABR5 CORTEX_M4_NVIC_IABR5; // Offset: 0x214
    	uCORTEX_M4_NVIC_IABR6 CORTEX_M4_NVIC_IABR6; // Offset: 0x218
    	uCORTEX_M4_NVIC_IABR7 CORTEX_M4_NVIC_IABR7; // Offset: 0x21C
    	unsigned long Reserved96;// Offset: 0x220
    	unsigned long Reserved97;
    	unsigned long Reserved98;
    	unsigned long Reserved99;
    	unsigned long Reserved100;// Offset: 0x230
    	unsigned long Reserved101;
    	unsigned long Reserved102;
        unsigned long Reserved103;
        unsigned long Reserved104;// Offset: 0x240
        unsigned long Reserved105;
        unsigned long Reserved106;
        unsigned long Reserved107;
        unsigned long Reserved108;// Offset: 0x250
        unsigned long Reserved109;
        unsigned long Reserved110;
        unsigned long Reserved111;
        unsigned long Reserved112;// Offset: 0x260
        unsigned long Reserved113;
        unsigned long Reserved114;
        unsigned long Reserved115;
        unsigned long Reserved116;// Offset: 0x270
        unsigned long Reserved117;
        unsigned long Reserved118;
        unsigned long Reserved119;
        unsigned long Reserved120;// Offset: 0x280
        unsigned long Reserved121;
        unsigned long Reserved122;
        unsigned long Reserved123;
        unsigned long Reserved124;// Offset: 0x290
        unsigned long Reserved125;
        unsigned long Reserved126;
        unsigned long Reserved127;
        unsigned long Reserved128;// Offset: 0x2A0
        unsigned long Reserved129;
        unsigned long Reserved130;
        unsigned long Reserved140;
        unsigned long Reserved141;// Offset: 0x2B0
        unsigned long Reserved142;
        unsigned long Reserved143;
        unsigned long Reserved144;
        unsigned long Reserved145;// Offset: 0x2C0
        unsigned long Reserved146;
        unsigned long Reserved147;
        unsigned long Reserved148;
        unsigned long Reserved149;// Offset: 0x2D0
        unsigned long Reserved150;
        unsigned long Reserved151;
        unsigned long Reserved152;
        unsigned long Reserved153;// Offset: 0x2E0
        unsigned long Reserved154;
        unsigned long Reserved155;
        unsigned long Reserved156;
        unsigned long Reserved157;// Offset: 0x2F0
        unsigned long Reserved158;
        unsigned long Reserved159;
        unsigned long Reserved160;
        uCORTEX_M4_NVIC_IPR0 CORTEX_M4_NVIC_IPR0; // Offset: 0x300
        uCORTEX_M4_NVIC_IPR1 CORTEX_M4_NVIC_IPR1; // Offset: 0x304
        uCORTEX_M4_NVIC_IPR2 CORTEX_M4_NVIC_IPR2; // Offset: 0x308
        uCORTEX_M4_NVIC_IPR3 CORTEX_M4_NVIC_IPR3; // Offset: 0x30c
        uCORTEX_M4_NVIC_IPR4 CORTEX_M4_NVIC_IPR4; // Offset: 0x310
        uCORTEX_M4_NVIC_IPR5 CORTEX_M4_NVIC_IPR5; // Offset: 0x314
        uCORTEX_M4_NVIC_IPR6 CORTEX_M4_NVIC_IPR6; // Offset: 0x318
        uCORTEX_M4_NVIC_IPR7 CORTEX_M4_NVIC_IPR7; // Offset: 0x31c
        uCORTEX_M4_NVIC_IPR8 CORTEX_M4_NVIC_IPR8; // Offset: 0x320
        uCORTEX_M4_NVIC_IPR9 CORTEX_M4_NVIC_IPR9; // Offset: 0x324
        uCORTEX_M4_NVIC_IPR10 CORTEX_M4_NVIC_IPR10; // Offset: 0x328
        uCORTEX_M4_NVIC_IPR11 CORTEX_M4_NVIC_IPR11; // Offset: 0x32C
        uCORTEX_M4_NVIC_IPR12 CORTEX_M4_NVIC_IPR12; // Offset: 0x330
        uCORTEX_M4_NVIC_IPR13 CORTEX_M4_NVIC_IPR13; // Offset: 0x334
        uCORTEX_M4_NVIC_IPR14 CORTEX_M4_NVIC_IPR14; // Offset: 0x338
        uCORTEX_M4_NVIC_IPR15 CORTEX_M4_NVIC_IPR15; // Offset: 0x33C
        uCORTEX_M4_NVIC_IPR16 CORTEX_M4_NVIC_IPR16; // Offset: 0x340
        uCORTEX_M4_NVIC_IPR17 CORTEX_M4_NVIC_IPR17; // Offset: 0x344
        uCORTEX_M4_NVIC_IPR18 CORTEX_M4_NVIC_IPR18; // Offset: 0x348
        uCORTEX_M4_NVIC_IPR19 CORTEX_M4_NVIC_IPR19; // Offset: 0x34C
        uCORTEX_M4_NVIC_IPR20 CORTEX_M4_NVIC_IPR20; // Offset: 0x350
        uCORTEX_M4_NVIC_IPR21 CORTEX_M4_NVIC_IPR21; // Offset: 0x354
        uCORTEX_M4_NVIC_IPR22 CORTEX_M4_NVIC_IPR22; // Offset: 0x358
        uCORTEX_M4_NVIC_IPR23 CORTEX_M4_NVIC_IPR23; // Offset: 0x35C
        uCORTEX_M4_NVIC_IPR24 CORTEX_M4_NVIC_IPR24; // Offset: 0x360
        uCORTEX_M4_NVIC_IPR25 CORTEX_M4_NVIC_IPR25; // Offset: 0x364
        uCORTEX_M4_NVIC_IPR26 CORTEX_M4_NVIC_IPR26; // Offset: 0x368
        uCORTEX_M4_NVIC_IPR27 CORTEX_M4_NVIC_IPR27; // Offset: 0x36C
        uCORTEX_M4_NVIC_IPR28 CORTEX_M4_NVIC_IPR28; // Offset: 0x370
        uCORTEX_M4_NVIC_IPR29 CORTEX_M4_NVIC_IPR29; // Offset: 0x374
        uCORTEX_M4_NVIC_IPR30 CORTEX_M4_NVIC_IPR30; // Offset: 0x378
        uCORTEX_M4_NVIC_IPR31 CORTEX_M4_NVIC_IPR31; // Offset: 0x37C
        uCORTEX_M4_NVIC_IPR32 CORTEX_M4_NVIC_IPR32; // Offset: 0x380
        uCORTEX_M4_NVIC_IPR33 CORTEX_M4_NVIC_IPR33; // Offset: 0x384
        uCORTEX_M4_NVIC_IPR34 CORTEX_M4_NVIC_IPR34; // Offset: 0x388
        uCORTEX_M4_NVIC_IPR35 CORTEX_M4_NVIC_IPR35; // Offset: 0x38C
        uCORTEX_M4_NVIC_IPR36 CORTEX_M4_NVIC_IPR36; // Offset: 0x390
        uCORTEX_M4_NVIC_IPR37 CORTEX_M4_NVIC_IPR37; // Offset: 0x394
        uCORTEX_M4_NVIC_IPR38 CORTEX_M4_NVIC_IPR38; // Offset: 0x398
        uCORTEX_M4_NVIC_IPR39 CORTEX_M4_NVIC_IPR39; // Offset: 0x39C
        uCORTEX_M4_NVIC_IPR40 CORTEX_M4_NVIC_IPR40; // Offset: 0x3A0
        uCORTEX_M4_NVIC_IPR41 CORTEX_M4_NVIC_IPR41; // Offset: 0x3A4
        uCORTEX_M4_NVIC_IPR42 CORTEX_M4_NVIC_IPR42; // Offset: 0x3A8
        uCORTEX_M4_NVIC_IPR43 CORTEX_M4_NVIC_IPR43; // Offset: 0x3AC
        uCORTEX_M4_NVIC_IPR44 CORTEX_M4_NVIC_IPR44; // Offset: 0x3B0
        uCORTEX_M4_NVIC_IPR45 CORTEX_M4_NVIC_IPR45; // Offset: 0x3B4
        uCORTEX_M4_NVIC_IPR46 CORTEX_M4_NVIC_IPR46; // Offset: 0x3B8
        uCORTEX_M4_NVIC_IPR47 CORTEX_M4_NVIC_IPR47; // Offset: 0x3BC
        uCORTEX_M4_NVIC_IPR48 CORTEX_M4_NVIC_IPR48; // Offset: 0x3C0
        uCORTEX_M4_NVIC_IPR49 CORTEX_M4_NVIC_IPR49; // Offset: 0x3C4
        uCORTEX_M4_NVIC_IPR50 CORTEX_M4_NVIC_IPR50; // Offset: 0x3C8
        uCORTEX_M4_NVIC_IPR51 CORTEX_M4_NVIC_IPR51; // Offset: 0x3CC
        uCORTEX_M4_NVIC_IPR52 CORTEX_M4_NVIC_IPR52; // Offset: 0x3D0
        uCORTEX_M4_NVIC_IPR53 CORTEX_M4_NVIC_IPR53; // Offset: 0x3D4
        uCORTEX_M4_NVIC_IPR54 CORTEX_M4_NVIC_IPR54; // Offset: 0x3D8
        uCORTEX_M4_NVIC_IPR55 CORTEX_M4_NVIC_IPR55; // Offset: 0x3DC
        uCORTEX_M4_NVIC_IPR56 CORTEX_M4_NVIC_IPR56; // Offset: 0x3E0
        uCORTEX_M4_NVIC_IPR57 CORTEX_M4_NVIC_IPR57; // Offset: 0x3E4
        uCORTEX_M4_NVIC_IPR58 CORTEX_M4_NVIC_IPR58; // Offset: 0x3E8
        uCORTEX_M4_NVIC_IPR59 CORTEX_M4_NVIC_IPR59; // Offset: 0x3EC
    } sCORTEX_M4_NVIC;



