int __fastcall sub_1B2B4(int a1)
{
  void *v2; // r0
  int *v4; // r0
  _DWORD v5[26]; // [sp+0h] [bp-74h] BYREF

  v2 = memset(v5, 0, sizeof(v5));
  if ( _xstat64(3, a1, v2) == -1 )
  {
    v4 = _errno_location();
    return sub_1A3F8(*v4, "./../lib/isc/unix/file.c", 361);
  }
  else if ( (v5[4] & 0xF000) == 0x8000 )
  {
    return 0;
  }
  else
  {
    return 30;
  }
}
