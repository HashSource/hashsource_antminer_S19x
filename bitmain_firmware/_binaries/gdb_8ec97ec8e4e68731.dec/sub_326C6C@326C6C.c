int __fastcall sub_326C6C(int a1)
{
  _DWORD *v2; // r5
  void (__fastcall *v3)(_DWORD); // r3
  void (__fastcall *v4)(_DWORD); // r3
  _DWORD *v5; // r4
  _DWORD *v6; // r6
  void (__fastcall *v7)(_DWORD); // r3
  void (__fastcall *v8)(_DWORD); // r3
  void (__fastcall *v9)(_DWORD); // r3
  void (__fastcall *v10)(_DWORD); // r3
  _DWORD *v11; // r6

  v2 = *(_DWORD **)a1;
  if ( *(_DWORD *)a1 )
  {
    v3 = *(void (__fastcall **)(_DWORD))(a1 + 8);
    if ( v3 )
      v3(*v2);
    v4 = *(void (__fastcall **)(_DWORD))(a1 + 12);
    if ( v4 )
      v4(v2[1]);
    *v2 = 0;
    do
    {
      v5 = v2;
      v2 = 0;
      while ( 1 )
      {
        v6 = (_DWORD *)v5[2];
        if ( v6 )
        {
          v7 = *(void (__fastcall **)(_DWORD))(a1 + 8);
          if ( v7 )
          {
            v7(*v6);
            v6 = (_DWORD *)v5[2];
          }
          v8 = *(void (__fastcall **)(_DWORD))(a1 + 12);
          if ( v8 )
          {
            v8(v6[1]);
            v6 = (_DWORD *)v5[2];
          }
          *v6 = v2;
        }
        else
        {
          v6 = v2;
        }
        v2 = (_DWORD *)v5[3];
        if ( v2 )
        {
          v9 = *(void (__fastcall **)(_DWORD))(a1 + 8);
          if ( v9 )
          {
            v9(*v2);
            v2 = (_DWORD *)v5[3];
          }
          v10 = *(void (__fastcall **)(_DWORD))(a1 + 12);
          if ( v10 )
          {
            v10(v2[1]);
            v2 = (_DWORD *)v5[3];
          }
          *v2 = v6;
        }
        else
        {
          v2 = v6;
        }
        v11 = (_DWORD *)*v5;
        (*(void (__fastcall **)(_DWORD *, _DWORD))(a1 + 20))(v5, *(_DWORD *)(a1 + 24));
        if ( !v11 )
          break;
        v5 = v11;
      }
    }
    while ( v2 );
  }
  return (*(int (__fastcall **)(int, _DWORD))(a1 + 20))(a1, *(_DWORD *)(a1 + 24));
}
