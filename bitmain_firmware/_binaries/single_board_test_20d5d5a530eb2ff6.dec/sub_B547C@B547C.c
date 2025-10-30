int __fastcall sub_B547C(int a1, unsigned __int8 *a2, int *a3)
{
  int v4; // r4
  int v6; // [sp+14h] [bp-14h] BYREF
  _BYTE *v7; // [sp+18h] [bp-10h] BYREF
  unsigned int v8; // [sp+1Ch] [bp-Ch] BYREF
  int v9; // [sp+20h] [bp-8h] BYREF
  int v10; // [sp+24h] [bp-4h] BYREF
  _BYTE v11[2048]; // [sp+28h] [bp+0h] BYREF

  v9 = 0;
  v7 = v11;
  v8 = 2048;
  if ( sub_B4C70((const void **)&v7, &v9, &v8, &v6, &v10, a2, a3) )
  {
    if ( v9 )
    {
      v4 = sub_B69CC(a1, v9, v6);
      CRYPTO_free(v9, "crypto/bio/b_print.c", 890);
      return v4;
    }
    else
    {
      return sub_B69CC(a1, v11, v6);
    }
  }
  else
  {
    CRYPTO_free(v9, "crypto/bio/b_print.c", 885);
    return -1;
  }
}
