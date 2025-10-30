int __fastcall sub_B791C(_DWORD *a1)
{
  int result; // r0
  int *v3; // r4
  int v4; // r0
  _DWORD *v5; // r5
  int v6; // r6
  int v7; // r1
  int v8; // r2
  int v9; // r3

  result = sub_E0740(8, "crypto/bio/bss_mem.c", 115);
  v3 = (int *)result;
  if ( result )
  {
    v4 = sub_BAE2C(1);
    *v3 = v4;
    if ( v4 )
    {
      v5 = (_DWORD *)sub_E0740(16, "crypto/bio/bss_mem.c", 123);
      v3[1] = (int)v5;
      if ( v5 )
      {
        v6 = 1;
        v7 = *(_DWORD *)(*v3 + 4);
        v8 = *(_DWORD *)(*v3 + 8);
        v9 = *(_DWORD *)(*v3 + 12);
        *v5 = *(_DWORD *)*v3;
        v5[1] = v7;
        v5[2] = v8;
        v5[3] = v9;
        a1[9] = v3;
        a1[5] = 1;
        a1[4] = 1;
        a1[8] = -1;
      }
      else
      {
        sub_BAE3C(*v3);
        v6 = 0;
        CRYPTO_free(v3, "crypto/bio/bss_mem.c", 125);
      }
    }
    else
    {
      v6 = 0;
      CRYPTO_free(v3, "crypto/bio/bss_mem.c", 120);
    }
    return v6;
  }
  return result;
}
