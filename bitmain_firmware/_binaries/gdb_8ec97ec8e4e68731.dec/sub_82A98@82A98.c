int __fastcall sub_82A98(int a1, unsigned __int8 *a2, int a3, int a4, int a5)
{
  unsigned __int8 *v5; // r6
  int v6; // r10
  int v7; // r9
  int v8; // r11
  __int64 v9; // r4
  int v10; // r10
  int v11; // t1
  _BOOL4 v12; // r0
  int v13; // r0
  signed __int64 v14; // r8
  int v15; // r6
  int v16; // r0
  unsigned int v17; // r2
  char v18; // r0
  int v19; // r7
  unsigned int v20; // r6
  int v21; // r9
  int v22; // r1
  char *v24; // r0
  char v25; // r3
  char *v26; // r5
  char *v27; // r2
  int v28; // t1
  int v29; // r4
  char v30; // r0
  int v31; // [sp+4h] [bp-20h]
  int v32; // [sp+8h] [bp-1Ch]
  int v33; // [sp+Ch] [bp-18h]
  int v34; // [sp+14h] [bp-10h]

  v5 = a2;
  v6 = a3;
  v7 = dword_46DE54;
  if ( !a4 )
  {
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
            v5 = a2 + 2;
            v6 = a3 - 2;
            v7 = 10;
          }
          break;
        case 'X':
        case 'x':
          if ( a3 > 2 )
          {
            v5 = a2 + 2;
            v6 = a3 - 2;
            v7 = 16;
          }
          break;
        default:
          v7 = 8;
          break;
      }
    }
    v8 = v6;
    v33 = 0;
    v32 = v7;
    v9 = 0;
    v34 = v7 >> 31;
    v31 = 0;
    if ( v6 <= 0 )
    {
LABEL_27:
      v15 = ((int (__fastcall *)(_DWORD))loc_165E68)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4));
      if ( v15 != ((int (__fastcall *)(_DWORD))loc_165EE0)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4)) )
      {
        v16 = ((int (__fastcall *)(_DWORD))loc_165E68)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4)) - 2;
        v17 = ((unsigned int)(v9 >> 2) >> v16) | (SHIDWORD(v9) >> 2 << (32 - v16));
        if ( v16 - 32 >= 0 )
          v17 |= SHIDWORD(v9) >> 2 >> (v16 - 32);
        if ( v17 | (SHIDWORD(v9) >> 2 >> v16) )
          goto LABEL_32;
      }
      if ( v33 )
      {
LABEL_32:
        v18 = ((int (*)(void))loc_165EE0)();
        v19 = 1 << (v18 - 1);
        v20 = (1 << (v18 - 33)) | (1u >> (33 - v18));
        v21 = *(_DWORD *)(sub_1780B4(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4)) + 36);
        v22 = *(_DWORD *)(sub_1780B4(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4)) + 16);
      }
      else
      {
        v30 = ((int (__fastcall *)(_DWORD))loc_165E68)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4));
        v19 = 1 << (v30 - 1);
        v20 = (1 << (v30 - 33)) | (1u >> (33 - v30));
        v21 = *(_DWORD *)(sub_1780B4(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4)) + 32);
        v22 = *(_DWORD *)(sub_1780B4(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4)) + 12);
      }
      *(_QWORD *)a5 = v9;
      if ( v31 || (unsigned int)v9 & v19 | HIDWORD(v9) & v20 )
      {
        *(_DWORD *)(a5 + 8) = v21;
        return 258;
      }
      else
      {
        *(_DWORD *)(a5 + 8) = v22;
        return 258;
      }
    }
    while ( 1 )
    {
      v11 = *v5++;
      v10 = v11;
      if ( isupper(v11) )
        v10 = tolower(v10);
      v12 = v10 == 108 && v8 == 1;
      if ( v12 )
      {
        v14 = v9;
        v33 = 1;
      }
      else
      {
        v12 = v10 == 117 && v8 == 1;
        if ( v12 )
        {
          v14 = v9;
          v31 = 1;
        }
        else
        {
          v13 = v10 - 48;
          if ( (unsigned int)(v10 - 48) > 9 )
          {
            if ( (unsigned int)(v10 - 97) > 5 )
              return 266;
            v13 = v10 - 87;
          }
          if ( v13 >= v32 )
            return 266;
          v14 = __PAIR64__(v34, v32) * v9 + v13;
          v12 = v9 >= v14;
        }
      }
      if ( !v14 )
        v12 = 0;
      if ( v12 )
      {
        if ( dword_4879EC && (unsigned int)v9 >= (unsigned int)v14 )
          goto LABEL_41;
      }
      else
      {
        if ( !dword_4879EC || !v14 || !v31 )
          goto LABEL_26;
        if ( (unsigned int)v9 >= (unsigned int)v14 )
        {
LABEL_41:
          v31 = 1;
          sub_194338("Overflow on numeric constant.");
          goto LABEL_26;
        }
      }
      v31 = 1;
LABEL_26:
      --v8;
      v9 = v14;
      if ( v8 <= 0 )
        goto LABEL_27;
    }
  }
  v24 = (char *)sub_327254(a2);
  v25 = *v24;
  v26 = v24;
  if ( *v24 )
  {
    v27 = v24;
    do
    {
      if ( (v25 & 0xDF) == 0x44 )
        *v27 = 101;
      v28 = (unsigned __int8)*++v27;
      v25 = v28;
    }
    while ( v28 );
  }
  *(_DWORD *)(a5 + 16) = *(_DWORD *)(sub_158B60(*(_DWORD *)(*(_DWORD *)(dword_475068 + 4) + 4)) + 32);
  v29 = sub_1C44E4(v26, v6);
  free(v26);
  if ( v29 )
    return 259;
  else
    return 266;
}
