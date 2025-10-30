_DWORD *__fastcall sub_237DBC(int a1, char *a2, int a3)
{
  _DWORD *v5; // r0
  _BYTE *v6; // r3
  _DWORD *v7; // r4
  void *v8; // r2
  void *v9; // r0
  bool v10; // zf
  _DWORD *v12; // [sp+4h] [bp-1Ch] BYREF
  void *ptr[2]; // [sp+8h] [bp-18h] BYREF
  _BYTE v14[16]; // [sp+10h] [bp-10h] BYREF

  if ( !a2 )
    a3 = -1;
  ptr[0] = v14;
  if ( a2 )
    a3 = (int)&a2[strlen(a2)];
  sub_2350F8(ptr, a2, a3);
  v5 = sub_9836C(0x30u);
  v6 = ptr[0];
  v7 = v5;
  v8 = ptr[1];
  *v5 = &off_3E9AD4;
  v5[1] = v5 + 3;
  sub_2350F8(v5 + 1, v6, (int)v8 + (_DWORD)v6);
  v9 = ptr[0];
  v12 = v7;
  v10 = ptr[0] == v14;
  *(_QWORD *)(v7 + 7) = 19;
  *v7 = off_3E9B1C;
  v7[9] = 0;
  v7[10] = 0;
  v7[11] = 0;
  if ( !v10 )
    sub_339E64(v9);
  sub_23B27C(a1 + 40, &v12);
  return v12;
}
