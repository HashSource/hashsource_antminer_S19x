int __fastcall sub_127D14(int a1, int a2)
{
  signed int v4; // r0
  int v5; // r4
  int v6; // r4
  signed int v8; // r10
  _BYTE *v9; // r0
  _BYTE *v10; // r8
  _BYTE v11[80]; // [sp+8h] [bp+0h] BYREF

  if ( !a2 || !*(_DWORD *)(a2 + 16) )
    return sub_B69CC(a1, (int)"NULL", 4);
  v4 = sub_127D0C(v11, 80, a2);
  v5 = v4;
  if ( v4 > 79 )
  {
    v8 = v4 + 1;
    v9 = CRYPTO_malloc((void *)(v4 + 1));
    v10 = v9;
    if ( v9 )
    {
      sub_127D0C(v9, v8, a2);
      sub_B69CC(a1, (int)v10, v5);
      if ( v10 != v11 )
        CRYPTO_free(v10);
      return v5;
    }
    else
    {
      sub_D0048(13, 126, 65, (int)"crypto/asn1/a_object.c", 195);
      return -1;
    }
  }
  else if ( v4 > 0 )
  {
    sub_B69CC(a1, (int)v11, v4);
    return v5;
  }
  else
  {
    v6 = sub_B69CC(a1, (int)"<INVALID>", 9);
    return sub_12F2D4(a1, *(_DWORD *)(a2 + 16), *(_DWORD *)(a2 + 12)) + v6;
  }
}
