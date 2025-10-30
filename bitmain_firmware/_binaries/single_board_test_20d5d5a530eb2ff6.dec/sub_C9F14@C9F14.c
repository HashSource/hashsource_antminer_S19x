int __fastcall sub_C9F14(int a1, int **a2, int a3, int a4, int a5)
{
  int v5; // r7
  int v7; // r5
  int v11; // r0
  int *v12; // r0
  int *v13; // r8
  int v14; // r4
  int v15; // r9
  int result; // r0
  _UNKNOWN **v17; // r0

  v5 = a5;
  v7 = 0;
  sub_B94B4(*(int **)(a1 + 80));
  *(_DWORD *)(a1 + 80) = 0;
  v11 = sub_B895C(*(_DWORD *)(a1 + 84));
  *(_DWORD *)(a1 + 84) = 0;
  if ( !a5 )
  {
    result = sub_130B08(v11);
    v5 = result;
    if ( !result )
      return result;
    v7 = result;
  }
  v12 = sub_B9478();
  v13 = v12;
  if ( v12 )
  {
    if ( sub_B94F0((int)v12, a2, v5) )
    {
      v15 = sub_B822C();
      if ( v15 )
      {
        v17 = sub_B81FC();
        if ( sub_B872C(v15, (int)v17, (int)v13, v5) )
        {
          *(_DWORD *)(a1 + 80) = v13;
          *(_DWORD *)(a1 + 84) = v15;
          v15 = 0;
          v13 = 0;
          v14 = sub_CBBC4(a1, a2, a3, a4, v5);
          if ( !v14 )
          {
            v15 = 0;
            sub_B94B4(*(int **)(a1 + 80));
            *(_DWORD *)(a1 + 80) = 0;
            v13 = 0;
            sub_B895C(*(_DWORD *)(a1 + 84));
            *(_DWORD *)(a1 + 84) = 0;
          }
        }
        else
        {
          v14 = 0;
        }
      }
      else
      {
        v14 = 0;
      }
    }
    else
    {
      v14 = 0;
      v15 = 0;
      sub_D0048(16, 189, 3, "crypto/ec/ecp_mont.c", 158);
    }
  }
  else
  {
    v14 = 0;
    v15 = 0;
  }
  sub_B895C(v15);
  sub_130B5C(v7);
  sub_B94B4(v13);
  return v14;
}
