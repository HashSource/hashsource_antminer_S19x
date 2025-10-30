int __fastcall sub_3D5E4(struct sockaddr *a1, int a2, int a3, int a4)
{
  unsigned int v5; // r4
  unsigned int v6; // r5
  int v7; // r6
  int v8; // r10
  int v9; // r9
  int v10; // r4
  int v11; // r3
  int v13; // r4
  int v14; // r3
  int v15; // r10
  unsigned __int16 v16; // lr
  int v17; // r12
  _DWORD s[7]; // [sp+28h] [bp-74h] BYREF
  _DWORD v22[7]; // [sp+44h] [bp-58h] BYREF
  int v23; // [sp+60h] [bp-3Ch] BYREF
  int v24; // [sp+64h] [bp-38h]
  unsigned __int16 v25; // [sp+68h] [bp-34h]
  unsigned __int16 v26; // [sp+6Ah] [bp-32h]
  unsigned __int16 v27; // [sp+6Ch] [bp-30h]
  int v28; // [sp+70h] [bp-2Ch]
  int v29; // [sp+74h] [bp-28h]
  int v30; // [sp+78h] [bp-24h]
  int v31; // [sp+7Ch] [bp-20h]
  int v32; // [sp+80h] [bp-1Ch]
  int v33; // [sp+84h] [bp-18h]
  int v34; // [sp+88h] [bp-14h]
  int v35; // [sp+8Ch] [bp-10h]
  int v36; // [sp+90h] [bp-Ch]

  if ( (unsigned int)(a4 - 1) > 3 )
    return sub_3B5D8(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 3);
  v5 = *(unsigned __int16 *)(a3 + 4);
  v6 = (HIBYTE(*(_WORD *)(a3 + 6)) | (unsigned __int16)(*(_WORD *)(a3 + 6) << 8)) & 0xFFF;
  if ( v6 > 0x34 )
    return sub_3B5D8(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 3);
  v7 = a3 + 8;
  v8 = ((v5 >> 8) | (v5 << 8)) & 0xFFF;
  if ( !v8 )
  {
    memset(s, 0, sizeof(s));
    memset(v22, 0, sizeof(v22));
    return sub_3B5D8(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 0);
  }
  v9 = a3 + 8;
  v10 = ((v5 >> 8) | (v5 << 8)) & 0xFFF;
  while ( 1 )
  {
    _memcpy_chk(&v23, v9, v6, 52);
    v27 = HIBYTE(v27) | (v27 << 8);
    v26 = HIBYTE(v26) | (v26 << 8);
    v11 = (v27 & 0xDFFF) != 0;
    if ( (v26 & 0x8000) != 0 )
      v11 |= 2u;
    if ( !v24 )
      goto LABEL_14;
    if ( dword_BDB40 && v28 )
      break;
    if ( !v23 )
    {
      v11 |= 8u;
      goto LABEL_19;
    }
LABEL_14:
    v9 += v6;
    if ( v10 == 1 )
      goto LABEL_20;
    v10 = (unsigned __int16)(v10 - 1);
    if ( v11 )
      goto LABEL_16;
  }
  if ( v29 || v30 || v31 || v32 )
    goto LABEL_14;
  v11 |= 4u;
LABEL_19:
  if ( v10 != 1 )
  {
LABEL_16:
    sub_65D40(3, "do_restrict: bad = %#x", v11);
    return sub_3B5D8(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 3);
  }
LABEL_20:
  if ( v11 )
    goto LABEL_16;
  LOWORD(v13) = v8;
  memset(s, 0, sizeof(s));
  memset(v22, 0, sizeof(v22));
  do
  {
    _memcpy_chk(&v23, v7, v6, 52);
    v14 = HIBYTE(v25);
    v15 = (unsigned __int16)(HIBYTE(v26) | (v26 << 8));
    v16 = HIBYTE(v27) | (v27 << 8);
    v17 = (unsigned __int16)(v14 | (v25 << 8));
    v26 = HIBYTE(v26) | (v26 << 8);
    v27 = v16;
    v25 = v14 | (v25 << 8);
    if ( dword_BDB40 && v28 )
    {
      LOWORD(s[0]) = 10;
      LOWORD(v22[0]) = 10;
      s[2] = v29;
      s[3] = v30;
      s[4] = v31;
      s[5] = v32;
      v22[2] = v33;
      v22[3] = v34;
      v22[4] = v35;
      v22[5] = v36;
    }
    else
    {
      LOWORD(s[0]) = 2;
      LOWORD(v22[0]) = 2;
      s[1] = v23;
      v22[1] = v24;
    }
    v13 = (unsigned __int16)(v13 - 1);
    v7 += v6;
    sub_41008(a4, s, v22, (__int16)v16, v17, v15, 0);
  }
  while ( v13 );
  return sub_3B5D8(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 0);
}
