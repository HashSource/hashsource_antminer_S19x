void sub_6DFD8()
{
  if ( dword_65DF84 )
  {
    if ( munmap((void *)dword_65DF78, 0x1200u) < 0 )
      nullsub_8();
    if ( munmap((void *)dword_65DF80, 0x1000000u) < 0 )
      nullsub_8();
    dword_65DF84 = 0;
    close(dword_65DF74);
    close(dword_65DF7C);
  }
}
