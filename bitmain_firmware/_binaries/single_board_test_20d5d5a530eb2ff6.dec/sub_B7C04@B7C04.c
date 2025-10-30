int __fastcall sub_B7C04(_DWORD *a1, const void *a2, size_t a3)
{
  _DWORD **v3; // r6
  int v6; // r5
  int v8; // r9
  _DWORD *v9; // r4
  int v10; // r1
  int v11; // r2
  int v12; // r3
  _DWORD *v14; // r4
  size_t *v15; // r3
  const void *v16; // r1
  void *v17; // r0
  _DWORD *v18; // r3
  int v19; // r1

  v3 = (_DWORD **)a1[9];
  if ( a2 )
  {
    v6 = a1[6] & 0x200;
    if ( v6 )
    {
      v6 = -1;
      sub_D0048(32, 117, 126, "crypto/bio/bss_mem.c", 228);
    }
    else
    {
      sub_B66FC((int)a1, 15);
      if ( a3 )
      {
        v8 = *v3[1];
        if ( a1[4] )
        {
          v14 = (_DWORD *)a1[9];
          if ( v14 )
          {
            v15 = (size_t *)v14[1];
            v16 = (const void *)v15[1];
            v17 = *(void **)(*v14 + 4);
            if ( v16 != v17 )
            {
              memmove(v17, v16, *v15);
              v18 = (_DWORD *)v14[1];
              v19 = *(_DWORD *)(*v14 + 4);
              *(_DWORD *)*v14 = *v18;
              v18[1] = v19;
            }
          }
        }
        if ( sub_BAF60(*v3) )
        {
          v6 = a3;
          memcpy((void *)((*v3)[1] + v8), a2, a3);
          v9 = v3[1];
          v10 = (*v3)[1];
          v11 = (*v3)[2];
          v12 = (*v3)[3];
          *v9 = **v3;
          v9[1] = v10;
          v9[2] = v11;
          v9[3] = v12;
        }
        else
        {
          return -1;
        }
      }
    }
  }
  else
  {
    v6 = -1;
    sub_D0048(32, 117, 115, "crypto/bio/bss_mem.c", 224);
  }
  return v6;
}
