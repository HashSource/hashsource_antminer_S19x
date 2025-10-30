int __fastcall sub_3C92C(struct sockaddr *a1, int a2, int a3)
{
  unsigned int v3; // r8
  bool v4; // zf
  unsigned int v5; // r7
  int v6; // r10
  int v7; // r9
  unsigned int v8; // r7
  int *i; // r11
  int v10; // r2
  int v11; // r12
  char v12; // r3
  int v17; // [sp+18h] [bp-3Ch] BYREF
  int v18; // [sp+1Ch] [bp-38h]
  int v19; // [sp+20h] [bp-34h]
  int v20; // [sp+24h] [bp-30h]
  int v21; // [sp+28h] [bp-2Ch]
  int v22; // [sp+2Ch] [bp-28h]
  int v23; // [sp+30h] [bp-24h] BYREF
  int v24; // [sp+34h] [bp-20h]
  int v25; // [sp+38h] [bp-1Ch]
  int v26; // [sp+3Ch] [bp-18h]
  int v27; // [sp+40h] [bp-14h]
  int v28; // [sp+44h] [bp-10h]
  int v29; // [sp+48h] [bp-Ch]

  v3 = __rev16(*(unsigned __int16 *)(a3 + 6)) & 0xFFF;
  if ( v3 > 0x18 )
    return sub_3AD58(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 3);
  v5 = __rev16(*(unsigned __int16 *)(a3 + 4)) & 0xFFF;
  v4 = v5 == 0;
  LOWORD(v5) = v5 - 1;
  if ( !v4 )
  {
    v6 = a3 + 8;
    v7 = a3 + 8;
    do
    {
      v17 = 0;
      v18 = 0;
      v19 = 0;
      v20 = 0;
      v21 = 0;
      v22 = 0;
      _memcpy_chk(&v17, v7);
      v23 = 0;
      v24 = 0;
      v25 = 0;
      v26 = 0;
      v27 = 0;
      v28 = 0;
      v29 = 0;
      if ( dword_BCB2C && v18 )
      {
        LOWORD(v23) = 10;
        v25 = v19;
        v26 = v20;
        v27 = v21;
        v28 = v22;
      }
      else
      {
        LOWORD(v23) = 2;
        v24 = v17;
      }
      if ( !sub_31A44((unsigned __int16 *)&v23, 0, 0, -1, 0, 0) )
      {
        v10 = a3;
        v11 = 4;
        v12 = *(_BYTE *)(a3 + 3);
        return sub_3AD58(a1, a2, *(_BYTE *)(v10 + 2), v12, v11);
      }
      v5 = (unsigned __int16)(v5 - 1);
      v7 += v3;
    }
    while ( v5 != 0xFFFF );
    v8 = __rev16(*(unsigned __int16 *)(a3 + 4)) & 0xFFF;
    v4 = v8 == 0;
    LOWORD(v8) = v8 - 1;
    if ( !v4 )
    {
      do
      {
        v17 = 0;
        v18 = 0;
        v19 = 0;
        v20 = 0;
        v21 = 0;
        v22 = 0;
        _memcpy_chk(&v17, v6);
        v24 = 0;
        v25 = 0;
        v26 = 0;
        v27 = 0;
        v28 = 0;
        v29 = 0;
        if ( dword_BCB2C && v18 )
        {
          LOWORD(v23) = 10;
          v25 = v19;
          v26 = v20;
          v27 = v21;
          v28 = v22;
        }
        else
        {
          LOWORD(v23) = 2;
          v24 = v17;
        }
        HIWORD(v23) = 31488;
        for ( i = (int *)sub_31A44((unsigned __int16 *)&v23, 0, 0, -1, 0, 0);
              i;
              i = (int *)sub_31A44((unsigned __int16 *)&v23, 0, i, -1, 0, 0) )
        {
          sub_32B18(i);
        }
        v8 = (unsigned __int16)(v8 - 1);
        v6 += v3;
      }
      while ( v8 != 0xFFFF );
    }
  }
  v10 = a3;
  v11 = 0;
  v12 = *(_BYTE *)(a3 + 3);
  return sub_3AD58(a1, a2, *(_BYTE *)(v10 + 2), v12, v11);
}
