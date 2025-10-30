int __fastcall sub_10EC48(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, char a9)
{
  int v11; // r0
  int v12; // r5
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r4
  int (**v18)(); // [sp+0h] [bp-50h] BYREF
  void *v19; // [sp+4h] [bp-4Ch]
  int v20; // [sp+10h] [bp-40h]
  int v21; // [sp+14h] [bp-3Ch]
  int v22; // [sp+18h] [bp-38h]
  int v23; // [sp+1Ch] [bp-34h]
  int v24; // [sp+28h] [bp-28h]
  void *ptr; // [sp+40h] [bp-10h]
  int v26; // [sp+4Ch] [bp-4h]

  v11 = sub_112384(&v18);
  v18 = &off_39C0C4;
  v12 = sub_26C1E0(v11);
  v26 = a7;
  v20 = sub_15ECB4(a7);
  v21 = a5;
  v23 = a6;
  v22 = -1;
  sub_112ED8(&v18, a8, a9 & 1);
  ((void (__fastcall *)(int (***)(), int, int))loc_114908)(&v18, a1, a3);
  if ( v24 )
  {
    if ( v24 != 1 )
      sub_946E0("Not implemented: computing unwound register using explicit value operator");
    v13 = sub_112414(&v18, 0);
    v14 = sub_26EB1C(v13);
    v15 = sub_10DCB0(v26, v14);
  }
  else
  {
    v15 = sub_11244C(&v18);
  }
  v16 = v15;
  if ( v12 )
    sub_26C300(v12);
  v18 = (int (**)())&unk_39C084;
  if ( ptr )
    sub_339E64(ptr);
  if ( v19 )
    sub_339E64(v19);
  return v16;
}
