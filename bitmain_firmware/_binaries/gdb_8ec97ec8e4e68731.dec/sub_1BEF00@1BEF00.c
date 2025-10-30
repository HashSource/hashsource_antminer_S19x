int *__fastcall sub_1BEF00(int *a1)
{
  int *v2; // r0
  int v3; // r11
  _DWORD *v4; // r3
  _DWORD *v5; // r9
  _DWORD *v6; // r8
  _DWORD *v7; // r7
  _DWORD *v8; // r6
  _DWORD *v9; // r4
  _DWORD *v10; // r5
  _DWORD *v11; // r0
  void *v12; // r0
  void *v13; // r3

  v2 = (int *)a1[1];
  if ( v2 != a1 + 3 )
    sub_339E64(v2);
  v3 = *a1;
  if ( *a1 )
  {
    v4 = *(_DWORD **)(v3 + 24);
    v5 = *(_DWORD **)(v3 + 28);
    if ( v4 != v5 )
    {
      v6 = v4 + 3;
      v7 = v4 + 3;
      while ( 1 )
      {
        v8 = (_DWORD *)v4[1];
        v9 = (_DWORD *)*(v7 - 3);
        if ( v9 != v8 )
        {
          v10 = v9 + 8;
          do
          {
            v11 = (_DWORD *)v9[6];
            if ( v11 != v10 )
              sub_339E64(v11);
            v12 = (void *)*(v10 - 8);
            v13 = v9 + 2;
            v10 += 12;
            v9 += 12;
            if ( v12 != v13 )
              sub_339E64(v12);
          }
          while ( v8 != v9 );
          v8 = (_DWORD *)*(v7 - 3);
        }
        if ( v8 )
          sub_339E64(v8);
        v7 += 3;
        v4 = v6;
        if ( v5 == v6 )
          break;
        v6 += 3;
      }
      v5 = *(_DWORD **)(v3 + 24);
    }
    if ( v5 )
      sub_339E64(v5);
    if ( *(_DWORD *)v3 != v3 + 8 )
      sub_339E64(*(void **)v3);
    sub_33AC04((void *)v3);
  }
  return a1;
}
