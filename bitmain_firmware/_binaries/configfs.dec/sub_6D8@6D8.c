__int64 __fastcall sub_6D8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // x1
  __int64 v8; // x19
  __int64 v9; // x22
  __int64 v10; // x26
  int v11; // w0
  __int64 v12; // x20
  unsigned __int64 v13; // x0
  __int64 v14; // x0

  v7 = *(_QWORD *)(a1 + 24);
  v8 = *(_QWORD *)(a1 + 256);
  v9 = *(_QWORD *)(*(_QWORD *)(v7 + 144) + 56LL);
  v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 144LL) + 56LL);
  mutex_lock(v8 + 32);
  if ( *(_BYTE *)(v8 + 101) )
  {
    v12 = -26;
    goto LABEL_10;
  }
  v11 = *(_DWORD *)(v8 + 96);
  *(_BYTE *)(v8 + 100) = 1;
  if ( !v11 )
    goto LABEL_9;
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(v9 + 56))(v10, 0, 0);
  if ( v12 > 0 )
  {
    v13 = *(_QWORD *)(v9 + 48);
    if ( v13 && v13 < v12 )
    {
      v12 = -27;
      goto LABEL_10;
    }
    v14 = vmalloc(v12);
    *(_QWORD *)(v8 + 104) = v14;
    if ( !v14 )
    {
      v12 = -12;
      goto LABEL_10;
    }
    *(_DWORD *)(v8 + 112) = v12;
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(v9 + 56))(v10, v14, v12);
    if ( v12 < 0 )
    {
      vfree(*(_QWORD *)(v8 + 104));
      *(_QWORD *)(v8 + 104) = 0;
      *(_DWORD *)(v8 + 112) = 0;
      goto LABEL_10;
    }
    *(_DWORD *)(v8 + 96) = 0;
LABEL_9:
    v12 = simple_read_from_buffer(a2, a3, a4, *(_QWORD *)(v8 + 104), *(int *)(v8 + 112));
  }
LABEL_10:
  mutex_unlock(v8 + 32);
  return v12;
}
