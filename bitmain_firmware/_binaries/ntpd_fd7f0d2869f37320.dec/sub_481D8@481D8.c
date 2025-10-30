int __fastcall sub_481D8(int a1)
{
  int v1; // r6
  int v2; // r4
  _BYTE *v3; // r0
  int result; // r0
  int v5; // r12
  int v6; // r3
  char *v7; // r2
  int v8; // t1
  const unsigned __int16 *v9; // r1
  int v10; // r2
  bool v11; // zf
  int v12; // r3
  char *v13; // r2
  int v14; // t1
  unsigned __int8 v15; // [sp+1Bh] [bp-21h] BYREF
  int v16; // [sp+1Ch] [bp-20h] BYREF
  int v17; // [sp+20h] [bp-1Ch] BYREF
  int v18; // [sp+24h] [bp-18h] BYREF
  char v19; // [sp+2Ch] [bp-10h] BYREF

  v1 = *(_DWORD *)(a1 + 4);
  v2 = *(_DWORD *)(v1 + 84);
  v3 = sub_3A6D4(a1, (bool *)(v2 + 56), 128, &v18);
  *(_DWORD *)(v2 + 184) = v3;
  if ( v3 != (_BYTE *)&dword_14 + 3
    || sscanf(
         (const char *)(v2 + 56),
         "%2d:%2d:%2d.%c%5c%2d/%2d/%2d",
         v2 + 196,
         v2 + 200,
         v2 + 204,
         &v15,
         &v19,
         &v16,
         &v17,
         v2 + 188) != 8 )
  {
    return sub_39C88(v1, 2);
  }
  v5 = v16 - 1;
  if ( (unsigned int)(v16 - 1) > 0xB )
    return sub_39C88(v1, 6);
  v6 = v17;
  if ( v17 <= 0 )
    return sub_39C88(v1, 6);
  if ( (*(_DWORD *)(v2 + 188) & 3) != 0 )
  {
    if ( v17 <= *((_DWORD *)&unk_98B80 + v5) )
    {
      if ( v16 != 1 )
      {
        v7 = "1";
        do
        {
          v8 = *((_DWORD *)v7 + 1);
          v7 += 4;
          v6 += v8;
        }
        while ( v7 != (char *)&unk_98B80 + 4 * v16 + -8 );
LABEL_13:
        v17 = v6;
        goto LABEL_14;
      }
      goto LABEL_14;
    }
    return sub_39C88(v1, 6);
  }
  if ( v17 > *((_DWORD *)&unk_98B80 + v5 + 12) )
    return sub_39C88(v1, 6);
  if ( v16 != 1 )
  {
    v13 = (char *)&unk_98BAC;
    do
    {
      v14 = *((_DWORD *)v13 + 1);
      v13 += 4;
      v6 += v14;
    }
    while ( v13 != (char *)&unk_98B80 + 4 * v16 + 40 );
    goto LABEL_13;
  }
LABEL_14:
  *(_DWORD *)(v2 + 192) = v6;
  v9 = *_ctype_b_loc();
  LOWORD(v10) = v9[v15];
  v11 = (v10 & 0x800) == 0;
  if ( (v10 & 0x800) != 0 )
  {
    v12 = v15 - 48;
    LOWORD(v10) = -7936;
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
    HIWORD(v10) = 1525;
    LOBYTE(v9) = 0;
    v12 *= v10;
  }
  if ( !v11 )
  {
    *(_BYTE *)(v2 + 40) = (_BYTE)v9;
    *(_DWORD *)(v2 + 208) = v12;
  }
  result = sub_3A4E8((_DWORD *)v2);
  if ( !result )
    return sub_39C88(v1, 6);
  return result;
}
