int __fastcall sub_105D8(int a1, void (*a2)(int))
{
  int result; // r0
  struct sigaction s; // [sp+4h] [bp-120h] BYREF
  struct sigaction oact; // [sp+90h] [bp-94h] BYREF

  memset(&s, 0, sizeof(s));
  sigemptyset(&s.sa_mask);
  s.sa_handler = a2;
  if ( a1 == 29 )
    s.sa_flags = 0x10000000;
  while ( 1 )
  {
    result = sigaction(a1, &s, &oact);
    if ( result != -1 )
      break;
    if ( *_errno_location() != 4 )
    {
      perror("sigaction");
      exit(1);
    }
  }
  return result;
}
