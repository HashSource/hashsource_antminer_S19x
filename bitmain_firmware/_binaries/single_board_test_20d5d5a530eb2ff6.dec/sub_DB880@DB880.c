int __fastcall sub_DB880(int a1, int a2, int a3)
{
  int result; // r0
  int v6; // r4
  int v7; // r5
  int v8; // [sp+4h] [bp-8h] BYREF

  result = sub_E9FB4(a3, &v8);
  v6 = result;
  if ( result )
  {
    v7 = (*(int (__fastcall **)(int, int, int, int))(*(_DWORD *)a1 + 100))(a1, a2, v8, result);
    CRYPTO_free(v6, "crypto/evp/pmeth_lib.c", 443);
    return v7;
  }
  return result;
}
