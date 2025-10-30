int __fastcall sub_3BC90(int a1)
{
  if ( sub_968FC(1, 1, 0, a1) < 0 )
    return -1;
  signal(13, (__sighandler_t)1);
  return 0;
}
