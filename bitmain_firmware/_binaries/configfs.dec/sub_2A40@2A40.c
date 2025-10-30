__int64 __fastcall sub_2A40(__int64 a1, __int64 a2)
{
  __int64 v4; // x21
  __int64 *v5; // x0
  __int64 v6; // x1
  int v7; // w20
  unsigned int file; // w19
  __int64 *v9; // x0
  __int64 v10; // x1
  int v11; // w20
  __int64 *v13; // x0

  v4 = *(_QWORD *)(a1 + 64);
  if ( !v4 )
  {
    file = -22;
    goto LABEL_13;
  }
  v5 = *(__int64 **)(v4 + 24);
  if ( v5 )
  {
    v6 = *v5;
    if ( *v5 )
    {
      v7 = 0;
      while ( 1 )
      {
        ++v7;
        file = configfs_create_file(a1, v6);
        if ( file )
          break;
        v6 = *(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL * v7);
        if ( !v6 )
          goto LABEL_14;
      }
      v9 = *(__int64 **)(v4 + 32);
      if ( !v9 )
        goto LABEL_12;
      v10 = *v9;
      if ( !*v9 )
        goto LABEL_12;
      goto LABEL_9;
    }
  }
LABEL_14:
  v13 = *(__int64 **)(v4 + 32);
  if ( v13 )
  {
    v10 = *v13;
    if ( *v13 )
    {
LABEL_9:
      v11 = 0;
      while ( 1 )
      {
        ++v11;
        file = configfs_create_bin_file(a1, v10);
        if ( file )
          break;
        v10 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 8LL * v11);
        if ( !v10 )
          return 0;
      }
LABEL_12:
      sub_2130(*(_QWORD *)(a1 + 72));
LABEL_13:
      down_write(*(_QWORD *)(a2 + 48) + 176LL);
      sub_22A0(*(_QWORD *)(a1 + 72));
      *(_DWORD *)(*(_QWORD *)(a2 + 48) + 12LL) |= 0x10u;
      raw_spin_lock(a2 + 88);
      *(_DWORD *)a2 |= 0x100u;
      raw_spin_unlock(a2 + 88);
      up_write(*(_QWORD *)(a2 + 48) + 176LL);
      d_delete(a2);
      return file;
    }
  }
  return 0;
}
