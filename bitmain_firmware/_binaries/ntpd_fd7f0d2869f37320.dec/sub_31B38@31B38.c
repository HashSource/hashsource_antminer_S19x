int __fastcall sub_31B38(int *s, int a2)
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
  int v14; // r12
  int v15; // r8
  int *v16; // r1
  int *v17; // r3
  char *v18; // r1
  int *v19; // r3
  int *v20; // r1
  int *v21; // r3
  const char *v22; // r0
  const char *v23; // r0
  const char *v24; // r0
  int v25; // [sp+4h] [bp-4h]

  if ( a2 )
  {
    v8 = (char *)(s + 4);
    v9 = sub_6D544(s + 4) & 0x7F;
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
LABEL_38:
        peer_hash_count[v9] = v10;
        v24 = (const char *)sub_6D2C0(v8);
        sub_65D40(3, "peer %s not in address table!", v24);
LABEL_18:
        v14 = s[15] & 0x7F;
        v15 = assoc_hash_count[v14];
        assoc_hash_count[v14] = v15 - 1;
        v16 = (int *)assoc_hash[v14];
        if ( s == v16 )
        {
          v18 = (char *)&assoc_hash[v14];
        }
        else
        {
          if ( !v16 || (v17 = (int *)v16[2]) == 0 )
          {
LABEL_37:
            assoc_hash_count[v14] = v15;
            v23 = (const char *)sub_6D2C0(v8);
            sub_65D40(3, "peer %s not in association ID table!", v23);
LABEL_27:
            v19 = &peer_list;
            v20 = (int *)peer_list;
            if ( s != (int *)peer_list )
            {
              if ( !peer_list || (v21 = *(int **)peer_list) == 0 )
              {
LABEL_36:
                v22 = (const char *)sub_6D2C0(v8);
                sub_65D40(3, "%s not in peer list!", v22);
                goto LABEL_2;
              }
              while ( s != v21 )
              {
                v20 = v21;
                if ( !*v21 )
                  goto LABEL_36;
                v21 = (int *)*v21;
              }
              v19 = v20;
              v20 = (int *)*v20;
            }
            *v19 = *v20;
            goto LABEL_2;
          }
          while ( s != v17 )
          {
            v16 = v17;
            if ( !v17[2] )
              goto LABEL_37;
            v17 = (int *)v17[2];
          }
          v18 = (char *)(v16 + 2);
        }
        *(_DWORD *)v18 = *(_DWORD *)(*(_DWORD *)v18 + 8);
        goto LABEL_27;
      }
      while ( v12 != s )
      {
        v11 = v12;
        if ( !v12[1] )
          goto LABEL_38;
        v12 = (int *)v12[1];
      }
      v13 = (char *)(v11 + 1);
    }
    *(_DWORD *)v13 = *(_DWORD *)(*(_DWORD *)v13 + 4);
    goto LABEL_18;
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
  v7 = dword_BBEA0;
  dword_BBEA0 = (int)s;
  *s = v7;
  ++peer_free_count;
  return v25;
}
