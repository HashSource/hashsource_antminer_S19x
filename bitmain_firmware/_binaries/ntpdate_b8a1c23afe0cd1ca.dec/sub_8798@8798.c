unsigned __int8 *__fastcall sub_8798(unsigned __int8 **a1)
{
  unsigned __int8 *result; // r0
  int v3; // r3
  bool v4; // zf
  int v5; // t1
  bool v6; // zf
  unsigned __int8 *v7; // r1
  int v8; // r3
  unsigned __int8 *v9; // r12
  _BOOL4 v10; // r2
  bool v11; // zf
  unsigned __int8 *v12; // r1
  bool v13; // zf

  result = *a1;
  v3 = *result;
  v4 = v3 == 9;
  if ( v3 != 9 )
    v4 = v3 == 32;
  if ( v4 )
  {
    do
    {
      v5 = *++result;
      v3 = v5;
      v6 = v5 == 9;
      if ( v5 != 9 )
        v6 = v3 == 32;
    }
    while ( v6 );
  }
  if ( (v3 & 0xDF) == 0 || (unsigned int)(v3 - 9) <= 1 || v3 == 35 )
    return 0;
  v7 = result;
  while ( 1 )
  {
    v8 = v7[1];
    v9 = v7 + 1;
    v10 = v8 != 10;
    if ( !v7[1] )
      v10 = 0;
    if ( !v10 )
      break;
    v11 = v8 == 32;
    if ( v8 != 32 )
      v11 = v8 == 9;
    if ( v11 )
    {
      if ( v9 == result )
        return 0;
LABEL_21:
      v12 = v7 + 2;
      *v9 = 0;
LABEL_22:
      *a1 = v12;
      return result;
    }
    ++v7;
    if ( v8 == 35 )
    {
      if ( v9 == result )
        return 0;
LABEL_27:
      v12 = v9;
      *v9 = 0;
      goto LABEL_22;
    }
  }
  if ( v9 != result )
  {
    v13 = v8 == 9;
    if ( v8 != 9 )
      v13 = v8 == 32;
    if ( v13 )
      goto LABEL_21;
    goto LABEL_27;
  }
  return 0;
}
