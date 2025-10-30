int __fastcall sub_10BC4C(int a1, int a2)
{
  signed int v2; // r2
  int (*v3)(const void *, const void *); // r3
  int v5; // r0
  _DWORD *v7; // r0
  int v8; // t1
  int v9; // [sp+Ch] [bp-8h] BYREF

  v9 = a2;
  if ( !a1 )
    return -1;
  v2 = *(_DWORD *)a1;
  if ( !*(_DWORD *)a1 )
    return -1;
  v3 = *(int (**)(const void *, const void *))(a1 + 16);
  if ( !v3 )
  {
    if ( v2 > 0 )
    {
      v7 = *(_DWORD **)(a1 + 4);
      if ( a2 == *v7 )
        return (int)v3;
      while ( 1 )
      {
        v3 = (int (*)(const void *, const void *))((char *)v3 + 1);
        if ( (int (*)(const void *, const void *))v2 == v3 )
          break;
        v8 = v7[1];
        ++v7;
        if ( a2 == v8 )
          return (int)v3;
      }
    }
    return -1;
  }
  if ( !*(_DWORD *)(a1 + 8) )
  {
    if ( v2 > 1 )
    {
      qsort(*(void **)(a1 + 4), v2, 4u, v3);
      a2 = v9;
    }
    *(_DWORD *)(a1 + 8) = 1;
  }
  if ( !a2 )
    return -1;
  v5 = sub_EABD0((int)&v9, *(_DWORD *)(a1 + 4), *(_DWORD *)a1, 4, *(int (__fastcall **)(int, int))(a1 + 16), 2);
  if ( !v5 )
    return -1;
  return (v5 - *(_DWORD *)(a1 + 4)) >> 2;
}
