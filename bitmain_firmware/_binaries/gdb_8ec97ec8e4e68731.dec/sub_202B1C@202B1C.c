void __fastcall sub_202B1C(int a1, int a2, _DWORD **a3, int a4)
{
  _DWORD *v4; // r4
  int v5; // r5
  _DWORD *v6; // r12
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  char *v11; // r1
  bool v12; // zf
  char *v13; // r1
  int v14; // r0
  int v15; // r3
  _DWORD **v16; // r2
  _DWORD *v17; // r12
  int v18; // lr
  int *v19; // r4
  int v20; // r0
  int v21; // r1
  int v22; // r2
  int v23; // r3
  char *v24; // r1
  char *v25; // r1
  int v26; // r0
  _DWORD v27[4]; // [sp+4h] [bp-20h] BYREF
  int v28; // [sp+14h] [bp-10h]
  int v29; // [sp+1Ch] [bp-8h] BYREF

  v6 = *a3;
  if ( *a3 && *v6 )
  {
    v4 = (_DWORD *)v6[*v6 + 1];
    v5 = a1;
    v7 = sub_273FA0(a4, "address");
    v8 = v4[6];
    v9 = v4[7];
    v10 = **(_DWORD **)(v7 + 4);
    v29 = v10;
    if ( v8 == v9 )
    {
      v11 = (char *)v4[10];
      if ( v11 == (char *)v4[11] )
      {
        sub_19BF4(v4 + 9, v11, &v29);
      }
      else
      {
        v12 = v11 == 0;
        v13 = v11 + 4;
        if ( !v12 )
          *((_DWORD *)v13 - 1) = v10;
        v4[10] = v13;
      }
      return;
    }
  }
  else
  {
    ((void (__fastcall *)(int, int))loc_163B8)(103, a2);
  }
  v14 = sub_273CF8(v5, "Library list with both segments and sections");
  v17 = *v16;
  v27[2] = v4;
  v27[3] = v5;
  v28 = v18;
  if ( v17 && *v17 )
  {
    v19 = (int *)v17[*v17 + 1];
    v5 = v14;
    v20 = sub_273FA0(v15, "address");
    v21 = v19[9];
    v22 = v19[10];
    v23 = **(_DWORD **)(v20 + 4);
    v27[0] = v23;
    if ( v21 == v22 )
    {
      v24 = (char *)v19[7];
      if ( v24 != (char *)v19[8] )
      {
        v12 = v24 == 0;
        v25 = v24 + 4;
        if ( !v12 )
          *((_DWORD *)v25 - 1) = v23;
        v19[7] = (int)v25;
        __asm { POP             {R4,R5,PC} }
      }
      sub_19BF4(v19 + 6, v24, v27);
      __asm { POP             {R4,R5,PC} }
    }
  }
  else
  {
    ((void (__fastcall *)(int))loc_163B8)(85);
  }
  v26 = sub_273CF8(v5, "Library list with both segments and sections");
  sub_202C74(v26);
}
