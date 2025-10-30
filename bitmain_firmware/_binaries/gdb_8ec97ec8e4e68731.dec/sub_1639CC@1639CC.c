char *__fastcall sub_1639CC(int *a1, int a2)
{
  struct obstack *v4; // r5
  int chunk_limit; // r1
  char *next_free; // r3
  char v7; // r2
  char *object_base; // r4
  char *v9; // r3
  int alignment_mask; // r0
  bool v11; // zf
  int v12; // r3
  int v13; // r1
  void *v14; // r0
  int v15; // r12
  int v16; // r2
  int v17; // r8
  int v18; // lr
  int v19; // r6

  v4 = (struct obstack *)sub_93028(0x2Cu);
  obstack_begin(v4, 0, 0, (void *(*)(int))sub_93028, sub_163848);
  chunk_limit = (int)v4->chunk_limit;
  next_free = v4->next_free;
  v7 = chunk_limit - (_BYTE)next_free;
  if ( (unsigned int)(chunk_limit - (_DWORD)next_free) < 0x310 )
  {
    obstack_newchunk(v4, 784);
    next_free = v4->next_free;
    chunk_limit = (int)v4->chunk_limit;
  }
  object_base = v4->object_base;
  v9 = next_free + 784;
  alignment_mask = v4->alignment_mask;
  v4->next_free = v9;
  v11 = v9 == object_base;
  if ( v9 == object_base )
    v7 = *((_BYTE *)v4 + 40);
  v12 = (unsigned int)&v9[alignment_mask] & ~alignment_mask;
  v4->next_free = (char *)v12;
  if ( v11 )
    *((_BYTE *)v4 + 40) = v7 | 2;
  if ( v12 - (unsigned int)v4->chunk > chunk_limit - (unsigned int)v4->chunk )
  {
    v12 = chunk_limit;
    v4->next_free = (char *)chunk_limit;
  }
  v4->object_base = (char *)v12;
  memset(object_base, 0, 0x310u);
  *((_DWORD *)object_base + 1) = v4;
  v13 = dword_487780;
  *((_DWORD *)object_base + 9) = dword_487780;
  v14 = sub_163938((int)object_base, 4 * v13);
  v15 = a1[1];
  v16 = *a1;
  v17 = a1[2];
  v18 = a1[5];
  v19 = a1[6];
  *((_DWORD *)object_base + 34) = 753684;
  *((_DWORD *)object_base + 10) = v14;
  *((_DWORD *)object_base + 12) = 16;
  *((_DWORD *)object_base + 17) = 16;
  *((_DWORD *)object_base + 13) = 32;
  *((_DWORD *)object_base + 14) = 32;
  *((_DWORD *)object_base + 19) = 32;
  *((_DWORD *)object_base + 25) = 32;
  *((_DWORD *)object_base + 28) = 32;
  *((_DWORD *)object_base + 27) = sub_B80BC;
  *((_DWORD *)object_base + 15) = 64;
  *((_DWORD *)object_base + 16) = 64;
  *((_DWORD *)object_base + 21) = 64;
  *((_DWORD *)object_base + 23) = 64;
  *((_DWORD *)object_base + 7) = a2;
  *((_DWORD *)object_base + 2) = v16;
  *((_DWORD *)object_base + 3) = v15;
  *((_DWORD *)object_base + 4) = v17;
  *((_DWORD *)object_base + 11) = v15 == 0;
  *((_DWORD *)object_base + 5) = v18;
  *((_DWORD *)object_base + 6) = v19;
  *((_DWORD *)object_base + 26) = -1;
  *((_DWORD *)object_base + 31) = -1;
  *((_DWORD *)object_base + 38) = -1;
  *((_DWORD *)object_base + 43) = -1;
  *((_DWORD *)object_base + 44) = -1;
  *((_DWORD *)object_base + 45) = -1;
  *((_DWORD *)object_base + 46) = -1;
  *((_DWORD *)object_base + 54) = -1;
  *((_DWORD *)object_base + 63) = sub_B800C;
  *((_DWORD *)object_base + 64) = sub_B800C;
  *((_DWORD *)object_base + 47) = sub_B7FEC;
  *((_DWORD *)object_base + 48) = sub_B7FEC;
  *((_DWORD *)object_base + 49) = sub_B7FEC;
  *((_DWORD *)object_base + 50) = sub_B7FEC;
  *((_DWORD *)object_base + 59) = sub_181964;
  *((_DWORD *)object_base + 60) = sub_182330;
  *((_DWORD *)object_base + 62) = sub_B7F08;
  *((_DWORD *)object_base + 71) = sub_15B20C;
  *((_DWORD *)object_base + 83) = sub_B8CE0;
  *((_DWORD *)object_base + 72) = sub_15B254;
  *((_DWORD *)object_base + 75) = sub_B8CF8;
  *((_DWORD *)object_base + 80) = sub_B8CBC;
  *((_DWORD *)object_base + 85) = sub_1AE824;
  *((_DWORD *)object_base + 86) = sub_1AE8A0;
  *((_DWORD *)object_base + 99) = sub_B7FDC;
  *((_DWORD *)object_base + 89) = sub_B8170;
  *((_DWORD *)object_base + 96) = sub_B8160;
  *((_DWORD *)object_base + 98) = sub_B7FE4;
  *((_DWORD *)object_base + 103) = &loc_B8E80;
  *((_DWORD *)object_base + 104) = &loc_B7F94;
  *((_DWORD *)object_base + 109) = nullsub_53;
  *((_DWORD *)object_base + 67) = sub_B8158;
  *((_DWORD *)object_base + 70) = sub_15B440;
  *((_DWORD *)object_base + 105) = sub_B7F9C;
  *((_DWORD *)object_base + 106) = sub_B7FA4;
  *((_DWORD *)object_base + 107) = sub_B7FAC;
  *((_DWORD *)object_base + 82) = 0;
  *((_DWORD *)object_base + 56) = 4;
  *((_DWORD *)object_base + 58) = sub_B7FB4;
  *((_DWORD *)object_base + 110) = nullsub_54;
  *((_DWORD *)object_base + 111) = nullsub_55;
  *((_DWORD *)object_base + 138) = 0;
  *((_DWORD *)object_base + 139) = 0;
  *((_DWORD *)object_base + 140) = 0;
  *((_DWORD *)object_base + 181) = 0;
  *((_DWORD *)object_base + 119) = sub_1E0754;
  *((_DWORD *)object_base + 132) = sub_B8D18;
  *((_DWORD *)object_base + 137) = sub_B7EBC;
  *((_DWORD *)object_base + 170) = sub_B8CA0;
  *((_DWORD *)object_base + 171) = sub_B8CA8;
  *((_DWORD *)object_base + 172) = sub_B8DDC;
  *((_DWORD *)object_base + 173) = sub_EF438;
  *((_DWORD *)object_base + 174) = sub_EF448;
  *((_DWORD *)object_base + 177) = sub_B8CE8;
  *((_DWORD *)object_base + 180) = sub_1B8760;
  *((_DWORD *)object_base + 182) = sub_B8D00;
  *((_DWORD *)object_base + 183) = sub_B8D08;
  *((_DWORD *)object_base + 184) = sub_B8D10;
  *((_DWORD *)object_base + 188) = sub_B8D6C;
  *((_DWORD *)object_base + 112) = nullsub_56;
  *((_DWORD *)object_base + 117) = sub_B8004;
  *((_DWORD *)object_base + 186) = sub_BC494;
  *((_DWORD *)object_base + 187) = sub_B8178;
  *((_DWORD *)object_base + 189) = nullsub_57;
  *((_DWORD *)object_base + 190) = sub_B8D80;
  *((_DWORD *)object_base + 191) = sub_B8DC4;
  *((_DWORD *)object_base + 192) = sub_B8DD4;
  return object_base;
}
