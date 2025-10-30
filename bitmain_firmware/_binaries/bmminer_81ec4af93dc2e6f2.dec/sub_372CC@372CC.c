int __fastcall sub_372CC(int a1, const char **a2, int a3, char a4)
{
  char *v4; // r4
  int v6; // [sp+4h] [bp-804h] BYREF
  char v7[2048]; // [sp+8h] [bp-800h] BYREF

  v4 = sub_37128((size_t *)&v6, a2, a3, a4);
  if ( sub_34808((int)v4, v6) && (byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 2) )
  {
    strcpy(v7, "cgminer return err for this nonce!\n");
    sub_3AF5C(3, v7, 0, *(_DWORD *)"nonce!\n");
  }
  free(v4);
  return 1;
}
