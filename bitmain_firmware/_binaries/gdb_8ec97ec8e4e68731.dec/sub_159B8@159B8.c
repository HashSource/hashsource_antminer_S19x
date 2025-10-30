void __fastcall sub_159B8(int a1)
{
  void ***v2; // r5
  void ***v3; // r7
  void **v4; // r6
  void **v5; // r8
  void **v6; // r0
  void **v7; // r3
  void *v8; // r0

  if ( a1 )
  {
    v2 = *(void ****)(a1 + 24);
    v3 = *(void ****)(a1 + 28);
    while ( v3 != v2 )
    {
      v4 = *v2;
      v5 = v2[1];
      while ( v5 != v4 )
      {
        v6 = (void **)v4[6];
        if ( v6 != v4 + 8 )
          sub_339E64(v6);
        v7 = v4;
        v4 += 12;
        if ( *v7 != v7 + 2 )
          sub_339E64(*v7);
      }
      if ( *v2 )
        sub_339E64(*v2);
      v2 += 3;
    }
    v8 = *(void **)(a1 + 24);
    if ( v8 )
      sub_339E64(v8);
    if ( *(_DWORD *)a1 != a1 + 8 )
      sub_339E64(*(void **)a1);
    sub_349268((void *)a1);
  }
}
