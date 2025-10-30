_DWORD *__fastcall sub_23875C(int a1, char *a2, int a3)
{
  _DWORD *v5; // r0
  _BYTE *v6; // r3
  _DWORD *v7; // r4
  void *v8; // r2
  _BYTE *v9; // r0
  int v10; // r1
  _DWORD *result; // r0
  bool v12; // zf
  int v13; // r1
  _DWORD *v14; // [sp+4h] [bp-1Ch]
  void *ptr[2]; // [sp+8h] [bp-18h] BYREF
  _BYTE v16[16]; // [sp+10h] [bp-10h] BYREF

  if ( !a2 )
    a3 = -1;
  ptr[0] = v16;
  if ( a2 )
    a3 = (int)&a2[strlen(a2)];
  sub_2350F8(ptr, a2, a3);
  v5 = sub_9836C(0x34u);
  v6 = ptr[0];
  v7 = v5;
  v8 = ptr[1];
  *v5 = off_3E9B34;
  v5[1] = v5 + 3;
  sub_2350F8(v5 + 1, v6, (int)v8 + (_DWORD)v6);
  v9 = ptr[0];
  v14 = v7;
  v7[7] = 0;
  v7[8] = 0;
  v7[9] = 0;
  v7[10] = 0;
  v7[11] = 0;
  v7[12] = 0;
  if ( v9 != v16 )
    sub_339E64(v9);
  v10 = *(_DWORD *)(a1 + 40);
  if ( v10 == *(_DWORD *)(a1 + 44) )
  {
    sub_23C174(a1 + 36);
    return v14;
  }
  else
  {
    result = v14;
    v12 = v10 == 0;
    v13 = v10 + 4;
    if ( !v12 )
      *(_DWORD *)(v13 - 4) = v14;
    *(_DWORD *)(a1 + 40) = v13;
    if ( !v12 )
      return v14;
  }
  return result;
}
