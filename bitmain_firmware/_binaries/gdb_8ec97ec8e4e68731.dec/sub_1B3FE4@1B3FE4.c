_BYTE *__fastcall sub_1B3FE4(unsigned __int8 *a1, _BYTE *a2, _DWORD *a3, _DWORD *a4, unsigned __int8 **a5)
{
  unsigned __int8 *v5; // r0
  int v6; // r9
  unsigned __int8 *v7; // r0
  int v8; // r8
  _BYTE *v9; // r0
  _BYTE *v10; // r7
  unsigned __int8 *v11; // r6
  int v12; // r5
  unsigned __int8 *v13; // r4
  int v14; // r0
  _BOOL4 v15; // r3
  unsigned __int8 *v16; // r0
  unsigned __int8 *v17; // r6
  unsigned __int8 *v18; // r11
  unsigned __int8 *v19; // r4
  unsigned __int8 *v20; // r5
  int v21; // r10
  int v22; // t1
  int v23; // r0
  bool v24; // zf
  int v25; // r3
  _BYTE *result; // r0
  _BYTE *i; // r10
  _BOOL4 v29; // r5
  _BYTE *v33; // [sp+Ch] [bp-8h]

  v5 = sub_935D0(a1);
  if ( *v5 == 39 )
  {
    ++v5;
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  v7 = sub_935D0(v5);
  v8 = *v7;
  if ( ((v8 - 43) & 0xFD) != 0 )
    LOBYTE(v8) = 0;
  else
    ++v7;
  v9 = sub_935D0(v7);
  if ( *v9 == 91 )
  {
    v10 = v9 + 1;
    v11 = v9 + 1;
    do
    {
      v12 = *v11;
      v13 = v11++;
      v14 = isalnum(v12);
      v15 = v12 != 95;
      if ( v14 )
        v15 = 0;
    }
    while ( !v15 );
    v16 = sub_935D0(v13);
    v17 = v16;
    if ( *v16 == 40 )
    {
      v33 = sub_935D0(v16 + 1);
      for ( i = v33; ; ++i )
      {
        v17 = i + 1;
        v29 = *i != 95;
        if ( isalnum((unsigned __int8)*i) )
          v29 = 0;
        if ( v29 )
          break;
      }
      *i = 0;
    }
    else
    {
      v33 = 0;
    }
    v18 = v17;
    *v13 = 0;
    v19 = v17;
    do
    {
      while ( 1 )
      {
        v20 = v18;
        v22 = *v18++;
        v21 = v22;
        v23 = isalnum(v22);
        v24 = v22 == 95;
        if ( v22 != 95 )
          v24 = v21 == 58;
        v25 = v24;
        if ( !(v23 ? 1 : v25) )
          break;
        *v19++ = v21;
      }
    }
    while ( isspace(v21) );
    if ( v21 == 93 )
    {
      *v19 = 0;
      result = sub_935D0(v20 + 1);
      if ( !v6 )
      {
LABEL_32:
        *a2 = v8;
        *a3 = v10;
        *a4 = v33;
        *a5 = v17;
        return result;
      }
      if ( *result == 39 )
      {
        result = sub_935D0(result + 1);
        goto LABEL_32;
      }
    }
  }
  return 0;
}
