int __fastcall sub_DA780(int *a1)
{
  int v2; // r3
  int (*v3)(void); // r3
  int result; // r0

  if ( a1 && (v2 = *a1) != 0 && *(_DWORD *)(v2 + 40) )
  {
    v3 = *(int (**)(void))(v2 + 36);
    a1[4] = 8;
    if ( v3 )
    {
      result = v3();
      if ( result <= 0 )
        a1[4] = 0;
    }
    else
    {
      return 1;
    }
  }
  else
  {
    sub_D0048(6, 141, 150, (int)"crypto/evp/pmeth_fn.c", 40);
    return -2;
  }
  return result;
}
