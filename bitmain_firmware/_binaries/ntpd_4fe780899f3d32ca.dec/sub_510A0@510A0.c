bool sub_510A0(unsigned __int8 **a1, ...)
{
  int v1; // r4
  unsigned int *v2; // r5
  signed int v4; // r0
  unsigned int v5; // t1
  int v6; // r3
  unsigned __int8 *v7; // r1
  int v8; // r3
  int v9; // t1
  _BOOL4 v10; // r2
  _BOOL4 result; // r0
  unsigned __int8 *v12; // r2
  bool v13; // cc
  unsigned __int8 *v14; // r8
  va_list varg_r1; // [sp+24h] [bp+1Ch] BYREF

  va_start(varg_r1, a1);
  v1 = 8;
  va_copy(v2, varg_r1);
  do
  {
    v5 = *v2++;
    v4 = v5;
    if ( v5 <= 0x20 )
    {
      v12 = a1[3];
      v13 = v4 < (int)v12;
      if ( v4 >= (int)v12 )
      {
        v14 = a1[1];
      }
      else
      {
        v14 = *a1;
        v12 = 0;
      }
      if ( v13 )
      {
        a1[3] = 0;
        a1[1] = v14;
      }
      v8 = *v14;
      if ( v4 <= (int)v12 )
      {
        v7 = v14;
      }
      else
      {
        if ( !*v14 )
          goto LABEL_12;
        while ( 1 )
        {
          if ( v8 == 44 )
            ++v12;
          v7 = v14 + 1;
          a1[3] = v12;
          a1[1] = v14 + 1;
          v8 = v14[1];
          if ( v4 <= (int)v12 )
            break;
          ++v14;
          if ( !v8 )
            goto LABEL_12;
        }
      }
    }
    else
    {
      v6 = (int)a1[2];
      v7 = &(*a1)[v6];
      if ( v6 > 2 && *(v7 - 3) == 42 )
      {
        v8 = *(v7 - 2);
        v7 -= 2;
      }
      else
      {
        v8 = (*a1)[v6];
      }
    }
    while ( 1 )
    {
      v10 = ((v8 - 42) & 0xFD) != 0;
      if ( !v8 )
        v10 = 0;
      if ( !v10 )
        break;
      if ( v8 != 46 )
        *v7 = 95;
      v9 = *++v7;
      v8 = v9;
    }
LABEL_12:
    result = v4 >= 0;
    if ( !v1 )
      result = 0;
    --v1;
  }
  while ( result );
  return result;
}
