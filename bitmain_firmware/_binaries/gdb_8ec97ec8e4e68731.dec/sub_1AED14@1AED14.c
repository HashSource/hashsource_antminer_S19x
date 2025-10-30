int *__fastcall sub_1AED14(unsigned int a1)
{
  char v2; // r3
  int *v3; // r2
  int *v4; // r3
  int *v5; // r5
  unsigned int v6; // lr
  unsigned int v7; // r12
  _BOOL4 v8; // r1
  unsigned int v9; // r0
  unsigned int v10; // r2
  _BOOL4 v11; // r1
  _BOOL4 v12; // r2

  v2 = byte_487B28;
  __dmb(0xBu);
  if ( (v2 & 1) == 0 && sub_33A554(&byte_487B28) )
  {
    dword_487B00 = 0;
    dword_487B04 = 0;
    dword_487B08 = 0;
    dword_487B14 = 0;
    dword_487B18 = 0;
    dword_487B1C = 0;
    dword_487B20 = 0;
    byte_487B0C = 1;
    dword_487B10 = 1;
    dword_487B24 = -1;
    sub_33A65C(&byte_487B28);
  }
  v3 = off_46D9C4;
  if ( off_46D9C4 == &dword_487AF4 && !byte_487AF0 )
  {
    sub_1AE9B0();
    v3 = off_46D9C4;
  }
  v4 = (int *)*v3;
  v5 = (int *)v3[1];
  if ( v5 == (int *)*v3 )
  {
    dword_487B00 = 0;
    dword_487B04 = 0;
    goto LABEL_24;
  }
  v6 = 0;
  v7 = 0;
  do
  {
    while ( 1 )
    {
      if ( *((_BYTE *)v4 + 12) )
      {
        v9 = *v4;
        v10 = v4[1];
        v8 = v10 == 0;
        if ( *v4 > a1 )
        {
          v11 = v10 > v7;
          if ( v10 > a1 )
            v11 = 0;
          if ( v11 )
            v7 = v4[1];
          break;
        }
        if ( v10 > a1 )
          v8 = 1;
        if ( v8 )
          return v4;
        if ( v7 < v10 )
          v7 = v4[1];
        if ( v9 >= a1 )
          break;
      }
      v4 += 10;
      if ( v5 == v4 )
        goto LABEL_23;
    }
    v4 += 10;
    v12 = v9 < v6;
    if ( !v6 )
      v12 = 1;
    if ( v12 )
      v6 = v9;
  }
  while ( v5 != v4 );
LABEL_23:
  dword_487B00 = v7;
  dword_487B04 = v6;
  if ( dword_46D9C0 )
  {
    dword_487B10 = 0;
    dword_487B14 = 0;
    dword_487B18 = 0;
    dword_487B1C = 0;
    dword_487B20 = 0;
    dword_487B24 = -1;
    return &dword_487B00;
  }
  else
  {
LABEL_24:
    dword_487B14 = 0;
    dword_487B18 = 0;
    dword_487B1C = 0;
    dword_487B20 = 0;
    v4 = &dword_487B00;
    dword_487B10 = 1;
    dword_487B24 = -1;
    return v4;
  }
}
