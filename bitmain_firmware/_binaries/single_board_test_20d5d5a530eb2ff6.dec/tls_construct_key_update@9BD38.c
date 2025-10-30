int __fastcall tls_construct_key_update(_DWORD *a1, int a2)
{
  if ( sub_A8450(a2, a2, a1[380], (int)a1[380] >> 31, 1) )
  {
    a1[380] = -1;
    return 1;
  }
  else
  {
    sub_95494(a1, 80, 517, 68, (int)"ssl/statem/statem_lib.c", 615);
    return 0;
  }
}
