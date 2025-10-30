int __fastcall sub_2390E4(_DWORD *a1, int a2)
{
  void (__fastcall ****v4)(_DWORD, int); // r5
  void (__fastcall ****v5)(_DWORD, int); // r7
  void (__fastcall ***v6)(_DWORD, int); // t1
  int v7; // r5
  int v8; // r7
  int v9; // r5
  int v10; // r7
  int (__fastcall ***v11)(int, int); // r3
  int (__fastcall ***v12)(int, int); // t1
  int (__fastcall ***v13)(int, int); // r1
  int (__fastcall *v14)(int, int); // r2

  (*(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)a2 + 8))(a2, a1);
  v4 = (void (__fastcall ****)(_DWORD, int))a1[10];
  v5 = (void (__fastcall ****)(_DWORD, int))a1[11];
  while ( v5 != v4 )
  {
    v6 = *v4++;
    (**v6)(v6, a2);
  }
  v7 = a1[7];
  v8 = a1[8];
  if ( v7 != v8 )
  {
    v9 = v7 - 4;
    v10 = v8 - 4;
    do
    {
      while ( 1 )
      {
        v12 = *(int (__fastcall ****)(int, int))(v9 + 4);
        v9 += 4;
        v11 = v12;
        v13 = v12;
        v14 = **v12;
        if ( v14 != sub_238B10 )
          break;
        (*(void (__fastcall **)(int, int (__fastcall ***)(int, int)))(*(_DWORD *)a2 + 28))(a2, v13);
        if ( v10 == v9 )
          return (*(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)a2 + 12))(a2, a1);
      }
      v14((int)v11, a2);
    }
    while ( v10 != v9 );
  }
  return (*(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)a2 + 12))(a2, a1);
}
