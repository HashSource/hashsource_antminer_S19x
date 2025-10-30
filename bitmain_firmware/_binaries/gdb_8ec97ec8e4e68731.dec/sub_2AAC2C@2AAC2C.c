char *__fastcall sub_2AAC2C(_DWORD *a1, const char *a2, int a3, int a4)
{
  const char *v4; // r6
  int v5; // r1
  unsigned __int8 *v9; // r10
  unsigned int v10; // r3
  int v11; // r2
  int v12; // t1
  int v13; // r10
  unsigned int v14; // r5
  char *v15; // r4
  char **v17; // r0
  unsigned int v18; // r1
  const char *v19; // r1
  char *v20; // r3

  v4 = a2;
  v5 = *(unsigned __int8 *)a2;
  v9 = (unsigned __int8 *)(v4 + 1);
  if ( v5 )
  {
    v10 = 0;
    do
    {
      v11 = 131073 * v5;
      v12 = *v9++;
      v5 = v12;
      v10 = (v11 + v10) ^ ((v11 + v10) >> 2);
    }
    while ( v12 );
  }
  else
  {
    v10 = 0;
  }
  v13 = v9 - (unsigned __int8 *)v4 - 1;
  v14 = (v13 + v10 + (v13 << 17)) ^ ((v13 + v10 + (v13 << 17)) >> 2);
  v15 = *(char **)(*a1 + 4 * ((unsigned __int64)sub_347674(v14, a1[3]) >> 32));
  if ( v15 )
  {
    while ( *((_DWORD *)v15 + 2) != v14 || strcmp(*((const char **)v15 + 1), v4) )
    {
      v15 = *(char **)v15;
      if ( !v15 )
        goto LABEL_11;
    }
    return v15;
  }
LABEL_11:
  if ( !a3 )
    return 0;
  if ( a4 )
  {
    v17 = (char **)a1[2];
    if ( v13 == -1 )
    {
      v18 = 8;
    }
    else
    {
      v18 = (v13 + 8) & 0xFFFFFFF8;
      if ( !v18 )
        goto LABEL_15;
    }
    v20 = v17[1];
    if ( (unsigned int)v20 >= v18 )
    {
      v15 = *v17;
      v17[1] = &v20[-v18];
      *v17 = &v15[v18];
      goto LABEL_16;
    }
LABEL_15:
    v15 = (char *)sub_324C4C(v17, v18);
LABEL_16:
    if ( v15 )
    {
      v19 = v4;
      v4 = v15;
      memcpy(v15, v19, v13 + 1);
      return (char *)sub_2AAA38((int)a1, (int)v4, v14);
    }
    ((void (__fastcall *)(int))loc_2A6C48)(6);
    return v15;
  }
  return (char *)sub_2AAA38((int)a1, (int)v4, v14);
}
