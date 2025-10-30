bool __fastcall sub_13099C(int *a1, int a2)
{
  int *v3; // r2
  int v4; // r3
  int v6; // r3
  _BOOL4 result; // r0
  int v8; // r3
  _DWORD *v9; // r3
  int v10; // r3

  if ( !*a1 || (v3 = (int *)a1[1]) == 0 )
  {
    sub_D0048(3, 103, 107, (int)"crypto/bn/bn_blind.c", 98);
    result = 0;
    goto LABEL_15;
  }
  v4 = a1[5];
  if ( v4 == -1 )
  {
    v10 = a1[6];
    result = 1;
    a1[5] = 1;
    if ( (v10 & 1) != 0 )
      return result;
  }
  else
  {
    v6 = v4 + 1;
    a1[5] = v6;
    if ( v6 == 32 )
    {
      if ( a1[2] )
      {
        v8 = a1[6];
        if ( (v8 & 2) == 0 )
        {
          result = sub_130888(a1, 0, 0, a2, 0, 0) != 0;
          goto LABEL_15;
        }
      }
      else
      {
        v8 = a1[6];
      }
      if ( (v8 & 1) != 0 )
      {
        result = 1;
LABEL_16:
        a1[5] = 0;
        return result;
      }
    }
    else if ( (a1[6] & 1) != 0 )
    {
      return 1;
    }
  }
  v9 = (_DWORD *)a1[7];
  if ( v9 )
  {
    if ( !sub_B9348(v3, (int)v3, (int)v3, v9, a2) )
    {
LABEL_14:
      result = 0;
      goto LABEL_15;
    }
    result = sub_B9348((int *)*a1, *a1, *a1, (_DWORD *)a1[7], a2);
  }
  else
  {
    if ( !sub_133F3C(v3, v3, v3, a1[3], a2) )
      goto LABEL_14;
    result = sub_133F3C(*a1, *a1, *a1, a1[3], a2) != 0;
  }
LABEL_15:
  if ( a1[5] == 32 )
    goto LABEL_16;
  return result;
}
