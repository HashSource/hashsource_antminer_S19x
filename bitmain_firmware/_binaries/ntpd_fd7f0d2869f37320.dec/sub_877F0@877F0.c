int __fastcall sub_877F0(int a1)
{
  int v2; // r0
  void **v4[2]; // [sp+Ch] [bp-14h] BYREF
  int v5; // [sp+14h] [bp-Ch]
  int v6; // [sp+18h] [bp-8h]

  while ( 1 )
  {
    v4[0] = 0;
    v4[1] = 0;
    v5 = 4;
    v6 = 0;
    v2 = sub_874D4((_DWORD *)a1, (int *)v4);
    if ( !v2 )
      v2 = sub_80694((_DWORD *)a1, v4);
    if ( v2 == -1 )
      break;
    if ( v2 == 1 )
      return 0;
    if ( ((unsigned int)sub_20020 & v5) == 0 || ((unsigned int)&loc_40020 & v5) == 0x20 )
      goto LABEL_10;
    if ( (v5 & 0x400020) == 0x400000 || (v5 & 0x800020) == 0x800020 )
    {
      --*(_WORD *)((char *)v4[0] + (unsigned int)&byte_9[5]);
LABEL_10:
      if ( sub_7F0F4(a1, v4) )
        break;
    }
  }
  if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
    (*(void (__fastcall **)(int, int))(a1 + 84))(a1, 1);
  return -1;
}
