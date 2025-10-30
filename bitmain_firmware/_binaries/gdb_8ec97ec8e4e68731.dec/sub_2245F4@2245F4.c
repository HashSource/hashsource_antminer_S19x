int sub_2245F4()
{
  int v0; // r0
  int (*v1)(void); // r3

  v0 = sub_22451C(0);
  if ( v0 && (v1 = *(int (**)(void))(v0 + 440)) != 0 )
    return v1();
  else
    return 0;
}
