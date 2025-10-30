int __fastcall sub_70194(int a1, char *nptr, int a3, const char *a4)
{
  int v7; // r0
  int v8; // r6
  int *v9; // r7
  unsigned __int64 v10; // r4
  int v11; // r7
  int v12; // r0
  int v13; // r2
  char v14; // r0
  bool v15; // zf
  int v16; // r0
  char v17; // r0
  int v18; // r0
  char v20; // r0
  int v21; // r0
  unsigned __int8 *v22; // [sp+4h] [bp-8h] BYREF

  if ( nptr )
  {
    v7 = strtol(nptr, 0, 10);
    v8 = v7;
    if ( (unsigned int)(v7 - 2) > 0xE )
      sub_946E0("Invalid base: %d.", v7);
  }
  else
  {
    v8 = 10;
  }
  if ( a4 )
    a4 = (const char *)strtol(a4, 0, 10);
  v9 = _errno_location();
  *v9 = 0;
  v10 = sub_9335C(a3, &v22, v8);
  if ( *v9 == 34 )
LABEL_24:
    sub_946E0("Integer literal out of range");
  v11 = *v22;
  if ( isxdigit(v11) )
    sub_946E0("Invalid digit `%c' in based literal", v11);
  if ( (int)a4 > 0 )
  {
    v12 = sub_347418(-1, v8);
    if ( v10 > (unsigned int)v12 )
      goto LABEL_24;
    while ( 1 )
    {
      --a4;
      v13 = v10 * (v8 >> 31) + v8 * HIDWORD(v10);
      v10 = (unsigned int)v10 * (unsigned __int64)(unsigned int)v8;
      HIDWORD(v10) += v13;
      if ( !a4 )
        break;
      if ( v10 > (unsigned int)v12 )
        goto LABEL_24;
    }
  }
  v14 = ((int (__fastcall *)(_DWORD))loc_165E68)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4));
  v15 = (((unsigned int)v10 >> (v14 - 1))
       | (HIDWORD(v10) << (33 - v14))
       | (HIDWORD(v10) >> (v14 - 33))
       | (HIDWORD(v10) >> (v14 - 1))) == 0;
  v16 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4);
  if ( v15 )
  {
    dword_474908 = *(_DWORD *)(sub_1780B4(v16) + 12);
  }
  else
  {
    v17 = ((int (__fastcall *)(int))loc_165EE0)(v16);
    v15 = (((unsigned int)v10 >> (v17 - 1))
         | (HIDWORD(v10) << (33 - v17))
         | (HIDWORD(v10) >> (v17 - 33))
         | (HIDWORD(v10) >> (v17 - 1))) == 0;
    v18 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4);
    if ( v15 )
    {
      dword_474908 = *(_DWORD *)(sub_1780B4(v18) + 16);
    }
    else
    {
      v20 = ((int (__fastcall *)(int))loc_165EE0)(v18);
      v15 = (((((unsigned int)v10 >> (v20 - 1)) | (HIDWORD(v10) << (33 - v20)) | (HIDWORD(v10) >> (v20 - 33))) >> 1)
           | (HIDWORD(v10) >> (v20 - 1) << 31)
           | (HIDWORD(v10) >> (v20 - 1) >> 1)) == 0;
      v21 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4);
      if ( v15 )
      {
        dword_474908 = *(_DWORD *)(sub_1780B4(v21) + 36);
        if ( (v10 & 0x8000000000000000LL) != 0LL )
        {
          dword_474900 = v10;
          dword_474904 = (HIDWORD(v10) & 0x7FFFFFFF) - 0x7FFFFFFF;
          return 258;
        }
      }
      else
      {
        dword_474908 = *(_DWORD *)(sub_1780B4(v21) + 68);
      }
    }
  }
  *(_QWORD *)&dword_474900 = v10;
  return 258;
}
