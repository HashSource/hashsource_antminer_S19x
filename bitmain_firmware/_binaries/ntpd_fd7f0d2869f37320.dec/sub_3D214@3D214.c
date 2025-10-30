int __fastcall sub_3D214(struct sockaddr *a1, int a2, int a3)
{
  unsigned int v3; // r7
  int v4; // r6
  int v5; // r9
  _BOOL4 v6; // r0
  int v7; // r10
  __int16 v8; // r3
  int v9; // r6
  int *i; // r11
  int v12; // [sp+34h] [bp-50h]
  int v13; // [sp+34h] [bp-50h]
  int v17; // [sp+48h] [bp-3Ch] BYREF
  int v18; // [sp+4Ch] [bp-38h]
  int v19; // [sp+50h] [bp-34h]
  int v20; // [sp+54h] [bp-30h]
  int v21; // [sp+58h] [bp-2Ch]
  int v22; // [sp+5Ch] [bp-28h]
  int v23; // [sp+60h] [bp-24h] BYREF
  int v24; // [sp+64h] [bp-20h]
  int v25; // [sp+68h] [bp-1Ch]
  int v26; // [sp+6Ch] [bp-18h]
  int v27; // [sp+70h] [bp-14h]
  int v28; // [sp+74h] [bp-10h]
  int v29; // [sp+78h] [bp-Ch]

  v3 = (HIBYTE(*(_WORD *)(a3 + 6)) | (unsigned __int16)(*(_WORD *)(a3 + 6) << 8)) & 0xFFF;
  if ( v3 > 0x18 )
    return sub_3B5D8(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 3);
  v4 = (HIBYTE(*(_WORD *)(a3 + 4)) | (unsigned __int16)(*(_WORD *)(a3 + 4) << 8)) & 0xFFF;
  if ( ((HIBYTE(*(_WORD *)(a3 + 4)) | (unsigned __int16)(*(_WORD *)(a3 + 4) << 8)) & 0xFFF) != 0 )
  {
    v5 = a3 + 8;
    v12 = a3 + 8;
    while ( 1 )
    {
      v17 = 0;
      v18 = 0;
      v19 = 0;
      v20 = 0;
      v21 = 0;
      v22 = 0;
      _memcpy_chk(&v17, v5, v3, 24);
      v23 = 0;
      v24 = 0;
      v25 = 0;
      v26 = 0;
      v27 = 0;
      v28 = 0;
      v29 = 0;
      if ( !dword_BDB40 )
        goto LABEL_9;
      if ( v18 )
      {
        LOWORD(v23) = 10;
        v25 = v19;
        v26 = v20;
        v27 = v21;
        v28 = v22;
      }
      else
      {
LABEL_9:
        LOWORD(v23) = 2;
        v24 = v17;
      }
      v5 += v3;
      v6 = sub_31F34((unsigned __int16 *)&v23, 0, 0, -1, 0, 0) == 0;
      if ( v4 == 1 )
        break;
      v4 = (unsigned __int16)(v4 - 1);
      if ( v6 )
        return sub_3B5D8(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 4);
    }
    v7 = v12;
    if ( v6 )
      return sub_3B5D8(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 4);
    v8 = (HIBYTE(*(_WORD *)(a3 + 4)) | (*(_WORD *)(a3 + 4) << 8)) & 0xFFF;
    if ( v8 )
    {
      v9 = 0;
      v13 = (unsigned __int16)(v8 - 1) + 1;
      do
      {
        v17 = 0;
        v18 = 0;
        v19 = 0;
        v20 = 0;
        v21 = 0;
        v22 = 0;
        _memcpy_chk(&v17, v7, v3, 24);
        v24 = 0;
        v25 = 0;
        v26 = 0;
        v27 = 0;
        v28 = 0;
        v29 = 0;
        if ( dword_BDB40 && v18 )
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
        for ( i = (int *)sub_31F34((unsigned __int16 *)&v23, 0, 0, -1, 0, 0);
              i;
              i = (int *)sub_31F34((unsigned __int16 *)&v23, 0, i, -1, 0, 0) )
        {
          sub_3304C(i);
        }
        ++v9;
        v7 += v3;
      }
      while ( v9 != v13 );
    }
  }
  return sub_3B5D8(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 0);
}
