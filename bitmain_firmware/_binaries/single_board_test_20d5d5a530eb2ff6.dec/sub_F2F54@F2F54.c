void __fastcall sub_F2F54(_DWORD *a1)
{
  size_t v1; // r6
  int v2; // r3
  int savedregs; // [sp+0h] [bp+0h]
  int savedregs_4a; // [sp+4h] [bp+4h]
  int savedregs_4; // [sp+4h] [bp+4h]
  int savedregs_8; // [sp+8h] [bp+8h]

  if ( a1 )
  {
    v2 = a1[60];
    if ( v2 )
      (*(void (**)(void))(v2 + 12))();
    sub_F408C(a1[7]);
    sub_10C574(*a1);
    sub_DC2BC(0xFu, (int)a1, a1 + 24);
    if ( a1[2] )
    {
      savedregs = savedregs_4;
      savedregs_4a = savedregs_8;
      if ( sub_E1820((unsigned int)a1) )
      {
        sub_10C554(dword_6E1A80);
        v1 = sub_E0A2C((unsigned int)a1);
        sub_E07F8(a1, v1);
        dword_6E1A84 -= v1;
        if ( (unsigned int)a1 < dword_6E1A5C || (unsigned int)a1 >= dword_6E1A60 + dword_6E1A5C )
          sub_BC328("assertion failed: WITHIN_ARENA(ptr)", "crypto/mem_sec.c", 607);
        sub_E0B5C(a1);
        sub_10C564(dword_6E1A80);
      }
      else
      {
        sub_E07F8(a1, 0x104u);
        CRYPTO_free(a1);
      }
    }
    else
    {
      sub_E0758(a1, 0x104u, (size_t)"crypto/rand/drbg_lib.c");
    }
  }
}
