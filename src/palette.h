
void define_palette(void);
void build_new_palette(int a, int b, int c, int d);

void run_palette_shift(void);
void set_base_palette(void);

enum {
  COL_OUTLINE = 1,
  COL_WHITE,
  COL_LGREY,
  COL_DGREY,
  COL_COL1,
  COL_COL2,
  COL_COL3,
  COL_COL4,
  COL_BACK1,
  COL_BACK2,
  COL_BACK3,
  COL_BACK4,
  COL_BACK5
};

enum { CLOUD_COL_1, CLOUD_COL_2, CLOUD_COL_3, CLOUD_COL_4 };

enum {
  PAL_MENU,
  PAL_BASE,
  PAL_L1_2,
  PAL_L1_3,
  PAL_L2_1,
  PAL_L2_2,
  PAL_L3_1,
  PAL_L3_2,
  NO_PALETTES
};

enum {
  TRANS_RED1 = 14,
  TRANS_GREEN1 = 27,
  TRANS_BLUE1 = 40,
  TRANS_RED2 = 53,
  TRANS_GREEN2 = 66,
  TRANS_BLUE2 = 79,
  TRANS_RED3 = 92,
  TRANS_GREEN3 = 105,
  TRANS_BLUE3 = 118,
  TRANS_RED4 = 131,
  TRANS_GREEN4 = 144,
  TRANS_BLUE4 = 157,
  TRANS_RED5 = 170,
  TRANS_GREEN5 = 183,
  TRANS_BLUE5 = 196,
  TRANS_PURPLE2 = 209,
  TRANS_PURPLE3 = 222,
  TRANS_PURPLE4 = 235

  /*TRANS_RED1 = 15,
  TRANS_GREEN1 = 28,
  TRANS_BLUE1 = 41,
  TRANS_RED2 = 54,
  TRANS_GREEN2 = 67,
  TRANS_BLUE2 = 80,
  TRANS_RED3 = 93,
  TRANS_GREEN3 = 106,
  TRANS_BLUE3 = 119,
  TRANS_RED4 = 132,
  TRANS_GREEN4 = 145,
  TRANS_BLUE4 = 158,
  TRANS_RED5 = 171,
  TRANS_GREEN5 = 184,
  TRANS_BLUE5 = 197,
  TRANS_RED6 = 210,
  TRANS_GREEN6 = 223,
  TRANS_BLUE6 = 236*/

};

#define COL_BCIRCLE_1 237
#define COL_BCIRCLE_2 238
#define COL_BCIRCLE_3 239
#define COL_BCIRCLE_OUT_1 240
#define COL_BCIRCLE_OUT_2 241
#define COL_BCIRCLE_OUT_3 242
#define CONVERT_WHITE_TO_GREY 243

int colour_to_trans(int y);
