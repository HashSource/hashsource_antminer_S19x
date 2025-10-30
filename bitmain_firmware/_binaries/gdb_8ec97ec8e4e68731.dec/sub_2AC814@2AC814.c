void **__fastcall sub_2AC814(int a1, int a2, void *a3)
{
  void **v6; // r4
  int v7; // r3
  int v8; // r0
  char v9; // r3
  void **v11; // r0

  v6 = (void **)sub_2AC474();
  if ( v6 )
  {
    v7 = sub_2AE464(a2, v6);
    if ( !v7
      || (v6[2] = a3,
          v8 = sub_327254(a1),
          v9 = *((_BYTE *)v6 + 40),
          *v6 = (void *)v8,
          *((_BYTE *)v6 + 40) = v9 & 0xE7 | 8,
          (v7 = sub_2A8E98((int)v6)) == 0) )
    {
      v11 = v6;
      v6 = (void **)v7;
      sub_2ABE7C(v11);
    }
  }
  return v6;
}
