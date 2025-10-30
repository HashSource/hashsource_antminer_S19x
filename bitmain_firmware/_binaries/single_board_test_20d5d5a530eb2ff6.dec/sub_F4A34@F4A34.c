int sub_F4A34()
{
  int v0; // r0
  int (*v1)(void); // r3

  v0 = sub_F47B0();
  if ( v0 && (v1 = *(int (**)(void))(v0 + 20)) != 0 )
    return v1();
  else
    return 0;
}
