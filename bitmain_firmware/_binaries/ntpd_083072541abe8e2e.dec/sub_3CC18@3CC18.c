int __fastcall sub_3CC18(struct sockaddr *a1, int a2, int a3, int a4)
{
  unsigned int v4; // r4
  int v5; // r8
  unsigned int v6; // r3
  int v7; // r6
  int v8; // r5
  int v9; // r7
  unsigned __int16 v10; // r1
  unsigned __int16 v11; // r3
  int v12; // r2
  int v13; // r2
  int v14; // r12
  char v15; // r3
  unsigned __int16 v17; // lr
  unsigned __int16 v18; // r3
  int v23; // [sp+28h] [bp-74h] BYREF
  int v24; // [sp+2Ch] [bp-70h]
  int v25; // [sp+30h] [bp-6Ch]
  int v26; // [sp+34h] [bp-68h]
  int v27; // [sp+38h] [bp-64h]
  int v28; // [sp+3Ch] [bp-60h]
  int v29; // [sp+40h] [bp-5Ch]
  int v30; // [sp+44h] [bp-58h] BYREF
  int v31; // [sp+48h] [bp-54h]
  int v32; // [sp+4Ch] [bp-50h]
  int v33; // [sp+50h] [bp-4Ch]
  int v34; // [sp+54h] [bp-48h]
  int v35; // [sp+58h] [bp-44h]
  int v36; // [sp+5Ch] [bp-40h]
  int v37; // [sp+60h] [bp-3Ch] BYREF
  int v38; // [sp+64h] [bp-38h]
  unsigned __int16 v39; // [sp+68h] [bp-34h]
  unsigned __int16 v40; // [sp+6Ah] [bp-32h]
  unsigned __int16 v41; // [sp+6Ch] [bp-30h]
  int v42; // [sp+70h] [bp-2Ch]
  int v43; // [sp+74h] [bp-28h]
  int v44; // [sp+78h] [bp-24h]
  int v45; // [sp+7Ch] [bp-20h]
  int v46; // [sp+80h] [bp-1Ch]
  int v47; // [sp+84h] [bp-18h]
  int v48; // [sp+88h] [bp-14h]
  int v49; // [sp+8Ch] [bp-10h]
  int v50; // [sp+90h] [bp-Ch]

  v4 = __rev16(*(unsigned __int16 *)(a3 + 6)) & 0xFFF;
  if ( v4 > 0x34 )
    return sub_3AD58(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 3);
  v5 = a3 + 8;
  v6 = __rev16(*(unsigned __int16 *)(a3 + 4)) & 0xFFF;
  LOWORD(v7) = v6 - 1;
  if ( v6 )
  {
    LOWORD(v8) = v6 - 1;
    v9 = a3 + 8;
    while ( 1 )
    {
      _memcpy_chk(&v37, v9);
      v10 = __rev16(v41);
      v11 = __rev16(v40);
      v40 = v11;
      v12 = v10 & 0xDFFF;
      v41 = v10;
      if ( (v10 & 0xDFFF) != 0 )
        v12 = 1;
      if ( (v11 & 0x8000) != 0 )
        v12 |= 2u;
      if ( v38 )
      {
        if ( dword_BCB2C && v42 )
        {
          if ( !v43 && !v44 && !v45 && !v46 )
          {
            v12 |= 4u;
LABEL_18:
            sub_64E00(3, "do_restrict: bad = %#x", v12);
            v13 = a3;
            v14 = 3;
            v15 = *(_BYTE *)(a3 + 3);
            return sub_3AD58(a1, a2, *(_BYTE *)(v13 + 2), v15, v14);
          }
        }
        else if ( !v37 )
        {
          v12 |= 8u;
          goto LABEL_18;
        }
      }
      v8 = (unsigned __int16)(v8 - 1);
      v9 += v4;
      if ( v8 == 0xFFFF )
        break;
      if ( v12 )
        goto LABEL_18;
    }
    if ( v12 )
      goto LABEL_18;
    v23 = 0;
    v30 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v31 = 0;
    v32 = 0;
    v33 = 0;
    v34 = 0;
    v35 = 0;
    v36 = 0;
    _memcpy_chk(&v37, v5);
    while ( 1 )
    {
      v17 = __rev16(v41);
      v40 = __rev16(v40);
      v18 = __rev16(v39);
      v41 = v17;
      v39 = v18;
      if ( dword_BCB2C && v42 )
      {
        LOWORD(v23) = 10;
        LOWORD(v30) = 10;
        v25 = v43;
        v26 = v44;
        v27 = v45;
        v28 = v46;
        v32 = v47;
        v33 = v48;
        v34 = v49;
        v35 = v50;
      }
      else
      {
        LOWORD(v23) = 2;
        LOWORD(v30) = 2;
        v24 = v37;
        v31 = v38;
      }
      v7 = (unsigned __int16)(v7 - 1);
      v5 += v4;
      sub_40238(a4, &v23, &v30, (__int16)v17, v18, v40, 0);
      if ( v7 == 0xFFFF )
        break;
      _memcpy_chk(&v37, v5);
    }
  }
  else
  {
    v23 = 0;
    v30 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v31 = 0;
    v32 = 0;
    v33 = 0;
    v34 = 0;
    v35 = 0;
    v36 = 0;
  }
  v13 = a3;
  v14 = 0;
  v15 = *(_BYTE *)(a3 + 3);
  return sub_3AD58(a1, a2, *(_BYTE *)(v13 + 2), v15, v14);
}
