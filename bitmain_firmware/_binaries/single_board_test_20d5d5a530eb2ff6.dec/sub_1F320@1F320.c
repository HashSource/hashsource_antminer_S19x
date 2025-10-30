int __fastcall sub_1F320(int c)
{
  _DWORD *v2; // lr
  char *v3; // r4
  char *v4; // r3

  if ( !c )
    memset(&unk_2337B0, 0, (size_t)&unk_3C9AB0);
  v2 = (_DWORD *)(dword_223680 + 16 * c);
  v3 = &byte_2333A8[(_DWORD)&loc_40A50 * c];
  v3[1032] = 0;
  v3[1033] = 0;
  v3[1034] = 0;
  v3[1035] = 0;
  v3[1036] = 0;
  v3[1038] = 1;
  v3[1039] = 1;
  *((_DWORD *)v3 + 264) = v2[84];
  *((_DWORD *)v3 + 265) = v2[86];
  *((_DWORD *)v3 + 267) = v2[87];
  *((_DWORD *)v3 + 266) = v2[85];
  memset((char *)&unk_2337B0 + (_DWORD)&loc_40A50 * c + 264240, 0, 0x100u);
  memset((char *)&unk_2337B0 + (_DWORD)&loc_40A50 * c + 264496, 1, 0x100u);
  *(_DWORD *)((char *)&unk_2337B0 + (_DWORD)&loc_40A50 * c + 264752) = 0;
  v4 = (char *)&unk_2337B0 + (_DWORD)&loc_40A50 * c + 264760;
  *(_DWORD *)((char *)&unk_2337B0 + (_DWORD)&loc_40A50 * c + 264756) = 16843009;
  *(_DWORD *)(v4 + 2) = -2122219135;
  *(_DWORD *)(v4 + 6) = -2122219135;
  *(_DWORD *)((char *)&unk_2337B0 + (_DWORD)&loc_40A50 * c + 264770) = -2122219135;
  v3[265808] = -1;
  return sub_1EB3C(c);
}
