void __fastcall sub_48AA4(int a1, int a2)
{
  void *v3; // r0

  close(fd);
  v3 = **(void ***)(a2 + 84);
  if ( v3 )
    free(v3);
}
