__int16 *__fastcall sub_47230(int a1)
{
  int v1; // r6
  int v2; // r4
  _BYTE *v3; // r0
  int v4; // r1
  int v5; // r3
  char *v6; // r2
  int i; // r1
  int v8; // t1
  const unsigned __int16 *v9; // r1
  int v10; // r2
  bool v11; // zf
  int v12; // r3
  __int16 *result; // r0
  char *v14; // r2
  int j; // r1
  int v16; // t1
  unsigned __int8 v17; // [sp+1Bh] [bp-21h] BYREF
  int v18; // [sp+1Ch] [bp-20h] BYREF
  int v19; // [sp+20h] [bp-1Ch] BYREF
  int v20; // [sp+24h] [bp-18h] BYREF
  char v21; // [sp+2Ch] [bp-10h] BYREF

  v1 = *(_DWORD *)(a1 + 4);
  v2 = *(_DWORD *)(v1 + 84);
  v3 = sub_39EE4(a1, (bool *)(v2 + 56), 128, &v20);
  *(_DWORD *)(v2 + 184) = v3;
  if ( v3 != (_BYTE *)&dword_14 + 3
    || sscanf(
         (const char *)(v2 + 56),
         "%2d:%2d:%2d.%c%5c%2d/%2d/%2d",
         v2 + 196,
         v2 + 200,
         v2 + 204,
         &v17,
         &v21,
         &v18,
         &v19,
         v2 + 188) != 8 )
  {
    return sub_394A0((__int16 *)v1, 2);
  }
  v4 = v18 - 1;
  if ( (unsigned int)(v18 - 1) > 0xB )
    return sub_394A0((__int16 *)v1, 6);
  v5 = v19;
  if ( v19 <= 0 )
    return sub_394A0((__int16 *)v1, 6);
  if ( (*(_DWORD *)(v2 + 188) & 3) != 0 )
  {
    v6 = (char *)&unk_975BC;
    if ( v19 <= *((_DWORD *)&unk_975BC + v4) )
    {
      if ( v18 == 1 )
        goto LABEL_12;
      for ( i = 31; ; i = v8 )
      {
        v5 += i;
        if ( &a127001[4 * v18 + 4] == v6 )
          break;
        v8 = *((_DWORD *)v6 + 1);
        v6 += 4;
      }
      goto LABEL_11;
    }
    return sub_394A0((__int16 *)v1, 6);
  }
  if ( v19 > *((_DWORD *)&unk_975BC + v4 + 12) )
    return sub_394A0((__int16 *)v1, 6);
  if ( v18 != 1 )
  {
    v14 = (char *)&unk_975EC;
    for ( j = 31; ; j = v16 )
    {
      v5 += j;
      if ( v14 == (char *)&unk_975E4 + 4 * v18 )
        break;
      v16 = *((_DWORD *)v14 + 1);
      v14 += 4;
    }
LABEL_11:
    v19 = v5;
  }
LABEL_12:
  *(_DWORD *)(v2 + 192) = v5;
  v9 = *_ctype_b_loc();
  v10 = v9[v17];
  v11 = (v10 & 0x800) == 0;
  if ( (v10 & 0x800) != 0 )
  {
    v10 = 100000000;
    v12 = v17 - 48;
  }
  else
  {
    v12 = 3;
  }
  if ( v11 )
  {
    *(_BYTE *)(v2 + 40) = v12;
  }
  else
  {
    v12 *= v10;
    LOBYTE(v9) = 0;
  }
  if ( !v11 )
  {
    *(_BYTE *)(v2 + 40) = (_BYTE)v9;
    *(_DWORD *)(v2 + 208) = v12;
  }
  result = (__int16 *)sub_39CF8((_DWORD *)v2);
  if ( !result )
    return sub_394A0((__int16 *)v1, 6);
  return result;
}
