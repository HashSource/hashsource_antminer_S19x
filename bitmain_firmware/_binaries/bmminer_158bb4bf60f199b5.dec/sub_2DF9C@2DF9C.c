int __fastcall sub_2DF9C(int a1, int a2)
{
  unsigned int v4; // r4
  int v5; // r9
  int v6; // r1
  char *v7; // r3
  int v8; // r0
  int v9; // r2
  int v10; // t1
  int v11; // r0
  char v13; // [sp+4h] [bp-988h] BYREF
  _BYTE s[384]; // [sp+8h] [bp-984h] BYREF
  char v15[2052]; // [sp+188h] [bp-804h] BYREF

  memset(s, 0, sizeof(s));
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(v15, 0x800u, "dump chain %u, asic cp pm data:\n", a1);
    sub_47AB4(3, v15, 0);
  }
  v4 = 0;
  do
  {
    memset(s, 0, sizeof(s));
    v5 = sub_2DC90(a1, (unsigned __int8)v4, (int)s);
    if ( v5 )
    {
      *(_BYTE *)(a2 + 8 * v4 + 4) = 1;
      if ( (unsigned int)dword_9E31C > 3 )
      {
        snprintf(v15, 0x800u, "dump chain %u, asic %u cp pm data failed\n", a1, v4);
        sub_47AB4(3, v15, 0);
      }
    }
    v6 = 0;
    v7 = &v13;
    v8 = 0;
    do
    {
      v10 = *((_DWORD *)v7 + 1);
      v7 += 4;
      v9 = v10;
      if ( v10 )
        v8 += v9;
      else
        ++v6;
    }
    while ( &s[380] != v7 );
    if ( v6 == 96 )
      v11 = 0;
    else
      v11 = sub_77070(v8, 96 - v6, v9);
    *(_DWORD *)(a2 + 8 * v4) = v11;
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(v15, 0x800u, "[%3d]:%-6u", v4, v11);
      sub_47EC8(3, v15, 0);
    }
    ++v4;
    if ( v4 == 6 * (v4 / 6) && (unsigned int)dword_9E31C > 3 )
    {
      strcpy(v15, "\n");
      sub_47EC8(3, v15, v4 % 6);
    }
  }
  while ( v4 != 78 );
  if ( (unsigned int)dword_9E31C > 3 )
  {
    strcpy(v15, "\n");
    sub_47EC8(3, v15, 0);
  }
  return v5;
}
