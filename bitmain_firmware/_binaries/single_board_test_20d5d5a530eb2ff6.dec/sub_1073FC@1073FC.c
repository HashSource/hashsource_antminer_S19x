int __fastcall sub_1073FC(int a1, int a2, int *a3, int a4, int a5)
{
  int v8; // r4
  int v9; // r0
  int result; // r0
  int v11; // [sp+Ch] [bp-8h] BYREF

  v8 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 24);
  v9 = sub_C4A54(v8);
  if ( v9 <= 0 )
    return 0;
  if ( a2 )
  {
    if ( *a3 < (unsigned int)v9 )
    {
      sub_D0048(53, 112, 107, (int)"crypto/sm2/sm2_pmeth.c", 106);
      return 0;
    }
    else
    {
      result = sub_107F04(a4, a5, a2, &v11, v8);
      if ( result > 0 )
      {
        result = 1;
        *a3 = v11;
      }
    }
  }
  else
  {
    *a3 = v9;
    return 1;
  }
  return result;
}
