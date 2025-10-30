_DWORD *__fastcall sub_237BD0(int a1, char *a2, int a3, int a4)
{
  int v8; // r2
  _DWORD *v9; // r0
  _BYTE *v10; // r3
  _DWORD *v11; // r4
  void *v12; // r2
  _BYTE *v13; // r0
  int v14; // r1
  _DWORD *result; // r0
  bool v16; // zf
  int v17; // r1
  _DWORD *v18; // [sp+4h] [bp-1Ch]
  void *ptr[2]; // [sp+8h] [bp-18h] BYREF
  _BYTE v20[16]; // [sp+10h] [bp-10h] BYREF

  ptr[0] = v20;
  if ( a2 )
    v8 = (int)&a2[strlen(a2)];
  else
    v8 = -1;
  sub_2350F8(ptr, a2, v8);
  v9 = sub_9836C(0x28u);
  v10 = ptr[0];
  v11 = v9;
  v12 = ptr[1];
  *v9 = &off_3E9AD4;
  v9[1] = v9 + 3;
  sub_2350F8(v9 + 1, v10, (int)v12 + (_DWORD)v10);
  v13 = ptr[0];
  v11[8] = a3;
  v11[9] = a4;
  v18 = v11;
  v11[7] = 17;
  *v11 = off_3E9B04;
  if ( v13 != v20 )
    sub_339E64(v13);
  v14 = *(_DWORD *)(a1 + 44);
  if ( v14 == *(_DWORD *)(a1 + 48) )
  {
    sub_23AFA4(a1 + 40);
    return v18;
  }
  else
  {
    result = v18;
    v16 = v14 == 0;
    v17 = v14 + 4;
    if ( !v16 )
      *(_DWORD *)(v17 - 4) = v18;
    *(_DWORD *)(a1 + 44) = v17;
  }
  return result;
}
