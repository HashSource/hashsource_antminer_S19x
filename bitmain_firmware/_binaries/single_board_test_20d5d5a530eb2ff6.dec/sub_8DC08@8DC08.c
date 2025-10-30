int __fastcall sub_8DC08(_DWORD *a1, int a2)
{
  int v4; // r0
  bool v5; // zf
  int v6; // r3
  _DWORD *v8; // r2
  _DWORD *v9; // r1
  _DWORD *v10; // r7
  bool v11; // zf
  _DWORD *v12; // r3
  _DWORD *v13; // r2
  bool v14; // zf
  int v15; // r3
  int v16; // r0
  _DWORD *v17; // r3
  int v18; // r6
  _DWORD *v19; // r2
  bool v20; // zf
  void (__fastcall *v21)(_DWORD *, int); // r3
  unsigned int *v22; // r3
  unsigned int v23; // r2
  int v24; // r5
  int v25; // r5
  int v26; // r0
  void (__fastcall *v27)(_DWORD *, int); // r3

  sub_8DBC8(a2);
  sub_10C554(a1[134]);
  v4 = sub_DF7A0(a1[5], a2);
  v5 = v4 == 0;
  if ( v4 )
    v5 = a2 == v4;
  v6 = v4;
  if ( v5 )
  {
    if ( v4 || !sub_DFA98(a1[5], a2) && (v6 = a2) != 0 )
    {
      sub_8D6A4(v6);
      sub_10C564(a1[134]);
      return 0;
    }
    v10 = a1 + 7;
  }
  else
  {
    v8 = *(_DWORD **)(v4 + 456);
    if ( v8 && (v9 = *(_DWORD **)(v4 + 452)) != 0 )
    {
      v10 = a1 + 7;
      if ( v8 == a1 + 8 )
      {
        if ( v9 == v10 )
          v8 = 0;
        else
          a1[8] = v9;
        if ( v9 == v10 )
        {
          a1[7] = v8;
          a1[8] = v8;
        }
        else
        {
          v9[114] = v8;
        }
      }
      else
      {
        v11 = v9 == v10;
        if ( v9 == v10 )
        {
          a1[7] = v8;
          v8[113] = v10;
        }
        else
        {
          v8[113] = v9;
          v9 = *(_DWORD **)(v4 + 452);
        }
        if ( !v11 )
          v9[114] = v8;
      }
      *(_DWORD *)(v4 + 456) = 0;
      *(_DWORD *)(v4 + 452) = 0;
    }
    else
    {
      v10 = a1 + 7;
    }
    sub_8D6A4(v4);
  }
  v12 = *(_DWORD **)(a2 + 456);
  if ( v12 )
  {
    v13 = *(_DWORD **)(a2 + 452);
    if ( v13 )
    {
      if ( v12 == a1 + 8 )
      {
        if ( v13 == v10 )
          v12 = 0;
        else
          a1[8] = v13;
        if ( v13 == v10 )
        {
          a1[7] = v12;
          a1[8] = v12;
        }
        else
        {
          v13[114] = v12;
        }
      }
      else
      {
        v14 = v13 == v10;
        if ( v13 == v10 )
        {
          a1[7] = v12;
          v12[113] = v10;
        }
        else
        {
          v12[113] = v13;
          v13 = *(_DWORD **)(a2 + 452);
        }
        if ( !v14 )
          v13[114] = v12;
      }
      *(_DWORD *)(a2 + 456) = 0;
      *(_DWORD *)(a2 + 452) = 0;
    }
  }
  v15 = a1[7];
  if ( v15 )
  {
    *(_DWORD *)(a2 + 456) = v15;
    *(_DWORD *)(v15 + 452) = a2;
    *(_DWORD *)(a2 + 452) = v10;
    a1[7] = a2;
  }
  else
  {
    a1[7] = a2;
    a1[8] = a2;
    *(_DWORD *)(a2 + 452) = v10;
    *(_DWORD *)(a2 + 456) = a1 + 8;
  }
  if ( sub_89534((int)a1, 43, 0, 0) > 0 )
  {
    while ( 1 )
    {
      v24 = sub_89534((int)a1, 20, 0, 0);
      if ( v24 <= sub_89534((int)a1, 43, 0, 0) )
        break;
      v25 = a1[8];
      if ( !v25 || !*(_DWORD *)(v25 + 328) )
        break;
      v26 = sub_DFA98(a1[5], a1[8]);
      if ( !v26 )
      {
        v27 = (void (__fastcall *)(_DWORD *, int))a1[12];
        *(_DWORD *)(v25 + 408) = 1;
        if ( v27 )
          v27(a1, v25);
        break;
      }
      v16 = sub_DF92C(a1[5], v26);
      v17 = *(_DWORD **)(v16 + 456);
      v18 = v16;
      if ( v17 )
      {
        v19 = *(_DWORD **)(v16 + 452);
        if ( v19 )
        {
          if ( v17 == a1 + 8 )
          {
            if ( v19 == v10 )
            {
              a1[7] = 0;
              a1[8] = 0;
            }
            else
            {
              a1[8] = v19;
            }
            if ( v19 != v10 )
              v19[114] = v17;
          }
          else
          {
            v20 = v19 == v10;
            if ( v19 == v10 )
            {
              a1[7] = v17;
              v17[113] = v10;
            }
            else
            {
              v17[113] = v19;
              v19 = *(_DWORD **)(v16 + 452);
            }
            if ( !v20 )
              v19[114] = v17;
          }
          *(_DWORD *)(v16 + 456) = 0;
          *(_DWORD *)(v16 + 452) = 0;
        }
      }
      v21 = (void (__fastcall *)(_DWORD *, int))a1[12];
      *(_DWORD *)(v25 + 408) = 1;
      if ( v21 )
        v21(a1, v25);
      sub_8D6A4(v18);
      v22 = a1 + 22;
      do
        v23 = __ldrex(v22);
      while ( __strex(v23 + 1, v22) );
    }
  }
  sub_10C564(a1[134]);
  return 1;
}
