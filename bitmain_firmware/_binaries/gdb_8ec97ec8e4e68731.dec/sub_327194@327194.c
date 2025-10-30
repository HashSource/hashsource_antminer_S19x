int __fastcall sub_327194(const char *a1)
{
  _WORD v3[52]; // [sp+0h] [bp-68h] BYREF

  if ( !_lxstat64(3, a1, v3) && (v3[8] & 0xD000) == 0x8000 )
    return unlink(a1);
  else
    return 1;
}
