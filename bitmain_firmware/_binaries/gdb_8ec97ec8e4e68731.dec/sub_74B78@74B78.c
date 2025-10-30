int __fastcall sub_74B78(int a1, const void *a2, size_t a3, int a4, int a5)
{
  unsigned __int8 *v5; // r7
  int v8; // r4
  int v9; // r6
  int v10; // lr
  int v11; // r5
  int v12; // r0
  int v13; // r0
  _BOOL4 v15; // r3
  _BOOL4 v16; // r12
  int v17; // r2
  int v18; // r8
  int v19; // r9
  __int64 v20; // r4
  unsigned __int64 v21; // r0
  int v22; // r3
  int v23; // t1
  bool v24; // zf
  int v25; // r10
  int v26; // r8
  unsigned int v27; // r10
  int v28; // r3
  unsigned int v29; // r9
  int v30; // r0
  int v31; // r9
  unsigned int v32; // r6
  int v33; // r10
  int v34; // r0
  int v35; // r2
  int v36; // r10
  int v37; // r2
  char v38; // r0
  char v39; // r0
  int v40; // r10
  char v41; // r0
  int v42; // r0
  int v43; // r2
  int v44; // r10
  char v45; // r0
  int v46; // r0
  int v47; // r2
  char v48; // r0
  _BYTE v49[2]; // [sp+0h] [bp-3Ch] BYREF
  _BYTE v50[2]; // [sp+2h] [bp-3Ah] BYREF
  int v51; // [sp+4h] [bp-38h]
  __int64 v52; // [sp+8h] [bp-34h]
  int v53; // [sp+10h] [bp-2Ch]
  int v54; // [sp+14h] [bp-28h]

  v5 = v49;
  v51 = a1;
  v8 = a3;
  v9 = dword_46DE54;
  memcpy(v49, a2, a3);
  if ( a4 )
  {
    v11 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4);
    if ( v8 <= 1 )
    {
      if ( v8 != 1 )
        goto LABEL_6;
      v12 = v49[0];
    }
    else
    {
      v12 = (unsigned __int8)v49[v8 - 1];
      if ( v49[v8 - 2] == 100 )
      {
        switch ( v12 )
        {
          case 'f':
            v8 -= 2;
            *(_DWORD *)(a5 + 16) = *(_DWORD *)(sub_1780B4(v11) + 76);
            goto LABEL_7;
          case 'd':
            v8 -= 2;
            *(_DWORD *)(a5 + 16) = *(_DWORD *)(sub_1780B4(v11) + 80);
            goto LABEL_7;
          case 'l':
            v8 -= 2;
            *(_DWORD *)(a5 + 16) = *(_DWORD *)(sub_1780B4(v11) + 84);
            goto LABEL_7;
        }
      }
    }
    v13 = tolower(v12);
    if ( v13 == 102 )
    {
      --v8;
      *(_DWORD *)(a5 + 16) = *(_DWORD *)(sub_1780B4(v11) + 40);
    }
    else
    {
      if ( v13 != 108 )
      {
LABEL_6:
        *(_DWORD *)(a5 + 16) = *(_DWORD *)(sub_1780B4(v11) + 44);
        goto LABEL_7;
      }
      --v8;
      *(_DWORD *)(a5 + 16) = *(_DWORD *)(sub_1780B4(v11) + 48);
    }
LABEL_7:
    if ( sub_1C44E4(v49, v8) )
      return 259;
    else
      return 280;
  }
  v15 = v49[0] == 48;
  if ( v8 <= 1 )
    v15 = 0;
  if ( v15 )
  {
    switch ( v49[1] )
    {
      case 'B':
      case 'b':
        if ( v8 != 2 )
        {
          v5 = v50;
          v8 -= 2;
          v9 = 2;
        }
        break;
      case 'D':
      case 'T':
      case 'd':
      case 't':
        if ( v8 != 2 )
        {
          v5 = v50;
          v8 -= 2;
          v9 = 10;
        }
        break;
      case 'X':
      case 'x':
        if ( v8 != 2 )
        {
          v5 = v50;
          v8 -= 2;
          v9 = 16;
        }
        break;
      default:
        v9 = 8;
        break;
    }
  }
  v16 = 0;
  v53 = 0;
  v17 = v8;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v52 = v9;
  v54 = 0;
  while ( v17 > 0 )
  {
    v23 = *v5++;
    v22 = v23;
    if ( (unsigned int)(v23 - 65) <= 0x19 )
      v22 += 32;
    v24 = v22 == 108;
    if ( v22 != 108 )
      v24 = v22 == 117;
    if ( v24 )
    {
      v25 = 0;
    }
    else
    {
      v10 = v9 * HIDWORD(v20);
      v18 = HIDWORD(v52);
      v25 = 1;
    }
    if ( v24 )
      v21 = v20;
    else
      v21 = (unsigned int)v9 * (unsigned __int64)(unsigned int)v20;
    if ( !v24 )
      HIDWORD(v21) += v10 + v20 * v18;
    v10 = v22 - 48;
    if ( (unsigned int)(v22 - 48) <= 9 )
    {
      if ( v16 )
        return 280;
      v19 = v22 - 48;
      v21 += v10;
    }
    else
    {
      v18 = v22 - 97;
      v10 = (unsigned int)(v22 - 97) <= 5;
      if ( v9 <= 10 )
        v10 = 0;
      if ( !v10 )
      {
        if ( v22 == 108 )
        {
          ++v53;
        }
        else
        {
          if ( v22 != 117 )
            return 280;
          v54 = 1;
        }
        if ( v19 >= v9 )
          return 280;
        v16 = 1;
        goto LABEL_26;
      }
      if ( v16 )
        return 280;
      v19 = v22 - 87;
      v21 += v22 - 87;
    }
    if ( v19 >= v9 )
      return 280;
    if ( v25 )
    {
      v16 = v20 >= (__int64)v21;
      if ( !v21 )
        v16 = 0;
      if ( v16 )
      {
        v54 = 1;
      }
      else if ( !v21 )
      {
        goto LABEL_26;
      }
      if ( v20 >= v21 )
        v16 = v54;
      else
        v16 = 0;
      if ( v16 )
        sub_946E0("Numeric constant too large.");
    }
    else
    {
      v16 = 0;
    }
LABEL_26:
    --v17;
    v20 = v21;
  }
  v26 = v54;
  v27 = HIDWORD(v20) >> 2;
  v28 = *(_DWORD *)(v51 + 4);
  v29 = v20 >> 2;
  v54 = HIDWORD(v20);
  v30 = *(_DWORD *)(v28 + 4);
  if ( v53 )
  {
    if ( v53 != 1 )
      goto LABEL_60;
    goto LABEL_75;
  }
  v38 = ((int (__fastcall *)(int))loc_165E68)(v30);
  if ( (v29 >> (v38 - 2)) | (v27 << (34 - v38)) | (v27 >> (v38 - 34)) | (v27 >> (v38 - 2)) )
  {
    v30 = *(_DWORD *)(*(_DWORD *)(v51 + 4) + 4);
LABEL_75:
    v39 = ((int (__fastcall *)(int))loc_165EE0)(v30);
    if ( (v29 >> (v39 - 2)) | (v27 << (34 - v39)) | (v27 >> (v39 - 34)) | (v27 >> (v39 - 2)) )
    {
LABEL_60:
      if ( (unsigned int)((int (*)(void))loc_165F58)() <= 0x40 )
      {
        v48 = ((int (__fastcall *)(_DWORD))loc_165F58)(*(_DWORD *)(*(_DWORD *)(v51 + 4) + 4));
        v31 = 1 << (v48 - 1);
        v32 = (1 << (v48 - 33)) | (1u >> (33 - v48));
      }
      else
      {
        v31 = 0;
        v32 = 0x80000000;
      }
      v33 = v51;
      v34 = sub_1780B4(*(_DWORD *)(*(_DWORD *)(v51 + 4) + 4));
      v35 = *(_DWORD *)(v33 + 4);
      v36 = *(_DWORD *)(v34 + 72);
      v37 = *(_DWORD *)(sub_1780B4(*(_DWORD *)(v35 + 4)) + 68);
    }
    else
    {
      v44 = v51;
      v45 = ((int (__fastcall *)(_DWORD))loc_165EE0)(*(_DWORD *)(*(_DWORD *)(v51 + 4) + 4));
      v31 = 1 << (v45 - 1);
      v32 = (1 << (v45 - 33)) | (1u >> (33 - v45));
      v46 = sub_1780B4(*(_DWORD *)(*(_DWORD *)(v44 + 4) + 4));
      v47 = *(_DWORD *)(v44 + 4);
      v36 = *(_DWORD *)(v46 + 36);
      v37 = *(_DWORD *)(sub_1780B4(*(_DWORD *)(v47 + 4)) + 16);
    }
  }
  else
  {
    v40 = v51;
    v41 = ((int (__fastcall *)(_DWORD))loc_165E68)(*(_DWORD *)(*(_DWORD *)(v51 + 4) + 4));
    v31 = 1 << (v41 - 1);
    v32 = (1 << (v41 - 33)) | (1u >> (33 - v41));
    v42 = sub_1780B4(*(_DWORD *)(*(_DWORD *)(v40 + 4) + 4));
    v43 = *(_DWORD *)(v40 + 4);
    v36 = *(_DWORD *)(v42 + 32);
    v37 = *(_DWORD *)(sub_1780B4(*(_DWORD *)(v43 + 4)) + 12);
  }
  *(_QWORD *)a5 = v20;
  if ( v26 || (unsigned int)v20 & v31 | v54 & v32 )
  {
    *(_DWORD *)(a5 + 8) = v36;
    return 258;
  }
  else
  {
    *(_DWORD *)(a5 + 8) = v37;
    return 258;
  }
}
