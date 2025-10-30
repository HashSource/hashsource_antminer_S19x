unsigned __int8 *__fastcall sub_31EEA8(__int64 a1, int a2)
{
  int v3; // r2
  int v4; // r4
  bool v5; // zf
  size_t v6; // r2
  unsigned __int8 *v7; // r5
  int v8; // r0
  int v9; // r12
  int v10; // r2
  char *v11; // r0
  int v12; // r3
  __int64 v13; // r0
  unsigned __int8 *v15; // r5
  int v16; // t1
  char *v17; // r1
  int v18; // [sp+0h] [bp-14h] BYREF
  int v19[3]; // [sp+4h] [bp-10h] BYREF

  v3 = a2 & 0xFD;
  v4 = a1;
  v5 = a2 == 97;
  if ( a2 != 97 )
    v5 = v3 == 117;
  if ( v5 )
  {
    if ( !HIDWORD(a1) )
      return 0;
    if ( (word_438898[(unsigned __int8)*(_BYTE *)HIDWORD(a1)] & 4) == 0 )
      return 0;
    v18 = 0;
    v7 = sub_31EE34((unsigned __int8 *)HIDWORD(a1), &v18);
    if ( !v7 )
      return 0;
    sub_31E858(v4, (char *)&word_3DB410);
    switch ( a2 )
    {
      case 'a':
        if ( (unsigned int)(v18 - 32) <= 0x5E )
        {
          LOBYTE(v19[0]) = v18;
          sub_31EC14(__SPAIR64__(v19, v4), 1u);
          goto LABEL_22;
        }
        sub_31E858(v4, "\\x");
        v8 = v18;
        v9 = 2;
        if ( v18 <= 0 )
        {
LABEL_37:
          v10 = 10;
          goto LABEL_18;
        }
        break;
      case 'u':
        sub_31E858(v4, "\\u");
        v8 = v18;
        v9 = 4;
        if ( v18 > 0 )
          break;
        v10 = 10;
LABEL_18:
        v11 = (char *)v19 + v10;
        v12 = v9;
        do
        {
          --v12;
          *--v11 = 48;
        }
        while ( v12 );
        v10 -= v9;
LABEL_21:
        HIDWORD(v13) = (char *)v19 + v10;
        LODWORD(v13) = v4;
        sub_31EC14(v13, 10 - v10);
LABEL_22:
        sub_31E858(v4, (char *)&word_3DB410);
        return v7;
      case 'w':
        sub_31E858(v4, "\\U");
        v8 = v18;
        v9 = 8;
        if ( v18 > 0 )
          break;
        goto LABEL_37;
      default:
        v8 = v18;
        if ( v18 <= 0 )
          goto LABEL_22;
        v9 = 0;
        break;
    }
    v10 = 10;
    do
    {
      --v10;
      --v9;
      if ( (v8 & 0xFu) > 9 )
        *((_BYTE *)v19 + v10) = (v8 & 0xF) + 87;
      else
        *((_BYTE *)v19 + v10) = (v8 & 0xF) + 48;
      v8 >>= 4;
    }
    while ( v8 );
    v18 = 0;
    if ( v9 <= 0 )
      goto LABEL_21;
    goto LABEL_18;
  }
  v6 = 0;
  if ( a2 != 98 )
  {
    v15 = (unsigned __int8 *)(word_438898[(unsigned __int8)*(_BYTE *)HIDWORD(a1)] & 4);
    if ( v15 )
    {
      v15 = (unsigned __int8 *)HIDWORD(a1);
      do
      {
        v16 = *++v15;
        ++v6;
      }
      while ( (word_438898[v16] & 4) != 0 );
      if ( v6 )
        sub_31EC14(a1, v6);
      switch ( a2 )
      {
        case 'h':
        case 'k':
        case 't':
          sub_31E858(v4, "u");
          break;
        case 'l':
          sub_31E858(v4, "L");
          break;
        case 'm':
          sub_31E858(v4, "uL");
          break;
        default:
          return v15;
      }
    }
    return v15;
  }
  if ( HIDWORD(a1) )
  {
    if ( (word_438898[(unsigned __int8)*(_BYTE *)HIDWORD(a1)] & 4) != 0 )
    {
      v19[0] = 0;
      v15 = sub_31EE34((unsigned __int8 *)HIDWORD(a1), v19);
      if ( v15 )
      {
        if ( v19[0] )
          v17 = "true";
        else
          v17 = "false";
        sub_31E858(v4, v17);
        return v15;
      }
    }
  }
  return 0;
}
