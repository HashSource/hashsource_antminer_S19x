int __fastcall sub_1623A0(int a1, int a2, int a3, int a4, unsigned __int8 c, int a6, int a7, char *dest, _DWORD *a9)
{
  int v11; // r1
  int v12; // r4
  int v14; // [sp+18h] [bp-8h] BYREF
  int v15; // [sp+1Ch] [bp-4h] BYREF

  if ( a1 )
  {
    if ( !sub_1625A8(a1, a2, &v14, &v15) )
    {
      sub_D0048(35, 110, 65, (int)"crypto/pkcs12/p12_key.c", 42);
      return 0;
    }
    a1 = v14;
    v11 = v15;
  }
  else
  {
    v11 = 0;
    v14 = 0;
    v15 = 0;
  }
  v12 = sub_1620E0(a1, v11, a3, a4, c, a6, a7, dest, a9);
  if ( v12 <= 0 )
    return 0;
  sub_E0758((void *)v14, v15, (size_t)"crypto/pkcs12/p12_key.c");
  return v12;
}
