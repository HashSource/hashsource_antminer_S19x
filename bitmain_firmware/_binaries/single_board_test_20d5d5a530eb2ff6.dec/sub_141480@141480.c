int __fastcall sub_141480(int a1)
{
  int *v3; // r0

  if ( a1 )
  {
    if ( sub_10C010(*(_DWORD *)(a1 + 4)) > 0 )
    {
      v3 = sub_10BD80(*(int **)(a1 + 4));
      if ( v3 )
      {
        dlclose(v3);
        return 1;
      }
      else
      {
        sub_D0048(37, 103, 104, (int)"crypto/dso/dso_dlfcn.c", 153);
        sub_10BD3C(*(int **)(a1 + 4), 0);
        return 0;
      }
    }
    else
    {
      return 1;
    }
  }
  else
  {
    sub_D0048(37, 103, 67, (int)"crypto/dso/dso_dlfcn.c", 146);
    return 0;
  }
}
