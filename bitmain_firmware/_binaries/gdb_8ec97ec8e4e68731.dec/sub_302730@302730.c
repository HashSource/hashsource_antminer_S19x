int __fastcall sub_302730(int a1, int *a2, int a3, _DWORD **a4, char *src)
{
  _DWORD *v5; // r5
  char *v7; // r7
  _DWORD *v8; // r4
  char *v10; // r10
  unsigned int v11; // r3
  char *v12; // r9
  size_t n; // r3
  int *v14; // r5
  char *v15; // r11
  char *v16; // r4
  int v17; // r0
  int v18; // t1
  int v19; // r12
  int v20; // r2
  void (__fastcall *v21)(int, char *); // r7
  int v22; // r0
  __int64 v23; // r2

  v5 = *a4;
  v7 = src;
  if ( !*a4 )
    return sub_2ADDE8(
             a1,
             *(_DWORD **)(a3 + 60),
             src,
             *(_DWORD *)(a3 + 56),
             *(unsigned int *)(a3 + 56),
             *(_DWORD *)(a3 + 36));
  v8 = (_DWORD *)*v5;
  if ( *v5 )
  {
    do
    {
      v11 = v8[1];
      if ( v11 >= *(_DWORD *)(a3 + 40) )
      {
        sub_2A6BBC("stabs.c", 683);
        v11 = v8[1];
      }
      v10 = &src[v11];
      (*(void (__fastcall **)(_DWORD, char *))(*(_DWORD *)(a1 + 4) + 48))(v8[2], &src[v11 + 8]);
      v10[4] = v8[3];
      v8 = (_DWORD *)*v8;
    }
    while ( v8 );
  }
  v12 = &src[*(_DWORD *)(a3 + 40)];
  if ( src < v12 )
  {
    v14 = v5 + 1;
    v15 = src;
    v16 = src;
    do
    {
      v18 = v14[1];
      ++v14;
      v17 = v18;
      if ( v18 != -1 )
      {
        if ( v15 != v16 )
        {
          v19 = *(_DWORD *)v16;
          v20 = *((_DWORD *)v16 + 2);
          *((_DWORD *)v15 + 1) = *((_DWORD *)v16 + 1);
          *(_DWORD *)v15 = v19;
          *((_DWORD *)v15 + 2) = v20;
          v17 = *v14;
        }
        (*(void (__fastcall **)(int, char *))(*(_DWORD *)(a1 + 4) + 48))(v17, v15);
        if ( !v16[4] )
        {
          if ( src != v16 )
            sub_2A6BBC("stabs.c", 709);
          v21 = *(void (__fastcall **)(int, char *))(*(_DWORD *)(a1 + 4) + 48);
          v22 = sub_2AB1E0(*a2);
          v21(v22, v15 + 8);
          v23 = 2863311531LL * *(unsigned int *)(*(_DWORD *)(a3 + 60) + 36);
          (*(void (__fastcall **)(int, char *, _DWORD))(*(_DWORD *)(a1 + 4) + 60))(
            (HIDWORD(v23) >> 3) - 1,
            v15 + 6,
            v23);
        }
        v15 += 12;
      }
      v16 += 12;
    }
    while ( v12 > v16 );
    v7 = src;
    n = v15 - src;
  }
  else
  {
    n = 0;
  }
  if ( *(_DWORD *)(a3 + 36) != n )
  {
    sub_2A6BBC("stabs.c", 721);
    n = *(_DWORD *)(a3 + 36);
  }
  return sub_2ADDE8(a1, *(_DWORD **)(a3 + 60), v7, n, *(unsigned int *)(a3 + 56), n);
}
