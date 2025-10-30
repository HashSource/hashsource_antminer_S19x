int __fastcall sub_DAB74(int *a1)
{
  int v2; // r3
  int (*v3)(void); // r3
  int result; // r0

  if ( a1 && (v2 = *a1) != 0 && *(_DWORD *)(v2 + 88) )
  {
    v3 = *(int (**)(void))(v2 + 84);
    a1[4] = 512;
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
    sub_D0048(6, 138, 150, (int)"crypto/evp/pmeth_fn.c", 175);
    return -2;
  }
  return result;
}
