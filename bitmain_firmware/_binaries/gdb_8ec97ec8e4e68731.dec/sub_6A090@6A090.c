void __fastcall sub_6A090(int a1)
{
  _BYTE *v1; // r0
  _DWORD *v2; // [sp+0h] [bp-Ch] BYREF
  _DWORD *v3; // [sp+4h] [bp-8h] BYREF

  v1 = (_BYTE *)sub_9360C(a1);
  if ( v1 && *v1 )
    sub_946E0("Guile scripting is not supported in this copy of GDB.");
  sub_57E90(&v2, 8, "");
  sub_5903C((int)v2);
  if ( v2 )
  {
    v3 = v2;
    sub_57E18(&v3);
  }
}
