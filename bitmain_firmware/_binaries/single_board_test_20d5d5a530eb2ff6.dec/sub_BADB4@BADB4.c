int __fastcall sub_BADB4(int **a1, int a2)
{
  int *v2; // r2
  int v4; // r5
  int result; // r0
  int *v6; // r3
  int *v7; // r2

  v2 = a1[1];
  if ( !v2 )
    return 1;
  if ( a2 )
  {
    v4 = sub_12F8E8(*a1, *a1, v2, a2);
    if ( v4 )
    {
      result = sub_B89D8((int)a1, (int)a1[1] + 1);
      if ( result )
      {
        v6 = a1[1];
        v7 = *a1;
        a1[1] = (int *)((char *)v6 + 1);
        v7[(_DWORD)v6] = v4;
        return 1;
      }
    }
    else
    {
      return 1;
    }
  }
  else
  {
    sub_B8930(a1, 0);
    return 1;
  }
  return result;
}
