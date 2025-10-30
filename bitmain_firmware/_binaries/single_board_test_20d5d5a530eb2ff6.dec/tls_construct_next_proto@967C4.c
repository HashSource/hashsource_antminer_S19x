int __fastcall tls_construct_next_proto(_DWORD *a1, int a2)
{
  int v3; // r4
  int v6; // r1
  size_t v7; // r4
  void *s; // [sp+Ch] [bp-8h] BYREF

  v3 = a1[360];
  v6 = a1[359];
  s = 0;
  if ( sub_A8544(a2, v6, v3, 1) && (v7 = 32 - (((_BYTE)v3 + 2) & 0x1F), sub_A8420(a2, v7, &s, 1)) )
  {
    memset(s, 0, v7);
    return 1;
  }
  else
  {
    sub_95494(a1, 80, 426, 68, (int)"ssl/statem/statem_clnt.c", 3651);
    return 0;
  }
}
