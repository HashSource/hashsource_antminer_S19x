int __fastcall sub_63838(unsigned __int8 **a1)
{
  unsigned __int8 *v1; // r1
  int v2; // r3
  bool v3; // zf
  int v4; // t1
  bool v5; // zf
  int v6; // r12
  unsigned __int8 *v7; // r2
  bool v8; // zf
  int v9; // r3
  int v10; // t1
  bool v11; // zf
  bool v12; // zf
  unsigned __int8 *v13; // r3

  v1 = *a1;
  v2 = **a1;
  v3 = v2 == 32;
  if ( v2 != 32 )
    v3 = v2 == 9;
  if ( v3 )
  {
    do
    {
      v4 = *++v1;
      v2 = v4;
      v5 = v4 == 32;
      if ( v4 != 32 )
        v5 = v2 == 9;
    }
    while ( v5 );
  }
  v6 = v2 & 0xDF;
  if ( (v2 & 0xDF) == 0 )
    return v6;
  if ( (unsigned int)(v2 - 9) <= 1 || v2 == 35 )
    return 0;
  v7 = v1;
  while ( 1 )
  {
    v10 = *++v7;
    v9 = v10;
    v11 = v10 == 10;
    if ( v10 != 10 )
      v11 = v9 == 0;
    v6 = !v11;
    if ( v11 )
    {
      if ( v1 == v7 )
        return v6;
      v12 = v9 == 32;
      if ( v9 != 32 )
        v12 = v9 == 9;
      if ( v12 )
      {
LABEL_32:
        v13 = v7 + 1;
        *v7 = 0;
        goto LABEL_30;
      }
LABEL_29:
      v13 = v7;
      *v7 = 0;
LABEL_30:
      *a1 = v13;
      return (int)v1;
    }
    v8 = v9 == 32;
    if ( v9 != 32 )
      v8 = v9 == 9;
    if ( v8 )
      break;
    if ( v9 == 35 )
    {
      if ( v1 == v7 )
        return 0;
      goto LABEL_29;
    }
  }
  v6 = 0;
  if ( v1 != v7 )
    goto LABEL_32;
  return v6;
}
