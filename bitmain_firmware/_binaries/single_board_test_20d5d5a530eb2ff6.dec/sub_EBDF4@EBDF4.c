int __fastcall sub_EBDF4(int a1, int a2, int a3, int a4)
{
  int v8; // r4
  time_t timer; // [sp+8h] [bp-Ch] BYREF
  int v11; // [sp+Ch] [bp-8h] BYREF

  time(&timer);
  if ( sub_1260C4(a1) )
  {
    v11 = timer + a3;
    if ( sub_110DC0(a1, &v11) > 0 )
    {
      v8 = 0;
      sub_D0048(39, 115, 126, (int)"crypto/ocsp/ocsp_cl.c", 351);
    }
    else
    {
      v8 = 1;
    }
    if ( a4 >= 0 )
    {
      v11 = timer - a4;
      if ( sub_110DC0(a1, &v11) < 0 )
      {
        v8 = 0;
        sub_D0048(39, 115, 127, (int)"crypto/ocsp/ocsp_cl.c", 362);
      }
    }
  }
  else
  {
    v8 = 0;
    sub_D0048(39, 115, 123, (int)"crypto/ocsp/ocsp_cl.c", 346);
  }
  if ( !a2 )
    return v8;
  if ( sub_1260C4(a2) )
  {
    v11 = timer - a3;
    if ( sub_110DC0(a2, &v11) < 0 )
    {
      v8 = 0;
      sub_D0048(39, 115, 125, (int)"crypto/ocsp/ocsp_cl.c", 378);
    }
    if ( sub_AE280(a2, a1) >= 0 )
      return v8;
  }
  else
  {
    v8 = 0;
    sub_D0048(39, 115, 122, (int)"crypto/ocsp/ocsp_cl.c", 373);
    if ( sub_AE280(a2, a1) >= 0 )
      return v8;
  }
  sub_D0048(39, 115, 124, (int)"crypto/ocsp/ocsp_cl.c", 386);
  return 0;
}
