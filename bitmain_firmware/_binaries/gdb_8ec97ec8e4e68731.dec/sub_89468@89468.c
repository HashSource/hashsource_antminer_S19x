int __fastcall sub_89468(int a1, unsigned __int8 *a2, int a3, int a4, int a5)
{
  int v5; // lr
  int v6; // r7
  unsigned __int8 *v7; // r6
  int v8; // r4
  int v9; // r9
  int v10; // r5
  int v11; // r0
  _BOOL4 v13; // r12
  int v14; // r2
  int v15; // r8
  int v16; // r10
  __int64 v17; // r4
  unsigned __int64 v18; // r0
  int v19; // r3
  int v20; // t1
  bool v21; // zf
  int v22; // r11
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

  v6 = a1;
  v7 = a2;
  v8 = a3;
  v9 = dword_46DE54;
  if ( a4 )
  {
    v10 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4);
    if ( a3 > 0 )
    {
      v11 = tolower(a2[a3 - 1]);
      if ( v11 == 102 )
      {
        --v8;
        *(_DWORD *)(a5 + 16) = *(_DWORD *)(sub_1780B4(v10) + 40);
      }
      else
      {
        if ( v11 != 108 )
          goto LABEL_5;
        --v8;
        *(_DWORD *)(a5 + 16) = *(_DWORD *)(sub_1780B4(v10) + 48);
      }
LABEL_6:
      if ( sub_1C44E4(v7, v8) )
        return 259;
      else
        return 270;
    }
LABEL_5:
    *(_DWORD *)(a5 + 16) = *(_DWORD *)(sub_1780B4(v10) + 44);
    goto LABEL_6;
  }
  if ( *a2 == 48 )
  {
    switch ( a2[1] )
    {
      case 'D':
      case 'T':
      case 'd':
      case 't':
        if ( a3 > 2 )
        {
          v7 = a2 + 2;
          v8 = a3 - 2;
          v9 = 10;
        }
        break;
      case 'X':
      case 'x':
        if ( a3 > 2 )
        {
          v7 = a2 + 2;
          v8 = a3 - 2;
          v9 = 16;
        }
        break;
      default:
        v9 = 8;
        break;
    }
  }
  v13 = 0;
  v14 = v8;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v35 = 0;
  while ( v14 > 0 )
  {
    v20 = *v7++;
    v19 = v20;
    if ( (unsigned int)(v20 - 65) <= 0x19 )
      v19 += 32;
    v21 = v19 == 108;
    if ( v19 != 108 )
      v21 = v19 == 117;
    if ( v21 )
    {
      v22 = 0;
    }
    else
    {
      v5 = v9 * HIDWORD(v17);
      v6 = v9 >> 31;
      v22 = 1;
    }
    if ( v21 )
      v18 = v17;
    else
      v18 = (unsigned int)v9 * (unsigned __int64)(unsigned int)v17;
    if ( !v21 )
      HIDWORD(v18) += v5 + v17 * v6;
    v5 = v19 - 48;
    if ( (unsigned int)(v19 - 48) <= 9 )
    {
      if ( v13 )
        return 270;
      v16 = v19 - 48;
      v18 += v5;
    }
    else
    {
      v6 = v19 - 97;
      v5 = (unsigned int)(v19 - 97) <= 5;
      if ( v9 <= 10 )
        v5 = 0;
      if ( !v5 )
      {
        if ( v19 == 108 )
        {
          ++v35;
        }
        else
        {
          if ( v19 != 117 )
            return 270;
          v15 = 1;
        }
        if ( v16 >= v9 )
          return 270;
        v13 = 1;
        goto LABEL_23;
      }
      if ( v13 )
        return 270;
      v16 = v19 - 87;
      v18 += v19 - 87;
    }
    if ( v16 >= v9 )
      return 270;
    if ( v22 )
    {
      v13 = v17 >= (__int64)v18;
      if ( !v18 )
        v13 = 0;
      if ( v13 )
      {
        v15 = 1;
      }
      else if ( !v18 )
      {
        goto LABEL_23;
      }
      if ( v17 >= v18 )
        v13 = v15;
      else
        v13 = 0;
      if ( v13 )
        sub_946E0("Numeric constant too large.");
    }
    else
    {
      v13 = 0;
    }
LABEL_23:
    --v14;
    v17 = v18;
  }
  v23 = HIDWORD(v17) >> 2;
  v24 = v17 >> 2;
  v25 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4);
  if ( v35 )
  {
    if ( v35 != 1 )
      goto LABEL_61;
    goto LABEL_72;
  }
  v30 = ((int (__fastcall *)(int))loc_165E68)(v25);
  v21 = ((v24 >> (v30 - 2)) | (v23 << (34 - v30)) | (v23 >> (v30 - 34)) | (v23 >> (v30 - 2))) == 0;
  v25 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4);
  if ( v21 )
  {
    v33 = ((int (__fastcall *)(int))loc_165E68)(v25);
    v26 = 1 << (v33 - 1);
    v27 = (1 << (v33 - 33)) | (1u >> (33 - v33));
    v28 = *(_DWORD *)(sub_1780B4(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4)) + 32);
    v29 = *(_DWORD *)(sub_1780B4(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4)) + 12);
  }
  else
  {
LABEL_72:
    v31 = ((int (__fastcall *)(int))loc_165EE0)(v25);
    v21 = ((v24 >> (v31 - 2)) | (v23 << (34 - v31)) | (v23 >> (v31 - 34)) | (v23 >> (v31 - 2))) == 0;
    v25 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4);
    if ( v21 )
    {
      v32 = ((int (__fastcall *)(int))loc_165EE0)(v25);
      v26 = 1 << (v32 - 1);
      v27 = (1 << (v32 - 33)) | (1u >> (33 - v32));
      v28 = *(_DWORD *)(sub_1780B4(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4)) + 36);
      v29 = *(_DWORD *)(sub_1780B4(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4)) + 16);
    }
    else
    {
LABEL_61:
      if ( (unsigned int)((int (__fastcall *)(int))loc_165F58)(v25) <= 0x40 )
      {
        v34 = ((int (__fastcall *)(_DWORD))loc_165F58)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4));
        v26 = 1 << (v34 - 1);
        v27 = (1 << (v34 - 33)) | (1u >> (33 - v34));
      }
      else
      {
        v26 = 0;
        v27 = 0x80000000;
      }
      v28 = *(_DWORD *)(sub_1780B4(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4)) + 72);
      v29 = *(_DWORD *)(sub_1780B4(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4)) + 68);
    }
  }
  *(_QWORD *)a5 = v17;
  if ( v15 || (unsigned int)v17 & v26 | HIDWORD(v17) & v27 )
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
