int __fastcall sub_25DA0(int a1, const char **a2, int a3, char a4)
{
  char *v4; // r4
  int v6; // [sp+4h] [bp-804h] BYREF
  char v7[2048]; // [sp+8h] [bp-800h] BYREF

  v4 = sub_25BFC((size_t *)&v6, a2, a3, a4);
  if ( sub_259F4((int)v4, v6) && (byte_244080 || byte_1AECC4 || dword_9E320 > 2) )
  {
    strcpy(v7, "cgminer return err for this nonce!\n");
    sub_47AB4(3, v7, 0);
  }
  free(v4);
  return 1;
}
