int __fastcall sub_1BED0(int a1, int a2)
{
  int v4; // r4
  int v5; // r3
  char v7[20]; // [sp+0h] [bp-28h] BYREF
  _BYTE v8[20]; // [sp+14h] [bp-14h] BYREF

  v4 = 0;
  do
  {
    while ( 1 )
    {
      v5 = dword_A0D68 + 4 * v4++;
      if ( *(_DWORD *)(v5 + 4) == 1 )
        break;
      if ( v4 == 16 )
        return a1;
    }
    sprintf(v7, "chain_offside_%d", v4);
    a1 = sub_43D2C(a1, v7, v8, a2);
  }
  while ( v4 != 16 );
  return a1;
}
