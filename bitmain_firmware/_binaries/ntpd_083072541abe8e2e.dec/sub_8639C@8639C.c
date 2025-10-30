int __fastcall sub_8639C(unsigned int a1, int a2)
{
  bool v2; // cc
  int result; // r0
  int v5; // r3
  char *v6; // r8
  unsigned int v7; // r3
  void **v8[2]; // [sp+4h] [bp-14h] BYREF
  int v9; // [sp+Ch] [bp-Ch]
  int v10; // [sp+10h] [bp-8h]

  v2 = a1 > 0xF;
  result = 2;
  v8[0] = 0;
  v8[1] = 0;
  v10 = 0;
  v9 = 2;
  if ( v2 )
  {
    v5 = *(_DWORD *)(a2 + 16);
    if ( (v5 & 8) == 0 )
    {
      v6 = *(char **)(a2 + 24);
      if ( (v5 & 0x8000) == 0 )
        v9 = 4;
      if ( (*(_DWORD *)(a1 + 12) & 0x40000) == 0
        || sub_85A98(a1, v6, (int *)v8)
        || (result = sub_7E3DC((_DWORD *)a1, v8)) != 0 )
      {
        fprintf(stderr, off_B84D0[0], *(_DWORD *)(a1 + 28), v6);
        (*(void (__fastcall **)(unsigned int, int))(a1 + 84))(a1, 1);
        exit(1);
      }
      v7 = (unsigned int)&loc_20020 & v9;
      if ( (*(_DWORD *)(a1 + 12) & 0x8000) == 0 )
      {
        if ( v7 && (v9 & 0x40020) != 0x20 && (v9 & 0x400020) != 0x400000 && (~v9 & 0x800020) != 0 )
          return result;
        return sub_7DC70(a1, v8);
      }
      if ( v7 == 0x20000 || (~v9 & 0x40020) == 0 )
        return sub_7DC70(a1, v8);
    }
  }
  return result;
}
