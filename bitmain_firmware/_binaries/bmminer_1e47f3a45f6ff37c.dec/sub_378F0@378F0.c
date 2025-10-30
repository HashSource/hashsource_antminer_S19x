int __fastcall sub_378F0(int a1, const char **a2, int a3, char a4)
{
  char *v4; // r4
  int v6; // [sp+4h] [bp-804h] BYREF
  char v7[2048]; // [sp+8h] [bp-800h] BYREF

  v4 = sub_37750((size_t *)&v6, a2, a3, a4);
  if ( sub_34EB8((int)v4, v6) && (byte_5C0EFC || byte_4B9A21 || dword_B3094 > 2) )
  {
    strcpy(v7, "cgminer return err for this nonce!\n");
    sub_3B6AC(3, v7, 0, *(_DWORD *)"nonce!\n");
  }
  free(v4);
  return 1;
}
