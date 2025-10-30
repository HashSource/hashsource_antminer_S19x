int sub_BCED8()
{
  int v0; // r4

  v0 = sub_E0740(24, "crypto/ct/ct_policy.c", 30);
  if ( v0 )
    *(_QWORD *)(v0 + 16) = 1000LL * (time(0) + 300);
  else
    sub_D0048(50, 133, 65, "crypto/ct/ct_policy.c", 33);
  return v0;
}
