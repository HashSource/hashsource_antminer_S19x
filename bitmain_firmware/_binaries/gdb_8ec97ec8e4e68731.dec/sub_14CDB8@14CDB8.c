int __fastcall sub_14CDB8(int *a1, _DWORD *a2, int *a3, int *a4, int *a5)
{
  int v9; // r7
  void *v10; // r9
  int v11; // r5
  int v12; // r0
  int result; // r0
  int v14; // r9
  void *v15; // r6

  *a3 = 0;
  if ( a4 )
    *a4 = 0;
  if ( a5 )
    *a5 = 0;
  v9 = sub_26C1E0(a1);
  v10 = sub_92E28();
  v11 = sub_14C9EC(0, a1, a2, 0);
  v12 = sub_92E40((int)v10);
  result = sub_26C1E0(v12);
  v14 = result;
  if ( v9 != result )
  {
    if ( a4 )
      *a4 = v11;
    if ( v11 )
    {
      result = sub_26BF4C(v11);
      if ( result )
      {
        v15 = sub_92E28();
        ((void (__fastcall *)(int))loc_26E00C)(v11);
        *a3 = v11;
        result = sub_92E40((int)v15);
        if ( !a5 )
          return result;
LABEL_14:
        *a5 = v14;
        return sub_26C464(v9);
      }
      *a3 = v11;
    }
    if ( !a5 )
      return result;
    goto LABEL_14;
  }
  return result;
}
