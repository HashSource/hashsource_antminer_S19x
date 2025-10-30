void __fastcall sub_27020C(_DWORD *a1, _DWORD *a2, int a3, int a4)
{
  int v5; // r4
  int v9; // r2
  int v10; // r4
  int v11; // r9
  int v12; // r12
  int v13; // t1
  int v14; // r1
  int v15; // r3
  size_t v16; // r6
  const char *v17; // r7
  int v18; // r1
  int v19; // r8
  int v20; // r12
  unsigned int v21; // r3
  int v22; // r0
  unsigned int v23; // r2
  int v24; // t1
  _DWORD *v25; // r4
  _DWORD *v26; // r9
  int v27; // r3
  int v28; // r3
  int v29; // r2
  int v30; // r3
  int *v31; // r0
  int *v32; // r0

  v5 = a2[23];
  v9 = a2[24];
  if ( v5 != v9 )
  {
    v10 = v5 - 4;
    v11 = v9 - 4;
    do
    {
      v13 = *(_DWORD *)(v10 + 4);
      v10 += 4;
      v12 = v13;
      v14 = v13;
      if ( v13 )
      {
        if ( !a4 )
          *(_DWORD *)(v12 + 88) = 0;
        sub_27020C(a1, v14);
      }
    }
    while ( v11 != v10 );
    v9 = a2[23];
  }
  a2[24] = v9;
  if ( !a3 )
  {
    if ( a2[13] )
    {
      ++*a1;
      if ( !a4 )
        goto LABEL_14;
    }
    else if ( !a4 )
    {
      goto LABEL_15;
    }
    v15 = a2[22];
    if ( v15 )
      *(_DWORD *)(*(_DWORD *)(v15 + 92) + 4 * a2[18]) = 0;
LABEL_14:
    v16 = a2[13];
    if ( !v16 )
    {
LABEL_15:
      sub_2700DC((int)a2);
      sub_349268(a2);
      return;
    }
    v17 = (const char *)a2[12];
    v18 = *(unsigned __int8 *)v17;
    if ( *v17 )
    {
      v20 = a2[12];
      v21 = 0;
      v22 = 1;
      do
      {
        v23 = v21 + v22 * v18;
        v24 = *(unsigned __int8 *)++v20;
        v18 = v24;
        ++v22;
        v21 = v23 % 0xE3;
      }
      while ( v24 );
      v19 = 4 * v21;
    }
    else
    {
      v19 = *(unsigned __int8 *)v17;
    }
    v25 = *(_DWORD **)(dword_48AA14 + v19);
    if ( !v25 )
    {
LABEL_42:
      if ( dword_48AA20 )
      {
        v31 = (int *)sub_242FC8();
        sub_2594B0(*v31, "Deleting %s\n", (const char *)a2[12]);
        v17 = (const char *)a2[12];
      }
      sub_946B0("Assertion failed: Could not find variable object \"%s\" to delete", v17);
      goto LABEL_15;
    }
    v26 = 0;
    while ( v16 != *(_DWORD *)(*v25 + 52) || memcmp(*(const void **)(*v25 + 48), v17, v16) )
    {
      v26 = v25;
      v25 = (_DWORD *)v25[1];
      if ( !v25 )
        goto LABEL_42;
    }
    if ( dword_48AA20 )
    {
      v32 = (int *)sub_242FC8();
      sub_2594B0(*v32, "Deleting %s\n", (const char *)a2[12]);
    }
    v27 = v25[1];
    if ( v26 )
      v26[1] = v27;
    else
      *(_DWORD *)(dword_48AA14 + v19) = v27;
    free(v25);
    v28 = a2[26];
    if ( a2 != *(_DWORD **)(v28 + 40) )
      goto LABEL_15;
    v29 = dword_48AA18;
    if ( v28 == dword_48AA18 )
    {
      dword_48AA18 = *(_DWORD *)(v28 + 44);
      goto LABEL_15;
    }
    if ( dword_48AA18 )
    {
      if ( a2 == *(_DWORD **)(dword_48AA18 + 40) )
      {
        dword_48AA18 = 0;
        goto LABEL_15;
      }
      while ( 1 )
      {
        v30 = *(_DWORD *)(v29 + 44);
        if ( !v30 )
          break;
        if ( a2 == *(_DWORD **)(v30 + 40) )
        {
          *(_DWORD *)(v29 + 44) = *(_DWORD *)(v30 + 44);
          goto LABEL_15;
        }
        v29 = *(_DWORD *)(v29 + 44);
      }
    }
    sub_946B0("Assertion failed: Could not find varobj \"%s\" in root list", (const char *)a2[12]);
    goto LABEL_15;
  }
}
