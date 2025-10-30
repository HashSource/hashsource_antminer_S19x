void __fastcall sub_68464(int a1, _DWORD *a2)
{
  _DWORD *v2; // r9
  _DWORD *v3; // r3
  _DWORD *v4; // r8
  _DWORD *v5; // r10
  _DWORD *v6; // r7
  _DWORD *v7; // r6
  _DWORD *v8; // r5
  _DWORD *v9; // r4
  _DWORD *v10; // r11
  _DWORD *v11; // r0
  void *v12; // r0
  void *v13; // r2

  v2 = a2;
  if ( a2 )
  {
    do
    {
      sub_68464(a1, v2[3]);
      v3 = (_DWORD *)v2[5];
      v4 = (_DWORD *)v2[6];
      v5 = (_DWORD *)v2[2];
      if ( v3 != v4 )
      {
        v6 = v3 + 3;
        v7 = v3 + 3;
        while ( 1 )
        {
          v8 = (_DWORD *)v3[1];
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
          v3 = v6;
          if ( v4 == v6 )
            break;
          v6 += 3;
        }
        v4 = (_DWORD *)v2[5];
      }
      if ( v4 )
        sub_339E64(v4);
      sub_339E64(v2);
      v2 = v5;
    }
    while ( v5 );
  }
}
