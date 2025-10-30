int __fastcall sub_CCC68(int a1, int a2)
{
  int v2; // r3
  size_t v3; // r3
  int *v5; // r0
  int v7; // r3
  bool v8; // zf
  size_t v9; // r3
  int v10; // r7
  int v11; // r0
  int v13; // r2
  int v14; // [sp+14h] [bp-18h] BYREF
  size_t v15[5]; // [sp+18h] [bp-14h] BYREF

  v2 = *(_DWORD *)(a2 + 24);
  v14 = 0;
  if ( v2 && (v3 = *(_DWORD *)(v2 + 60)) != 0 )
  {
    v5 = *(int **)(a2 + 12);
    v15[2] = v3;
    v7 = *v5;
    v8 = *v5 == 1034;
    if ( *v5 != 1034 )
      v8 = v7 == 1087;
    if ( v8 )
    {
      v9 = 32;
    }
    else if ( v7 == 1035 )
    {
      v9 = 56;
    }
    else
    {
      v9 = 57;
    }
    v15[0] = v9;
    v15[3] = 0;
    v10 = sub_B2054(v15, (_BYTE **)&v14);
    if ( v10 < 0 )
    {
      v13 = 216;
    }
    else
    {
      v11 = sub_EAA20(**(_DWORD **)(a2 + 12));
      if ( sub_AE610(a1, v11, 0, -1, 0, v14, v10) )
        return 1;
      sub_E0758(v14, v10, (size_t)"crypto/ec/ecx_meth.c");
      v13 = 223;
    }
    sub_D0048(16, 267, 65, "crypto/ec/ecx_meth.c", v13);
    return 0;
  }
  else
  {
    sub_D0048(16, 267, 123, "crypto/ec/ecx_meth.c", 206);
    return 0;
  }
}
