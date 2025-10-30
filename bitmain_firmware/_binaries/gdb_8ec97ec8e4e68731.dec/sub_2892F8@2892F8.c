int __fastcall sub_2892F8(int a1, char *a2, int (*a3)(), int a4)
{
  int v4; // r11
  size_t v9; // r0
  int v10; // r9
  int v11; // r12
  int v12; // r5
  int *v13; // r1
  int v14; // r9
  int v15; // r8
  _BYTE *v16; // r7
  int (*v17)(); // r2
  _BYTE *v18; // r0
  int v19; // r0
  int v20; // t1
  unsigned __int8 *v21; // r6
  int v22; // r0
  int (*v23)(); // r0
  bool v24; // zf
  _BYTE *v26; // [sp+4h] [bp-20h]
  int (*v27)(); // [sp+8h] [bp-1Ch]
  int (*v28)(); // [sp+8h] [bp-1Ch]
  int *v29; // [sp+Ch] [bp-18h]
  int *v30; // [sp+Ch] [bp-18h]
  int v31; // [sp+1Ch] [bp-8h] BYREF

  if ( !a2 || !*a2 )
  {
    if ( a1 == 2 )
    {
      sub_297758(a3);
      return -1;
    }
    return -1;
  }
  v9 = strlen(a2);
  v26 = sub_93028(2 * v9 + 1);
  v10 = sub_288D40(a2, v26, &v31);
  if ( v10 )
  {
    sub_297758(v26);
    return -1;
  }
  v11 = v31;
  if ( v31 <= 0 )
    goto LABEL_26;
  v12 = 0;
  v13 = &dword_46DED8;
  v14 = a1;
  v15 = 0;
  v16 = v26 - 1;
  v17 = a3;
  do
  {
    while ( 1 )
    {
      v20 = (unsigned __int8)*++v16;
      v19 = v20;
      if ( (unsigned int)(v20 - 128) <= 0x7F )
      {
        if ( *v13 )
        {
          v19 &= ~0x80u;
          if ( *(_BYTE *)(a4 + 216) == 1 )
            a4 = *(_DWORD *)(a4 + 220);
        }
      }
      ++v12;
      v21 = (unsigned __int8 *)(a4 + 8 * v19);
      v22 = *v21;
      if ( v12 >= v11 )
        break;
      if ( v22 != 1 )
      {
        v29 = v13;
        *v21 = 1;
        v4 = v22;
        v27 = v17;
        v15 = *((_DWORD *)v21 + 1);
        v18 = sub_283524();
        v11 = v31;
        v13 = v29;
        v17 = v27;
        *((_DWORD *)v21 + 1) = v18;
      }
      a4 = *((_DWORD *)v21 + 1);
      if ( !v15 )
        goto LABEL_15;
      if ( v4 )
      {
        if ( v4 != 2 )
          goto LABEL_15;
LABEL_14:
        *(_DWORD *)(a4 + 2052) = v15;
        v15 = 0;
        *(_BYTE *)(a4 + 2048) = v4;
        goto LABEL_15;
      }
      if ( v15 != 2710432 )
        goto LABEL_14;
LABEL_15:
      dword_490100 = a4;
      if ( v12 >= v11 )
        goto LABEL_25;
    }
    if ( v22 == 2 )
    {
      v30 = v13;
      v28 = v17;
      sub_297758(*((_DWORD *)v21 + 1));
      v17 = v28;
      v13 = v30;
      v23 = v28;
    }
    else
    {
      if ( v22 != 1 )
        goto LABEL_23;
      a4 = *((_DWORD *)v21 + 1);
      v24 = v14 == 0;
      if ( !v14 )
        v24 = v17 == 0;
      v21 = (unsigned __int8 *)(a4 + 2048);
      if ( v24 )
      {
        v23 = sub_291290;
        v17 = sub_291290;
      }
      else
      {
LABEL_23:
        v23 = v17;
      }
    }
    *v21 = v14;
    v11 = v31;
    *((_DWORD *)v21 + 1) = v23;
    dword_490100 = a4;
  }
  while ( v12 < v11 );
LABEL_25:
  v10 = 0;
LABEL_26:
  sub_297758(v26);
  return v10;
}
