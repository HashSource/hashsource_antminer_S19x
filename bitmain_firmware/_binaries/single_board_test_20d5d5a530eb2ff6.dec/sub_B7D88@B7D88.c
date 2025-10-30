int __fastcall sub_B7D88(_DWORD *a1, char *s)
{
  size_t v4; // r7
  _DWORD **v5; // r6
  int v6; // r5
  int v7; // r9
  _DWORD *v8; // r4
  int v9; // r1
  int v10; // r2
  int v11; // r3
  _DWORD *v13; // r4
  size_t *v14; // r3
  const void *v15; // r1
  void *v16; // r0
  _DWORD *v17; // r3
  int v18; // r1

  v4 = strlen(s);
  v5 = (_DWORD **)a1[9];
  v6 = a1[6] & 0x200;
  if ( v6 )
  {
    v6 = -1;
    sub_D0048(32, 117, 126, "crypto/bio/bss_mem.c", 228);
  }
  else
  {
    sub_B66FC((int)a1, 15);
    if ( v4 )
    {
      v7 = *v5[1];
      if ( a1[4] )
      {
        v13 = (_DWORD *)a1[9];
        if ( v13 )
        {
          v14 = (size_t *)v13[1];
          v15 = (const void *)v14[1];
          v16 = *(void **)(*v13 + 4);
          if ( v15 != v16 )
          {
            memmove(v16, v15, *v14);
            v17 = (_DWORD *)v13[1];
            v18 = *(_DWORD *)(*v13 + 4);
            *(_DWORD *)*v13 = *v17;
            v17[1] = v18;
          }
        }
      }
      if ( sub_BAF60(*v5) )
      {
        v6 = v4;
        memcpy((void *)((*v5)[1] + v7), s, v4);
        v8 = v5[1];
        v9 = (*v5)[1];
        v10 = (*v5)[2];
        v11 = (*v5)[3];
        *v8 = **v5;
        v8[1] = v9;
        v8[2] = v10;
        v8[3] = v11;
      }
      else
      {
        return -1;
      }
    }
  }
  return v6;
}
