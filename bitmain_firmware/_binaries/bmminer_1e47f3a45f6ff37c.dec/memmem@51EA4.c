char *__fastcall memmem(char *a1, unsigned int a2, char *a3, unsigned int a4)
{
  char *v5; // r7
  char *v9; // r0
  bool v10; // zf
  char *result; // r0
  unsigned int v12; // r5
  size_t v13; // r8
  unsigned int v14; // r0
  unsigned int v15; // r10
  size_t v16; // r3
  char *v17; // r2
  char *v18; // r1
  int v19; // lr
  int v20; // t1
  int v21; // t1
  unsigned int v22; // r2
  char *v23; // r1
  char *v24; // r3
  int v25; // r5
  int v26; // t1
  int v27; // t1
  size_t v28; // r3
  unsigned int v29; // r2
  char *v30; // r1
  char *v31; // r12
  size_t v32; // r3
  int v33; // r5
  int v34; // t1
  int v35; // t1
  char *v36; // r1
  char *v37; // r3
  int v38; // lr
  int v39; // t1
  int v40; // t1
  unsigned int v41; // r0
  unsigned int v42; // [sp+4h] [bp-20h]
  int v43; // [sp+8h] [bp-1Ch]
  size_t v44; // [sp+8h] [bp-1Ch]
  int v45; // [sp+1Ch] [bp-8h] BYREF

  v5 = a1;
  if ( !a4 )
    return v5;
  if ( a4 > a2 )
    return 0;
  if ( a4 > 0x1F )
    return (char *)sub_51B58((int)a1, a2, a3, a4);
  v9 = memchr(a1, *a3, a2);
  v10 = a4 == 1;
  if ( a4 != 1 )
    v10 = v9 == 0;
  v5 = v9;
  result = (char *)v10;
  if ( v10 )
    return v5;
  v12 = a1 - v5 + a2;
  if ( a4 > v12 )
    return result;
  if ( a4 > 2 )
  {
    v41 = sub_51A40((int)a3, a4, &v45);
    v43 = v45;
    v13 = v41;
  }
  else
  {
    v13 = a4 - 1;
    v43 = 1;
    v45 = 1;
  }
  v14 = memcmp(a3, &a3[v43], v13);
  if ( !v14 )
  {
    v42 = v12 - a4;
    v15 = 0;
    while ( 1 )
    {
      if ( v15 < v13 )
        v16 = v13;
      else
        v16 = v15;
      if ( a4 > v16 )
      {
        v17 = &v5[v16 + v14];
        v18 = &a3[v16];
        if ( a3[v16] != *v17 )
        {
LABEL_36:
          v15 = 0;
          v14 += 1 - v13 + v16;
          goto LABEL_31;
        }
        while ( a4 > ++v16 )
        {
          v20 = (unsigned __int8)*++v18;
          v19 = v20;
          v21 = (unsigned __int8)*++v17;
          if ( v19 != v21 )
            goto LABEL_36;
        }
      }
      v22 = v13 - 1;
      if ( v13 > v15 && (v23 = &v5[v14 - 1 + v13], a3[v13 - 1] == *v23) )
      {
        v24 = &a3[v13 - 1];
        while ( v24 != &a3[v15] )
        {
          v26 = (unsigned __int8)*--v24;
          v25 = v26;
          v27 = (unsigned __int8)*--v23;
          if ( v25 != v27 )
            break;
          --v22;
        }
      }
      else
      {
        v22 = v13;
      }
      if ( v15 + 1 > v22 )
        return &v5[v14];
      v15 = a4 - v43;
      v14 += v43;
LABEL_31:
      if ( v42 < v14 )
        return 0;
    }
  }
  v28 = a4 - v13;
  v29 = v12 - a4;
  v14 = 0;
  if ( a4 - v13 < v13 )
    v28 = v13;
  v44 = v28 + 1;
  while ( 1 )
  {
    if ( a4 > v13 )
    {
      v30 = &v5[v14 + v13];
      if ( a3[v13] != *v30 )
      {
        v32 = v13;
LABEL_52:
        v14 += 1 - v13 + v32;
        goto LABEL_53;
      }
      v31 = &a3[v13];
      v32 = v13;
      while ( a4 > ++v32 )
      {
        v34 = (unsigned __int8)*++v31;
        v33 = v34;
        v35 = (unsigned __int8)*++v30;
        if ( v33 != v35 )
          goto LABEL_52;
      }
    }
    if ( !v13 )
      return &v5[v14];
    v36 = &v5[v14 - 1 + v13];
    if ( a3[v13 - 1] == *v36 )
      break;
LABEL_55:
    v14 += v44;
LABEL_53:
    if ( v29 < v14 )
      return 0;
  }
  v37 = &a3[v13 - 1];
  while ( v37 != a3 )
  {
    v39 = (unsigned __int8)*--v37;
    v38 = v39;
    v40 = (unsigned __int8)*--v36;
    if ( v38 != v40 )
      goto LABEL_55;
  }
  return &v5[v14];
}
