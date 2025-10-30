int __fastcall sub_81A54(int a1, int a2)
{
  int *v2; // r3
  int i; // r2
  int *v4; // r3
  int v5; // t1
  int v6; // t1
  int *v8; // r0
  int *v9; // r0
  int v10; // r3
  int *v11; // r0
  int v12; // [sp+4h] [bp-Ch]

  if ( a1 && (unsigned __int16)*(_DWORD *)(a1 + 16) >> 12 == 6 )
  {
    v2 = *(int **)(a1 + 28);
    if ( v2 )
    {
      v5 = *v2;
      v4 = v2 + 2;
      for ( i = v5; ; --i )
      {
        if ( i - 1 < 0 )
          goto LABEL_13;
        v6 = *v4++;
        if ( v6 == a2 )
          break;
      }
      if ( i == 1 || (v10 = *v4) == 0 )
      {
LABEL_13:
        v11 = _errno_location();
        v10 = 0;
        *v11 = 2;
      }
    }
    else
    {
      v12 = *(_DWORD *)(a1 + 28);
      v9 = _errno_location();
      v10 = v12;
      *v9 = 2;
    }
  }
  else
  {
    v8 = _errno_location();
    v10 = 0;
    *v8 = 22;
  }
  return v10;
}
