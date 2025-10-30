void __fastcall sub_D43A4(_BYTE *a1, int a2, int a3)
{
  _BYTE *v3; // r12
  _DWORD *v4; // r4
  _BYTE *v5; // r3
  int v6; // r2
  int v7; // r3
  int v8; // r3
  _BYTE *v9; // r3
  int v10; // r2
  int v11; // [sp+4h] [bp-5Ch] BYREF
  int v12; // [sp+8h] [bp-58h] BYREF
  _BYTE *v13; // [sp+Ch] [bp-54h] BYREF
  int v14; // [sp+10h] [bp-50h] BYREF
  _DWORD *v15; // [sp+14h] [bp-4Ch]
  void *ptr; // [sp+18h] [bp-48h] BYREF
  int (*v17)(); // [sp+1Ch] [bp-44h]
  _DWORD v18[4]; // [sp+20h] [bp-40h] BYREF
  void *v19; // [sp+30h] [bp-30h] BYREF
  int (*v20)(); // [sp+34h] [bp-2Ch]
  _DWORD v21[4]; // [sp+38h] [bp-28h] BYREF
  void *v22; // [sp+48h] [bp-18h] BYREF
  int (*v23)(); // [sp+4Ch] [bp-14h]
  _DWORD v24[4]; // [sp+50h] [bp-10h] BYREF

  v3 = a1;
  v13 = a1;
  v12 = a2;
  v11 = a3;
  v14 = 0;
  v15 = 0;
  v17 = 0;
  LOBYTE(v18[0]) = 0;
  ptr = v18;
  if ( !a1 || !*a1 )
  {
    if ( dword_478360 - dword_47835C <= 1 )
    {
      if ( dword_478360 <= 0 )
      {
        v3 = v18;
LABEL_10:
        v13 = v3;
        goto LABEL_3;
      }
      sub_931D8((char **)&v22, "%d", dword_478360);
      v9 = ptr;
      if ( v22 == v24 )
      {
        sub_33B48C(&ptr, &v22);
        v9 = v22;
        goto LABEL_24;
      }
      if ( ptr == v18 )
      {
        ptr = v22;
        v17 = v23;
        v18[0] = v24[0];
      }
      else
      {
        ptr = v22;
        v17 = v23;
        v10 = v18[0];
        v18[0] = v24[0];
        if ( v9 )
        {
          v22 = v9;
          v24[0] = v10;
LABEL_24:
          v23 = 0;
          *v9 = 0;
          if ( v22 != v24 )
            sub_339E64(v22);
          v3 = ptr;
          goto LABEL_10;
        }
      }
      v22 = v24;
      v9 = v24;
      goto LABEL_24;
    }
    sub_931D8((char **)&v19, "%d-%d", dword_47835C + 1, dword_478360);
    v5 = ptr;
    if ( v19 == v21 )
    {
      sub_33B48C(&ptr, &v19);
      v5 = v19;
      goto LABEL_15;
    }
    if ( ptr == v18 )
    {
      ptr = v19;
      v17 = v20;
      v18[0] = v21[0];
    }
    else
    {
      ptr = v19;
      v17 = v20;
      v6 = v18[0];
      v18[0] = v21[0];
      if ( v5 )
      {
        v19 = v5;
        v21[0] = v6;
LABEL_15:
        v20 = 0;
        *v5 = 0;
        if ( v19 != v21 )
          sub_339E64(v19);
        v3 = ptr;
        goto LABEL_10;
      }
    }
    v19 = v21;
    v5 = v21;
    goto LABEL_15;
  }
LABEL_3:
  v20 = sub_DEB78;
  v19 = &v22;
  v22 = &v14;
  v23 = (int (*)())&v11;
  v24[0] = &v13;
  v24[1] = &v12;
  sub_CABA0(v3, (int)&v22, (int (__fastcall *)(int, int, int))sub_DEB78);
  if ( ptr != v18 )
    sub_339E64(ptr);
  v4 = v15;
  if ( v15 )
  {
    v7 = v15[1];
    v15[1] = v7 - 1;
    if ( v7 == 1 )
    {
      (*(void (__fastcall **)(_DWORD *))(*v4 + 8))(v4);
      v8 = v4[2];
      v4[2] = v8 - 1;
      if ( v8 == 1 )
        (*(void (__fastcall **)(_DWORD *))(*v4 + 12))(v4);
    }
  }
}
