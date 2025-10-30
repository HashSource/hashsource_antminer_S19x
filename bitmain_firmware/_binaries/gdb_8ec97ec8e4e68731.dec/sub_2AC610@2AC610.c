void **__fastcall sub_2AC610(int a1, int a2, const char *a3, int a4)
{
  void **v8; // r4
  FILE *v9; // r8
  int v10; // r3
  bool v11; // zf
  int v12; // r2
  char v13; // r2
  char v14; // r3
  void **v16; // r0
  void **v17; // r0

  v8 = (void **)sub_2AC474();
  if ( v8 )
  {
    if ( sub_2AE464(a2, v8) )
    {
      if ( a4 == -1 )
        v9 = sub_2A8794(a1, (int)a3);
      else
        v9 = fdopen(a4, a3);
      v8[2] = v9;
      if ( !v9 )
      {
        ((void (__fastcall *)(int))loc_2A6C48)(1);
        v17 = v8;
        v8 = 0;
        sub_2ABE7C(v17);
        return v8;
      }
      *v8 = (void *)sub_327254(a1);
      v10 = *(unsigned __int8 *)a3;
      v11 = v10 == 119;
      if ( v10 != 119 )
        v11 = v10 == 114;
      v12 = v11;
      if ( v10 == 97 )
        v12 |= 1u;
      if ( v12 && a3[1] == 43 )
      {
        *((_BYTE *)v8 + 40) |= 0x18u;
      }
      else
      {
        if ( v10 == 114 )
          v13 = 1;
        else
          v13 = 2;
        *((_BYTE *)v8 + 40) = (_BYTE)v8[10] & 0xE7 | (8 * (v13 & 3));
      }
      if ( sub_2A8E98((int)v8) )
      {
        v14 = *((_BYTE *)v8 + 43) | 8;
        *((_BYTE *)v8 + 43) = v14;
        if ( a4 == -1 )
          *((_BYTE *)v8 + 43) = v14 | 2;
        return v8;
      }
    }
    else if ( a4 != -1 )
    {
      close(a4);
    }
    v16 = v8;
    v8 = 0;
    sub_2ABE7C(v16);
    return v8;
  }
  if ( a4 == -1 )
    return v8;
  close(a4);
  return 0;
}
