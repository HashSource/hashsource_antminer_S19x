int __fastcall sub_2A90F8(int *a1, char a2)
{
  int *i; // r4
  int v5; // r3
  int result; // r0
  int v7; // r2
  int v8; // r1
  bool v9; // zf
  int v10; // r12
  int v11; // r1
  unsigned int v12; // r0
  char *v13; // r0

  if ( (a1[10] & 0x10000) != 0 )
    sub_2A6BF0((int)"cache.c", 242, (int)"bfd_cache_lookup_worker");
  for ( i = a1; ; i = (int *)i[35] )
  {
    v5 = i[35];
    if ( !v5 || (*(_BYTE *)(v5 + 44) & 1) != 0 )
      break;
  }
  result = i[2];
  if ( !result )
  {
    if ( (a2 & 1) != 0 )
      return result;
    if ( sub_2A8FD0(i) )
    {
      result = i[2];
      if ( (a2 & 2) != 0 )
        return result;
      if ( !j_fseeko64(result, v11, i[6], i[7], 0) || (a2 & 4) != 0 )
        return i[2];
      ((void (__fastcall *)(int))loc_2A6C48)(1);
    }
    v12 = sub_2A6910();
    v13 = sub_2A6920(v12);
    sub_2A6A5C("reopening %B: %s\n", a1, v13);
    return 0;
  }
  v7 = dword_48BBE4;
  if ( (int *)dword_48BBE4 != i )
  {
    v8 = i[4];
    v9 = dword_48BBE4 == 0;
    v10 = i[5];
    dword_48BBE4 = (int)i;
    *(_DWORD *)(v8 + 20) = v10;
    *(_DWORD *)(i[5] + 16) = v8;
    if ( v7 )
    {
      v8 = *(_DWORD *)(v7 + 16);
      i[5] = v7;
    }
    else
    {
      i[5] = (int)i;
    }
    if ( v7 )
    {
      i[4] = v8;
      *(_DWORD *)(v8 + 20) = i;
      v7 = i[5];
    }
    else
    {
      i[4] = (int)i;
    }
    if ( !v9 )
      *(_DWORD *)(v7 + 16) = i;
  }
  return result;
}
