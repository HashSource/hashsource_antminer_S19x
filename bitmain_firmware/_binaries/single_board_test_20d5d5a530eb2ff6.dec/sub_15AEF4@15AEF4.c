int __fastcall sub_15AEF4(int a1, int *a2, _DWORD *a3, int a4)
{
  int v4; // r4
  int v6; // r0
  _DWORD *v7; // r2
  int v8; // r5
  int v9; // r0
  int v10; // r0
  int v11; // r5
  int v12; // r0
  _DWORD *v13; // [sp+4h] [bp-8h]
  _DWORD *v14; // [sp+4h] [bp-8h]

  if ( a2 )
  {
    if ( a4 == 5 )
    {
      v4 = 1;
      *a2 = sub_15ADF4();
    }
    else if ( a4 == 97 )
    {
      v4 = 1;
      *a2 = sub_15AE74();
    }
    else
    {
      v4 = 0;
      *a2 = 0;
    }
  }
  else
  {
    if ( dword_6E1CAC )
    {
      v4 = dword_6E1CB0;
    }
    else
    {
      v13 = a3;
      v6 = sub_15ADF4();
      v7 = v13;
      if ( v6 )
      {
        v8 = dword_6E1CB0++;
        v9 = sub_D8AD8(v6);
        v7 = v13;
        dword_6E1CA4[v8 + 4] = v9;
      }
      v14 = v7;
      v10 = sub_15AE74();
      a3 = v14;
      if ( v10 )
      {
        v11 = dword_6E1CB0++;
        v12 = sub_D8AD8(v10);
        a3 = v14;
        dword_6E1CA4[v11 + 4] = v12;
      }
      v4 = dword_6E1CB0;
      dword_6E1CAC = 1;
      dword_6E1CA4[dword_6E1CB0 + 4] = 0;
    }
    *a3 = &unk_6E1CB4;
  }
  return v4;
}
