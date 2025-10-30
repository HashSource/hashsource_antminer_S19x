int __fastcall sub_29B1B4(int a1)
{
  int v2; // r0
  int v3; // r2
  int result; // r0

  v2 = fcntl(a1, 3, 0);
  v3 = v2;
  if ( v2 < 0 )
    return -1;
  result = v2 & 0x800;
  if ( (v3 & 0x800) != 0 )
    return fcntl(a1, 4, v3 & 0xFFFFF7FF);
  return result;
}
