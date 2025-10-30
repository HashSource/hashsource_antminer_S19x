int __fastcall sub_6D580(_DWORD *a1)
{
  _BYTE *v2; // r0

  a1[2] = 16;
  a1[1] = 0;
  v2 = sub_6D500((void *)0x10);
  *a1 = v2;
  if ( !v2 )
    return -1;
  *v2 = 0;
  return 0;
}
