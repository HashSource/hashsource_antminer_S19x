int __fastcall sub_D9644(int *a1, int a2, int a3)
{
  int v4; // r6
  int v7; // r3
  int v8; // r4
  int v9; // r0
  int v10; // r6
  int (__fastcall *v12)(int, int, int, int *); // r9
  int v13; // r3
  int v14; // r6
  int v15; // r9
  int *v16; // r0
  int *v17; // r10
  int v18; // r9
  int v19; // r3
  int v20; // r3
  int v21; // r0
  int v22; // [sp+Ch] [bp-44h] BYREF
  _BYTE v23[64]; // [sp+10h] [bp-40h] BYREF

  v4 = a1[4];
  v7 = *(_DWORD *)v4;
  v8 = *(_DWORD *)(*(_DWORD *)v4 + 4) & 4;
  if ( v8 )
  {
    if ( !a2 || (a1[2] & 0x200) != 0 )
      return (*(int (__fastcall **)(int, int, int, int *))(v7 + 64))(v4, a2, a3, a1);
    v9 = sub_DB5F0(v4);
    v10 = v9;
    if ( v9 )
    {
      v8 = (*(int (__fastcall **)(int, int, int, int *))(*(_DWORD *)v9 + 64))(v9, a2, a3, a1);
      sub_DB4BC(v10);
      return v8;
    }
    return 0;
  }
  v12 = *(int (__fastcall **)(int, int, int, int *))(v7 + 64);
  if ( v12 )
  {
    if ( !a2 )
      return v12(a1[4], 0, a3, a1) > 0;
    v13 = a1[2];
    v22 = *(_DWORD *)(*(_DWORD *)v4 + 4) & 4;
    if ( (v13 & 0x200) != 0 )
      return v12(v4, a2, a3, a1);
    v14 = 1;
    v15 = 1;
    goto LABEL_12;
  }
  if ( !a2 )
  {
    v21 = sub_D8C78(*a1);
    if ( v21 >= 0 )
      return sub_DA7C8(v4, 0, a3, 0, v21) > 0;
    return 0;
  }
  v20 = a1[2];
  v22 = *(_DWORD *)(*(_DWORD *)v4 + 4) & 4;
  if ( (v20 & 0x200) == 0 )
  {
    v14 = 0;
    v15 = 0;
LABEL_12:
    v16 = (int *)sub_D14F4();
    v17 = v16;
    if ( !v16 )
      return v8;
    if ( !sub_D17B4(v16, a1) )
    {
      v8 = 0;
      sub_D1504(v17);
      return v8;
    }
    if ( v15 )
      v18 = (*(int (__fastcall **)(int, int, int, int *))(*(_DWORD *)v17[4] + 64))(v17[4], a2, a3, v17);
    else
      v18 = sub_D16E4(v17, (int)v23, &v22);
    sub_D1504(v17);
    if ( v18 )
      v19 = v14;
    else
      v19 = v14 | 1;
    goto LABEL_19;
  }
  v18 = sub_D16E4(a1, (int)v23, &v22);
  v19 = v18 == 0;
LABEL_19:
  if ( v19 )
    return v18;
  if ( sub_DA7C8(a1[4], a2, a3, v23, v22) > 0 )
    return 1;
  return v8;
}
