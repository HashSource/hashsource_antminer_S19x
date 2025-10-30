void __fastcall sub_5E730(int a1, int a2, int a3)
{
  int v6; // r5
  int v7; // r0
  int v8; // r0
  int v9; // r2
  void *ptr; // [sp+4h] [bp-4h] BYREF
  void *v11[2]; // [sp+8h] [bp+0h] BYREF
  _BYTE v12[16]; // [sp+10h] [bp+8h] BYREF

  v6 = *(_DWORD *)sub_242FDC(a1);
  v7 = sub_26FC58(a1);
  sub_2575E8(v6, "name", v7);
  if ( a3 )
  {
    sub_26FC60(v11, a1);
    sub_2575E8(v6, "exp", v11[0]);
    if ( v11[0] != v12 )
      sub_339E64(v11[0]);
  }
  v8 = sub_271FBC(a1);
  sub_257504(v6, "numchild", v8);
  if ( sub_5E6C4(a1, a2) )
  {
    sub_271638(v11, a1);
    sub_2575E8(v6, "value", v11[0]);
    if ( v11[0] != v12 )
      sub_339E64(v11[0]);
  }
  sub_26FD6C(v11, a1);
  if ( v11[1] )
    sub_2575E8(v6, "type", v11[0]);
  v9 = sub_26FCD8(a1);
  if ( v9 > 0 )
    sub_257504(v6, "thread-id", v9);
  if ( sub_26FD08(a1) )
    sub_257504(v6, "frozen", 1);
  sub_26FC88(&ptr, a1);
  if ( ptr )
    sub_2575E8(v6, "displayhint", ptr);
  if ( sub_26FF8C(a1) )
    sub_257504(v6, "dynamic", 1);
  if ( ptr )
    free(ptr);
  if ( v11[0] != v12 )
    sub_339E64(v11[0]);
}
