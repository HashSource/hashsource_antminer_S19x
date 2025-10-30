unsigned __int8 *__fastcall sub_31FE74(int a1, unsigned __int8 *a2, int a3)
{
  int i; // r6
  int v7; // t1
  unsigned __int8 *v8; // r0
  int v9; // r3
  __int64 v10; // r2
  bool v11; // zf
  int v12; // r3
  int v13; // r11
  int v14; // r11
  unsigned __int8 *v15; // r1
  _BYTE *v16; // r0
  char *v17; // r1
  int v18; // r3
  bool v19; // zf
  int v20; // r3
  unsigned __int8 *v21; // r9
  unsigned __int8 *v22; // r1
  int v23; // r11
  unsigned __int8 *v24; // r0
  __int64 v25; // r2
  unsigned __int8 *v27; // r0

  for ( i = 1; ; ++i )
  {
    if ( *a2 == 48 )
    {
      do
        v7 = *++a2;
      while ( v7 == 48 );
    }
    v8 = sub_31F920((void **)a1, a2, a3);
    a2 = v8;
    if ( !v8 )
      break;
    v9 = *v8;
    if ( v9 != 77 )
    {
      switch ( *v8 )
      {
        case 'F':
        case 'R':
        case 'U':
        case 'V':
        case 'W':
        case 'Y':
          v13 = *(_DWORD *)(a1 + 4);
          if ( *(_DWORD *)a1 == v13 )
          {
            v15 = v8;
            v14 = 0;
          }
          else
          {
            v14 = v13 - *(_DWORD *)a1;
            v15 = v8;
          }
          goto LABEL_22;
        default:
          goto LABEL_15;
      }
    }
    v22 = v8 + 1;
    v23 = *(_DWORD *)(a1 + 4);
    if ( *(_DWORD *)a1 == v23 )
    {
      v14 = 0;
      v27 = sub_31E89C(a1, v22);
      v25 = *(_QWORD *)a1;
      v15 = v27;
      if ( (_DWORD)v25 == HIDWORD(v25) )
        goto LABEL_22;
LABEL_37:
      if ( v14 - (HIDWORD(v25) - (int)v25) < 0 )
        *(_DWORD *)(a1 + 4) = v25 + v14;
      goto LABEL_22;
    }
    v14 = v23 - *(_DWORD *)a1;
    v24 = sub_31E89C(a1, v22);
    v25 = *(_QWORD *)a1;
    v15 = v24;
    if ( (_DWORD)v25 != HIDWORD(v25) )
      goto LABEL_37;
    if ( v14 < 0 )
      *(_DWORD *)(a1 + 4) = HIDWORD(v25) + v14;
LABEL_22:
    v16 = sub_31E970(a1, v15);
    if ( v16 && *v16 )
      sub_31EA78(a1, (int)v16);
    v17 = *(char **)a1;
    v18 = *(_DWORD *)(a1 + 4);
    v19 = *(_DWORD *)a1 == v18;
    if ( *(_DWORD *)a1 == v18 )
      v20 = v14;
    else
      v20 = v18 - (_DWORD)v17;
    if ( !v19 )
      v20 = v14 - v20;
    if ( v20 < 0 )
      *(_DWORD *)(a1 + 4) = &v17[v14];
    sub_31E858(a1, "(");
    v21 = (unsigned __int8 *)sub_32081C(a1);
    sub_31E858(a1, ")");
    if ( v21 && (word_438898[*v21] & 4) != 0 )
    {
      a2 = v21;
    }
    else
    {
      v10 = *(_QWORD *)a1;
      v11 = (_DWORD)v10 == HIDWORD(v10);
      if ( (_DWORD)v10 == HIDWORD(v10) )
        v12 = v14;
      else
        v12 = HIDWORD(v10) - v10;
      if ( !v11 )
        v12 = v14 - v12;
      if ( v12 < 0 )
        *(_DWORD *)(a1 + 4) = v10 + v14;
      v9 = *a2;
LABEL_15:
      if ( (word_438898[v9] & 4) == 0 )
        return a2;
    }
    if ( i )
      sub_31E858(a1, ".");
  }
  return a2;
}
