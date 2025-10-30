_DWORD *__fastcall sub_255DE4(_DWORD *a1, int a2)
{
  void *v4; // r6
  int v5; // r0
  char *v6; // r7
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int *v10; // lr
  _DWORD *v11; // r3
  bool v12; // zf
  int v13; // r2
  int (**v15)(); // [sp+Ch] [bp-20h] BYREF
  _DWORD *v16; // [sp+10h] [bp-1Ch]
  int v17; // [sp+14h] [bp-18h]
  _DWORD v18[5]; // [sp+18h] [bp-14h] BYREF

  v4 = sub_92E28();
  sub_256760(&v15);
  v5 = a2;
  v17 = 0;
  LOBYTE(v18[0]) = 0;
  v6 = off_46D5A4[0][15];
  v15 = &off_3F2924;
  v16 = v18;
  v7 = ((int (__fastcall *)(int, char *, int (***)(), int, _DWORD, char *))v6)(v5, "", &v15, -1, 0, &byte_46DD28);
  v11 = v16;
  *a1 = a1 + 2;
  v16 = v18;
  v12 = v11 == v18;
  if ( v11 == v18 )
    v10 = v18;
  else
    v9 = v18[0];
  if ( v11 == v18 )
  {
    v7 = *v10;
    v8 = v10[1];
    v9 = v10[2];
    v11 = (_DWORD *)v10[3];
  }
  else
  {
    a1[2] = v9;
    *a1 = v11;
  }
  if ( v12 )
    a1[4] = v9;
  v13 = v17;
  if ( v12 )
  {
    a1[2] = v7;
    a1[5] = v11;
    a1[3] = v8;
  }
  a1[1] = v13;
  v17 = 0;
  LOBYTE(v18[0]) = 0;
  sub_256478(&v15);
  sub_92E40((int)v4);
  return a1;
}
