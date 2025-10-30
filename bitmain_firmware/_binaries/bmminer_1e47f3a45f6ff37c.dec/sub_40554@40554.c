int sub_40554()
{
  int v0; // r4
  char *v1; // r5

  sub_3FD94();
  v0 = 0;
  v1 = (char *)&unk_5BFD2C;
  do
  {
    if ( sub_26C0C(v0) && sub_26C0C(v0) == 1 )
      sub_3DB9C((int)v1);
    ++v0;
    v1 += 64;
  }
  while ( v0 != 4 );
  sub_3DB9C((int)&unk_5BFCEC);
  munmap((void *)dword_5BFCE8, 0x20D0Cu);
  close(dword_5BFCE4);
  return 0;
}
