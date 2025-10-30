int __fastcall sub_84DCC(int a1, unsigned __int8 *a2, int a3, int a4, int a5)
{
  int v5; // lr
  unsigned __int8 *v6; // r6
  int v7; // r4
  int v8; // r9
  _BOOL4 v9; // r12
  int v10; // r2
  int v11; // r7
  int v12; // r8
  int v13; // r10
  __int64 v14; // r4
  unsigned __int64 v15; // r0
  int v16; // r3
  int v17; // t1
  bool v18; // zf
  int v19; // r11
  int v21; // r5
  int v22; // r0
  unsigned int v23; // r11
  unsigned int v24; // r6
  int v25; // r0
  int v26; // r6
  unsigned int v27; // r11
  int v28; // r7
  int v29; // r1
  char v30; // r0
  char v31; // r0
  char v32; // r0
  char v33; // r0
  char v34; // r0
  int v35; // [sp+8h] [bp-Ch]

  v6 = a2;
  v7 = a3;
  v8 = dword_46DE54;
  if ( a4 )
  {
    v21 = sub_17C6A8(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4));
    if ( v7 > 0 )
    {
      v22 = tolower(v6[v7 - 1]);
      if ( v22 == 102 )
      {
        --v7;
        *(_DWORD *)(a5 + 16) = *(_DWORD *)(v21 + 56);
      }
      else
      {
        if ( v22 != 108 )
          goto LABEL_49;
        --v7;
        *(_DWORD *)(a5 + 16) = *(_DWORD *)(sub_1780B4(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4)) + 48);
      }
LABEL_50:
      if ( sub_1C44E4(v6, v7) )
        return 259;
      else
        return 282;
    }
LABEL_49:
    *(_DWORD *)(a5 + 16) = *(_DWORD *)(v21 + 60);
    goto LABEL_50;
  }
  if ( *a2 == 48 )
  {
    switch ( a2[1] )
    {
      case 'B':
      case 'b':
        if ( a3 > 2 )
        {
          v6 = a2 + 2;
          v7 = a3 - 2;
          v8 = 2;
        }
        break;
      case 'D':
      case 'T':
      case 'd':
      case 't':
        if ( a3 > 2 )
        {
          v6 = a2 + 2;
          v7 = a3 - 2;
          v8 = 10;
        }
        break;
      case 'X':
      case 'x':
        if ( a3 > 2 )
        {
          v6 = a2 + 2;
          v7 = a3 - 2;
          v8 = 16;
        }
        break;
      default:
        v8 = 8;
        break;
    }
  }
  v9 = 0;
  v35 = 0;
  v10 = v7;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  while ( v10 > 0 )
  {
    v17 = *v6++;
    v16 = v17;
    if ( (unsigned int)(v17 - 65) <= 0x19 )
      v16 += 32;
    v18 = v16 == 108;
    if ( v16 != 108 )
      v18 = v16 == 117;
    if ( v18 )
    {
      v19 = 0;
    }
    else
    {
      v5 = v8 * HIDWORD(v14);
      v11 = v8 >> 31;
      v19 = 1;
    }
    if ( v18 )
      v15 = v14;
    else
      v15 = (unsigned int)v8 * (unsigned __int64)(unsigned int)v14;
    if ( !v18 )
      HIDWORD(v15) += v5 + v14 * v11;
    v5 = v16 - 48;
    if ( (unsigned int)(v16 - 48) <= 9 )
    {
      if ( v9 )
        return 282;
      v13 = v16 - 48;
      v15 += v5;
      if ( v5 >= v8 )
        return 282;
    }
    else
    {
      v11 = v16 - 97;
      v5 = (unsigned int)(v16 - 97) <= 5;
      if ( v8 <= 10 )
        v5 = 0;
      if ( !v5 )
      {
        if ( v16 == 108 )
        {
          ++v35;
        }
        else
        {
          if ( v16 != 117 )
            return 282;
          v12 = 1;
        }
        if ( v13 >= v8 )
          return 282;
        v9 = 1;
        goto LABEL_15;
      }
      if ( v9 )
        return 282;
      v13 = v16 - 87;
      v15 += v16 - 87;
      if ( v16 - 87 >= v8 )
        return 282;
    }
    if ( v19 )
    {
      v9 = v14 >= (__int64)v15;
      if ( !v15 )
        v9 = 0;
      if ( v9 )
      {
        v12 = 1;
      }
      else if ( !v15 )
      {
        goto LABEL_15;
      }
      if ( v14 >= v15 )
        v9 = v12;
      else
        v9 = 0;
      if ( v9 )
        sub_946E0("Numeric constant too large.");
    }
    else
    {
      v9 = 0;
    }
LABEL_15:
    --v10;
    v14 = v15;
  }
  v23 = HIDWORD(v14) >> 2;
  v24 = v14 >> 2;
  v25 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4);
  if ( v35 )
  {
    if ( v35 != 1 )
      goto LABEL_55;
    goto LABEL_64;
  }
  v30 = ((int (__fastcall *)(int))loc_165E68)(v25);
  if ( (v24 >> (v30 - 2)) | (v23 << (34 - v30)) | (v23 >> (v30 - 34)) | (v23 >> (v30 - 2)) )
  {
    v25 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4);
LABEL_64:
    v31 = ((int (__fastcall *)(int))loc_165EE0)(v25);
    if ( (v24 >> (v31 - 2)) | (v23 << (34 - v31)) | (v23 >> (v31 - 34)) | (v23 >> (v31 - 2)) )
    {
      v25 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4);
LABEL_55:
      if ( (unsigned int)((int (__fastcall *)(int))loc_165F58)(v25) <= 0x40 )
      {
        v32 = ((int (__fastcall *)(_DWORD))loc_165F58)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4));
        v26 = 1 << (v32 - 1);
        v27 = (1 << (v32 - 33)) | (1u >> (33 - v32));
      }
      else
      {
        v26 = 0;
        v27 = 0x80000000;
      }
      v28 = *(_DWORD *)(sub_1780B4(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4)) + 72);
      v29 = *(_DWORD *)(sub_1780B4(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4)) + 68);
    }
    else
    {
      v34 = ((int (__fastcall *)(_DWORD))loc_165EE0)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4));
      v26 = 1 << (v34 - 1);
      v27 = (1 << (v34 - 33)) | (1u >> (33 - v34));
      v28 = *(_DWORD *)(sub_1780B4(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4)) + 36);
      v29 = *(_DWORD *)(sub_1780B4(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4)) + 16);
    }
  }
  else
  {
    v33 = ((int (__fastcall *)(_DWORD))loc_165E68)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4));
    v26 = 1 << (v33 - 1);
    v27 = (1 << (v33 - 33)) | (1u >> (33 - v33));
    v28 = *(_DWORD *)(sub_1780B4(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4)) + 32);
    v29 = *(_DWORD *)(sub_1780B4(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4)) + 12);
  }
  *(_QWORD *)a5 = v14;
  if ( v12 || (unsigned int)v14 & v26 | HIDWORD(v14) & v27 )
  {
    *(_DWORD *)(a5 + 8) = v28;
    return 258;
  }
  else
  {
    *(_DWORD *)(a5 + 8) = v29;
    return 258;
  }
}
