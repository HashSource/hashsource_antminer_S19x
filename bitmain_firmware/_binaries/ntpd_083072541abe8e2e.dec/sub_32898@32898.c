int __fastcall sub_32898(
        _DWORD *a1,
        const char *a2,
        char *a3,
        int a4,
        unsigned __int8 a5,
        char a6,
        unsigned __int8 a7,
        unsigned __int8 a8,
        int a9,
        int a10,
        unsigned int a11,
        int a12)
{
  int v12; // r12
  unsigned __int8 v13; // r5
  int v14; // r12
  int v16; // r5
  bool v17; // zf
  int v18; // r5
  int v19; // r5
  int v20; // r5
  int v21; // r5
  _BOOL4 v22; // r5

  v12 = a9;
  if ( a5 == 3 )
  {
    v20 = *(unsigned __int16 *)a1;
    if ( a2 )
    {
      if ( v20 != 2 )
      {
        if ( !a1[2] && !a1[3] && !a1[4] && !a1[5] )
          goto LABEL_25;
        goto LABEL_34;
      }
      v21 = a1[1];
      if ( !v21 )
      {
LABEL_25:
        v13 = 8;
        goto LABEL_31;
      }
    }
    else
    {
      if ( v20 != 2 )
      {
LABEL_34:
        v22 = *((unsigned __int8 *)a1 + 8) == 255;
        goto LABEL_28;
      }
      v21 = a1[1];
    }
    v22 = (v21 & 0xF0) == 224;
LABEL_28:
    if ( !v22 )
    {
      v13 = 1;
LABEL_16:
      if ( mode_ntpdate )
        v12 = a9 | 0x100;
      goto LABEL_18;
    }
    v13 = 16;
LABEL_31:
    if ( mode_ntpdate )
      v12 = a9 | 0x100;
    v14 = v12 & 0xFFFFFFFC | 1;
    return sub_321D4((int)a1, a2, a3, a4, a5, a6, a7, a8, v14, v13, a10, a11, a12);
  }
  if ( a5 == 5 )
  {
    v16 = *(unsigned __int16 *)a1;
    v17 = v16 == 2;
    if ( v16 == 2 )
      v18 = a1[1];
    else
      v18 = *((unsigned __int8 *)a1 + 8);
    if ( v17 )
      v19 = (v18 & 0xF0) - 224;
    else
      v19 = v18 - 255;
    if ( v19 )
      v13 = 4;
    else
      v13 = 2;
    goto LABEL_16;
  }
  if ( !mode_ntpdate )
  {
    v13 = 1;
LABEL_18:
    v14 = v12 | 1;
    return sub_321D4((int)a1, a2, a3, a4, a5, a6, a7, a8, v14, v13, a10, a11, a12);
  }
  v13 = 1;
  v14 = a9 | 0x101;
  return sub_321D4((int)a1, a2, a3, a4, a5, a6, a7, a8, v14, v13, a10, a11, a12);
}
