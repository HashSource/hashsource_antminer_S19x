int __fastcall sub_1598F0(int a1, int a2, int *a3, int a4, int a5)
{
  int v8; // r8
  int v9; // r4
  int v10; // r0
  int result; // r0
  int v12; // r0
  int v13; // r0
  int v14; // [sp+Ch] [bp-4h] BYREF

  v8 = *(_DWORD *)(a1 + 20);
  v9 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 24);
  v10 = sub_C4A54(v9);
  if ( v10 <= 0 )
    return 0;
  if ( a2 )
  {
    if ( *a3 < (unsigned int)v10 )
    {
      sub_D0048(16, 218, 100, (int)"crypto/ec/ec_pmeth.c", 119);
      return 0;
    }
    else
    {
      v12 = *(_DWORD *)(v8 + 4);
      if ( v12 )
        v13 = sub_D8C70(v12);
      else
        v13 = 64;
      result = sub_C98E4(v13, a4, a5, a2, (int)&v14, v9);
      if ( result > 0 )
      {
        result = 1;
        *a3 = v14;
      }
    }
  }
  else
  {
    *a3 = v10;
    return 1;
  }
  return result;
}
