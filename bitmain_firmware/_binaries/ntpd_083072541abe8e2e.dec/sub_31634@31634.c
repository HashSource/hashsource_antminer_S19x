int __fastcall sub_31634(int *s, int a2)
{
  void *v3; // r0
  void *v4; // r0
  void *v5; // r0
  int v7; // r12
  char *v8; // r7
  int v9; // r12
  int v10; // r8
  int *v11; // r1
  int *v12; // r3
  char *v13; // r1
  const char *v14; // r0
  int v15; // r12
  int v16; // r8
  int *v17; // r1
  int *v18; // r3
  char *v19; // r1
  const char *v20; // r0
  int *v21; // r3
  int *v22; // r1
  int *v23; // r3
  const char *v24; // r0
  int v25; // [sp+4h] [bp-4h]

  if ( a2 )
  {
    v8 = (char *)(s + 4);
    v9 = sub_6C568(s + 4) & 0x7F;
    v10 = peer_hash_count[v9];
    peer_hash_count[v9] = v10 - 1;
    v11 = (int *)peer_hash[v9];
    if ( s == v11 )
    {
      v13 = (char *)&peer_hash[v9];
    }
    else
    {
      if ( !v11 || (v12 = (int *)v11[1]) == 0 )
      {
LABEL_18:
        peer_hash_count[v9] = v10;
        v14 = (const char *)sub_6C2E8(v8);
        sub_64E00(3, "peer %s not in address table!", v14);
LABEL_19:
        v15 = s[15] & 0x7F;
        v16 = assoc_hash_count[v15];
        assoc_hash_count[v15] = v16 - 1;
        v17 = (int *)assoc_hash[v15];
        if ( s == v17 )
        {
          v19 = (char *)&assoc_hash[v15];
        }
        else
        {
          if ( !v17 || (v18 = (int *)v17[2]) == 0 )
          {
LABEL_28:
            assoc_hash_count[v15] = v16;
            v20 = (const char *)sub_6C2E8(v8);
            sub_64E00(3, "peer %s not in association ID table!", v20);
LABEL_29:
            v21 = &peer_list;
            v22 = (int *)peer_list;
            if ( s != (int *)peer_list )
            {
              if ( !peer_list || (v23 = *(int **)peer_list) == 0 )
              {
LABEL_38:
                v24 = (const char *)sub_6C2E8(v8);
                sub_64E00(3, "%s not in peer list!", v24);
                goto LABEL_2;
              }
              while ( s != v23 )
              {
                v22 = v23;
                if ( !*v23 )
                  goto LABEL_38;
                v23 = (int *)*v23;
              }
              v21 = v22;
              v22 = (int *)*v22;
            }
            *v21 = *v22;
            goto LABEL_2;
          }
          while ( s != v18 )
          {
            v17 = v18;
            if ( !v18[2] )
              goto LABEL_28;
            v18 = (int *)v18[2];
          }
          v19 = (char *)(v17 + 2);
        }
        *(_DWORD *)v19 = *(_DWORD *)(*(_DWORD *)v19 + 8);
        goto LABEL_29;
      }
      while ( v12 != s )
      {
        v11 = v12;
        if ( !v12[1] )
          goto LABEL_18;
        v12 = (int *)v12[1];
      }
      v13 = (char *)(v11 + 1);
    }
    *(_DWORD *)v13 = *(_DWORD *)(*(_DWORD *)v13 + 4);
    goto LABEL_19;
  }
LABEL_2:
  v3 = (void *)s[11];
  if ( v3 )
    free(v3);
  v4 = (void *)s[20];
  if ( v4 )
    free(v4);
  v5 = (void *)s[12];
  if ( v5 )
    free(v5);
  memset(s, 0, 0x308u);
  v7 = dword_BAE98;
  dword_BAE98 = (int)s;
  *s = v7;
  ++peer_free_count;
  return v25;
}
