void *__fastcall sub_141180(int a1, const char *a2)
{
  bool v2; // zf
  _DWORD *v5; // r4
  int v6; // r0
  void *v7; // r0
  void *result; // r0
  char *v9; // r0

  v2 = a2 == 0;
  if ( a2 )
    v2 = a1 == 0;
  if ( v2 )
  {
    sub_D0048(37, 100, 67, (int)"crypto/dso/dso_dlfcn.c", 174);
    return 0;
  }
  else if ( sub_10C010(*(_DWORD *)(a1 + 4)) <= 0 )
  {
    sub_D0048(37, 100, 105, (int)"crypto/dso/dso_dlfcn.c", 178);
    return 0;
  }
  else
  {
    v5 = *(_DWORD **)(a1 + 4);
    v6 = sub_10C010((int)v5);
    v7 = (void *)sub_10C01C(v5, v6 - 1);
    if ( v7 )
    {
      result = dlsym(v7, a2);
      if ( !result )
      {
        sub_D0048(37, 100, 106, (int)"crypto/dso/dso_dlfcn.c", 188);
        v9 = dlerror();
        sub_D1240(4, "symname(", a2, "): ", v9);
        return 0;
      }
    }
    else
    {
      sub_D0048(37, 100, 104, (int)"crypto/dso/dso_dlfcn.c", 183);
      return 0;
    }
  }
  return result;
}
