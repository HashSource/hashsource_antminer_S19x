char *__fastcall sub_16D5C(int a1, _DWORD *a2, int *a3)
{
  char *v6; // r0
  int v7; // r4
  _DWORD *v8; // r0
  int v9; // r4
  void *v10; // r3
  int v11; // r2
  char *result; // r0
  void *ptr; // [sp+4h] [bp-Ch] BYREF
  int v14; // [sp+8h] [bp-8h] BYREF

  v14 = 0;
  if ( !a1 )
    sub_10C38();
  if ( !a2 || *a2 )
    sub_10C38();
  if ( a3 && *a3 )
    sub_10C38();
  v6 = (char *)sub_9A68(0, 0x2040u, 0, 0);
  ptr = v6;
  if ( v6 )
  {
    *((_DWORD *)v6 + 1) = a1;
    *((_DWORD *)v6 + 2) = 0;
    *((_DWORD *)v6 + 3) = 0;
    *((_DWORD *)v6 + 4) = 0;
    *((_DWORD *)v6 + 5) = 0;
    *((_DWORD *)v6 + 6) = 0;
    *((_DWORD *)v6 + 2062) = 0;
    *((_DWORD *)v6 + 2063) = 0;
    v7 = sub_13048((pthread_mutex_t *)(v6 + 28), (int)"./../lib/isc/log.c", 288);
    v8 = ptr;
    if ( v7 )
    {
      free(ptr);
      return (char *)v7;
    }
    *(_DWORD *)ptr = 1281586296;
    sub_1641C(v8, (int *)&isc_categories);
    sub_16640(ptr, (int *)&isc_modules);
    v9 = sub_16B0C(ptr, (void **)&v14);
    if ( !v9 )
    {
      result = sub_156C4(v14);
      v9 = (int)result;
      if ( !result )
      {
        v10 = ptr;
        v11 = v14;
        if ( !a3 )
          result = 0;
        *((_DWORD *)ptr + 13) = v14;
        *a2 = v10;
        if ( a3 )
        {
          result = 0;
          *a3 = v11;
        }
        return result;
      }
    }
  }
  else
  {
    v9 = 1;
  }
  if ( v14 )
    sub_15E98((_DWORD **)&v14);
  if ( ptr )
    sub_162A4(&ptr);
  return (char *)v9;
}
