void __fastcall sub_DD170(int a1, int a2)
{
  _BYTE *v3; // r5
  void *v4; // r0
  bool v5; // zf
  int v6; // r1
  int v7; // r0
  int v8; // r0
  _BYTE *v9; // [sp+0h] [bp-44h] BYREF
  void *v10; // [sp+4h] [bp-40h] BYREF
  int v11; // [sp+8h] [bp-3Ch] BYREF
  void *v12; // [sp+Ch] [bp-38h] BYREF
  int v13; // [sp+10h] [bp-34h]
  int v14; // [sp+14h] [bp-30h]
  int v15; // [sp+18h] [bp-2Ch] BYREF
  void *ptr; // [sp+1Ch] [bp-28h]
  int v17; // [sp+20h] [bp-24h]
  int v18; // [sp+24h] [bp-20h]
  void *v19; // [sp+28h] [bp-1Ch] BYREF
  _BYTE v20[16]; // [sp+30h] [bp-14h] BYREF

  ptr = 0;
  v17 = 0;
  v18 = 0;
  v3 = *(_BYTE **)(sub_19CD08(a1) + 4);
  v9 = v3;
  sub_D5DA8((int)&v12, &v9);
  v4 = ptr;
  v5 = ptr == 0;
  ptr = v12;
  v17 = v13;
  v18 = v14;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  if ( !v5 )
  {
    sub_339E64(v4);
    if ( v12 )
      sub_339E64(v12);
  }
  v19 = v20;
  sub_CB204(&v19, v3, (int)v9);
  v10 = v19;
  sub_19CC9C(&v11, &v10, 1);
  v6 = *(_DWORD *)(a2 + 4);
  v7 = v11;
  v11 = 0;
  *(_DWORD *)(a2 + 4) = v7;
  if ( v6 )
  {
    ((void (__fastcall *)(int))loc_19D154)(a2 + 4);
    if ( v11 )
      ((void (__fastcall *)(int *))loc_19D154)(&v11);
    v7 = *(_DWORD *)(a2 + 4);
  }
  v8 = ((int (__fastcall *)(int))loc_19D228)(v7);
  v15 = sub_327254(v8);
  sub_E03E0(a2 + 8, &v15);
  if ( v19 != v20 )
    sub_339E64(v19);
  if ( ptr )
    sub_339E64(ptr);
}
