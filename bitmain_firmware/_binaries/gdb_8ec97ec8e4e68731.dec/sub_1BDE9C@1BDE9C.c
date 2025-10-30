void __fastcall sub_1BDE9C(void **ptr)
{
  _DWORD *v2; // r3
  _DWORD *v3; // r9
  _DWORD *v4; // r8
  _DWORD *v5; // r7
  _DWORD *v6; // r6
  _DWORD *v7; // r4
  _DWORD *v8; // r5
  _DWORD *v9; // r0
  void *v10; // r0
  void *v11; // r3

  v2 = ptr[6];
  v3 = ptr[7];
  if ( v2 != v3 )
  {
    v4 = v2 + 3;
    v5 = v2 + 3;
    while ( 1 )
    {
      v6 = (_DWORD *)v2[1];
      v7 = (_DWORD *)*(v5 - 3);
      if ( v7 != v6 )
      {
        v8 = v7 + 8;
        do
        {
          v9 = (_DWORD *)v7[6];
          if ( v9 != v8 )
            sub_339E64(v9);
          v10 = (void *)*(v8 - 8);
          v11 = v7 + 2;
          v8 += 12;
          v7 += 12;
          if ( v10 != v11 )
            sub_339E64(v10);
        }
        while ( v6 != v7 );
        v6 = (_DWORD *)*(v5 - 3);
      }
      if ( v6 )
        sub_339E64(v6);
      v5 += 3;
      v2 = v4;
      if ( v3 == v4 )
        break;
      v4 += 3;
    }
    v3 = ptr[6];
  }
  if ( v3 )
    sub_339E64(v3);
  if ( *ptr != ptr + 2 )
    sub_339E64(*ptr);
  sub_349268(ptr);
}
