int __fastcall sub_141334(int (*a1)(), void *a2, int a3)
{
  signed int v5; // r0
  size_t v6; // r4
  int result; // r0
  char *v8; // r0
  char *s; // [sp+0h] [bp-14h] BYREF

  if ( !a1 )
    a1 = sub_141334;
  if ( dladdr(a1, &s) )
  {
    v5 = strlen(s);
    v6 = v5;
    if ( a3 > 0 )
    {
      if ( v5 >= a3 )
        v6 = a3 - 1;
      memcpy(a2, s, v6);
      result = v6 + 1;
      *((_BYTE *)a2 + v6) = 0;
    }
    else
    {
      return v5 + 1;
    }
  }
  else
  {
    v8 = dlerror();
    sub_D1240(2, "dlfcn_pathbyaddr(): ", v8);
    return -1;
  }
  return result;
}
