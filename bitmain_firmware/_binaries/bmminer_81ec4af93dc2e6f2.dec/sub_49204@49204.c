int __fastcall sub_49204(_BYTE *a1, unsigned __int8 *a2, int a3)
{
  bool v3; // cc
  int v4; // r3
  int v8; // r3
  int v9; // r7
  unsigned __int8 *v10; // r8
  unsigned __int8 *v11; // r4
  char *v12; // r11
  int v13; // r6
  int v14; // t1
  char v15; // r5
  char v16; // r4
  int v17; // [sp+Ch] [bp-808h]
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v3 = (int)a1 <= 0;
  if ( a1 )
    v3 = a3 <= 0;
  v4 = v3;
  if ( !a2 )
    v4 = 1;
  if ( v4 )
  {
    if ( (unsigned int)off_AFC24 > 4 )
    {
      snprintf(s, 0x800u, "s2hex para error dst(%p), src(%p), inlen(%d)\n", a1, a2, a3);
      sub_3AF5C(4, s, 0, v8);
    }
    return -1;
  }
  else
  {
    v9 = a3 >> 1;
    v17 = a3 & 1;
    if ( a3 >> 1 )
    {
      v10 = &a2[2 * v9];
      v11 = a2;
      v12 = a1 - 1;
      do
      {
        v13 = v11[1];
        v14 = *v11;
        v11 += 2;
        v15 = sub_49188(v14);
        *++v12 = sub_49188(v13) ^ (16 * v15);
      }
      while ( v11 != v10 );
    }
    if ( v17 )
    {
      v16 = sub_49188(a2[2 * v9]);
      a1[v9] = sub_49128(0) ^ (16 * v16);
    }
    return v9 + v17;
  }
}
