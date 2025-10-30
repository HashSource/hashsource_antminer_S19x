int __fastcall sub_DAC94(int *a1)
{
  int v2; // r3
  int (*v3)(void); // r3
  int result; // r0

  if ( a1 && (v2 = *a1) != 0 && *(_DWORD *)(v2 + 96) )
  {
    v3 = *(int (**)(void))(v2 + 92);
    a1[4] = 1024;
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
    sub_D0048(6, 154, 150, (int)"crypto/evp/pmeth_fn.c", 209);
    return -2;
  }
  return result;
}
