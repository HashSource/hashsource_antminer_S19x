__int64 __fastcall configfs_setattr(__int64 a1, int *a2)
{
  __int64 v4; // x22
  int v5; // w19
  __int64 v6; // x24
  __int64 v7; // x23
  unsigned int v8; // w21
  __int16 v10; // w19
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x25
  __int64 v15; // x2
  __int64 v16; // x1

  v4 = *(_QWORD *)(a1 + 144);
  v5 = *a2;
  v6 = *(_QWORD *)(a1 + 48);
  if ( !v4 )
    return (unsigned int)-22;
  v7 = *(_QWORD *)(v4 + 80);
  if ( !v7 )
  {
    v14 = kmem_cache_alloc_trace(kmalloc_caches[7], 37781696, 80);
    if ( !v14 )
      return (unsigned int)-12;
    *(_WORD *)(v14 + 4) = *(_WORD *)(v4 + 68);
    v7 = v14;
    *(_DWORD *)(v14 + 8) = 0;
    *(_DWORD *)(v14 + 12) = 0;
    v15 = current_time(v6);
    *(_QWORD *)(v14 + 56) = v15;
    *(_QWORD *)(v14 + 64) = v16;
    *(_QWORD *)(v14 + 40) = v15;
    *(_QWORD *)(v14 + 48) = v16;
    *(_QWORD *)(v14 + 24) = v15;
    *(_QWORD *)(v14 + 32) = v16;
    *(_QWORD *)(v4 + 80) = v14;
  }
  v8 = simple_setattr(a1, a2);
  if ( v8 )
    return v8;
  if ( (v5 & 2) != 0 )
    *(_DWORD *)(v7 + 8) = a2[2];
  if ( (v5 & 4) != 0 )
    *(_DWORD *)(v7 + 12) = a2[3];
  if ( (v5 & 0x10) != 0 )
  {
    *(_QWORD *)(v7 + 24) = timespec_trunc(
                             *((_QWORD *)a2 + 3),
                             *((_QWORD *)a2 + 4),
                             *(unsigned int *)(*(_QWORD *)(v6 + 40) + 1384LL));
    *(_QWORD *)(v7 + 32) = v12;
    if ( (v5 & 0x20) == 0 )
    {
LABEL_10:
      if ( (v5 & 0x40) == 0 )
        goto LABEL_11;
LABEL_15:
      *(_QWORD *)(v7 + 56) = timespec_trunc(
                               *((_QWORD *)a2 + 7),
                               *((_QWORD *)a2 + 8),
                               *(unsigned int *)(*(_QWORD *)(v6 + 40) + 1384LL));
      *(_QWORD *)(v7 + 64) = v11;
      if ( (v5 & 1) == 0 )
        return v8;
      goto LABEL_13;
    }
  }
  else if ( (v5 & 0x20) == 0 )
  {
    goto LABEL_10;
  }
  *(_QWORD *)(v7 + 40) = timespec_trunc(
                           *((_QWORD *)a2 + 5),
                           *((_QWORD *)a2 + 6),
                           *(unsigned int *)(*(_QWORD *)(v6 + 40) + 1384LL));
  *(_QWORD *)(v7 + 48) = v13;
  if ( (v5 & 0x40) != 0 )
    goto LABEL_15;
LABEL_11:
  if ( (v5 & 1) == 0 )
    return v8;
LABEL_13:
  v10 = *((_WORD *)a2 + 2);
  if ( !(unsigned int)in_group_p(*(unsigned int *)(v6 + 8)) && !(unsigned __int8)capable(4) )
    v10 &= ~0x400u;
  *(_WORD *)(v4 + 68) = v10;
  *(_WORD *)(v7 + 4) = v10;
  return 0;
}
