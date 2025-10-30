int __fastcall sub_8DB08(_DWORD *a1, int a2)
{
  int v5; // r0
  int v6; // r0
  _DWORD *v7; // r3
  int v8; // r6
  _DWORD *v9; // r2
  _DWORD *v10; // r1
  bool v11; // zf
  int v12; // r0
  void (__fastcall *v13)(_DWORD *, int); // r3
  int v14; // r0
  void (__fastcall *v15)(_DWORD *, int); // r3

  if ( !a2 || !*(_DWORD *)(a2 + 328) )
    return 0;
  sub_10C554(a1[134]);
  v5 = sub_DFA98(a1[5], a2);
  if ( v5 )
  {
    v6 = sub_DF92C(a1[5], v5);
    v7 = *(_DWORD **)(v6 + 456);
    v8 = v6;
    if ( v7 )
    {
      v9 = *(_DWORD **)(v6 + 452);
      if ( v9 )
      {
        v10 = a1 + 7;
        if ( v7 == a1 + 8 )
        {
          if ( v9 == v10 )
            v7 = 0;
          else
            a1[8] = v9;
          if ( v9 == v10 )
          {
            a1[7] = v7;
            a1[8] = v7;
          }
          else
          {
            v9[114] = v7;
          }
        }
        else
        {
          v11 = v9 == v10;
          if ( v9 == v10 )
          {
            a1[7] = v7;
            v7[113] = v9;
          }
          else
          {
            v7[113] = v9;
            v9 = *(_DWORD **)(v6 + 452);
          }
          if ( !v11 )
            v9[114] = v7;
        }
        *(_DWORD *)(v6 + 456) = 0;
        *(_DWORD *)(v6 + 452) = 0;
      }
    }
    v12 = a1[134];
    *(_DWORD *)(a2 + 408) = 1;
    sub_10C564(v12);
    v13 = (void (__fastcall *)(_DWORD *, int))a1[12];
    if ( v13 )
      v13(a1, a2);
    sub_8D6A4(v8);
    return 1;
  }
  else
  {
    v14 = a1[134];
    *(_DWORD *)(a2 + 408) = 1;
    sub_10C564(v14);
    v15 = (void (__fastcall *)(_DWORD *, int))a1[12];
    if ( v15 )
      v15(a1, a2);
    return 0;
  }
}
