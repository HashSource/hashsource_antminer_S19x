int __fastcall sub_BD3B8(int a1, int a2)
{
  int v2; // r2
  int v6; // r4
  int v7; // r7
  int v8; // r0
  int v9; // r4
  int v10; // r1
  int v11; // r0
  int v12; // r0
  int v13; // r3
  int v14; // [sp+0h] [bp-Ch] BYREF
  int v15; // [sp+4h] [bp-8h] BYREF

  v2 = *(_DWORD *)a1;
  v14 = 0;
  v15 = 0;
  if ( v2 )
  {
    *(_DWORD *)(a1 + 60) = 5;
    return 0;
  }
  v6 = sub_BC6D0(*(_DWORD **)(a2 + 8), *(const void **)(a1 + 12), *(_DWORD *)(a1 + 16));
  if ( !v6 )
  {
    *(_DWORD *)(a1 + 60) = 1;
    return 0;
  }
  v7 = sub_BD4E4();
  if ( v7 )
  {
    v8 = sub_BC6CC(v6);
    if ( sub_116110(&v15, v8) == 1 && sub_BD81C(v7, v15) == 1 )
    {
      if ( sub_BD2F0(a1) != 1 )
        goto LABEL_12;
      v11 = *(_DWORD *)(a2 + 4);
      if ( !v11 )
      {
LABEL_13:
        v9 = 0;
        *(_DWORD *)(a1 + 60) = 4;
        goto LABEL_8;
      }
      v12 = sub_10E89C(v11);
      if ( sub_116110(&v14, v12) == 1 && sub_BD758(v7, v14) == 1 )
      {
LABEL_12:
        sub_BD8F0(v7, v10, *(_DWORD *)(a2 + 16), *(_DWORD *)(a2 + 20));
        if ( sub_BD568(v7, *(_DWORD *)a2, 0) == 1 )
        {
          if ( sub_BD8F8(v7, a1) == 1 )
            v13 = 2;
          else
            v13 = 3;
          *(_DWORD *)(a1 + 60) = v13;
          v9 = v13 == 2;
          goto LABEL_8;
        }
        goto LABEL_13;
      }
    }
  }
  v9 = -1;
LABEL_8:
  sub_1160FC(v14);
  sub_1160FC(v15);
  sub_BD51C(v7);
  return v9;
}
