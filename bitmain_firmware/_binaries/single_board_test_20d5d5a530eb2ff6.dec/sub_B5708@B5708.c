int __fastcall sub_B5708(int a1, unsigned int a2)
{
  int result; // r0
  int v3; // r4
  int *v4; // r0

  result = ioctl(a1, a2);
  v3 = result;
  if ( result < 0 )
  {
    v4 = _errno_location();
    sub_D0048(2, 5, *v4, "crypto/bio/b_sock.c", 195);
    return v3;
  }
  return result;
}
