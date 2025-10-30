int __fastcall sub_F69E8(int a1, int a2, int a3, int a4)
{
  int v9; // r0
  int v10; // r6
  int v11; // r9
  int v12; // r0
  _BOOL4 v13; // r5
  int v14; // r0

  if ( sub_EAC84(*(_DWORD *)a2) == (char *)912 )
  {
    v9 = sub_AD8B0((int)&RSA_PSS_PARAMS_it, *(_DWORD **)(a2 + 4));
    v10 = v9;
    if ( v9 )
    {
      v11 = *(_DWORD *)(v9 + 4);
      if ( v11 )
      {
        if ( sub_EAC84(*(_DWORD *)v11) == (char *)911 )
        {
          v12 = sub_AD8B0((int)X509_ALGOR_it, *(_DWORD **)(v11 + 4));
          *(_DWORD *)(v10 + 16) = v12;
          if ( v12 )
            goto LABEL_8;
        }
        else
        {
          *(_DWORD *)(v10 + 16) = 0;
        }
        v14 = v10;
        v10 = 0;
        sub_F78A4(v14);
      }
    }
LABEL_8:
    v13 = sub_F6128(a1, 0, v10, a4);
    sub_F78A4(v10);
    if ( !v13 )
      return 0;
    if ( a3 )
      return sub_10D840(a1, a3, a4);
    return 1;
  }
  if ( a3 )
    return sub_10D840(a1, a3, a4);
  return sub_B6C30(a1, (int)"\n") > 0;
}
