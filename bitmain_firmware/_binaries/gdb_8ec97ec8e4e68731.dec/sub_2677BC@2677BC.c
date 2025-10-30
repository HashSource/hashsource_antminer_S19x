void __fastcall sub_2677BC(int a1, unsigned __int8 *a2, size_t a3, unsigned __int8 *a4, int a5)
{
  unsigned __int8 *v5; // r10
  signed int v7; // r8
  unsigned __int8 *v8; // r6
  int v9; // r9
  unsigned __int8 *v10; // lr
  int v11; // r1
  unsigned __int8 *v12; // r3
  char v13; // t1
  unsigned __int8 v14; // r3
  int v15; // r11
  unsigned int v16; // r4
  int v17; // r2
  char v18; // t1
  char v19; // r3
  bool v20; // zf
  int v21; // r1
  unsigned __int8 *v22; // r3
  unsigned __int8 *v24; // r4
  int v25; // t1
  unsigned __int8 v26; // r3
  char *v27; // r0
  char *v28; // r5
  char *v29; // r0
  unsigned __int8 *v30; // r1
  int v31; // r3
  char v32; // t1
  unsigned int v33; // r2
  char *v34; // r1
  unsigned __int8 *v35; // r0
  int v36; // r3
  char v37; // t1
  unsigned int v38; // r2
  unsigned __int8 *v39; // [sp+0h] [bp-14h]
  unsigned int v40; // [sp+4h] [bp-10h]
  void *ptr; // [sp+8h] [bp-Ch]

  v39 = a2;
  if ( !a4 )
  {
    v7 = 4 * a3;
    if ( !(4 * a3) )
      goto LABEL_9;
    goto LABEL_50;
  }
  if ( a5 )
    a4 = a2;
  else
    a4 = (unsigned __int8 *)*a2;
  if ( a5 )
    a4 = (unsigned __int8 *)a4[a3 - 1];
  if ( ((unsigned __int8)a4 & 0x80) != 0 )
  {
    if ( a3 )
    {
      v27 = (char *)sub_9836C(a3);
      v28 = v27;
      if ( a5 == 1 )
      {
        v29 = v27 - 1;
        v30 = v39 - 1;
        v31 = 1;
        do
        {
          v32 = *++v30;
          v33 = (unsigned __int8)~v32 + v31;
          *++v29 = v33;
          v31 = v33 >> 8;
        }
        while ( v30 != &v39[a3 - 1] );
      }
      else
      {
        v34 = &v27[a3];
        v35 = &v39[a3];
        v36 = 1;
        do
        {
          v37 = *--v35;
          v38 = (unsigned __int8)~v37 + v36;
          *--v34 = v38;
          v36 = v38 >> 8;
        }
        while ( v34 != v28 );
      }
      sub_25A6BC(&word_3C1464, a1);
      v39 = (unsigned __int8 *)v28;
    }
    else
    {
      v39 = 0;
      sub_25A6BC(&word_3C1464, a1);
    }
    v7 = 4 * a3;
    if ( !(4 * a3) )
    {
      a4 = v39;
      v8 = 0;
      ptr = v39;
      goto LABEL_10;
    }
    v8 = (unsigned __int8 *)sub_9836C(4 * a3);
    ptr = v39;
    goto LABEL_51;
  }
  v7 = 4 * a3;
  if ( 4 * a3 )
  {
LABEL_50:
    ptr = 0;
    v8 = (unsigned __int8 *)sub_9836C(4 * a3);
LABEL_51:
    memset(v8, 0, v7);
    goto LABEL_10;
  }
LABEL_9:
  v8 = (unsigned __int8 *)v7;
  ptr = (void *)v7;
LABEL_10:
  v9 = 0;
  if ( a5 )
  {
    a4 = v39;
    v10 = (unsigned __int8 *)(a3 - 1);
  }
  else
  {
    v10 = v39;
  }
  v11 = 0;
  if ( a5 )
    v10 = &v10[(_DWORD)a4];
  v40 = (unsigned int)&v39[a3];
  while ( !a5 )
  {
LABEL_17:
    if ( (unsigned int)v10 >= v40 )
      goto LABEL_37;
LABEL_18:
    if ( v11 )
    {
      v12 = v8 - 1;
      do
      {
        v13 = *++v12;
        *v12 = 16 * v13;
      }
      while ( &v8[v11 - 1] != v12 );
    }
    v14 = *v8;
    if ( v9 )
    {
      v26 = v14 + (*v10 & 0xF);
      if ( !a5 )
        ++v10;
      *v8 = v26;
      if ( a5 )
        --v10;
      v9 = 0;
    }
    else
    {
      v9 = 1;
      *v8 = v14 + (*v10 >> 4);
    }
    if ( v7 > 1 )
    {
      v15 = v11 <= 0;
      v16 = *v8 / 0xAu;
      if ( v16 )
        v15 = 0;
      if ( !v15 )
        v5 = v8;
      *v8 %= 0xAu;
      if ( v15 )
      {
        v11 = 1;
      }
      else
      {
        while ( 1 )
        {
          v17 = v15 + 1;
          if ( v15 + 1 == v7 - 1 )
            break;
          v18 = *++v5;
          v19 = v18 + v16;
          v16 = (unsigned __int8)(v18 + v16) / 0xAu;
          v20 = v11 == v17;
          if ( v11 <= v17 )
            v20 = v16 == 0;
          *v5 = v19 - 10 * v16;
          if ( v20 )
          {
            v11 = v15 + 2;
            if ( !a5 )
              goto LABEL_17;
            goto LABEL_36;
          }
          ++v15;
        }
      }
    }
  }
LABEL_36:
  if ( v10 >= v39 )
    goto LABEL_18;
LABEL_37:
  v21 = v11 - 1;
  if ( v21 <= 0 )
  {
    if ( v21 != -1 )
      goto LABEL_43;
  }
  else
  {
    if ( !v8[v21] )
    {
      v22 = &v8[v21];
      do
      {
        if ( !--v21 )
          break;
      }
      while ( !*--v22 );
    }
LABEL_43:
    v24 = &v8[v21 + 1];
    do
    {
      v25 = *--v24;
      sub_25A418(a1, "%1d", v25);
    }
    while ( v8 != v24 );
  }
  if ( v8 )
    sub_339E64(v8);
  if ( ptr )
    sub_349260(ptr);
}
