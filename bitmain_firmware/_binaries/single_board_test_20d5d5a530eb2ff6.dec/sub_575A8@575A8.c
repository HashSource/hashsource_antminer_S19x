int __fastcall sub_575A8(int a1)
{
  unsigned int v1; // r0

  if ( !a1 )
    return 0x10000;
  v1 = a1 - 4;
  if ( v1 <= 3 )
    return dword_1A00CC[v1];
  else
    return -2;
}
