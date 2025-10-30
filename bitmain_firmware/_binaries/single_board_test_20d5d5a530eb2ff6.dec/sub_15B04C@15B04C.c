int __fastcall sub_15B04C(int a1, int *a2, _DWORD *a3, int a4)
{
  int result; // r0
  int v6; // r5
  int v7; // r0
  int v8; // r5
  int v9; // r0
  _DWORD *v10; // r0
  int v11; // r6
  int v12; // r0
  _DWORD *v13; // r0
  int v14; // r5
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  _DWORD *v22; // [sp+4h] [bp-4h]
  _DWORD *v23; // [sp+4h] [bp-4h]
  _DWORD *v24; // [sp+4h] [bp-4h]

  if ( !a2 )
  {
    if ( dword_6E1CC8 )
    {
      result = dword_6E1CCC;
LABEL_8:
      *a3 = &unk_6E1CD0;
      return result;
    }
    v7 = dword_6E1CC4;
    if ( !dword_6E1CC4 )
    {
      v23 = a3;
      v13 = sub_D8CA8(64, 65);
      a3 = v23;
      v14 = (int)v13;
      if ( !v13 )
        goto LABEL_25;
      v15 = sub_D8D1C((int)v13, 20);
      a3 = v23;
      if ( !v15 )
        goto LABEL_25;
      v16 = sub_D8D14(v14, 64);
      a3 = v23;
      if ( !v16 )
        goto LABEL_25;
      v17 = sub_D8D24(v14, 100);
      a3 = v23;
      if ( !v17 )
        goto LABEL_25;
      v18 = sub_D8D2C(v14, 0);
      a3 = v23;
      if ( !v18
        || (v19 = sub_D8D34(v14, (int)sub_15ADE4), a3 = v23, !v19)
        || (v20 = sub_D8D3C(v14, (int)sub_15ADCC), a3 = v23, !v20)
        || (v21 = sub_D8D44(v14, (int)sub_15ADB8), a3 = v23, !v21) )
      {
LABEL_25:
        v24 = a3;
        sub_D8D04(v14);
        a3 = v24;
        dword_6E1CC4 = 0;
        goto LABEL_11;
      }
      v7 = v14;
      dword_6E1CC4 = v14;
    }
    v22 = a3;
    v8 = dword_6E1CCC++;
    v9 = sub_D8C70(v7);
    a3 = v22;
    dword_6E1CA4[v8 + 11] = v9;
LABEL_11:
    result = dword_6E1CCC;
    dword_6E1CC8 = 1;
    dword_6E1CA4[dword_6E1CCC + 11] = 0;
    goto LABEL_8;
  }
  if ( a4 == 64 )
  {
    v6 = dword_6E1CC4;
    if ( !dword_6E1CC4 )
    {
      v10 = sub_D8CA8(64, 65);
      v11 = (int)v10;
      if ( !v10
        || !sub_D8D1C((int)v10, 20)
        || !sub_D8D14(v11, 64)
        || !sub_D8D24(v11, 100)
        || !sub_D8D2C(v11, 0)
        || !sub_D8D34(v11, (int)sub_15ADE4)
        || !sub_D8D3C(v11, (int)sub_15ADCC)
        || !sub_D8D44(v11, (int)sub_15ADB8) )
      {
        v12 = v11;
        v11 = 0;
        sub_D8D04(v12);
      }
      v6 = v11;
      dword_6E1CC4 = v11;
    }
    *a2 = v6;
    return 1;
  }
  else
  {
    *a2 = 0;
    return 0;
  }
}
