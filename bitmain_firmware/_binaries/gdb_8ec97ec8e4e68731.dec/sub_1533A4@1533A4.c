int __fastcall sub_1533A4(int a1, int a2, int a3)
{
  __int64 v6; // r6
  void *v7; // r0
  __int64 v8; // r6
  int v9; // r12
  int v10; // lr
  int v11; // r0
  int result; // r0
  int v13; // r3
  __int64 v14; // [sp+0h] [bp-Ch] BYREF

  sub_33B25C(&v14);
  v6 = v14;
  v7 = sub_9836C(0x18u);
  v8 = (int)&loc_F4240 * (__int64)a1 + v6;
  v9 = dword_487650;
  v10 = (int)v7;
  v11 = dword_487654;
  *(_DWORD *)(v10 + 16) = a2;
  *(_DWORD *)(v10 + 20) = a3;
  result = v11 + 1;
  *(_DWORD *)(v10 + 12) = 0;
  *(_QWORD *)v10 = v8;
  dword_487654 = result;
  *(_DWORD *)(v10 + 8) = result;
  if ( v9 && v8 >= *(_QWORD *)v9 )
  {
    v13 = v9;
    while ( 1 )
    {
      v13 = *(_DWORD *)(v13 + 12);
      if ( !v13 )
        break;
      if ( v8 < *(_QWORD *)v13 )
      {
        if ( v9 == v13 )
        {
          *(_DWORD *)(v10 + 12) = v13;
          dword_487650 = v10;
          goto LABEL_12;
        }
        break;
      }
    }
    while ( *(_DWORD *)(v9 + 12) != v13 )
      v9 = *(_DWORD *)(v9 + 12);
    *(_DWORD *)(v9 + 12) = v10;
    *(_DWORD *)(v10 + 12) = v13;
    dword_48764C = 0;
  }
  else
  {
    dword_487650 = v10;
    *(_DWORD *)(v10 + 12) = v9;
LABEL_12:
    dword_48764C = 0;
  }
  return result;
}
