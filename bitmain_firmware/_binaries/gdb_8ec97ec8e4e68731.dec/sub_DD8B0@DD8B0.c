void __fastcall sub_DD8B0(int a1, int a2)
{
  void *v3; // r0
  bool v4; // zf
  int v5; // r0
  void *v6; // [sp+4h] [bp-1Ch] BYREF
  int v7; // [sp+8h] [bp-18h]
  int v8; // [sp+Ch] [bp-14h]
  int v9; // [sp+10h] [bp-10h] BYREF
  void *ptr; // [sp+14h] [bp-Ch]
  int v11; // [sp+18h] [bp-8h]
  int v12; // [sp+1Ch] [bp-4h]

  ptr = 0;
  v11 = 0;
  v12 = 0;
  sub_1CAB10(&v6, a1, 0, a2);
  v3 = ptr;
  v4 = ptr == 0;
  ptr = v6;
  v11 = v7;
  v12 = v8;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  if ( !v4 )
  {
    sub_339E64(v3);
    if ( v6 )
      sub_339E64(v6);
  }
  v5 = ((int (__fastcall *)(_DWORD))loc_19D228)(*(_DWORD *)(a2 + 4));
  v9 = sub_327254(v5);
  sub_E03E0(a2 + 8, &v9);
  if ( ptr )
    sub_339E64(ptr);
}
