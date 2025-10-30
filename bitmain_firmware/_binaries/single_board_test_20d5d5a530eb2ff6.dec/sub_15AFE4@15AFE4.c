int __fastcall sub_15AFE4(int a1, const void *a2)
{
  void *v4; // r5
  size_t v5; // r0
  int v6; // r5
  int v7; // r6
  int v8; // r0

  fwrite("(TEST_ENG_OPENSSL_RC4) test_init_key() called\n", 1u, 0x2Eu, (FILE *)stderr);
  v4 = (void *)sub_D8934(a1);
  v5 = sub_D8AD4(a1);
  memcpy(v4, a2, v5);
  v6 = sub_D8934(a1);
  v7 = sub_D8AD4(a1);
  v8 = sub_D8934(a1);
  sub_F5D68((_DWORD *)(v6 + 16), v7, v8);
  return 1;
}
