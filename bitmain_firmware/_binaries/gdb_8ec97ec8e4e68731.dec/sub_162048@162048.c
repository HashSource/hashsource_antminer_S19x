int __fastcall sub_162048(const char **a1, int *a2)
{
  int v4; // r0
  int i; // r4
  int v6; // r3
  int v7; // r0
  const char *v8; // r4
  int v9; // r0
  const char *v10; // r0
  const char *v11; // r5
  int v12; // r0
  const char *v13; // r0
  _BYTE v15[8196]; // [sp+8h] [bp-2004h] BYREF

  v4 = sub_2A8A04(a1, a2, 0, 0, 0);
  if ( v4 )
  {
    v11 = *a1;
    v12 = sub_2A6910(v4);
    v13 = (const char *)sub_2A6920(v12);
    sub_946B0("Problem reading \"%s\" for CRC: %s", v11, v13);
    return 0;
  }
  else
  {
    for ( i = 0; ; i = sub_2AD1F8() )
    {
      v6 = sub_2A87D8(v15, 0x2000, a1);
      v7 = i;
      if ( v6 == -1 )
      {
        v8 = *a1;
        v9 = sub_2A6910(v7);
        v10 = (const char *)sub_2A6920(v9);
        sub_946B0("Problem reading \"%s\" for CRC: %s", v8, v10);
        return 0;
      }
      if ( !v6 )
        break;
    }
    *a2 = i;
    return 1;
  }
}
