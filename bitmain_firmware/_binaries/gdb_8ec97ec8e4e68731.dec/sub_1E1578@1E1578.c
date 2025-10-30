_DWORD *__fastcall sub_1E1578(_DWORD *a1, int a2, int a3)
{
  int v6; // r0
  int v7; // r1
  int v8; // r2
  int *v9; // lr
  _DWORD *v10; // r3
  bool v11; // zf
  int v12; // r2
  int (**v14)(); // [sp+4h] [bp-20h] BYREF
  _DWORD *v15; // [sp+8h] [bp-1Ch]
  int v16; // [sp+Ch] [bp-18h]
  _DWORD v17[5]; // [sp+10h] [bp-14h] BYREF

  sub_256760(&v14);
  v14 = &off_3F2924;
  v15 = v17;
  v16 = 0;
  LOBYTE(v17[0]) = 0;
  v6 = sub_2567D4(&v14, a2, a3, 92);
  v10 = v15;
  *a1 = a1 + 2;
  v15 = v17;
  v11 = v10 == v17;
  if ( v10 == v17 )
    v9 = v17;
  else
    v8 = v17[0];
  if ( v10 == v17 )
  {
    v6 = *v9;
    v7 = v9[1];
    v8 = v9[2];
    v10 = (_DWORD *)v9[3];
  }
  else
  {
    a1[2] = v8;
    *a1 = v10;
  }
  if ( v11 )
    a1[4] = v8;
  v12 = v16;
  if ( v11 )
  {
    a1[2] = v6;
    a1[5] = v10;
    a1[3] = v7;
  }
  a1[1] = v12;
  v16 = 0;
  LOBYTE(v17[0]) = 0;
  sub_256478(&v14);
  return a1;
}
