__int64 __fastcall sub_3778(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // x0
  const char *v6; // x21
  __int64 v7; // x20
  __int64 v8; // x0
  int v9; // w1
  __int64 v10; // x0
  __int64 v11; // x23
  __int64 v12; // x0
  int v13; // w1
  __int64 v14; // x0
  __int64 v15; // x22
  __int64 v16; // x19
  int v17; // w20
  int v18; // w27
  __int64 v19; // x19
  int v20; // w26
  int v21; // w0
  int v22; // w19
  char *v23; // x1
  int v24; // w20
  __int64 v25; // x19
  int v26; // w0
  int v27; // w3
  __int64 v28; // x19

  result = -10;
  if ( !a1 )
    return result;
  v6 = (const char *)kmem_cache_alloc_trace(kmalloc_caches[12], 37781696, 4096);
  result = -12;
  if ( !v6 )
    return result;
  v7 = a1[3];
  raw_spin_lock(v7 + 88);
  if ( !*(_QWORD *)(v7 + 16) )
  {
    v28 = -22;
    raw_spin_unlock(v7 + 88);
    goto LABEL_34;
  }
  v8 = *(_QWORD *)(v7 + 144);
  v9 = *(_DWORD *)(v8 + 64);
  v10 = *(_QWORD *)(v8 + 56);
  if ( (v9 & 0x20) != 0 )
    v11 = config_item_get(*(_QWORD *)(v10 + 16));
  else
    v11 = config_item_get(v10);
  raw_spin_unlock(v7 + 88);
  if ( !v11 )
  {
    v28 = -22;
    goto LABEL_34;
  }
  raw_spin_lock(a1 + 11);
  if ( !a1[2] )
  {
    raw_spin_unlock(a1 + 11);
LABEL_37:
    v28 = -22;
    config_item_put(v11);
    goto LABEL_34;
  }
  v12 = a1[18];
  v13 = *(_DWORD *)(v12 + 64);
  v14 = *(_QWORD *)(v12 + 56);
  if ( (v13 & 0x20) != 0 )
    v15 = config_item_get(*(_QWORD *)(v14 + 16));
  else
    v15 = config_item_get(v14);
  raw_spin_unlock(a1 + 11);
  if ( !v15 )
    goto LABEL_37;
  v16 = v11;
  v17 = 0;
  down_read(&configfs_rename_sem);
  while ( 1 )
  {
    v16 = *(_QWORD *)(v16 + 48);
    v18 = v17 + 1;
    if ( !v16 || (unsigned int)configfs_is_root(v16) )
      break;
    ++v17;
  }
  v19 = v15;
  v20 = 1;
  do
  {
    v21 = strlen(*(const char **)v19);
    v19 = *(_QWORD *)(v19 + 48);
    v20 += v21 + 1;
  }
  while ( v19 && !(unsigned int)configfs_is_root(v19) );
  v22 = 3 * v18 + v20;
  if ( v22 - 1 > 4096 )
  {
    up_read(&configfs_rename_sem);
    config_item_put(v11);
    v28 = -36;
    config_item_put(v15);
LABEL_34:
    kfree(v6);
    return v28;
  }
  if ( (word_6EAA & 4) != 0 )
    _dynamic_pr_debug(off_6E88, "configfs: %s: depth = %d, size = %d\n", "configfs_get_target_path", v18, v22 - 1);
  if ( v17 != -1 )
  {
    v23 = (char *)v6;
    do
    {
      strcpy(v23, "../");
      v23 += 3;
    }
    while ( v23 != &v6[3 * v17 + 3] );
  }
  v24 = v22 - 2;
  v25 = v15;
  do
  {
    if ( (unsigned int)configfs_is_root(v25) )
      break;
    v26 = strlen(*(const char **)v25);
    v27 = v24 - v26;
    v24 = v24 - v26 - 1;
    strncpy((char *)&v6[v27], *(const char **)v25, v26);
    v6[v24] = 47;
    v25 = *(_QWORD *)(v25 + 48);
  }
  while ( v25 );
  if ( (word_6ED2 & 4) != 0 )
    _dynamic_pr_debug(off_6EB0, "configfs: %s: path = '%s'\n", "configfs_get_target_path", v6);
  up_read(&configfs_rename_sem);
  config_item_put(v11);
  config_item_put(v15);
  result = (__int64)v6;
  *a3 = &kfree_link;
  a3[1] = v6;
  return result;
}
