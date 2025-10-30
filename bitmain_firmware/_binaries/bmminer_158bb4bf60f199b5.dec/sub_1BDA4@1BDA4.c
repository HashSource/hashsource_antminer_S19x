int __fastcall sub_1BDA4(int a1, int a2)
{
  int v3; // r10
  int v4; // r5
  int v5; // r4
  int v6; // r10
  char *v7; // r2
  char v10[4]; // [sp+8h] [bp-814h] BYREF
  int v11; // [sp+Ch] [bp-810h]
  int v12; // [sp+10h] [bp-80Ch]
  int v13; // [sp+14h] [bp-808h]
  _DWORD v14[513]; // [sp+18h] [bp-804h] BYREF

  v3 = 0;
  do
  {
    while ( 1 )
    {
      v4 = v3 + 1;
      v5 = *(_DWORD *)(dword_A0D68 + 4 * v3 + 4);
      if ( v5 == 1 )
        break;
      ++v3;
      if ( v4 == 16 )
        return a1;
    }
    v14[0] = 123;
    memset(&v14[1], 0, 0x7FCu);
    v12 = 0;
    v13 = 0;
    *(_DWORD *)v10 = 0;
    v11 = 0;
    sprintf(v10, "chain_xtime%d", v3 + 1);
    v6 = dword_A0D68 + v3;
    dword_A0DC8[256 * v4 - 256] = 0;
    if ( *(unsigned __int8 *)(v6 + 12918) > 1u )
    {
      v7 = (char *)&unk_A09C8 + 1024 * v4;
      do
      {
        *((_DWORD *)v7 + 1) = 0;
        v7 += 4;
        ++v5;
      }
      while ( *(unsigned __int8 *)(v6 + 12918) > v5 );
    }
    v3 = v4;
    *(_WORD *)((char *)v14 + strlen((const char *)v14)) = 125;
    a1 = sub_43D2C(a1, v10, v14, a2);
  }
  while ( v4 != 16 );
  return a1;
}
