ssize_t __fastcall sub_258C58(int fd, char *buf, int a3)
{
  signed int v6; // r4
  ssize_t result; // r0

  if ( a3 <= 0 )
    return a3;
  v6 = a3;
  while ( 1 )
  {
    result = read(fd, buf, v6);
    buf += result;
    if ( result < 0 )
      break;
    if ( !result )
      return a3 - v6;
    v6 -= result;
    if ( v6 <= 0 )
      return a3;
  }
  return result;
}
