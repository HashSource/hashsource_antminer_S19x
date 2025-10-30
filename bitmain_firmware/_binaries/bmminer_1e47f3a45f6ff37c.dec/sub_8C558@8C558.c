int __fastcall sub_8C558(int a1, int a2, int a3)
{
  int v3; // r0
  int v4; // r1
  int *v6; // r0
  int v7; // r1
  _DWORD *i; // [sp+24h] [bp-8h]
  _DWORD *v13; // [sp+24h] [bp-8h]

  v3 = (*(int (__fastcall **)(int))(a1 + 12))(a2);
  sub_8F7E4(v3, *(_DWORD *)(a1 + 8));
  for ( i = *(_DWORD **)(*(_DWORD *)(a1 + 4) + 4 * v4);
        i && !(*(int (__fastcall **)(int, _DWORD))(a1 + 16))(a2, i[1]);
        i = (_DWORD *)i[4] )
  {
    ;
  }
  if ( i )
  {
    if ( *(_DWORD *)(a1 + 20) )
      (*(void (__fastcall **)(_DWORD))(a1 + 20))(i[1]);
    if ( *(_DWORD *)(a1 + 24) )
      (*(void (__fastcall **)(_DWORD))(a1 + 24))(i[2]);
    i[1] = a2;
    i[2] = a3;
    return 0;
  }
  else if ( (double)*(unsigned int *)a1 > (double)*(unsigned int *)(a1 + 8) * 1.3 && sub_8C224(a1) )
  {
    sub_8CD10(2, "src/zc_hashtable.c", 205, "rehash fail");
    return -1;
  }
  else
  {
    v13 = calloc(1u, 0x14u);
    if ( v13 )
    {
      *v13 = (*(int (__fastcall **)(int))(a1 + 12))(a2);
      v13[1] = a2;
      v13[2] = a3;
      v13[4] = 0;
      v13[3] = 0;
      sub_8F7E4(*v13, *(_DWORD *)(a1 + 8));
      if ( *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * v7) )
      {
        *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * v7) + 12) = v13;
        v13[4] = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * v7);
      }
      *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * v7) = v13;
      ++*(_DWORD *)a1;
      return 0;
    }
    else
    {
      v6 = _errno_location();
      sub_8CD10(2, "src/zc_hashtable.c", 212, "calloc fail, errno[%d]", *v6);
      return -1;
    }
  }
}
