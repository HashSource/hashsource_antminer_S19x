void __fastcall sub_93C28(int a1, char *s, int a3)
{
  size_t v6; // r0
  const char **v7; // r4
  int v8; // r8
  size_t v9; // r7
  const char *v10; // r5
  void **v11; // r6
  size_t v12; // r0
  size_t v13; // r5
  size_t v14; // r0
  size_t v15; // r8
  _DWORD *v16; // r2
  void **v17; // r2
  _DWORD *v18; // r0
  _DWORD *v19; // r0
  _DWORD v20[2]; // [sp+8h] [bp-24h] BYREF
  void *ptr; // [sp+10h] [bp-1Ch] BYREF
  size_t v22; // [sp+14h] [bp-18h]
  _DWORD v23[5]; // [sp+18h] [bp-14h] BYREF

  v6 = strlen(s);
  v7 = *(const char ***)a1;
  v8 = *(_DWORD *)(a1 + 4) - 4;
  if ( *(_DWORD *)a1 != v8 )
  {
    v9 = v6;
    while ( 1 )
    {
      v10 = *v7;
      v11 = (void **)v7++;
      if ( !strncmp(v10, s, v9) && v10[v9] == 61 )
        break;
      if ( (const char **)v8 == v7 )
        goto LABEL_6;
    }
    if ( v11 != (void **)v8 )
    {
      ptr = v23;
      v14 = strlen(v10);
      v15 = v14;
      v20[0] = v14;
      if ( v14 > 0xF )
      {
        v18 = (_DWORD *)sub_33B2BC(&ptr, v20, 0);
        ptr = v18;
        v23[0] = v20[0];
      }
      else
      {
        if ( v14 == 1 )
        {
          v16 = v23;
          LOBYTE(v23[0]) = *v10;
LABEL_17:
          v22 = v15;
          *((_BYTE *)v16 + v15) = 0;
          sub_94430(a1 + 12, &ptr);
          if ( ptr != v23 )
            sub_339E64(ptr);
          if ( *v11 )
            free(*v11);
          v17 = *(void ***)(a1 + 4);
          if ( v11 + 1 != v17 )
          {
            memmove(v11, v11 + 1, (char *)v17 - (char *)(v11 + 1));
            v17 = *(void ***)(a1 + 4);
          }
          *(_DWORD *)(a1 + 4) = v17 - 1;
          goto LABEL_6;
        }
        if ( !v14 )
        {
          v16 = v23;
          goto LABEL_17;
        }
        v18 = v23;
      }
      memcpy(v18, v10, v15);
      v15 = v20[0];
      v16 = ptr;
      goto LABEL_17;
    }
  }
LABEL_6:
  if ( !a3 )
    return;
  ptr = v23;
  v12 = strlen(s);
  v13 = v12;
  v20[0] = v12;
  if ( v12 > 0xF )
  {
    v19 = (_DWORD *)sub_33B2BC(&ptr, v20, 0);
    ptr = v19;
    v23[0] = v20[0];
LABEL_29:
    memcpy(v19, s, v13);
    goto LABEL_11;
  }
  if ( v12 == 1 )
  {
    LOBYTE(v23[0]) = *s;
    goto LABEL_11;
  }
  if ( v12 )
  {
    v19 = v23;
    goto LABEL_29;
  }
LABEL_11:
  v22 = v20[0];
  *((_BYTE *)ptr + v20[0]) = 0;
  sub_941F8(v20, a1 + 36, &ptr);
  if ( ptr != v23 )
    sub_339E64(ptr);
}
