_DWORD *__fastcall sub_1B53FC(int a1, int a2, int a3)
{
  int v6; // r0
  int v7; // r7
  _DWORD *v8; // r4
  int v9; // r0
  int v10; // r0
  int v11; // r1
  _DWORD *v12; // r1
  int v14; // r0
  int v15; // r6
  int v16; // r0
  int v17; // r4
  int v18; // r0
  int v19; // r1
  int v20; // r0
  int v21; // r1
  int v22; // r0
  int v23[2]; // [sp+4h] [bp-14h] BYREF
  _DWORD v24[2]; // [sp+Ch] [bp-Ch] BYREF
  int v25; // [sp+14h] [bp-4h] BYREF

  sub_1780B4();
  v7 = *(_DWORD *)(v6 + 4);
  v8 = (_DWORD *)sub_22EBBC(v6);
  if ( v8 )
  {
    v9 = sub_262454(a2, a3, v7);
    v25 = sub_26160C(v9);
    sub_1B141C(v23, "_NSNewStringFromCString", 0, 0);
    if ( v23[0] )
    {
      v10 = sub_2611C4("_NSNewStringFromCString", 0);
      v8 = sub_17E6EC(v10, 0, 1, (char *)&v25);
    }
    else
    {
      sub_1B141C(v23, "istr", 0, 0);
      if ( v23[0] )
      {
        v14 = sub_2611C4("istr", 0);
        v8 = sub_17E6EC(v14, 0, 1, (char *)&v25);
      }
      else
      {
        sub_1B141C(v23, "+[NSString stringWithCString:]", 0, 0);
        if ( !v23[0] )
          sub_946E0("NSString: internal error -- no way to create new NSString");
        v15 = sub_2611C4("+[NSString stringWithCString:]", 0);
        sub_1780B4();
        v17 = *(_DWORD *)(v16 + 16);
        v18 = sub_1B51D8(a1, "NSString");
        v24[0] = sub_26DAF4(v17, v19, v18, 0);
        v20 = sub_1B52EC(a1, "stringWithCString:");
        v24[1] = sub_26DAF4(v17, v21, v20, 0);
        v8 = sub_17E6EC(v15, 0, 3, (char *)v24);
      }
    }
    v11 = sub_1B5150("NSString", 0, 1);
    if ( v11 || (v11 = sub_1B5150("NXString", 0, 1)) != 0 )
    {
      v12 = sub_1700C0(*(_DWORD **)(v11 + 24));
    }
    else
    {
      sub_1780B4();
      v12 = *(_DWORD **)(v22 + 152);
    }
    sub_26BC78(v8, v12);
  }
  return v8;
}
