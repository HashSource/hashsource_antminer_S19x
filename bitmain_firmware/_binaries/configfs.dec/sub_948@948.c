__int64 __fastcall sub_948(_WORD *a1, __int64 a2, char a3)
{
  __int64 v6; // x19
  __int64 v7; // x0
  int v8; // w1
  __int64 v9; // x0
  __int64 v10; // x21
  _QWORD *v11; // x19
  bool v12; // zf
  __int64 v13; // x25
  __int64 v14; // x2
  int v15; // w0
  __int64 v16; // x23
  __int64 v17; // x0
  __int64 v18; // x22
  unsigned int v19; // w24

  v6 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 24LL);
  raw_spin_lock(v6 + 88);
  if ( *(_QWORD *)(v6 + 16) )
  {
    v7 = *(_QWORD *)(v6 + 144);
    v8 = *(_DWORD *)(v7 + 64);
    v9 = *(_QWORD *)(v7 + 56);
    if ( (v8 & 0x20) != 0 )
      v10 = config_item_get(*(_QWORD *)(v9 + 16));
    else
      v10 = config_item_get(v9);
    raw_spin_unlock(v6 + 88);
    v11 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 144LL) + 56LL);
    if ( v10 )
      v12 = v11 == 0;
    else
      v12 = 1;
    if ( v12 )
    {
      v19 = -22;
    }
    else
    {
      if ( (a3 & 8) != 0 )
        v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 144LL) + 56LL);
      else
        v13 = 0;
      if ( (unsigned __int8)try_module_get(v11[1]) )
      {
        v14 = *(_QWORD *)(v10 + 64);
        if ( v14
          && ((v15 = *(_DWORD *)(a2 + 84), (v15 & 2) == 0)
           || (*a1 & 0x92) != 0 && ((a3 & 4) == 0 || v11[4]) && ((a3 & 8) == 0 || *(_QWORD *)(v13 + 64)))
          && ((v15 & 1) == 0
           || (*a1 & 0x124) != 0 && ((a3 & 4) == 0 || v11[3]) && ((a3 & 8) == 0 || *(_QWORD *)(v13 + 56))) )
        {
          v16 = *(_QWORD *)(v14 + 8);
          v17 = kmem_cache_alloc_trace(kmalloc_caches[7], 37781696, 120);
          v18 = v17;
          if ( v17 )
          {
            v19 = 0;
            _mutex_init(v17 + 32, "&buffer->mutex", &unk_7280);
            *(_BYTE *)(v18 + 100) = 0;
            *(_BYTE *)(v18 + 101) = 0;
            *(_QWORD *)(a2 + 256) = v18;
            *(_QWORD *)(v18 + 24) = v16;
            *(_DWORD *)(v18 + 96) = 1;
            return v19;
          }
          v19 = -12;
        }
        else
        {
          v19 = -13;
        }
        module_put(v11[1]);
      }
      else
      {
        v19 = -19;
      }
    }
    if ( v10 )
    {
      config_item_put(v10);
      return v19;
    }
    return v19;
  }
  raw_spin_unlock(v6 + 88);
  return 4294967274LL;
}
