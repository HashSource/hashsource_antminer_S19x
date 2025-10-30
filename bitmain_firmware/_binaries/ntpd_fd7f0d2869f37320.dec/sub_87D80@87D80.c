int __fastcall sub_87D80(unsigned int a1, int a2)
{
  char *v3; // r7
  int result; // r0
  int v5; // r3
  unsigned int v6; // r3
  void **v7[2]; // [sp+4h] [bp-14h] BYREF
  int v8; // [sp+Ch] [bp-Ch]
  int v9; // [sp+10h] [bp-8h]

  v3 = *(char **)(a2 + 24);
  v7[0] = 0;
  v7[1] = 0;
  result = _stack_chk_guard;
  v9 = 0;
  v8 = 2;
  if ( a1 > 0xF )
  {
    v5 = *(_DWORD *)(a2 + 16);
    if ( (v5 & 8) == 0 )
    {
      if ( (v5 & 0x8000) == 0 )
        v8 = 4;
      if ( (*(_DWORD *)(a1 + 12) & 0x40000) == 0
        || sub_87008(a1, v3, (int *)v7)
        || (result = sub_7F820((_DWORD *)a1, v7)) != 0 )
      {
        fprintf(stderr, off_B94D4, *(_DWORD *)(a1 + 28), v3);
        (*(void (__fastcall **)(unsigned int, int))(a1 + 84))(a1, 1);
        exit(1);
      }
      v6 = (unsigned int)sub_20020 & v8;
      if ( (*(_DWORD *)(a1 + 12) & 0x8000) == 0 )
      {
        if ( v6 && (v8 & 0x40020) != 0x20 && (v8 & 0x400020) != 0x400000 && (v8 & 0x800020) != 0x800020 )
          return result;
        return sub_7F0F4(a1, v7);
      }
      if ( v6 == 0x20000 || (_UNKNOWN *)((unsigned int)&loc_40020 & v8) == &loc_40020 )
        return sub_7F0F4(a1, v7);
    }
  }
  return result;
}
