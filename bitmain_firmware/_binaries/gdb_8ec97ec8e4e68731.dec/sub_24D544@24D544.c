void ***__fastcall sub_24D544(void ***a1, int a2)
{
  void **v4; // r4
  void *v5; // r0

  v4 = (void **)sub_9836C(0x18u);
  *v4 = 0;
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = 0;
  v4[4] = 0;
  v4[5] = 0;
  if ( sub_274C9C("trace frame info", "traceframe-info.dtd", "lr=", a2, v4) )
  {
    v5 = v4[3];
    *a1 = 0;
    if ( v5 )
      sub_339E64(v5);
    if ( *v4 )
      sub_339E64(*v4);
    sub_33AC04(v4);
  }
  else
  {
    *a1 = v4;
  }
  return a1;
}
