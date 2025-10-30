int __fastcall sub_F6E94(int a1, int a2)
{
  int v4; // r0
  int v6; // r0
  int v7; // r6
  int v8; // r8
  int v9; // r0
  int v10; // r4
  int v11; // r0
  int v12; // r5
  int v13; // r8
  int v14; // r0
  int v15; // r0
  int v16; // [sp+Ch] [bp-Ch] BYREF
  int v17; // [sp+10h] [bp-8h] BYREF
  int v18; // [sp+14h] [bp-4h] BYREF

  v4 = *(_DWORD *)a2;
  v17 = 0;
  v18 = 0;
  if ( sub_EAC84(v4) != (char *)912 )
    return 0;
  v6 = sub_AD8B0((int)&RSA_PSS_PARAMS_it, *(_DWORD **)(a2 + 4));
  v7 = v6;
  if ( v6 )
  {
    v8 = *(_DWORD *)(v6 + 4);
    if ( v8 )
    {
      if ( sub_EAC84(*(_DWORD *)v8) == (char *)911 )
      {
        v9 = sub_AD8B0((int)X509_ALGOR_it, *(_DWORD **)(v8 + 4));
        *(_DWORD *)(v7 + 16) = v9;
        if ( v9 )
          goto LABEL_7;
      }
      else
      {
        *(_DWORD *)(v7 + 16) = 0;
      }
      v11 = v7;
      v7 = 0;
      sub_F78A4(v11);
    }
  }
LABEL_7:
  v10 = sub_F6D84(v7, &v18, &v17, &v16);
  if ( v10 )
  {
    v12 = sub_D8C70(v18);
    if ( (unsigned int)(v12 - 672) <= 2 && v12 == sub_D8C70(v17) && (v15 = sub_D8C78(v18), v15 == v16) )
      v13 = 2;
    else
      v13 = 0;
    v10 = 1;
    v14 = sub_D8C78(v18);
    sub_10FDA0(a1, v12, 912, 4 * v14, v13);
  }
  sub_F78A4(v7);
  return v10;
}
