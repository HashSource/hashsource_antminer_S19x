int __fastcall sub_17C988(int a1, int a2, int a3, int a4, int a5, int a6, int *a7)
{
  int v8; // r4
  int *v10; // r0
  int v11; // [sp+0h] [bp-8h] BYREF
  int v12; // [sp+4h] [bp-4h] BYREF

  if ( sub_960B0(a4, &v11) == -1 || sub_96104(a5, &v12) == -1 )
  {
    v8 = -1;
    *a7 = 22;
    return v8;
  }
  v8 = sub_967B4(a3, v11);
  if ( v8 != -1 )
    return v8;
  v10 = _errno_location();
  *a7 = sub_96090(*v10);
  return -1;
}
