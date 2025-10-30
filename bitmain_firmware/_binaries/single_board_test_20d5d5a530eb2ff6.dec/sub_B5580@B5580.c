int __fastcall sub_B5580(int a1)
{
  int optval; // [sp+8h] [bp-Ch] BYREF
  socklen_t optlen[2]; // [sp+Ch] [bp-8h] BYREF

  optlen[0] = 4;
  optval = 0;
  if ( getsockopt(a1, 1, 4, &optval, optlen) < 0 )
    return *_errno_location();
  else
    return optval;
}
