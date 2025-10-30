int __fastcall sub_10AF04(_DWORD *a1, _BYTE *a2, _DWORD *a3)
{
  int v4; // r6
  int v7; // r4
  _BYTE *v8; // r9
  int v9; // r0
  int v10; // r4
  int v11; // r0
  int v12; // r3
  int (__fastcall *v13)(int, _BYTE *, _DWORD); // r6
  int v14; // r4
  int v15; // r0
  _DWORD *v17; // r10

  v4 = *a1;
  v7 = *(_DWORD *)(*a1 + 8);
  v8 = &a2[v7];
  if ( a2[v7 + 208] )
  {
    v9 = *(_DWORD *)&a2[4 * v7 + 148];
  }
  else
  {
    switch ( v7 )
    {
      case 4:
        v17 = a2 + 64;
        if ( !a2[88] )
        {
          sub_21C928(a2 + 64, a2, 4);
          a2[88] = 1;
        }
        break;
      case 5:
        v17 = a2 + 92;
        if ( !a2[116] )
        {
          sub_21C928(a2 + 92, a2, 5);
          a2[116] = 1;
        }
        break;
      case 6:
        v17 = a2 + 120;
        if ( !a2[144] )
        {
          sub_21C928(a2 + 120, a2, 6);
          a2[144] = 1;
        }
        break;
      case 14:
        v17 = a2 + 32;
        if ( !a2[60] )
        {
          sub_A3C94((int)(a2 + 32), (int)a2);
          a2[60] = 1;
        }
        break;
      default:
        v17 = a2 + 8;
        break;
    }
    v9 = sub_21CBA8(v7, *v17);
    *(_DWORD *)&a2[4 * v7 + 148] = v9;
    v8[208] = 1;
  }
  v10 = (unsigned __int64)sub_347674(v9, a1[2]) >> 32;
  v11 = sub_194570(v4, a2);
  v12 = a1[3];
  v13 = (int (__fastcall *)(int, _BYTE *, _DWORD))v11;
  *a3 = a1;
  v14 = *(_DWORD *)(v12 + 4 * v10);
  if ( v14 )
  {
    while ( 1 )
    {
      v15 = sub_21B7DC(v14);
      if ( v13(v15, a2, 0) )
        break;
      v14 = *(_DWORD *)(v14 + 40);
      if ( !v14 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    v14 = 0;
  }
  a3[2] = v14;
  return v14;
}
