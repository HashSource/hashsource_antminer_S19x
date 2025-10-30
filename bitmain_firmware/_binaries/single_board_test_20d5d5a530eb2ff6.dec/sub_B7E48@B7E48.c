_DWORD *__fastcall sub_B7E48(const char *a1, int a2)
{
  size_t v3; // r5
  void *v4; // r0
  _DWORD *v5; // r0
  _DWORD *v6; // r4
  size_t **v7; // r1
  _DWORD *v8; // lr
  size_t *v9; // r3
  size_t *v10; // r6
  int v11; // r7
  size_t v12; // r0
  size_t v13; // r1
  size_t v14; // r2
  size_t v15; // r3

  if ( a1 )
  {
    if ( a2 < 0 )
      v3 = strlen(a1);
    else
      v3 = a2;
    v4 = sub_B7E30();
    v5 = sub_B655C((int)v4);
    v6 = v5;
    if ( v5 )
    {
      v7 = (size_t **)v5[9];
      v8 = v5;
      v9 = *v7;
      v10 = v7[1];
      v11 = v5[6] | 0x200;
      *v9 = v3;
      v9[1] = (size_t)a1;
      v9[2] = v3;
      v12 = *v9;
      v13 = v9[1];
      v14 = v9[2];
      v15 = v9[3];
      *v10 = v12;
      v10[1] = v13;
      v10[2] = v14;
      v10[3] = v15;
      v6[6] = v11;
      v6[8] = 0;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    sub_D0048(32, 126, 115, "crypto/bio/bss_mem.c", 94);
    return 0;
  }
  return v8;
}
