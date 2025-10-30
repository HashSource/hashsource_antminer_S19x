int __fastcall sub_167D8(int a1, _DWORD *a2, int *a3)
{
  char *v6; // r0
  char *v7; // r7
  _DWORD *v8; // r0
  void *v10; // r3
  int v11; // r2
  void *ptr; // [sp+4h] [bp-10h] BYREF
  int v13; // [sp+8h] [bp-Ch] BYREF

  v13 = 0;
  if ( !a1 )
    sub_1073C();
  if ( !a2 || *a2 )
    sub_1073C();
  if ( a3 && *a3 )
    sub_1073C();
  v6 = (char *)sub_967C(0, 0x2040u, 0, 0);
  ptr = v6;
  if ( !v6 )
    return 1;
  *((_DWORD *)v6 + 1) = a1;
  *((_DWORD *)v6 + 2) = 0;
  *((_DWORD *)v6 + 3) = 0;
  *((_DWORD *)v6 + 4) = 0;
  *((_DWORD *)v6 + 5) = 0;
  *((_DWORD *)v6 + 6) = 0;
  *((_DWORD *)v6 + 2062) = 0;
  *((_DWORD *)v6 + 2063) = 0;
  v7 = (char *)sub_12B5C((pthread_mutex_t *)(v6 + 28), (int)"./../lib/isc/log.c", 288);
  v8 = ptr;
  if ( v7 )
  {
    free(ptr);
  }
  else
  {
    *(_DWORD *)ptr = 1281586296;
    sub_15EB0(v8, (int *)&isc_categories);
    sub_160C8(ptr, (int *)&isc_modules);
    v7 = (char *)sub_16584(ptr, (void **)&v13);
    if ( v7 || (v7 = sub_15150(v13)) != 0 )
    {
      if ( v13 )
        sub_15930((_DWORD **)&v13);
      if ( ptr )
        sub_15D38(&ptr);
    }
    else
    {
      v10 = ptr;
      v11 = v13;
      *((_DWORD *)ptr + 13) = v13;
      *a2 = v10;
      if ( a3 )
        *a3 = v11;
    }
  }
  return (int)v7;
}
