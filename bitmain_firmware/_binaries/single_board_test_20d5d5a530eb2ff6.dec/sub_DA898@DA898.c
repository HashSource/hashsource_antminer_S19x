int __fastcall sub_DA898(int *a1)
{
  int v2; // r3
  int (*v3)(void); // r3
  int result; // r0

  if ( a1 && (v2 = *a1) != 0 && *(_DWORD *)(v2 + 48) )
  {
    v3 = *(int (**)(void))(v2 + 44);
    a1[4] = 16;
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
    sub_D0048(6, 143, 150, (int)"crypto/evp/pmeth_fn.c", 74);
    return -2;
  }
  return result;
}
