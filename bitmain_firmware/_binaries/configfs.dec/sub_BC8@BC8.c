__int64 __fastcall sub_BC8(__int64 a1, unsigned __int64 a2, size_t a3, _QWORD *a4)
{
  __int64 v8; // x19
  char *v9; // x24
  unsigned __int64 v10; // x1
  __int64 v11; // x21
  __int64 v14; // x0
  __int64 v15; // x20
  int v16; // w0
  __int64 v20; // x0
  __int64 free_pages; // x0
  __int64 v22; // x0

  v8 = *(_QWORD *)(a1 + 256);
  mutex_lock(v8 + 32);
  v9 = *(char **)(v8 + 16);
  if ( !v9 )
  {
    free_pages = _get_free_pages(37748928, 0);
    *(_QWORD *)(v8 + 16) = free_pages;
    v9 = (char *)free_pages;
    if ( !free_pages )
    {
      v15 = -12;
      goto LABEL_16;
    }
  }
  v10 = *(_QWORD *)(_ReadStatusReg(SP_EL0) + 8);
  if ( a3 <= 0xFFF )
  {
    v11 = a3;
    if ( __CFADD__(a2, a3) || a2 + a3 > v10 )
      goto LABEL_11;
  }
  else
  {
    v11 = 4095;
    if ( a2 >= 0xFFFFFFFFFFFFF001LL || a2 + 4095 > v10 )
    {
      memset(v9, 0, 0xFFFu);
      v20 = *(_QWORD *)(v8 + 16);
      *(_DWORD *)(v8 + 96) = 1;
      v15 = -14;
      *(_BYTE *)(v20 + 4095) = 0;
      goto LABEL_16;
    }
  }
  a3 = _arch_copy_from_user(v9, a2, v11);
LABEL_11:
  if ( a3 )
  {
    memset(&v9[v11 - a3], 0, a3);
    v22 = *(_QWORD *)(v8 + 16);
    *(_DWORD *)(v8 + 96) = 1;
    *(_BYTE *)(v22 + v11) = 0;
    if ( (_DWORD)a3 )
    {
      v15 = -14;
      goto LABEL_16;
    }
  }
  else
  {
    v14 = *(_QWORD *)(v8 + 16);
    *(_DWORD *)(v8 + 96) = 1;
    *(_BYTE *)(v14 + v11) = 0;
  }
  v15 = 0;
  if ( (_DWORD)v11 )
  {
    v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 144LL)
                                                                        + 56LL)
                                                            + 32LL))(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL) + 144LL) + 56LL),
            *(_QWORD *)(v8 + 16),
            (int)v11);
    v15 = v16;
    if ( v16 > 0 )
      *a4 += v16;
  }
LABEL_16:
  mutex_unlock(v8 + 32);
  return v15;
}
