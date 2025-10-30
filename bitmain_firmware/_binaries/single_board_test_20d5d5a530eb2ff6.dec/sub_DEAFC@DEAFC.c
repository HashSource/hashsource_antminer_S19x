int __fastcall sub_DEAFC(int a1)
{
  _QWORD *v2; // r0

  v2 = (_QWORD *)sub_E0740(48, "crypto/kdf/scrypt.c", 60);
  if ( v2 )
  {
    v2[3] = 8;
    v2[2] = 0x100000;
    v2[4] = 1;
    v2[5] = 1074790400;
    *(_DWORD *)(a1 + 20) = v2;
    return 1;
  }
  else
  {
    sub_D0048(52, 106, 65, (int)"crypto/kdf/scrypt.c", 62);
    return 0;
  }
}
