void __fastcall sub_237A20(int a1, char *a2, int a3, int a4, char *a5, int a6, char *a7)
{
  int v8; // r10
  char *v11; // r6
  char *v12; // r5
  _DWORD *v13; // r4
  _BYTE *v14; // r3
  void *v15; // r2
  size_t v16; // r0
  size_t v17; // r0
  int *v18; // r0
  _BYTE *v19; // r3
  int v20; // r1
  bool v21; // zf
  int v22; // r1
  void *ptr[2]; // [sp+10h] [bp-1Ch] BYREF
  _BYTE v24[20]; // [sp+18h] [bp-14h] BYREF

  v8 = a3;
  ptr[0] = v24;
  v11 = a5;
  if ( !a2 )
    a3 = -1;
  v12 = a7;
  if ( a2 )
    a3 = (int)&a2[strlen(a2)];
  sub_2350F8(ptr, a2, a3);
  v13 = sub_9836C(0x5Cu);
  v14 = ptr[0];
  v15 = ptr[1];
  *v13 = off_3E9AC0;
  v13[1] = v13 + 3;
  sub_2350F8(v13 + 1, v14, (int)v15 + (_DWORD)v14);
  v13[7] = v8;
  if ( !a5 )
    v11 = "";
  v13[8] = a4;
  v13[9] = v13 + 11;
  v16 = strlen(v11);
  sub_2350F8(v13 + 9, v11, (int)&v11[v16]);
  if ( !a7 )
    v12 = "<unknown>";
  v13[15] = a6;
  v13[16] = v13 + 18;
  v17 = strlen(v12);
  sub_2350F8(v13 + 16, v12, (int)&v12[v17]);
  v18 = sub_2361D0(a1, (char *)v13[16]);
  v19 = ptr[0];
  v13[22] = v18;
  if ( v19 != v24 )
    sub_339E64(v19);
  v20 = *(_DWORD *)(a1 + 32);
  if ( v20 == *(_DWORD *)(a1 + 36) )
  {
    sub_23ADBC(a1 + 28);
  }
  else
  {
    v21 = v20 == 0;
    v22 = v20 + 4;
    if ( !v21 )
      *(_DWORD *)(v22 - 4) = v13;
    *(_DWORD *)(a1 + 32) = v22;
  }
}
