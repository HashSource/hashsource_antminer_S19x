int __fastcall sub_3DA58(struct sockaddr *a1, int a2, int a3)
{
  unsigned int v3; // r8
  int v4; // r6
  int v5; // r7
  int *v6; // r2
  int v7; // r0
  int v9; // [sp+34h] [bp-60h]
  int v10; // [sp+38h] [bp-5Ch]
  int v11; // [sp+3Ch] [bp-58h]
  int v15; // [sp+54h] [bp-40h]
  int v16; // [sp+58h] [bp-3Ch] BYREF
  int v17; // [sp+5Ch] [bp-38h]
  int v18; // [sp+60h] [bp-34h]
  int v19; // [sp+64h] [bp-30h]
  int v20; // [sp+68h] [bp-2Ch]
  int v21; // [sp+6Ch] [bp-28h]
  int v22; // [sp+70h] [bp-24h] BYREF
  int v23; // [sp+74h] [bp-20h]
  int v24; // [sp+78h] [bp-1Ch]
  int v25; // [sp+7Ch] [bp-18h]
  int v26; // [sp+80h] [bp-14h]
  int v27; // [sp+84h] [bp-10h]
  int v28; // [sp+88h] [bp-Ch]

  v3 = (HIBYTE(*(_WORD *)(a3 + 6)) | (unsigned __int16)(*(_WORD *)(a3 + 6) << 8)) & 0xFFF;
  if ( v3 > 0x18 )
    return sub_3B5D8(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 3);
  v9 = 0;
  v10 = 0;
  v15 = a3 + 8;
  while ( 1 )
  {
    LOWORD(v4) = (HIBYTE(*(_WORD *)(a3 + 4)) | (*(_WORD *)(a3 + 4) << 8)) & 0xFFF;
    if ( (_WORD)v4 )
    {
      v5 = v15;
      while ( 2 )
      {
        v16 = 0;
        v17 = 0;
        v18 = 0;
        v19 = 0;
        v20 = 0;
        v21 = 0;
        _memcpy_chk(&v16, v5, v3, 24);
        v22 = 0;
        v23 = 0;
        v24 = 0;
        v25 = 0;
        v26 = 0;
        v27 = 0;
        v28 = 0;
        if ( dword_BDB40 && v17 )
        {
          LOWORD(v22) = 10;
          v24 = v18;
          v25 = v19;
          v26 = v20;
          v27 = v21;
        }
        else
        {
          LOWORD(v22) = 2;
          v23 = v16;
        }
        v6 = 0;
        HIWORD(v22) = 31488;
        while ( 1 )
        {
          v7 = sub_31F34((unsigned __int16 *)&v22, 0, v6, -1, 0, 0);
          v6 = (int *)v7;
          if ( !v7 )
            break;
          if ( (*(_DWORD *)(v7 + 68) & 1) != 0 )
          {
            if ( v9 )
            {
              v11 = v7;
              sub_367D8(v7, (int *)"GONE");
              sub_324CC(v11);
            }
            goto LABEL_12;
          }
        }
        if ( v10 != 1 )
          return sub_3B5D8(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 4);
LABEL_12:
        v5 += v3;
        v4 = (unsigned __int16)(v4 - 1);
        if ( v4 )
          continue;
        break;
      }
    }
    v9 ^= 1u;
    if ( v10 == 1 )
      return sub_3B5D8(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 0);
    v10 = 1;
  }
}
