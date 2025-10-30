int __fastcall sub_869AC(int a1)
{
  int v2; // r6
  int v3; // r7
  int v4; // r0
  void **v6[2]; // [sp+4h] [bp-18h] BYREF
  int v7; // [sp+Ch] [bp-10h]
  int v8; // [sp+10h] [bp-Ch]

  LOWORD(v3) = (unsigned __int16)&loc_20020;
  HIWORD(v3) = 64;
  while ( 1 )
  {
    v6[0] = 0;
    v6[1] = 0;
    v7 = 4;
    v8 = 0;
    v4 = sub_867CC((_DWORD *)a1, (int *)v6);
    if ( !v4 )
      v4 = sub_7F19C((_DWORD *)a1, v6);
    if ( v4 == -1 )
      break;
    if ( v4 == 1 )
      return 0;
    if ( (v7 & (unsigned int)&loc_20020) == 0 )
      goto LABEL_11;
    HIWORD(v2) = (unsigned int)&loc_40020 >> 16;
    LOWORD(v2) = (unsigned __int16)&loc_20020;
    if ( (v7 & v2) == 0x20 )
      goto LABEL_11;
    if ( (v7 & v3) == 0x400000 || (~v7 & 0x800020) == 0 )
    {
      --*(_WORD *)((char *)v6[0] + (unsigned int)&byte_9[5]);
LABEL_11:
      if ( sub_7DC70(a1, v6) )
        break;
    }
  }
  if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
    (*(void (__fastcall **)(int, int))(a1 + 84))(a1, 1);
  return -1;
}
