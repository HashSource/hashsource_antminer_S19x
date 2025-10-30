int __fastcall sub_12EA68(_DWORD *a1, int a2, int a3)
{
  int v6; // r0
  unsigned int v7; // r3
  int v8; // r0
  int result; // r0

  v6 = sub_12E694(a2, 19, (int)a1);
  if ( !v6 )
  {
    v8 = a3;
    a1[16] = a3;
    goto LABEL_19;
  }
  v7 = *(_DWORD *)(v6 + 8);
  if ( v7 == 14 )
    goto LABEL_38;
  if ( v7 > 0xE )
  {
    if ( v7 == 28 )
      goto LABEL_32;
    if ( v7 <= 0x1C )
    {
      if ( v7 == 19 )
      {
        v8 = 5;
        a1[16] = 5;
        goto LABEL_19;
      }
      if ( v7 <= 0x13 )
      {
        if ( v7 == 16 )
        {
          v8 = 3;
          a1[16] = 3;
          goto LABEL_19;
        }
        if ( v7 != 18 )
        {
LABEL_11:
          v8 = 13;
          a1[16] = 13;
          goto LABEL_19;
        }
LABEL_24:
        v8 = 2;
        a1[16] = 2;
        goto LABEL_19;
      }
      if ( v7 == 22 )
      {
        v8 = 6;
        a1[16] = 6;
        goto LABEL_19;
      }
      if ( v7 != 26 )
        goto LABEL_11;
      goto LABEL_36;
    }
    if ( v7 > 0x23 )
    {
      if ( v7 == 32769 )
      {
        v8 = 9;
        a1[16] = 9;
        goto LABEL_19;
      }
      if ( v7 != 36864 )
        goto LABEL_11;
LABEL_32:
      v8 = 12;
      a1[16] = 12;
      goto LABEL_19;
    }
    if ( v7 < 0x22 )
    {
      if ( v7 == 29 )
        goto LABEL_24;
      if ( v7 != 33 )
        goto LABEL_11;
      goto LABEL_36;
    }
LABEL_38:
    v8 = 7;
    a1[16] = 7;
    goto LABEL_19;
  }
  if ( v7 <= 8 )
  {
    if ( v7 >= 7 )
      goto LABEL_38;
    if ( v7 != 3 )
    {
      if ( v7 <= 3 )
      {
        if ( !v7 )
          goto LABEL_11;
        goto LABEL_24;
      }
      if ( v7 != 4 )
        goto LABEL_11;
LABEL_36:
      v8 = 4;
      a1[16] = 4;
      goto LABEL_19;
    }
LABEL_27:
    v8 = 14;
    a1[16] = 14;
    goto LABEL_19;
  }
  if ( v7 == 11 )
    goto LABEL_36;
  if ( v7 > 0xB )
  {
    if ( v7 == 12 )
      goto LABEL_24;
    goto LABEL_27;
  }
  if ( v7 == 9 )
  {
    v8 = 10;
    a1[16] = 10;
  }
  else
  {
    v8 = 8;
    a1[16] = 8;
  }
LABEL_19:
  a1[17] = sub_194438(v8);
  result = sub_12E748(a2, 37, a1);
  a1[18] = result;
  return result;
}
