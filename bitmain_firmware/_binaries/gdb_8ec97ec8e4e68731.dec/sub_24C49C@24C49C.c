_DWORD *__fastcall sub_24C49C(_DWORD *result)
{
  int v1; // r3
  char **v2; // r5
  int v3; // r12
  int v4; // r2
  int v5; // r1
  char *v6; // r2
  _DWORD *v7; // r4
  char *v8; // r7
  size_t v9; // r0
  int v10; // r4
  char *v11; // r10
  int v12; // r3
  _BYTE *v13; // r3
  int v14; // r2
  char *v15; // r1
  char *v16; // r2
  int v17; // r2
  int v18; // lr
  int i; // r1
  int v20; // r4
  int v21; // r2
  int j; // r1
  int v23; // lr
  _DWORD *v24; // r4
  _BYTE *v25; // r3
  int v26; // r2
  _DWORD **v27; // [sp+Ch] [bp-58h]
  char *s1; // [sp+18h] [bp-4Ch] BYREF
  int v29; // [sp+1Ch] [bp-48h]
  _DWORD v30[4]; // [sp+20h] [bp-44h] BYREF
  void *ptr; // [sp+30h] [bp-34h] BYREF
  int v32; // [sp+34h] [bp-30h]
  _DWORD v33[4]; // [sp+38h] [bp-2Ch] BYREF
  void *v34; // [sp+48h] [bp-1Ch] BYREF
  int v35; // [sp+4Ch] [bp-18h]
  _DWORD v36[5]; // [sp+50h] [bp-14h] BYREF

  v1 = dword_48A910;
  v27 = (_DWORD **)result;
  v2 = (char **)*result;
  if ( dword_48A910 )
  {
    v3 = *(_DWORD *)dword_48A910;
    result = (_DWORD *)*result;
    if ( *(_DWORD *)dword_48A910 )
    {
      v4 = 0;
      v5 = dword_48A910;
      do
      {
        ++v4;
        *(_DWORD *)(v5 + 12) = 0;
        v5 += 40;
      }
      while ( v4 != v3 );
      if ( !v2 )
        goto LABEL_29;
    }
    else if ( !v2 )
    {
      goto LABEL_38;
    }
  }
  else if ( !v2 )
  {
    return result;
  }
  do
  {
    while ( 1 )
    {
      if ( *v2 )
      {
        v7 = (_DWORD *)sub_249854(*v2);
        if ( v7 )
        {
          v6 = v2[1];
          if ( dword_48A514 )
          {
            sub_259F10("Assuming trace state variable $%s is same as target's variable %d.\n", (const char *)*v7, v6);
            v6 = v2[1];
          }
          goto LABEL_9;
        }
      }
      LOBYTE(v30[0]) = 0;
      v8 = *v2;
      v29 = 0;
      s1 = (char *)v30;
      if ( v8 )
      {
        v9 = strlen(v8);
        sub_33BC54((int)&s1, 0, 0, v8, v9);
        v10 = 0;
        goto LABEL_14;
      }
      sub_931D8((char **)&v34, "%s_%d", "__tsv", 0);
      v25 = s1;
      if ( v34 == v36 )
      {
        sub_33B48C(&s1, &v34);
        v25 = v34;
        goto LABEL_46;
      }
      if ( s1 == (char *)v30 )
      {
        s1 = (char *)v34;
        v29 = v35;
        v30[0] = v36[0];
LABEL_50:
        v34 = v36;
        v25 = v36;
        goto LABEL_46;
      }
      s1 = (char *)v34;
      v29 = v35;
      v26 = v30[0];
      v30[0] = v36[0];
      if ( !v25 )
        goto LABEL_50;
      v34 = v25;
      v36[0] = v26;
LABEL_46:
      v35 = 0;
      *v25 = 0;
      if ( v34 != v36 )
        sub_339E64(v34);
      v8 = "__tsv";
      v10 = 1;
LABEL_14:
      while ( 1 )
      {
        v11 = s1;
        if ( !sub_249854(s1) )
          break;
        v12 = v10++;
        sub_931D8((char **)&ptr, "%s_%d", v8, v12);
        v13 = s1;
        if ( ptr == v33 )
        {
          sub_33B48C(&s1, &ptr);
          v13 = ptr;
          goto LABEL_19;
        }
        if ( s1 == (char *)v30 )
        {
          s1 = (char *)ptr;
          v29 = v32;
          v30[0] = v33[0];
LABEL_22:
          ptr = v33;
          v13 = v33;
          goto LABEL_19;
        }
        s1 = (char *)ptr;
        v29 = v32;
        v14 = v30[0];
        v30[0] = v33[0];
        if ( !v13 )
          goto LABEL_22;
        ptr = v13;
        v33[0] = v14;
LABEL_19:
        v32 = 0;
        *v13 = 0;
        if ( ptr != v33 )
          sub_339E64(ptr);
      }
      v7 = (_DWORD *)((int (__fastcall *)(char *))loc_249750)(v11);
      v15 = v2[4];
      *((_QWORD *)v7 + 1) = *((_QWORD *)v2 + 1);
      v7[8] = v15;
      sub_1BA664((int)v7);
      if ( s1 != (char *)v30 )
        sub_339E64(s1);
      v6 = v2[1];
      if ( dword_48A514 )
        break;
LABEL_9:
      v2 = (char **)v2[5];
      v7[1] = v6;
      if ( !v2 )
        goto LABEL_27;
    }
    sub_259F10("Created trace state variable $%s for target's variable %d.\n", *v7, v6);
    v16 = v2[1];
    v2 = (char **)v2[5];
    v7[1] = v16;
  }
  while ( v2 );
LABEL_27:
  v1 = dword_48A910;
  if ( dword_48A910 )
  {
    v3 = *(_DWORD *)dword_48A910;
    result = *v27;
LABEL_29:
    if ( v3 )
    {
      v17 = 0;
      v18 = v1;
      for ( i = 0; i != v3; ++i )
      {
        v20 = *(_DWORD *)(v18 + 12);
        v18 += 40;
        if ( v17 < v20 )
          v17 = v20;
      }
      v21 = v17 + 1;
      for ( j = 0; j != v3; ++j )
      {
        v23 = *(_DWORD *)(v1 + 12);
        v1 += 40;
        if ( !v23 )
          *(_DWORD *)(v1 - 28) = v21++;
      }
    }
  }
  else
  {
    result = *v27;
  }
LABEL_38:
  if ( result )
  {
    do
    {
      v24 = (_DWORD *)result[5];
      free(result);
      result = v24;
      *v27 = v24;
    }
    while ( v24 );
  }
  return result;
}
