_DWORD *__fastcall sub_2AC88C(int a1, int a2)
{
  _DWORD *v4; // r4
  int v5; // r0
  char v6; // r3
  void **v8; // r0
  void **v9; // r0

  v4 = sub_2AC474();
  if ( v4 )
  {
    if ( sub_2AE464(a2, v4) )
    {
      v5 = sub_327254(a1);
      v6 = *((_BYTE *)v4 + 40);
      *v4 = v5;
      *((_BYTE *)v4 + 40) = v6 & 0xE7 | 0x10;
      if ( !sub_2A8FD0(v4) )
      {
        ((void (__fastcall *)(int))loc_2A6C48)(1);
        v9 = (void **)v4;
        v4 = 0;
        sub_2ABE7C(v9);
      }
    }
    else
    {
      v8 = (void **)v4;
      v4 = 0;
      sub_2ABE7C(v8);
    }
  }
  return v4;
}
