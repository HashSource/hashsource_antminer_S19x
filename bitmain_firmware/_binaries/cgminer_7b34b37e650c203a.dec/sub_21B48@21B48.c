int __fastcall sub_21B48(_DWORD *a1, _BYTE *a2)
{
  int v2; // r8
  int v3; // r9
  int v4; // r10
  int v5; // r11
  int v6; // r3
  unsigned __int8 *v9; // r6
  bool v10; // cf
  int v11; // r2
  int v12; // r7
  size_t v13; // r2
  unsigned __int8 *v14; // r0
  int v15; // r3
  int v16; // r7
  int result; // r0
  int *v18; // r3
  int *v19; // r5
  int v20; // t1
  int v21; // [sp+4h] [bp-8h]

  v6 = a1[1];
  v9 = (unsigned __int8 *)(a1 + 2);
  v10 = (v6 & 0x3Fu) >= 0x38;
  if ( (v6 & 0x3Fu) >= 0x38 )
    v11 = 128;
  else
    v11 = 64;
  v12 = v6 + *a1;
  v13 = v11 - v6;
  v14 = &v9[v6];
  if ( (v6 & 0x3Fu) >= 0x38 )
    v15 = 124;
  else
    v15 = 60;
  v16 = 8 * v12;
  if ( !v10 )
    v2 = 61;
  v21 = v15;
  if ( v10 )
    v2 = 125;
  else
    v3 = 62;
  if ( v10 )
    v3 = 126;
  else
    v4 = 63;
  if ( v10 )
    v4 = 127;
  else
    v5 = 1;
  if ( v10 )
    v5 = 2;
  memset(v14, 0, v13);
  *((_BYTE *)a1 + a1[1] + 8) = 0x80;
  v9[v4] = v16;
  v9[v3] = BYTE1(v16);
  v9[v2] = BYTE2(v16);
  v9[v21] = HIBYTE(v16);
  result = sub_21870((int)a1, v9, v5);
  v18 = a1 + 34;
  v19 = a1 + 42;
  do
  {
    a2[3] = *v18;
    v20 = *v18++;
    a2[2] = BYTE1(v20);
    a2[1] = *((_WORD *)v18 - 1);
    *a2 = *((_BYTE *)v18 - 1);
    a2 += 4;
  }
  while ( v19 != v18 );
  return result;
}
