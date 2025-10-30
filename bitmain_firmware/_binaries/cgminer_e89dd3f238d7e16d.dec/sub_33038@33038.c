void __fastcall sub_33038(int a1, unsigned int a2)
{
  char v3[12]; // [sp+10h] [bp-C0Ch] BYREF
  char v4[12]; // [sp+810h] [bp-40Ch] BYREF
  int i; // [sp+C10h] [bp-Ch]
  int v6; // [sp+C14h] [bp-8h]

  v6 = 0;
  for ( i = 0; i <= 3; ++i )
  {
    v6 = (v6 << 8) + (unsigned __int8)a2;
    a2 >>= 8;
  }
  sub_1FDA0(v4, a1, 128);
  if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
  {
    snprintf(v3, 0x800u, "BENCHFILE nonce %u=0x%08x for work=%s", v6, v6, v4);
    sub_1DB6C(3, v3, 0);
  }
}
