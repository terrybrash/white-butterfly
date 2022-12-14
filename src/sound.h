
void init_sound(void);
void init_beat(void);
void init_beat_new_level(void);
void run_beat(void);
void change_music(int mto);

void play_effect(int sample);
void play_effectwfvx(int sample, int f, int v, int x);
void play_musicwfvp(int sample, int f, int v, int pan);

enum {
  OVERMUSIC_L1_1,

  OVERMUSIC_L2_1,

  OVERMUSIC_L3_1,

  NO_OVERMUSICS
};

enum {
  WAV_NONE,
  WAV_BANG1,
  WAV_BANG2,
  WAV_SHOT,
  WAV_SHOT2,
  WAV_BANG3,
  WAV_BANG4,
  WAV_CHARGE,
  WAV_BOMB,
  WAV_FIRE,
  WAV_CHIRP,
  WAV_HIGHZAP,
  WAV_INTER,
  WAV_KILL,
  WAV_SWEEP,
  WAV_ROBOT,
  WAV_BEAM1,
  WAV_BEAM2,
  WAV_BEAM3,
  WAV_DOUBLE,
  WAV_LEVEL,
  WAV_BLIP,

  WAV_DRUM1,
  WAV_DRUM2,
  WAV_DRUM3,
  WAV_DRUM4,
  WAV_CYMBAL1,
  WAV_HAT1,
  WAV_HAT2,

  WAV_BLER,
  WAV_DEEPDRUM,
  WAV_SNARE,
  WAV_SNARE2,
  WAV_STONK,
  WAV_THUMP,
  WAV_WARM,
  WAV_WARM2,
  WAV_WARM3,
  WAV_WARM4,
  WAV_DOUBLEW,
  WAV_WARMUP,
  WAV_WARMUP2,
  WAV_WARMUP3,
  WAV_WARMUP4,
  WAV_CLAR,
  WAV_CLAR2,
  WAV_ACC,

  WAV_ARP_LONG,
  WAV_ARP,
  WAV_ARP2,
  WAV_ARP3,

  WAV_MELO,
  WAV_MELO2,
  WAV_MELO3,

  WAV_FLUTE,
  WAV_FLUTE2,
  WAV_FLUTE3,

  WAV_ZONE1,
  WAV_ZONE2,
  WAV_ZONE3,

  WAV_HIGH,
  WAV_LOW1,
  WAV_LOW2,

  WAV_BEEP,
  WAV_BEEP2,
  WAV_FUN0,
  WAV_FUN,
  WAV_FUN2,
  WAV_FUN3,
  WAV_ORGAN,

  NO_WAVS
};

enum {
  NOTE_0C,
  NOTE_0CS,
  NOTE_0D,
  NOTE_0DS,
  NOTE_0E,
  NOTE_0F,
  NOTE_0FS,
  NOTE_0G,
  NOTE_0GS,
  NOTE_0A,
  NOTE_0AS,
  NOTE_0B,
  NOTE_1C,
  NOTE_1CS,
  NOTE_1D,
  NOTE_1DS,
  NOTE_1E,
  NOTE_1F,
  NOTE_1FS,
  NOTE_1G,
  NOTE_1GS,
  NOTE_1A,
  NOTE_1AS,
  NOTE_1B,
  NOTE_2C,
  NOTE_2CS,
  NOTE_2D,
  NOTE_2DS,
  NOTE_2E,
  NOTE_2F,
  NOTE_2FS,
  NOTE_2G,
  NOTE_2GS,
  NOTE_2A,
  NOTE_2AS,
  NOTE_2B,
  NOTE_3C,
  NOTE_3CS,
  NOTE_3D,
  NOTE_3DS,
  NOTE_3E,
  NOTE_3F,
  NOTE_3FS,
  NOTE_3G,
  NOTE_3GS,
  NOTE_3A,
  NOTE_3AS,
  NOTE_3B,
  NOTE_4C,
  NOTE_4CS,
  NOTE_4D,
  NOTE_4DS,
  NOTE_4E,
  NOTE_4F,
  NOTE_4FS,
  NOTE_4G,
  NOTE_4GS,
  NOTE_4A,
  NOTE_4AS,
  NOTE_4B,
  NOTE_ENDNOTE

};

#define NO_TONES 68

#ifndef FROM_SOUND_C

extern int tone[NO_TONES];

#endif
