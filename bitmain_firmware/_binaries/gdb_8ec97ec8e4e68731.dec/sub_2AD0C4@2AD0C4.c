void **__fastcall sub_2AD0C4(int a1, int a2, int (__fastcall *a3)(void **, int), int a4, int a5, int a6, int a7)
{
  void **v11; // r4
  int v12; // r0
  char v13; // r3
  int v14; // r5
  _DWORD *v15; // r0
  void **v17; // r0

  v11 = (void **)sub_2AC474();
  if ( v11 )
  {
    if ( sub_2AE464(a2, v11)
      && (v12 = sub_327254(a1),
          v13 = *((_BYTE *)v11 + 40),
          *v11 = (void *)v12,
          *((_BYTE *)v11 + 40) = v13 & 0xE7 | 8,
          (v14 = a3(v11, a4)) != 0) )
    {
      v15 = sub_2AD09C((int)v11, 0x18u);
      *v15 = v14;
      v15[1] = a5;
      v15[2] = a6;
      v15[3] = a7;
      v11[2] = v15;
      v11[3] = off_412128;
    }
    else
    {
      v17 = v11;
      v11 = 0;
      sub_2ABE7C(v17);
    }
  }
  return v11;
}
