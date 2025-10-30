int __fastcall sub_D2B64(int a1, int a2, const void *a3)
{
  int v6; // r0
  bool v7; // zf
  int v8; // r7
  int v9; // r0
  void *v10; // r6
  size_t v11; // r0
  int v13; // r0

  v6 = sub_D8934(a1);
  v7 = a3 == 0;
  if ( !a3 )
    v7 = a2 == 0;
  if ( !v7 )
  {
    v8 = v6;
    if ( a2 )
    {
      if ( sub_D8924(a1) )
      {
        v9 = sub_D8AD4(a1);
        sub_123194(a2, 8 * v9, v8);
      }
      else
      {
        v13 = sub_D8AD4(a1);
        sub_123A94(a2, 8 * v13, v8);
      }
      if ( !a3 )
      {
        *(_DWORD *)(v8 + 248) = 0;
        return 1;
      }
    }
    else if ( !a3 )
    {
      return 1;
    }
    v10 = (void *)sub_D8AC0(a1);
    v11 = sub_D8944(a1);
    memcpy(v10, a3, v11);
    *(_DWORD *)(v8 + 248) = sub_D8AC0(a1);
  }
  return 1;
}
