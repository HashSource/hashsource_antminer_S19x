int __fastcall sub_BFEB0(int a1, int a2, int a3, _DWORD *a4)
{
  _DWORD *v6; // r3
  int v7; // r6
  int v8; // r0
  _DWORD *v9; // r5
  int v10; // r0
  int v11; // [sp+Ch] [bp-Ch] BYREF
  _DWORD *v12; // [sp+10h] [bp-8h] BYREF
  _DWORD *v13; // [sp+14h] [bp-4h] BYREF

  switch ( a2 )
  {
    case 1:
      if ( a3 )
        return 1;
      sub_F1598(a4, 0, &v12, &v13);
      v6 = v12;
      if ( !v12 )
        return -1;
      goto LABEL_8;
    case 3:
      *a4 = 672;
      return 1;
    case 5:
      if ( a3 )
        return 1;
      sub_13A254(a4, 0, 0, &v12, &v13);
      v6 = v12;
      if ( !v12 )
        return -1;
LABEL_8:
      if ( !*v6 )
        return -1;
      v7 = sub_EAC84(*v6);
      if ( !v7 )
        return -1;
      v8 = sub_DA19C(a1);
      if ( !sub_EB40C(&v11, v7, v8) )
        return -1;
      v9 = v13;
      v10 = sub_EAA20(v11);
      sub_B28F8(v9, v10, -1, 0);
      return 1;
    case 8:
      *a4 = -1;
      return 1;
    default:
      return -2;
  }
}
