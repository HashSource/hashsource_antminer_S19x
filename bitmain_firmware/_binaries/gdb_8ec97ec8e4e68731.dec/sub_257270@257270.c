void __fastcall sub_257270(_DWORD *a1)
{
  _DWORD *v2; // r7
  _DWORD *v3; // r4
  _DWORD *v4; // r6
  _DWORD *v5; // r5
  _DWORD *v6; // t1
  _DWORD *v7; // r0
  _DWORD *v8; // r0
  _DWORD *v9; // r0
  __int64 v10; // r0

  if ( a1[5] )
  {
    (*(void (__fastcall **)(_DWORD *))(*a1 + 16))(a1);
    v2 = (_DWORD *)a1[5];
    a1[5] = 0;
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
          if ( v6 )
          {
            v7 = (_DWORD *)v5[9];
            if ( v7 != v5 + 11 )
              sub_339E64(v7);
            v8 = (_DWORD *)v5[3];
            if ( v8 != v5 + 5 )
              sub_339E64(v8);
            sub_33AC04(v5);
          }
        }
        while ( v4 != v3 );
        v4 = (_DWORD *)v2[9];
      }
      if ( v4 )
        sub_339E64(v4);
      v9 = (_DWORD *)v2[3];
      if ( v9 != v2 + 5 )
        sub_339E64(v9);
      sub_349268(v2);
    }
  }
  else
  {
    v10 = sub_94700((int)"ui-out.c", 395, "misplaced table_end or missing table_begin.");
    sub_25734C(v10, HIDWORD(v10));
  }
}
