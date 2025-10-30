int __fastcall sub_2700DC(int a1)
{
  int v2; // r5
  void (__fastcall ***v3)(_DWORD); // r0
  void *v4; // r0
  int v5; // r3
  void **v6; // r6
  int v7; // r5
  void *v8; // r0
  void *v9; // r0
  void *v10; // r0
  void *v11; // r0

  v2 = *(_DWORD *)(a1 + 152);
  v3 = *(void (__fastcall ****)(_DWORD))(v2 + 12);
  if ( v3 )
  {
    (**v3)(v3);
    v2 = *(_DWORD *)(a1 + 152);
    v4 = *(void **)(v2 + 12);
    if ( v4 )
    {
      free(v4);
      v2 = *(_DWORD *)(a1 + 152);
    }
  }
  v5 = *(_DWORD *)(v2 + 16);
  if ( v5 )
  {
    ((void (__fastcall *)(_DWORD))loc_26C200)(*(_DWORD *)(v5 + 24));
    v6 = *(void ***)(v2 + 16);
    if ( v6 )
    {
      if ( *v6 != v6 + 2 )
        sub_339E64(*v6);
      sub_33AC04(v6);
    }
    *(_DWORD *)(v2 + 16) = 0;
  }
  ((void (__fastcall *)(_DWORD))loc_26C200)(*(_DWORD *)(a1 + 80));
  v7 = *(_DWORD *)(a1 + 104);
  if ( a1 == *(_DWORD *)(v7 + 40) )
  {
    if ( *(_DWORD *)v7 )
      free(*(void **)v7);
    sub_33AC04((void *)v7);
  }
  sub_33AC04(*(void **)(a1 + 152));
  v8 = *(void **)(a1 + 116);
  if ( v8 != (void *)(a1 + 124) )
    sub_339E64(v8);
  v9 = *(void **)(a1 + 92);
  if ( v9 )
    sub_339E64(v9);
  v10 = *(void **)(a1 + 48);
  if ( v10 != (void *)(a1 + 56) )
    sub_339E64(v10);
  v11 = *(void **)(a1 + 24);
  if ( v11 != (void *)(a1 + 32) )
    sub_339E64(v11);
  if ( *(_DWORD *)a1 != a1 + 8 )
    sub_339E64(*(void **)a1);
  return a1;
}
