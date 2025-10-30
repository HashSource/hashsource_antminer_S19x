void __fastcall sub_531CC(int a1, unsigned int a2)
{
  int v2; // r2
  int v3; // r4
  int v4; // r3
  char v5[1016]; // [sp+8h] [bp-C00h] BYREF
  char v6[2048]; // [sp+408h] [bp-800h] BYREF

  v2 = 4;
  v3 = 0;
  do
  {
    v4 = (unsigned __int8)a2;
    --v2;
    a2 >>= 8;
    v3 = v4 + (v3 << 8);
  }
  while ( v2 );
  sub_4981C(v5, a1, 128);
  if ( byte_244080 || byte_1AECC4 || dword_9E320 > 2 )
  {
    snprintf(v6, 0x800u, "BENCHFILE nonce %u=0x%08x for work=%s", v3, v3, v5);
    sub_47AB4(3, v6, 0);
  }
}
