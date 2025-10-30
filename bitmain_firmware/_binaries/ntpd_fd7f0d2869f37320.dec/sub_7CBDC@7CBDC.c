int __fastcall sub_7CBDC(int a1)
{
  int *v3; // r0
  _DWORD v4[27]; // [sp+0h] [bp-70h] BYREF

  memset(v4, 0, 0x68u);
  if ( _xstat64(3, a1, v4) == -1 )
  {
    v3 = _errno_location();
    return sub_7BCF8(*v3, "./../lib/isc/unix/file.c", 361);
  }
  else if ( (v4[4] & 0xF000) == 0x8000 )
  {
    return 0;
  }
  else
  {
    return 30;
  }
}
