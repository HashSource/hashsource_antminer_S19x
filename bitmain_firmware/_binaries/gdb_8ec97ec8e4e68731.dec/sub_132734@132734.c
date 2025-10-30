_DWORD *__fastcall sub_132734(_DWORD *a1, int a2)
{
  _DWORD *v3; // r7
  _DWORD *v4; // r4
  void *v5; // r0
  _DWORD *v6; // r3
  char *v7; // r2
  int v8; // r4
  int v9; // r0
  int (*v10)(); // r0
  int (**v11)(); // r2
  int (**v12)(); // r1
  int v13; // lr
  int v14; // r3
  int (**v15)(); // r3
  int (**v16)(); // lr
  bool v17; // zf
  int (**v18)(); // r3

  *a1 = a2;
  v3 = a1 + 1;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  v4 = sub_9836C(0x3Cu);
  v5 = (void *)a1[1];
  if ( v5 )
    sub_339E64(v5);
  v6 = v4;
  v7 = (char *)(v4 + 15);
  a1[1] = v4;
  v8 = 0;
  *v6 = sub_193AB8;
  a1[3] = v7;
  a1[2] = v6 + 1;
  do
  {
    v9 = sub_194438(v8);
    v10 = (int (*)())sub_194570(v9, *a1);
    if ( v10 == sub_193AB8 )
      goto LABEL_28;
    v11 = (int (**)())a1[1];
    v12 = (int (**)())a1[2];
    v13 = ((char *)v12 - (char *)v11) >> 4;
    v14 = v12 - v11;
    if ( v13 > 0 )
    {
      if ( v10 == *v11 )
      {
        v15 = (int (**)())a1[1];
      }
      else if ( v10 == v11[1] )
      {
        v15 = v11 + 1;
      }
      else
      {
        if ( v10 != v11[2] )
        {
          if ( v11[3] == v10 )
          {
            v15 = v11 + 3;
            if ( v12 != v11 + 3 )
              goto LABEL_28;
          }
          else
          {
            v16 = &v11[4 * v13];
            while ( 1 )
            {
              v15 = v11 + 4;
              if ( v16 == v11 + 4 )
              {
                v14 = v12 - v16;
                goto LABEL_21;
              }
              if ( v10 == v11[4] )
                goto LABEL_31;
              if ( v10 == v11[5] )
              {
                v15 = v11 + 5;
                if ( v12 != v11 + 5 )
                  goto LABEL_28;
                goto LABEL_32;
              }
              if ( v10 == v11[6] )
              {
                v15 = v11 + 6;
                if ( v12 != v11 + 6 )
                  goto LABEL_28;
                goto LABEL_32;
              }
              if ( v10 == v11[7] )
                break;
              v11 += 4;
            }
            v15 = v11 + 7;
            if ( v12 != v11 + 7 )
              goto LABEL_28;
          }
          goto LABEL_32;
        }
        v15 = v11 + 2;
      }
LABEL_31:
      if ( v12 != v15 )
        goto LABEL_28;
LABEL_32:
      if ( (int (**)())a1[3] == v15 )
      {
LABEL_33:
        sub_148830(v3);
        goto LABEL_28;
      }
      goto LABEL_25;
    }
    v16 = (int (**)())a1[1];
LABEL_21:
    if ( v14 != 2 )
    {
      if ( v14 != 3 )
      {
        if ( v14 != 1 )
          goto LABEL_24;
        goto LABEL_44;
      }
      if ( v10 == *v16 )
        goto LABEL_45;
      ++v16;
    }
    if ( v10 == *v16 )
      goto LABEL_45;
    ++v16;
LABEL_44:
    if ( v10 == *v16 )
    {
LABEL_45:
      v15 = v16;
      if ( v12 != v16 )
        goto LABEL_28;
      goto LABEL_32;
    }
LABEL_24:
    v15 = (int (**)())a1[2];
    if ( (int (**)())a1[3] == v12 )
      goto LABEL_33;
LABEL_25:
    v17 = v15 == 0;
    v18 = v15 + 1;
    if ( !v17 )
      *(v18 - 1) = v10;
    a1[2] = v18;
LABEL_28:
    ++v8;
  }
  while ( v8 != 15 );
  return a1;
}
