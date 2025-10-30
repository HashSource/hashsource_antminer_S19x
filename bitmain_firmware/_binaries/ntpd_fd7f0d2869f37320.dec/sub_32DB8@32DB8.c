int __fastcall sub_32DB8(
        unsigned __int16 *a1,
        const char *a2,
        int a3,
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
  char v13; // r5
  int v14; // r12
  int v16; // r5
  bool v17; // zf
  int v18; // r5
  int v19; // r5
  int v20; // r5
  _BOOL4 v21; // r5
  int v22; // r5

  v12 = a9;
  if ( a5 != 3 )
  {
    if ( a5 == 5 )
    {
      v16 = *a1;
      v17 = v16 == 2;
      if ( v16 == 2 )
        v18 = *((_DWORD *)a1 + 1);
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
LABEL_4:
      if ( mode_ntpdate )
        v12 = a9 | 0x100;
      v14 = v12 | 1;
      return sub_326DC((int)a1, a2, a3, a4, a5, a6, a7, a8, v14, v13, a10, a11, a12);
    }
LABEL_3:
    v13 = 1;
    goto LABEL_4;
  }
  v20 = *a1;
  if ( a2 )
  {
    if ( v20 != 2 )
    {
      if ( !*((_DWORD *)a1 + 2) && !*((_DWORD *)a1 + 3) && !*((_DWORD *)a1 + 4) && !*((_DWORD *)a1 + 5) )
      {
        if ( !mode_ntpdate )
        {
          v13 = 8;
          v14 = a9 & 0xFFFFFFFC | 1;
          return sub_326DC((int)a1, a2, a3, a4, a5, a6, a7, a8, v14, v13, a10, a11, a12);
        }
        v12 = a9 | 0x100;
        v13 = 8;
LABEL_33:
        v14 = v12 & 0xFFFFFFFC | 1;
        return sub_326DC((int)a1, a2, a3, a4, a5, a6, a7, a8, v14, v13, a10, a11, a12);
      }
      goto LABEL_20;
    }
    v22 = *((_DWORD *)a1 + 1);
    if ( !v22 )
    {
      v13 = 8;
      goto LABEL_23;
    }
LABEL_38:
    v21 = (v22 & 0xF0) == 224;
    goto LABEL_21;
  }
  if ( v20 == 2 )
  {
    v22 = *((_DWORD *)a1 + 1);
    goto LABEL_38;
  }
LABEL_20:
  v21 = *((unsigned __int8 *)a1 + 8) == 255;
LABEL_21:
  if ( !v21 )
    goto LABEL_3;
  v13 = 16;
LABEL_23:
  if ( !mode_ntpdate )
    goto LABEL_33;
  v14 = a9 | 0x101;
  if ( (v13 & 0x18) != 0 )
    v14 = a9 & 0xFFFFFEFC | 0x101;
  return sub_326DC((int)a1, a2, a3, a4, a5, a6, a7, a8, v14, v13, a10, a11, a12);
}
