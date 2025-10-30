int __fastcall sub_257708(int a1)
{
  _DWORD *v2; // r8
  _DWORD *v3; // r5
  _DWORD *v4; // r7
  _DWORD *v5; // r4
  _DWORD *v6; // t1
  void *v7; // r3
  void *v8; // r0
  _DWORD *v9; // r0
  _DWORD *v10; // r0
  __int64 v11; // r4
  void *v12; // r0
  void *v13; // t1

  v2 = *(_DWORD **)(a1 + 20);
  *(_DWORD *)a1 = &unk_3F2B04;
  if ( v2 )
  {
    v3 = (_DWORD *)v2[9];
    v4 = (_DWORD *)v2[10];
    if ( v3 != v4 )
    {
      do
      {
        v6 = (_DWORD *)*v3++;
        v5 = v6;
        v7 = v6 + 11;
        if ( v6 )
        {
          v8 = (void *)v5[9];
          if ( v8 != v7 )
            sub_339E64(v8);
          v9 = (_DWORD *)v5[3];
          if ( v9 != v5 + 5 )
            sub_339E64(v9);
          sub_33AC04(v5);
        }
      }
      while ( v4 != v3 );
      v4 = (_DWORD *)v2[9];
    }
    if ( v4 )
      sub_339E64(v4);
    v10 = (_DWORD *)v2[3];
    if ( v10 != v2 + 5 )
      sub_339E64(v10);
    sub_33AC04(v2);
  }
  v11 = *(_QWORD *)(a1 + 8);
  if ( (_DWORD)v11 != HIDWORD(v11) )
  {
    do
    {
      v13 = *(void **)v11;
      LODWORD(v11) = v11 + 4;
      v12 = v13;
      if ( v13 )
        sub_33AC04(v12);
    }
    while ( HIDWORD(v11) != (_DWORD)v11 );
    HIDWORD(v11) = *(_DWORD *)(a1 + 8);
  }
  if ( HIDWORD(v11) )
    sub_339E64((void *)HIDWORD(v11));
  return a1;
}
