int __fastcall sub_121628(_BYTE *a1, unsigned int a2, unsigned __int8 *a3, unsigned int a4, unsigned int a5)
{
  int result; // r0
  bool v6; // zf
  unsigned __int8 *v8; // r4
  int v9; // t1
  int v10; // r5
  int v11; // r3
  int v12; // r4
  unsigned __int8 *v13; // r1
  unsigned __int8 *v14; // r0
  int v15; // t1
  int v16; // t1

  if ( (a5 & 0x8000) != 0 )
  {
    v6 = a4 == a2;
    if ( a4 < a2 )
    {
      if ( *a1 )
      {
        if ( *a1 != 46 || !((a5 >> 4) & 1) )
        {
          v8 = a1 + 1;
          while ( 1 )
          {
            --a2;
            a1 = v8;
            if ( a4 == a2 )
              break;
            v9 = *v8++;
            result = v9;
            if ( v9 == 46 )
              v10 = (a5 >> 4) & 1;
            else
              v10 = 0;
            if ( !result )
              return result;
            if ( v10 )
              return 0;
          }
          goto LABEL_17;
        }
      }
      v6 = a4 == a2;
    }
    if ( !v6 )
      return 0;
  }
  else if ( a4 != a2 )
  {
    return a5 & 0x8000;
  }
LABEL_17:
  if ( !a2 )
    return 1;
  v11 = (unsigned __int8)*a1;
  v12 = *a3;
  if ( *a1 )
  {
    v13 = &a1[a2];
    v14 = a1 + 1;
    while ( v11 == v12 )
    {
LABEL_22:
      if ( v13 == v14 )
        return 1;
      v15 = *v14++;
      v11 = v15;
      v16 = *++a3;
      v12 = v16;
      if ( !v11 )
        return v11;
    }
    if ( (unsigned int)(v11 - 65) <= 0x19 )
    {
      v11 = (unsigned __int8)(v11 + 32);
      if ( (unsigned int)(v12 - 65) > 0x19 )
        goto LABEL_21;
    }
    else if ( (unsigned int)(v12 - 65) > 0x19 )
    {
      return 0;
    }
    v12 = (unsigned __int8)(v12 + 32);
LABEL_21:
    if ( v12 != v11 )
      return 0;
    goto LABEL_22;
  }
  return v11;
}
