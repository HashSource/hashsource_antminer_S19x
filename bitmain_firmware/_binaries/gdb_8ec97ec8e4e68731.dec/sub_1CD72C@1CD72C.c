int __fastcall sub_1CD72C(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v9; // r3
  int v10; // r1
  __int64 v11; // r2
  int v12; // r3
  int v13; // r2
  int v14; // [sp+4h] [bp-Ch] BYREF
  int v15; // [sp+8h] [bp-8h]
  int v16; // [sp+Ch] [bp-4h]

  v14 = a2;
  v15 = a3;
  v16 = a4;
  if ( a2 == 1 )
  {
    if ( a5 != 1 )
    {
      sub_1CD6BC(&v14, &a5);
      if ( v14 == 2 )
        goto LABEL_5;
      if ( v14 != 1 || a5 != 1 )
        goto LABEL_3;
    }
    v12 = v16;
    v13 = a7;
    *(_QWORD *)a1 = 0xFFFFFFFF00000001LL;
    *(_DWORD *)(a1 + 8) = v12 + v13;
    return a1;
  }
  if ( a2 != 2 )
  {
LABEL_3:
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 4) = 0;
    *(_DWORD *)(a1 + 8) = 0;
    return a1;
  }
LABEL_5:
  if ( a5 != 1 )
    goto LABEL_3;
  v9 = v16;
  v10 = a7;
  LODWORD(v11) = v15;
  *(_DWORD *)a1 = 2;
  HIDWORD(v11) = v9 + v10;
  *(_QWORD *)(a1 + 4) = v11;
  return a1;
}
