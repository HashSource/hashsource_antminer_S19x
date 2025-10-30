int __fastcall memmem(char *a1, unsigned int a2, char *a3, unsigned int a4)
{
  char *v6; // r5
  char *v9; // r0
  _BOOL4 v10; // r3
  unsigned int v11; // r7
  size_t v12; // r6
  unsigned int v13; // r0
  unsigned int v14; // r2
  size_t v15; // r12
  size_t v16; // r3
  char *v17; // lr
  char *v18; // r1
  int v19; // r8
  int v20; // t1
  int v21; // t1
  unsigned int v22; // lr
  char *v23; // r3
  char *v24; // r7
  int v25; // r9
  int v26; // t1
  int v27; // t1
  size_t v29; // r3
  size_t v30; // r9
  unsigned int v31; // r0
  unsigned int v32; // r7
  char *v33; // r2
  size_t v34; // r3
  char *v35; // r1
  int v36; // lr
  int v37; // t1
  int v38; // t1
  char *v39; // r3
  char *v40; // r2
  int v41; // r12
  int v42; // t1
  int v43; // t1
  int v44; // [sp+4h] [bp-20h]
  int v45; // [sp+8h] [bp-1Ch]
  int v46; // [sp+1Ch] [bp-8h] BYREF

  if ( !a4 )
    return (int)a1;
  if ( a4 > a2 )
    return 0;
  if ( a4 > 0x1F )
    return sub_41750((int)a1, a2, a3, a4);
  v9 = sub_4152C(a1, (unsigned __int8)*a3, a2);
  v6 = v9;
  v10 = a4 == 1;
  if ( !v9 )
    v10 = 1;
  if ( v10 )
    return (int)v6;
  v11 = a2 - (v9 - a1);
  if ( a4 > v11 )
    return 0;
  if ( a4 > 2 )
  {
    v12 = sub_41640((int)a3, a4, &v46);
    v45 = v46;
  }
  else
  {
    v12 = a4 - 1;
    v45 = 1;
    v46 = 1;
  }
  v13 = memcmp(a3, &a3[v45], v12);
  if ( !v13 )
  {
    v14 = v11 - a4;
    v15 = 0;
    while ( 1 )
    {
      if ( v12 < v15 )
        v16 = v15;
      else
        v16 = v12;
      if ( a4 > v16 )
      {
        v17 = &a3[v16];
        v18 = &v6[v16 + v13];
        if ( a3[v16] != *v18 )
        {
LABEL_32:
          v15 = 0;
          v13 += 1 - v12 + v16;
          goto LABEL_29;
        }
        while ( a4 != ++v16 )
        {
          v20 = (unsigned __int8)*++v17;
          v19 = v20;
          v21 = (unsigned __int8)*++v18;
          if ( v19 != v21 )
            goto LABEL_32;
        }
      }
      v22 = v12 - 1;
      if ( v12 > v15 && (v23 = &v6[v12 - 1 + v13], a3[v12 - 1] == *v23) )
      {
        v24 = &a3[v12 - 1];
        while ( v22 - 1 != v15 - 1 )
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
        v22 = v12;
      }
      if ( v15 + 1 > v22 )
      {
        v6 += v13;
        return (int)v6;
      }
      v15 = a4 - v45;
      v13 += v45;
LABEL_29:
      if ( v14 < v13 )
        return 0;
    }
  }
  v29 = a4 - v12;
  v30 = v12 - 1;
  v31 = v11 - a4;
  if ( a4 - v12 < v12 )
    v29 = v12;
  v32 = 0;
  v44 = v29 + 1;
  while ( 1 )
  {
    if ( a4 > v12 )
    {
      v33 = &v6[v12 + v32];
      if ( *v33 != a3[v12] )
      {
        v34 = v12;
LABEL_49:
        v32 += 1 - v12 + v34;
        goto LABEL_50;
      }
      v35 = &a3[v12];
      v34 = v12;
      while ( a4 != ++v34 )
      {
        v37 = (unsigned __int8)*++v35;
        v36 = v37;
        v38 = (unsigned __int8)*++v33;
        if ( v36 != v38 )
          goto LABEL_49;
      }
    }
    if ( !v12 )
      return (int)&v6[v32];
    v39 = &v6[v30 + v32];
    if ( *v39 == a3[v30] )
      break;
LABEL_52:
    v32 += v44;
LABEL_50:
    if ( v31 < v32 )
      return 0;
  }
  v40 = &a3[v30];
  while ( v40 != a3 )
  {
    v42 = (unsigned __int8)*--v40;
    v41 = v42;
    v43 = (unsigned __int8)*--v39;
    if ( v41 != v43 )
      goto LABEL_52;
  }
  return (int)&v6[v32];
}
