int sub_206E0()
{
  int v0; // r7
  int v1; // r10
  int v2; // r4
  int v3; // r12
  int v4; // lr
  int v5; // r5
  int v6; // r9
  int v7; // r0
  int v8; // r3
  bool v9; // zf
  int v10; // r3
  int v11; // r3
  int v12; // r2
  int result; // r0
  bool v14; // cc
  bool v15; // cc
  int v16; // [sp+20h] [bp-81Ch]
  int v17; // [sp+24h] [bp-818h]
  _DWORD v18[4]; // [sp+28h] [bp-814h] BYREF
  char s[2052]; // [sp+38h] [bp-804h] BYREF

  v0 = 0;
  sub_175F4(v18);
  v1 = 0;
  v2 = 0;
  v16 = sub_169E4();
  v17 = sub_16B30();
  do
  {
    while ( 1 )
    {
      v5 = v2;
      if ( *(_DWORD *)(dword_A0D68 + 4 * v2 + 4) == 1 )
        break;
      if ( ++v2 == 16 )
        goto LABEL_11;
    }
    v6 = sub_16C84(v2);
    v7 = sub_16DE4(v2);
    v8 = dword_A0638[v2];
    v9 = v8 == 0;
    v10 = v6 - v8;
    if ( v9 )
    {
      v10 = dword_A0638[v2 + 16];
      v3 = v10;
      if ( v10 )
      {
        v3 = v7 - v10;
        v10 = v6;
      }
    }
    else
    {
      v3 = v7 - dword_A0638[v2 + 16];
    }
    ++v2;
    if ( v1 < v10 )
      v1 = v10;
    if ( v0 < v3 )
      v0 = v3;
    dword_A0638[v5] = v6;
    dword_A0638[v5 + 16] = v7;
  }
  while ( v2 != 16 );
LABEL_11:
  v11 = v18[0];
  if ( !byte_A06B8 )
    v11 = v18[1];
  v12 = v18[2];
  result = v17;
  if ( byte_A06B8 )
    v4 = 95;
  else
    v12 = v18[3];
  if ( byte_A06B8 )
    v3 = 80;
  else
    v4 = 98;
  if ( !byte_A06B8 )
    v3 = 85;
  v14 = v17 <= v4;
  if ( v17 <= v4 )
    v14 = v16 <= v3;
  if ( !v14 )
    goto LABEL_28;
  v15 = v0 <= v12;
  if ( v0 <= v12 )
    v15 = v1 <= v11;
  if ( !v15 )
  {
LABEL_28:
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(
        s,
        0x800u,
        "over max temp, pcb temp %d (max %d), chip temp %d(max %d) pcb temp rise %d (max %d) chip temp rise %d (max %d)\n",
        v16,
        v3,
        v17,
        v4,
        v1,
        v11,
        v0,
        v12);
      sub_47AB4(3, s, 0);
    }
    return sub_226C0(14, "over max temp");
  }
  return result;
}
